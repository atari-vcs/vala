/* htmlmarkupwriter.c generated by valac, the Vala compiler
 * generated from htmlmarkupwriter.vala, do not modify */

/* markupwriter.vala
 *
 * Copyright (C) 2008-2014 Florian Brosch, Didier Villevalois
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */


#include <glib.h>
#include <glib-object.h>
#include "valadoc.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct _Block7Data Block7Data;
#define _valadoc_markup_writer_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_markup_writer_unref (var), NULL)))
typedef struct _Block8Data Block8Data;
#define _g_free0(var) (var = (g_free (var), NULL))

struct _Block7Data {
	int _ref_count_;
	ValadocHtmlMarkupWriter* self;
	FILE* _stream;
};

struct _Block8Data {
	int _ref_count_;
	ValadocHtmlMarkupWriter* self;
	GString* _builder;
};


static gpointer valadoc_html_markup_writer_parent_class = NULL;

static Block7Data* block7_data_ref (Block7Data* _data7_);
static void block7_data_unref (void * _userdata_);
static void __lambda138_ (Block7Data* _data7_,
                   const gchar* str);
static void ___lambda138__valadoc_markup_writer_write_func (const gchar* text,
                                                     gpointer self);
static Block8Data* block8_data_ref (Block8Data* _data8_);
static void block8_data_unref (void * _userdata_);
static void __lambda139_ (Block8Data* _data8_,
                   const gchar* str);
static void ___lambda139__valadoc_markup_writer_write_func (const gchar* text,
                                                     gpointer self);
static gboolean valadoc_html_markup_writer_real_inline_element (ValadocMarkupWriter* base,
                                                         const gchar* name);
static gboolean valadoc_html_markup_writer_real_content_inline_element (ValadocMarkupWriter* base,
                                                                 const gchar* name);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);


static Block7Data*
block7_data_ref (Block7Data* _data7_)
{
	g_atomic_int_inc (&_data7_->_ref_count_);
	return _data7_;
}


static void
block7_data_unref (void * _userdata_)
{
	Block7Data* _data7_;
	_data7_ = (Block7Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data7_->_ref_count_)) {
		ValadocHtmlMarkupWriter* self;
		self = _data7_->self;
		_valadoc_markup_writer_unref0 (self);
		g_slice_free (Block7Data, _data7_);
	}
}


static void
__lambda138_ (Block7Data* _data7_,
              const gchar* str)
{
	ValadocHtmlMarkupWriter* self;
	FILE* _tmp0_;
	self = _data7_->self;
	g_return_if_fail (str != NULL);
	_tmp0_ = _data7_->_stream;
	fprintf (_tmp0_, "%s", str);
}


static void
___lambda138__valadoc_markup_writer_write_func (const gchar* text,
                                                gpointer self)
{
	__lambda138_ (self, text);
}


ValadocHtmlMarkupWriter*
valadoc_html_markup_writer_construct (GType object_type,
                                      FILE* stream,
                                      gboolean html5_declaration)
{
	ValadocHtmlMarkupWriter* self = NULL;
	Block7Data* _data7_;
	g_return_val_if_fail (stream != NULL, NULL);
	_data7_ = g_slice_new0 (Block7Data);
	_data7_->_ref_count_ = 1;
	_data7_->_stream = stream;
	self = (ValadocHtmlMarkupWriter*) valadoc_markup_writer_construct (object_type, ___lambda138__valadoc_markup_writer_write_func, block7_data_ref (_data7_), block7_data_unref, FALSE);
	_data7_->self = valadoc_markup_writer_ref (self);
	if (html5_declaration) {
		valadoc_markup_writer_do_write ((ValadocMarkupWriter*) self, "<!DOCTYPE html>");
	}
	block7_data_unref (_data7_);
	_data7_ = NULL;
	return self;
}


ValadocHtmlMarkupWriter*
valadoc_html_markup_writer_new (FILE* stream,
                                gboolean html5_declaration)
{
	return valadoc_html_markup_writer_construct (VALADOC_HTML_TYPE_MARKUP_WRITER, stream, html5_declaration);
}


