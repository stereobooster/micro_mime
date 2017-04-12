require "bundler/gem_tasks"
require "rake/extensiontask"
require "rake/testtask"

spec = Gem::Specification.load("micro_mime.gemspec")
Rake::ExtensionTask.new("MicroMime", spec)

Rake::TestTask.new(:test) do |t|
  t.libs << "test"
  t.libs << "lib"
  t.test_files = FileList['test/**/*_test.rb']
end

Rake::Task[:test].prerequisites << :compile

task :default => :test

desc "generate mime type header files"
task :rebuild_db do
  puts "Generating mime type header files"
  require 'mime/types'
  index = {}

  MIME::Types.each do |type|
    type.extensions.each {|ext| (index[ext.downcase] ||= []) << type}
  end

  index.each do |k,list|
    list.sort!{|a,b| a.priority_compare(b)}
  end

  buffer = []

  index.each do |ext, list|
    mime_type = list.detect { |t| !t.obsolete? }
    mime_type ||= list.detect(&:registered)
    mime_type ||= list.first
    buffer << [ext.dup, mime_type.content_type.dup, mime_type.encoding.dup]
  end

  buffer.sort!{|a,b| a[0] <=> b[0]}

  file_name = "ExtMime"
  gperf_file_name = "ext/MicroMime/#{file_name}.gperf"
  template_file_name = "ext/MicroMime/#{file_name}.template"
  header_file_name = "ext/MicroMime/#{file_name}.h"
  %x(rm gperf_file_name)
  %x(cp #{template_file_name} #{gperf_file_name})
  buffer.sort!{|a,b| [a[1], a[0]] <=> [b[1], b[0]]}
  File.open(gperf_file_name, "a") do |f|
    buffer.each do |row|
      f.write "\n#{row[0]}, #{row[1].inspect}, #{row[2].inspect}"
    end
  end
  puts "#{buffer.count} rows written to #{gperf_file_name}"
  %x(gperf -CD -t #{gperf_file_name} --output-file #{header_file_name})

  file_name = "ContentTypeMime"
  gperf_file_name = "ext/MicroMime/#{file_name}.gperf"
  template_file_name = "ext/MicroMime/#{file_name}.template"
  header_file_name = "ext/MicroMime/#{file_name}.h"
  %x(rm gperf_file_name)
  %x(cp #{template_file_name} #{gperf_file_name})
  buffer.sort!{|a,b| [a[1], a[0]] <=> [b[1], b[0]]}
  File.open(gperf_file_name, "a") do |f|
    last = nil
    count = 0
    buffer.each do |row|
      unless last == row[1]
        f.write "\n#{row[1]}, #{row[0].inspect}, #{row[2].inspect}"
        count += 1
      end
      last = row[1]
    end
    puts "#{count} rows written to #{gperf_file_name}"
  end
  %x(gperf -CD -t #{gperf_file_name} --output-file #{header_file_name})
end
