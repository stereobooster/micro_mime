require 'test_helper'

begin
  require 'mime/types/columnar'
rescue LoadError
end

class MicroMimeTest < Minitest::Test
  def test_that_it_has_a_version_number
    refute_nil ::MicroMime::VERSION
  end


  def test_content_type
    # keep lotus alive cause these files are EVERYWHERE
    assert_equal "application/vnd.lotus-1-2-3", MicroMime.lookup_by_filename("a.123").content_type
    assert_equal "application/x-compressed", MicroMime.lookup_by_filename("a.Z").content_type
    assert_equal "application/vnd.groove-tool-message", MicroMime.lookup_by_filename("a.gtm").content_type
    assert_equal "application/vnd.HandHeld-Entertainment+xml", MicroMime.lookup_by_filename("a.zmm").content_type
    assert_equal "text/csv", MicroMime.lookup_by_filename("x.csv").content_type
    assert_equal "application/x-msaccess", MicroMime.lookup_by_filename("x.mda").content_type

    assert_nil MicroMime.lookup_by_filename("a.frog")
  end

  def test_binary
    # note this is not strictly correct but .Z is the only
    # upper case extension, being correct here seems overkill
    assert MicroMime.lookup_by_filename("a.z").binary?
    assert MicroMime.lookup_by_filename("a.Z").binary?
    refute MicroMime.lookup_by_filename("a.txt").binary?
    assert_nil MicroMime.lookup_by_filename("a.frog")
  end

  def test_binary_content_type
    assert MicroMime.lookup_by_content_type("application/x-compressed").binary?
    assert_nil MicroMime.lookup_by_content_type("something-fake")
    refute MicroMime.lookup_by_content_type("text/plain").binary?
  end

  if defined? MIME::Types
    def test_full_parity_with_mime_types
      exts = Set.new
      MIME::Types.each do |type|
        type.extensions.each{|ext| exts << ext}
      end

      exts.each do |ext|
        types = MIME::Types.type_for("a.#{ext}")

        type = types.detect { |t| !t.obsolete? }
        type ||= types.detect(&:registered)
        type ||= types.first

        # if type.content_type != MicroMime.lookup_by_filename("a.#{ext}").content_type
        #   puts "#{ext} Expected #{type.content_type} Got #{MicroMime.lookup_by_filename("a.#{ext}").content_type}"
        # end

        assert_equal type.content_type, MicroMime.lookup_by_filename("a.#{ext}").content_type
      end
    end
  end
end