static Block8Data*
block8_data_ref (Block8Data* _data8_)
{
	g_atomic_int_inc (&_data8_->_ref_count_);
	return _data8_;
}


static void
block8_data_unref (void * _userdata_)
{
	Block8Data* _data8_;
	_data8_ = (Block8Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data8_->_ref_count_)) {
		ValadocHtmlMarkupWriter* self;
		self = _data8_->self;
		_valadoc_markup_writer_unref0 (self);
		g_slice_free (Block8Data, _data8_);
	}
}


static void
__lambda139_ (Block8Data* _data8_,
              const gchar* str)
{
	ValadocHtmlMarkupWriter* self;
	GString* _tmp0_;
	self = _data8_->self;
	g_return_if_fail (str != NULL);
	_tmp0_ = _data8_->_builder;
	g_string_append (_tmp0_, str);
}


static void
___lambda139__valadoc_markup_writer_write_func (const gchar* text,
                                                gpointer self)
{
	__lambda139_ (self, text);
}


ValadocHtmlMarkupWriter*
valadoc_html_markup_writer_construct_builder (GType object_type,
                                              GString* builder,
                                              gboolean html5_declaration)
{
	ValadocHtmlMarkupWriter* self = NULL;
	Block8Data* _data8_;
	g_return_val_if_fail (builder != NULL, NULL);
	_data8_ = g_slice_new0 (Block8Data);
	_data8_->_ref_count_ = 1;
	_data8_->_builder = builder;
	self = (ValadocHtmlMarkupWriter*) valadoc_markup_writer_construct (object_type, ___lambda139__valadoc_markup_writer_write_func, block8_data_ref (_data8_), block8_data_unref, FALSE);
	_data8_->self = valadoc_markup_writer_ref (self);
	if (html5_declaration) {
		valadoc_markup_writer_do_write ((ValadocMarkupWriter*) self, "<!DOCTYPE html>");
	}
	block8_data_unref (_data8_);
	_data8_ = NULL;
	return self;
}


ValadocHtmlMarkupWriter*
valadoc_html_markup_writer_new_builder (GString* builder,
                                        gboolean html5_declaration)
{
	return valadoc_html_markup_writer_construct_builder (VALADOC_HTML_TYPE_MARKUP_WRITER, builder, html5_declaration);
}


ValadocHtmlMarkupWriter*
valadoc_html_markup_writer_add_usemap (ValadocHtmlMarkupWriter* self,
                                       ValadocChartsChart* chart)
{
	ValadocHtmlMarkupWriter* result = NULL;
	gchar* buf = NULL;
	gint _tmp0_ = 0;
	guint8* _tmp1_;
	const gchar* _tmp2_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (chart != NULL, NULL);
	_tmp1_ = valadoc_charts_chart_write_buffer (chart, "cmapx", &_tmp0_);
	buf = (gchar*) _tmp1_;
	_tmp2_ = buf;
	if (_tmp2_ != NULL) {
		const gchar* _tmp3_;
		valadoc_markup_writer_raw_text ((ValadocMarkupWriter*) self, "\n");
		_tmp3_ = buf;
		valadoc_markup_writer_raw_text ((ValadocMarkupWriter*) self, (const gchar*) _tmp3_);
	}
	result = self;
	_g_free0 (buf);
	return result;
}


