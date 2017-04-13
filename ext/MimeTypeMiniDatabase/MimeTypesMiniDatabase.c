// Copyright, 2016, by Samuel G. D. Williams. <http://www.codeotaku.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

// Include the Ruby headers and goodies
#include "ruby.h"

#include "Extensions.h"
#include "MimeTypes.h"

VALUE MimeTypesMiniDatabase = Qnil;

void Init_MimeTypesMiniDatabase();

static VALUE method_content_type_for_extension(VALUE self, VALUE extension) {
	long len = RSTRING_LEN(extension);
	char* str = RSTRING_PTR(extension);

	const struct ContentTypeExtension * result = lookup_content_type_by_extension(str, (unsigned)len);

	if (result) {
		return rb_str_new_cstr(result->content_type);
	} else {
		return Qnil;
	}
}

VALUE MimeType = Qnil;

static VALUE method_mime_type_for_content_type(VALUE self, VALUE content_type) {
	long len = RSTRING_LEN(content_type);
	char* str = RSTRING_PTR(content_type);

	const struct MimeType * result = lookup_mime_type_by_content_type(str, (unsigned)len);

	if (result) {
		VALUE args[3] = {
			rb_str_new_cstr(result->content_type),
			rb_str_new_cstr(result->encoding),
			Qnil,
		};

		if (result->extensions) {
			args[2] = rb_str_split(
				rb_str_new_cstr(result->extensions),
				" "
			);
		}

		return rb_class_new_instance(3, args, MimeType);
	} else {
		return Qnil;
	}
}

static ID id_content_type, id_encoding, id_extensions;

static VALUE MimeType_initialize(VALUE self, VALUE content_type, VALUE encoding, VALUE extensions) {
	rb_ivar_set(self, id_content_type, content_type);
	rb_ivar_set(self, id_encoding, encoding);
	rb_ivar_set(self, id_extensions, extensions);

	return self;
}

void Init_MimeTypesMiniDatabase() {
	id_content_type = rb_intern("@content_type");
	id_encoding = rb_intern("@encoding");
	id_extensions = rb_intern("@extensions");

	VALUE Mime = rb_define_module("Mime");

	MimeType = rb_define_class_under(Mime, "Type", rb_cObject);
	rb_define_attr(MimeType, "content_type", 1, 0);
	rb_define_attr(MimeType, "encoding", 1, 0);
	rb_define_attr(MimeType, "extensions", 1, 0);
	rb_define_method(MimeType, "initialize", MimeType_initialize, 3);

	VALUE MimeTypes = rb_define_module_under(Mime, "Types");

	VALUE MimeTypesMini = rb_define_module_under(MimeTypes, "Mini");

	MimeTypesMiniDatabase = rb_define_module_under(MimeTypesMini, "Database");

	rb_define_module_function(MimeTypesMiniDatabase, "content_type_for_extension", method_content_type_for_extension, 1);
	rb_define_module_function(MimeTypesMiniDatabase, "mime_type_for_content_type", method_mime_type_for_content_type, 1);
}
