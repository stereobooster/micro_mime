# coding: utf-8
# frozen_string_literal: true
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'micro_mime/version'

Gem::Specification.new do |spec|
  spec.name          = "micro_mime"
  spec.version       = MicroMime::VERSION
  spec.authors       = ["Sam Saffron", "Samuel Williams", "stereobooster"]
  spec.email         = ["sam.saffron@gmail.com", "samuel.williams@oriontransfer.co.nz", "stereobooster@gmail.com"]

  spec.summary       = %q{A lightweight mime type lookup toy}
  spec.description   = %q{A lightweight mime type lookup toy}
  spec.homepage      = "https://github.com/stereobooster/micro_mime"
  spec.license       = "MIT"

  spec.files         = `git ls-files -z`.split("\x0").reject do |f|
    f.match(%r{^(test|spec|features)/})
  end
  spec.bindir        = "exe"
  spec.executables   = spec.files.grep(%r{^exe/}) { |f| File.basename(f) }
  spec.require_paths = ["lib"]
  spec.extensions = "ext/MicroMime/extconf.rb"

  spec.add_development_dependency "bundler", "~> 1.13"
  spec.add_development_dependency "rake", "~> 10.0"
  spec.add_development_dependency "rake-compiler"
  spec.add_development_dependency "minitest", "~> 5.0"
end