ValadocHtmlMarkupWriter*
valadoc_html_markup_writer_link (ValadocHtmlMarkupWriter* self,
                                 const gchar* url,
                                 const gchar* label,
                                 const gchar* css_class)
{
	ValadocHtmlMarkupWriter* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (url != NULL, NULL);
	g_return_val_if_fail (label != NULL, NULL);
	if (css_class == NULL) {
		gchar* _tmp0_;
		gchar* _tmp1_;
		gchar** _tmp2_;
		gchar** _tmp3_;
		gint _tmp3__length1;
		_tmp0_ = g_strdup ("href");
		_tmp1_ = g_strdup (url);
		_tmp2_ = g_new0 (gchar*, 2 + 1);
		_tmp2_[0] = _tmp0_;
		_tmp2_[1] = _tmp1_;
		_tmp3_ = _tmp2_;
		_tmp3__length1 = 2;
		valadoc_markup_writer_start_tag ((ValadocMarkupWriter*) self, "a", _tmp3_, 2);
		_tmp3_ = (_vala_array_free (_tmp3_, _tmp3__length1, (GDestroyNotify) g_free), NULL);
	} else {
		gchar* _tmp4_;
		gchar* _tmp5_;
		gchar* _tmp6_;
		gchar* _tmp7_;
		gchar** _tmp8_;
		gchar** _tmp9_;
		gint _tmp9__length1;
		_tmp4_ = g_strdup ("href");
		_tmp5_ = g_strdup (url);
		_tmp6_ = g_strdup ("class");
		_tmp7_ = g_strdup (css_class);
		_tmp8_ = g_new0 (gchar*, 4 + 1);
		_tmp8_[0] = _tmp4_;
		_tmp8_[1] = _tmp5_;
		_tmp8_[2] = _tmp6_;
		_tmp8_[3] = _tmp7_;
		_tmp9_ = _tmp8_;
		_tmp9__length1 = 4;
		valadoc_markup_writer_start_tag ((ValadocMarkupWriter*) self, "a", _tmp9_, 4);
		_tmp9_ = (_vala_array_free (_tmp9_, _tmp9__length1, (GDestroyNotify) g_free), NULL);
	}
	valadoc_markup_writer_text ((ValadocMarkupWriter*) self, label);
	valadoc_markup_writer_end_tag ((ValadocMarkupWriter*) self, "a");
	result = self;
	return result;
}


ValadocHtmlMarkupWriter*
valadoc_html_markup_writer_image (ValadocHtmlMarkupWriter* self,
                                  const gchar* src,
                                  const gchar* caption,
                                  const gchar* css_class)
{
	ValadocHtmlMarkupWriter* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (src != NULL, NULL);
	if (css_class == NULL) {
		gchar* _tmp0_;
		gchar* _tmp1_;
		gchar* _tmp2_;
		gchar* _tmp3_;
		gchar** _tmp4_;
		gchar** _tmp5_;
		gint _tmp5__length1;
		_tmp0_ = g_strdup ("src");
		_tmp1_ = g_strdup (src);
		_tmp2_ = g_strdup ("alt");
		_tmp3_ = g_strdup (caption);
		_tmp4_ = g_new0 (gchar*, 4 + 1);
		_tmp4_[0] = _tmp0_;
		_tmp4_[1] = _tmp1_;
		_tmp4_[2] = _tmp2_;
		_tmp4_[3] = _tmp3_;
		_tmp5_ = _tmp4_;
		_tmp5__length1 = 4;
		valadoc_markup_writer_simple_tag ((ValadocMarkupWriter*) self, "img", _tmp5_, 4);
		_tmp5_ = (_vala_array_free (_tmp5_, _tmp5__length1, (GDestroyNotify) g_free), NULL);
	} else {
		gchar* _tmp6_;
		gchar* _tmp7_;
		gchar* _tmp8_;
		gchar* _tmp9_;
		gchar* _tmp10_;
		gchar* _tmp11_;
		gchar** _tmp12_;
		gchar** _tmp13_;
		gint _tmp13__length1;
		_tmp6_ = g_strdup ("src");
		_tmp7_ = g_strdup (src);
		_tmp8_ = g_strdup ("alt");
		_tmp9_ = g_strdup (caption);
		_tmp10_ = g_strdup ("class");
		_tmp11_ = g_strdup (css_class);
		_tmp12_ = g_new0 (gchar*, 6 + 1);
		_tmp12_[0] = _tmp6_;
		_tmp12_[1] = _tmp7_;
		_tmp12_[2] = _tmp8_;
		_tmp12_[3] = _tmp9_;
		_tmp12_[4] = _tmp10_;
		_tmp12_[5] = _tmp11_;
		_tmp13_ = _tmp12_;
		_tmp13__length1 = 6;
		valadoc_markup_writer_simple_tag ((ValadocMarkupWriter*) self, "img", _tmp13_, 6);
		_tmp13_ = (_vala_array_free (_tmp13_, _tmp13__length1, (GDestroyNotify) g_free), NULL);
	}
	result = self;
	return result;
}


