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

#include "ExtMime.h"
#include "ContentTypeMime.h"

void Init_MicroMime();

VALUE MimeType = Qnil;

static VALUE lookup_by_extension(VALUE self, VALUE extension) {
	long len = RSTRING_LEN(extension);
	char* str = RSTRING_PTR(extension);

	const struct ExtMime * result = lookup_by_extension_internal(str, (unsigned)len);

	if (result) {
		VALUE args[3] = {
			rb_str_new_cstr(result->content_type),
			rb_str_new_cstr(result->encoding),
			rb_str_new_cstr(result->extension)
		};

		return rb_class_new_instance(3, args, MimeType);
	} else {
		return Qnil;
	}
}

static VALUE lookup_by_content_type(VALUE self, VALUE content_type) {
	long len = RSTRING_LEN(content_type);
	char* str = RSTRING_PTR(content_type);

	const struct ContentTypeMime * result = lookup_by_content_type_internal(str, (unsigned)len);

	if (result) {
		VALUE args[3] = {
			rb_str_new_cstr(result->content_type),
			rb_str_new_cstr(result->encoding),
			rb_str_new_cstr(result->extension)
		};

		return rb_class_new_instance(3, args, MimeType);
	} else {
		return Qnil;
	}
}

static ID id_content_type, id_encoding, id_extension;

static VALUE MimeType_initialize(VALUE self, VALUE content_type, VALUE encoding, VALUE extension) {
	rb_ivar_set(self, id_content_type, content_type);
	rb_ivar_set(self, id_encoding, encoding);
	rb_ivar_set(self, id_extension, extension);

	return self;
}

void Init_MicroMime() {
	id_content_type = rb_intern("@content_type");
	id_encoding = rb_intern("@encoding");
	id_extension = rb_intern("@extension");

	VALUE MicroMime = rb_define_module("MicroMime");

	MimeType = rb_define_class_under(MicroMime, "Type", rb_cObject);
	rb_define_attr(MimeType, "content_type", 1, 0);
	rb_define_attr(MimeType, "encoding", 1, 0);
	rb_define_attr(MimeType, "extension", 1, 0);
	rb_define_method(MimeType, "initialize", MimeType_initialize, 3);

	rb_define_module_function(MicroMime, "lookup_by_extension", lookup_by_extension, 1);
	rb_define_module_function(MicroMime, "lookup_by_content_type", lookup_by_content_type, 1);
}
