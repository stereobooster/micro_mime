require "micro_mime/version"

# Load the compiled module:
require "MicroMime"

module MicroMime
  def self.lookup_by_filename(filename)
    extension = File.extname(filename)
    if extension
      extension.sub!(".", "")
      extension.downcase!
      if extension.length > 0
        self.lookup_by_extension(extension)
      else
        nil
      end
    end
  end

  class Type
    BINARY_ENCODINGS = %w(base64 8bit)

    def [](idx)
      if idx == 0
        extension
      elsif idx == 1
        content_type
      elsif idx == 2
        encoding
      end
    end

    def binary?
      BINARY_ENCODINGS.include?(encoding)
    end
  end
end