ValadocHtmlMarkupWriter*
valadoc_html_markup_writer_stylesheet_link (ValadocHtmlMarkupWriter* self,
                                            const gchar* url)
{
	ValadocHtmlMarkupWriter* result = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar** _tmp6_;
	gchar** _tmp7_;
	gint _tmp7__length1;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (url != NULL, NULL);
	_tmp0_ = g_strdup ("href");
	_tmp1_ = g_strdup (url);
	_tmp2_ = g_strdup ("rel");
	_tmp3_ = g_strdup ("stylesheet");
	_tmp4_ = g_strdup ("type");
	_tmp5_ = g_strdup ("text/css");
	_tmp6_ = g_new0 (gchar*, 6 + 1);
	_tmp6_[0] = _tmp0_;
	_tmp6_[1] = _tmp1_;
	_tmp6_[2] = _tmp2_;
	_tmp6_[3] = _tmp3_;
	_tmp6_[4] = _tmp4_;
	_tmp6_[5] = _tmp5_;
	_tmp7_ = _tmp6_;
	_tmp7__length1 = 6;
	valadoc_markup_writer_simple_tag ((ValadocMarkupWriter*) self, "link", _tmp7_, 6);
	_tmp7_ = (_vala_array_free (_tmp7_, _tmp7__length1, (GDestroyNotify) g_free), NULL);
	result = self;
	return result;
}


ValadocHtmlMarkupWriter*
valadoc_html_markup_writer_javascript_link (ValadocHtmlMarkupWriter* self,
                                            const gchar* url)
{
	ValadocHtmlMarkupWriter* result = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar** _tmp4_;
	gchar** _tmp5_;
	gint _tmp5__length1;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (url != NULL, NULL);
	_tmp0_ = g_strdup ("src");
	_tmp1_ = g_strdup (url);
	_tmp2_ = g_strdup ("type");
	_tmp3_ = g_strdup ("text/javascript");
	_tmp4_ = g_new0 (gchar*, 4 + 1);
	_tmp4_[0] = _tmp0_;
	_tmp4_[1] = _tmp1_;
	_tmp4_[2] = _tmp2_;
	_tmp4_[3] = _tmp3_;
	_tmp5_ = _tmp4_;
	_tmp5__length1 = 4;
	valadoc_markup_writer_start_tag ((ValadocMarkupWriter*) self, "script", _tmp5_, 4);
	_tmp5_ = (_vala_array_free (_tmp5_, _tmp5__length1, (GDestroyNotify) g_free), NULL);
	valadoc_markup_writer_end_tag ((ValadocMarkupWriter*) self, "script");
	result = self;
	return result;
}


static gboolean
valadoc_html_markup_writer_real_inline_element (ValadocMarkupWriter* base,
                                                const gchar* name)
{
	ValadocHtmlMarkupWriter * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	gboolean _tmp3_ = FALSE;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
	gboolean _tmp7_ = FALSE;
	gboolean _tmp8_ = FALSE;
	gboolean _tmp9_ = FALSE;
	gboolean _tmp10_ = FALSE;
	gboolean _tmp11_ = FALSE;
	gboolean _tmp12_ = FALSE;
	gboolean _tmp13_ = FALSE;
	gboolean _tmp14_ = FALSE;
	gboolean _tmp15_ = FALSE;
	gboolean _tmp16_ = FALSE;
	gboolean _tmp17_ = FALSE;
	gboolean _tmp18_ = FALSE;
	gboolean _tmp19_ = FALSE;
	self = (ValadocHtmlMarkupWriter*) base;
	g_return_val_if_fail (name != NULL, FALSE);
	if (g_strcmp0 (name, "html") != 0) {
		_tmp19_ = g_strcmp0 (name, "head") != 0;
	} else {
		_tmp19_ = FALSE;
	}
	if (_tmp19_) {
		_tmp18_ = g_strcmp0 (name, "title") != 0;
	} else {
		_tmp18_ = FALSE;
	}
	if (_tmp18_) {
		_tmp17_ = g_strcmp0 (name, "meta") != 0;
	} else {
		_tmp17_ = FALSE;
	}
	if (_tmp17_) {
		_tmp16_ = g_strcmp0 (name, "link") != 0;
	} else {
		_tmp16_ = FALSE;
	}
	if (_tmp16_) {
		_tmp15_ = g_strcmp0 (name, "body") != 0;
	} else {
		_tmp15_ = FALSE;
	}
	if (_tmp15_) {
		_tmp14_ = g_strcmp0 (name, "div") != 0;
	} else {
		_tmp14_ = FALSE;
	}
	if (_tmp14_) {
		_tmp13_ = g_strcmp0 (name, "p") != 0;
	} else {
		_tmp13_ = FALSE;
	}
	if (_tmp13_) {
		_tmp12_ = g_strcmp0 (name, "table") != 0;
	} else {
		_tmp12_ = FALSE;
	}
	if (_tmp12_) {
		_tmp11_ = g_strcmp0 (name, "tr") != 0;
	} else {
		_tmp11_ = FALSE;
	}
	if (_tmp11_) {
		_tmp10_ = g_strcmp0 (name, "td") != 0;
	} else {
		_tmp10_ = FALSE;
	}
	if (_tmp10_) {
		_tmp9_ = g_strcmp0 (name, "ul") != 0;
	} else {
		_tmp9_ = FALSE;
	}
	if (_tmp9_) {
		_tmp8_ = g_strcmp0 (name, "ol") != 0;
	} else {
		_tmp8_ = FALSE;
	}
	if (_tmp8_) {
		_tmp7_ = g_strcmp0 (name, "li") != 0;
	} else {
		_tmp7_ = FALSE;
	}
	if (_tmp7_) {
		_tmp6_ = g_strcmp0 (name, "h1") != 0;
	} else {
		_tmp6_ = FALSE;
	}
	if (_tmp6_) {
		_tmp5_ = g_strcmp0 (name, "h2") != 0;
	} else {
		_tmp5_ = FALSE;
	}
	if (_tmp5_) {
		_tmp4_ = g_strcmp0 (name, "h3") != 0;
	} else {
		_tmp4_ = FALSE;
	}
	if (_tmp4_) {
		_tmp3_ = g_strcmp0 (name, "h4") != 0;
	} else {
		_tmp3_ = FALSE;
	}
	if (_tmp3_) {
		_tmp2_ = g_strcmp0 (name, "h5") != 0;
	} else {
		_tmp2_ = FALSE;
	}
	if (_tmp2_) {
		_tmp1_ = g_strcmp0 (name, "hr") != 0;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		_tmp0_ = g_strcmp0 (name, "img") != 0;
	} else {
		_tmp0_ = FALSE;
	}
	result = _tmp0_;
	return result;
}


static gboolean
valadoc_html_markup_writer_real_content_inline_element (ValadocMarkupWriter* base,
                                                        const gchar* name)
{
	ValadocHtmlMarkupWriter * self;
	gboolean result = FALSE;
	gboolean _tmp0_ = FALSE;
	gboolean _tmp1_ = FALSE;
	gboolean _tmp2_ = FALSE;
	gboolean _tmp3_ = FALSE;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
	gboolean _tmp7_ = FALSE;
	gboolean _tmp8_ = FALSE;
	gboolean _tmp9_ = FALSE;
	gboolean _tmp10_ = FALSE;
	gboolean _tmp11_ = FALSE;
	gboolean _tmp12_ = FALSE;
	gboolean _tmp13_ = FALSE;
	gboolean _tmp14_ = FALSE;
	self = (ValadocHtmlMarkupWriter*) base;
	g_return_val_if_fail (name != NULL, FALSE);
	if (g_strcmp0 (name, "title") == 0) {
		_tmp14_ = TRUE;
	} else {
		_tmp14_ = g_strcmp0 (name, "meta") == 0;
	}
	if (_tmp14_) {
		_tmp13_ = TRUE;
	} else {
		_tmp13_ = g_strcmp0 (name, "p") == 0;
	}
	if (_tmp13_) {
		_tmp12_ = TRUE;
	} else {
		_tmp12_ = g_strcmp0 (name, "a") == 0;
	}
	if (_tmp12_) {
		_tmp11_ = TRUE;
	} else {
		_tmp11_ = g_strcmp0 (name, "h1") == 0;
	}
	if (_tmp11_) {
		_tmp10_ = TRUE;
	} else {
		_tmp10_ = g_strcmp0 (name, "h2") == 0;
	}
	if (_tmp10_) {
		_tmp9_ = TRUE;
	} else {
		_tmp9_ = g_strcmp0 (name, "h3") == 0;
	}
	if (_tmp9_) {
		_tmp8_ = TRUE;
	} else {
		_tmp8_ = g_strcmp0 (name, "h4") == 0;
	}
	if (_tmp8_) {
		_tmp7_ = TRUE;
	} else {
		_tmp7_ = g_strcmp0 (name, "h5") == 0;
	}
	if (_tmp7_) {
		_tmp6_ = TRUE;
	} else {
		_tmp6_ = g_strcmp0 (name, "li") == 0;
	}
	if (_tmp6_) {
		_tmp5_ = TRUE;
	} else {
		_tmp5_ = g_strcmp0 (name, "span") == 0;
	}
	if (_tmp5_) {
		_tmp4_ = TRUE;
	} else {
		_tmp4_ = g_strcmp0 (name, "code") == 0;
	}
	if (_tmp4_) {
		_tmp3_ = TRUE;
	} else {
		_tmp3_ = g_strcmp0 (name, "b") == 0;
	}
	if (_tmp3_) {
		_tmp2_ = TRUE;
	} else {
		_tmp2_ = g_strcmp0 (name, "i") == 0;
	}
	if (_tmp2_) {
		_tmp1_ = TRUE;
	} else {
		_tmp1_ = g_strcmp0 (name, "u") == 0;
	}
	if (_tmp1_) {
		_tmp0_ = TRUE;
	} else {
		_tmp0_ = g_strcmp0 (name, "stoke") == 0;
	}
	result = _tmp0_;
	return result;
}


static void
valadoc_html_markup_writer_class_init (ValadocHtmlMarkupWriterClass * klass)
{
	valadoc_html_markup_writer_parent_class = g_type_class_peek_parent (klass);
	((ValadocMarkupWriterClass *) klass)->inline_element = (gboolean (*) (ValadocMarkupWriter*, const gchar*)) valadoc_html_markup_writer_real_inline_element;
	((ValadocMarkupWriterClass *) klass)->content_inline_element = (gboolean (*) (ValadocMarkupWriter*, const gchar*)) valadoc_html_markup_writer_real_content_inline_element;
}


static void
valadoc_html_markup_writer_instance_init (ValadocHtmlMarkupWriter * self)
{
}


GType
valadoc_html_markup_writer_get_type (void)
{
	static volatile gsize valadoc_html_markup_writer_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_html_markup_writer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocHtmlMarkupWriterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_html_markup_writer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocHtmlMarkupWriter), 0, (GInstanceInitFunc) valadoc_html_markup_writer_instance_init, NULL };
		GType valadoc_html_markup_writer_type_id;
		valadoc_html_markup_writer_type_id = g_type_register_static (VALADOC_TYPE_MARKUP_WRITER, "ValadocHtmlMarkupWriter", &g_define_type_info, 0);
		g_once_init_leave (&valadoc_html_markup_writer_type_id__volatile, valadoc_html_markup_writer_type_id);
	}
	return valadoc_html_markup_writer_type_id__volatile;
}


static void
_vala_array_destroy (gpointer array,
                     gint array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		int i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}


static void
_vala_array_free (gpointer array,
                  gint array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}



