/* importerhelper.c generated by valac, the Vala compiler
 * generated from importerhelper.vala, do not modify */

/* importhelper.vala
 *
 * Copyright (C) 2014 Florian Brosch
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
 *  Florian Brosch <flo.brosch@gmail.com>
 */


#include <glib.h>
#include <glib-object.h>
#include "valadoc.h"
#include <stdlib.h>
#include <string.h>
#include <valagee.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_iterator_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterator_unref (var), NULL)))



G_GNUC_INTERNAL gchar* valadoc_importer_helper_resolve_parameter_ctype (ValadocApiTree* tree,
                                                        ValadocApiNode* element,
                                                        const gchar* parameter_name,
                                                        gchar* * param_name,
                                                        gchar* * param_array_name,
                                                        gboolean* is_return_type_len);
G_GNUC_INTERNAL gchar** valadoc_importer_helper_split_type_name (const gchar* id,
                                                 int* result_length1);
G_GNUC_INTERNAL const gchar* valadoc_api_formal_parameter_get_implicit_array_length_cparameter_name (ValadocApiFormalParameter* self);
G_GNUC_INTERNAL const gchar* valadoc_api_callable_get_implicit_array_length_cparameter_name (ValadocApiCallable* self);
G_GNUC_INTERNAL void valadoc_importer_helper_extract_short_desc (ValadocContentComment* comment,
                                                 ValadocContentContentFactory* factory);
G_GNUC_INTERNAL ValadocContentParagraph* valadoc_importer_helper_split_paragraph (ValadocContentParagraph* p,
                                                                  ValadocContentContentFactory* factory);
G_GNUC_INTERNAL ValadocContentText* valadoc_importer_helper_split_text (ValadocContentText* text,
                                                        ValadocContentContentFactory* factory);
G_GNUC_INTERNAL ValadocContentRun* valadoc_importer_helper_split_run (ValadocContentRun* run,
                                                      ValadocContentContentFactory* factory);
G_GNUC_INTERNAL ValadocContentInline* valadoc_importer_helper_split_inline (ValadocContentInline* item,
                                                            ValadocContentContentFactory* factory);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


G_GNUC_INTERNAL gchar*
valadoc_importer_helper_resolve_parameter_ctype (ValadocApiTree* tree,
                                                 ValadocApiNode* element,
                                                 const gchar* parameter_name,
                                                 gchar* * param_name,
                                                 gchar* * param_array_name,
                                                 gboolean* is_return_type_len)
{
	gchar* _vala_param_name = NULL;
	gchar* _vala_param_array_name = NULL;
	gboolean _vala_is_return_type_len = FALSE;
	gchar* result = NULL;
	gchar** parts = NULL;
	gint _tmp0_ = 0;
	gchar** _tmp1_;
	gint parts_length1;
	gint _parts_size_;
	ValadocApiFormalParameter* param = NULL;
	gboolean _tmp28_ = FALSE;
	gchar** _tmp33_;
	gint _tmp33__length1;
	ValadocApiItem* inner = NULL;
	gboolean _tmp35_ = FALSE;
	const gchar* _tmp36_;
	ValadocApiItem* _tmp60_;
	gchar* cname = NULL;
	ValadocApiItem* _tmp62_;
	gchar** _tmp74_;
	gint _tmp74__length1;
	gchar* _tmp75_;
	const gchar* _tmp76_;
	gchar* _tmp77_;
	gchar* _tmp78_;
	gchar** _tmp79_;
	gint _tmp79__length1;
	const gchar* _tmp80_;
	gchar* _tmp81_;
	gchar* _tmp82_;
	gchar** _tmp83_;
	gint _tmp83__length1;
	const gchar* _tmp84_;
	gchar* _tmp85_;
	gchar* _tmp86_;
	g_return_val_if_fail (tree != NULL, NULL);
	g_return_val_if_fail (element != NULL, NULL);
	g_return_val_if_fail (parameter_name != NULL, NULL);
	_tmp1_ = valadoc_importer_helper_split_type_name (parameter_name, &_tmp0_);
	parts = _tmp1_;
	parts_length1 = _tmp0_;
	_parts_size_ = parts_length1;
	_vala_is_return_type_len = FALSE;
	_g_free0 (_vala_param_array_name);
	_vala_param_array_name = NULL;
	param = NULL;
	{
		ValaList* _node_list = NULL;
		ValaList* _tmp2_;
		gint _node_size = 0;
		ValaList* _tmp3_;
		gint _tmp4_;
		gint _tmp5_;
		gint _node_index = 0;
		_tmp2_ = valadoc_api_node_get_children_by_type (element, VALADOC_API_NODE_TYPE_FORMAL_PARAMETER, FALSE);
		_node_list = _tmp2_;
		_tmp3_ = _node_list;
		_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
		_tmp5_ = _tmp4_;
		_node_size = _tmp5_;
		_node_index = -1;
		while (TRUE) {
			gint _tmp6_;
			gint _tmp7_;
			gint _tmp8_;
			ValadocApiNode* node = NULL;
			ValaList* _tmp9_;
			gint _tmp10_;
			gpointer _tmp11_;
			ValadocApiNode* _tmp12_;
			const gchar* _tmp13_;
			const gchar* _tmp14_;
			gchar** _tmp15_;
			gint _tmp15__length1;
			const gchar* _tmp16_;
			ValadocApiNode* _tmp19_;
			const gchar* _tmp20_;
			const gchar* _tmp21_;
			gchar** _tmp22_;
			gint _tmp22__length1;
			const gchar* _tmp23_;
			_tmp6_ = _node_index;
			_node_index = _tmp6_ + 1;
			_tmp7_ = _node_index;
			_tmp8_ = _node_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _node_list;
			_tmp10_ = _node_index;
			_tmp11_ = vala_list_get (_tmp9_, _tmp10_);
			node = (ValadocApiNode*) _tmp11_;
			_tmp12_ = node;
			_tmp13_ = valadoc_api_node_get_name (_tmp12_);
			_tmp14_ = _tmp13_;
			_tmp15_ = parts;
			_tmp15__length1 = parts_length1;
			_tmp16_ = _tmp15_[0];
			if (g_strcmp0 (_tmp14_, _tmp16_) == 0) {
				ValadocApiNode* _tmp17_;
				ValadocApiFormalParameter* _tmp18_;
				_tmp17_ = node;
				_tmp18_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp17_, VALADOC_API_TYPE_FORMAL_PARAMETER) ? ((ValadocApiFormalParameter*) _tmp17_) : NULL);
				_g_object_unref0 (param);
				param = _tmp18_;
				_g_object_unref0 (node);
				break;
			}
			_tmp19_ = node;
			_tmp20_ = valadoc_api_formal_parameter_get_implicit_array_length_cparameter_name (G_TYPE_CHECK_INSTANCE_CAST (_tmp19_, VALADOC_API_TYPE_FORMAL_PARAMETER, ValadocApiFormalParameter));
			_tmp21_ = _tmp20_;
			_tmp22_ = parts;
			_tmp22__length1 = parts_length1;
			_tmp23_ = _tmp22_[0];
			if (g_strcmp0 (_tmp21_, _tmp23_) == 0) {
				ValadocApiNode* _tmp24_;
				const gchar* _tmp25_;
				const gchar* _tmp26_;
				gchar* _tmp27_;
				_tmp24_ = node;
				_tmp25_ = valadoc_api_node_get_name ((ValadocApiNode*) G_TYPE_CHECK_INSTANCE_CAST (_tmp24_, VALADOC_API_TYPE_FORMAL_PARAMETER, ValadocApiFormalParameter));
				_tmp26_ = _tmp25_;
				_tmp27_ = g_strdup (_tmp26_);
				_g_free0 (_vala_param_array_name);
				_vala_param_array_name = _tmp27_;
				_g_object_unref0 (node);
				break;
			}
			_g_object_unref0 (node);
		}
		_vala_iterable_unref0 (_node_list);
	}
	if (G_TYPE_CHECK_INSTANCE_TYPE (element, VALADOC_API_TYPE_CALLABLE)) {
		const gchar* _tmp29_;
		const gchar* _tmp30_;
		gchar** _tmp31_;
		gint _tmp31__length1;
		const gchar* _tmp32_;
		_tmp29_ = valadoc_api_callable_get_implicit_array_length_cparameter_name (G_TYPE_CHECK_INSTANCE_CAST (element, VALADOC_API_TYPE_CALLABLE, ValadocApiCallable));
		_tmp30_ = _tmp29_;
		_tmp31_ = parts;
		_tmp31__length1 = parts_length1;
		_tmp32_ = _tmp31_[0];
		_tmp28_ = g_strcmp0 (_tmp30_, _tmp32_) == 0;
	} else {
		_tmp28_ = FALSE;
	}
	if (_tmp28_) {
		_vala_is_return_type_len = TRUE;
	}
	_tmp33_ = parts;
	_tmp33__length1 = parts_length1;
	if (_tmp33__length1 == 1) {
		gchar* _tmp34_;
		_tmp34_ = g_strdup (parameter_name);
		_g_free0 (_vala_param_name);
		_vala_param_name = _tmp34_;
		result = NULL;
		_g_object_unref0 (param);
		parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
		if (param_name) {
			*param_name = _vala_param_name;
		} else {
			_g_free0 (_vala_param_name);
		}
		if (param_array_name) {
			*param_array_name = _vala_param_array_name;
		} else {
			_g_free0 (_vala_param_array_name);
		}
		if (is_return_type_len) {
			*is_return_type_len = _vala_is_return_type_len;
		}
		return result;
	}
	inner = NULL;
	_tmp36_ = _vala_param_array_name;
	if (_tmp36_ != NULL) {
		_tmp35_ = TRUE;
	} else {
		gboolean _tmp37_;
		_tmp37_ = _vala_is_return_type_len;
		_tmp35_ = _tmp37_;
	}
	if (_tmp35_) {
		ValadocApiNode* _tmp38_;
		_tmp38_ = valadoc_api_tree_search_symbol_str (tree, NULL, "int");
		_g_object_unref0 (inner);
		inner = (ValadocApiItem*) _tmp38_;
	} else {
		ValadocApiFormalParameter* _tmp39_;
		_tmp39_ = param;
		if (_tmp39_ != NULL) {
			ValadocApiFormalParameter* _tmp40_;
			ValadocApiTypeReference* _tmp41_;
			ValadocApiTypeReference* _tmp42_;
			ValadocApiItem* _tmp43_;
			_tmp40_ = param;
			_tmp41_ = valadoc_api_formal_parameter_get_parameter_type (_tmp40_);
			_tmp42_ = _tmp41_;
			_tmp43_ = _g_object_ref0 ((ValadocApiItem*) _tmp42_);
			_g_object_unref0 (inner);
			inner = _tmp43_;
		}
	}
	while (TRUE) {
		ValadocApiItem* _tmp44_;
		ValadocApiItem* _tmp45_;
		_tmp44_ = inner;
		if (!(_tmp44_ != NULL)) {
			break;
		}
		_tmp45_ = inner;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp45_, VALADOC_API_TYPE_TYPEREFERENCE)) {
			ValadocApiItem* _tmp46_;
			ValadocApiItem* _tmp47_;
			ValadocApiItem* _tmp48_;
			ValadocApiItem* _tmp49_;
			_tmp46_ = inner;
			_tmp47_ = valadoc_api_typereference_get_data_type (G_TYPE_CHECK_INSTANCE_CAST (_tmp46_, VALADOC_API_TYPE_TYPEREFERENCE, ValadocApiTypeReference));
			_tmp48_ = _tmp47_;
			_tmp49_ = _g_object_ref0 (_tmp48_);
			_g_object_unref0 (inner);
			inner = _tmp49_;
		} else {
			ValadocApiItem* _tmp50_;
			_tmp50_ = inner;
			if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp50_, VALADOC_API_TYPE_POINTER)) {
				ValadocApiItem* _tmp51_;
				ValadocApiItem* _tmp52_;
				ValadocApiItem* _tmp53_;
				ValadocApiItem* _tmp54_;
				_tmp51_ = inner;
				_tmp52_ = valadoc_api_pointer_get_data_type (G_TYPE_CHECK_INSTANCE_CAST (_tmp51_, VALADOC_API_TYPE_POINTER, ValadocApiPointer));
				_tmp53_ = _tmp52_;
				_tmp54_ = _g_object_ref0 (_tmp53_);
				_g_object_unref0 (inner);
				inner = _tmp54_;
			} else {
				ValadocApiItem* _tmp55_;
				_tmp55_ = inner;
				if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp55_, VALADOC_API_TYPE_ARRAY)) {
					ValadocApiItem* _tmp56_;
					ValadocApiItem* _tmp57_;
					ValadocApiItem* _tmp58_;
					ValadocApiItem* _tmp59_;
					_tmp56_ = inner;
					_tmp57_ = valadoc_api_array_get_data_type (G_TYPE_CHECK_INSTANCE_CAST (_tmp56_, VALADOC_API_TYPE_ARRAY, ValadocApiArray));
					_tmp58_ = _tmp57_;
					_tmp59_ = _g_object_ref0 (_tmp58_);
					_g_object_unref0 (inner);
					inner = _tmp59_;
				} else {
					break;
				}
			}
		}
	}
	_tmp60_ = inner;
	if (_tmp60_ == NULL) {
		gchar* _tmp61_;
		_tmp61_ = g_strdup (parameter_name);
		_g_free0 (_vala_param_name);
		_vala_param_name = _tmp61_;
		result = NULL;
		_g_object_unref0 (inner);
		_g_object_unref0 (param);
		parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
		if (param_name) {
			*param_name = _vala_param_name;
		} else {
			_g_free0 (_vala_param_name);
		}
		if (param_array_name) {
			*param_array_name = _vala_param_array_name;
		} else {
			_g_free0 (_vala_param_array_name);
		}
		if (is_return_type_len) {
			*is_return_type_len = _vala_is_return_type_len;
		}
		return result;
	}
	cname = NULL;
	_tmp62_ = inner;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp62_, VALADOC_API_TYPE_ERROR_DOMAIN)) {
		ValadocApiItem* _tmp63_;
		gchar* _tmp64_;
		_tmp63_ = inner;
		_tmp64_ = valadoc_api_error_domain_get_cname (G_TYPE_CHECK_INSTANCE_CAST (_tmp63_, VALADOC_API_TYPE_ERROR_DOMAIN, ValadocApiErrorDomain));
		_g_free0 (cname);
		cname = _tmp64_;
	} else {
		ValadocApiItem* _tmp65_;
		_tmp65_ = inner;
		if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp65_, VALADOC_API_TYPE_STRUCT)) {
			ValadocApiItem* _tmp66_;
			gchar* _tmp67_;
			_tmp66_ = inner;
			_tmp67_ = valadoc_api_struct_get_cname (G_TYPE_CHECK_INSTANCE_CAST (_tmp66_, VALADOC_API_TYPE_STRUCT, ValadocApiStruct));
			_g_free0 (cname);
			cname = _tmp67_;
		} else {
			ValadocApiItem* _tmp68_;
			_tmp68_ = inner;
			if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp68_, VALADOC_API_TYPE_CLASS)) {
				ValadocApiItem* _tmp69_;
				gchar* _tmp70_;
				_tmp69_ = inner;
				_tmp70_ = valadoc_api_class_get_cname (G_TYPE_CHECK_INSTANCE_CAST (_tmp69_, VALADOC_API_TYPE_CLASS, ValadocApiClass));
				_g_free0 (cname);
				cname = _tmp70_;
			} else {
				ValadocApiItem* _tmp71_;
				_tmp71_ = inner;
				if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp71_, VALADOC_API_TYPE_ENUM)) {
					ValadocApiItem* _tmp72_;
					gchar* _tmp73_;
					_tmp72_ = inner;
					_tmp73_ = valadoc_api_enum_get_cname (G_TYPE_CHECK_INSTANCE_CAST (_tmp72_, VALADOC_API_TYPE_ENUM, ValadocApiEnum));
					_g_free0 (cname);
					cname = _tmp73_;
				} else {
					g_assert_not_reached ();
				}
			}
		}
	}
	_tmp74_ = parts;
	_tmp74__length1 = parts_length1;
	_tmp75_ = _tmp74_[0];
	_tmp74_[0] = NULL;
	_g_free0 (_vala_param_name);
	_vala_param_name = _tmp75_;
	_tmp76_ = cname;
	_tmp77_ = g_strconcat ("c::", _tmp76_, NULL);
	_tmp78_ = _tmp77_;
	_tmp79_ = parts;
	_tmp79__length1 = parts_length1;
	_tmp80_ = _tmp79_[1];
	_tmp81_ = g_strconcat (_tmp78_, _tmp80_, NULL);
	_tmp82_ = _tmp81_;
	_tmp83_ = parts;
	_tmp83__length1 = parts_length1;
	_tmp84_ = _tmp83_[2];
	_tmp85_ = g_strconcat (_tmp82_, _tmp84_, NULL);
	_tmp86_ = _tmp85_;
	_g_free0 (_tmp82_);
	_g_free0 (_tmp78_);
	result = _tmp86_;
	_g_free0 (cname);
	_g_object_unref0 (inner);
	_g_object_unref0 (param);
	parts = (_vala_array_free (parts, parts_length1, (GDestroyNotify) g_free), NULL);
	if (param_name) {
		*param_name = _vala_param_name;
	} else {
		_g_free0 (_vala_param_name);
	}
	if (param_array_name) {
		*param_array_name = _vala_param_array_name;
	} else {
		_g_free0 (_vala_param_array_name);
	}
	if (is_return_type_len) {
		*is_return_type_len = _vala_is_return_type_len;
	}
	return result;
}


static gunichar
string_get_char (const gchar* self,
                 glong index)
{
	gunichar result = 0U;
	g_return_val_if_fail (self != NULL, 0U);
	result = g_utf8_get_char (((gchar*) self) + index);
	return result;
}


static glong
string_strnlen (gchar* str,
                glong maxlen)
{
	glong result = 0L;
	gchar* end = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	_tmp0_ = memchr (str, 0, (gsize) maxlen);
	end = _tmp0_;
	_tmp1_ = end;
	if (_tmp1_ == NULL) {
		result = maxlen;
		return result;
	} else {
		gchar* _tmp2_;
		_tmp2_ = end;
		result = (glong) (_tmp2_ - str);
		return result;
	}
}


static gchar*
string_substring (const gchar* self,
                  glong offset,
                  glong len)
{
	gchar* result = NULL;
	glong string_length = 0L;
	gboolean _tmp0_ = FALSE;
	glong _tmp6_;
	gchar* _tmp7_;
	g_return_val_if_fail (self != NULL, NULL);
	if (offset >= ((glong) 0)) {
		_tmp0_ = len >= ((glong) 0);
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		string_length = string_strnlen ((gchar*) self, offset + len);
	} else {
		gint _tmp1_;
		gint _tmp2_;
		_tmp1_ = strlen (self);
		_tmp2_ = _tmp1_;
		string_length = (glong) _tmp2_;
	}
	if (offset < ((glong) 0)) {
		glong _tmp3_;
		_tmp3_ = string_length;
		offset = _tmp3_ + offset;
		g_return_val_if_fail (offset >= ((glong) 0), NULL);
	} else {
		glong _tmp4_;
		_tmp4_ = string_length;
		g_return_val_if_fail (offset <= _tmp4_, NULL);
	}
	if (len < ((glong) 0)) {
		glong _tmp5_;
		_tmp5_ = string_length;
		len = _tmp5_ - offset;
	}
	_tmp6_ = string_length;
	g_return_val_if_fail ((offset + len) <= _tmp6_, NULL);
	_tmp7_ = g_strndup (((gchar*) self) + offset, (gsize) len);
	result = _tmp7_;
	return result;
}


G_GNUC_INTERNAL gchar**
valadoc_importer_helper_split_type_name (const gchar* id,
                                         int* result_length1)
{
	gchar** result = NULL;
	gunichar c = 0U;
	gchar* _tmp35_;
	gchar** _tmp36_;
	gchar** _tmp37_;
	gint _tmp37__length1;
	g_return_val_if_fail (id != NULL, NULL);
	{
		const gchar* pos = NULL;
		pos = id;
		{
			gboolean _tmp0_ = FALSE;
			_tmp0_ = TRUE;
			while (TRUE) {
				const gchar* _tmp3_;
				gunichar _tmp4_;
				gunichar _tmp5_;
				if (!_tmp0_) {
					const gchar* _tmp1_;
					const gchar* _tmp2_;
					_tmp1_ = pos;
					_tmp2_ = g_utf8_next_char (_tmp1_);
					pos = _tmp2_;
				}
				_tmp0_ = FALSE;
				_tmp3_ = pos;
				c = string_get_char (_tmp3_, (glong) 0);
				_tmp4_ = c;
				if (!(_tmp4_ != ((gunichar) '\0'))) {
					break;
				}
				_tmp5_ = c;
				switch (_tmp5_) {
					case '-':
					{
						const gchar* _tmp6_;
						gchar* _tmp7_;
						gchar* _tmp8_;
						const gchar* _tmp9_;
						gchar* _tmp10_;
						gchar** _tmp11_;
						gchar** _tmp12_;
						gint _tmp12__length1;
						_tmp6_ = pos;
						_tmp7_ = string_substring (id, (glong) 0, (glong) (((gchar*) _tmp6_) - ((gchar*) id)));
						_tmp8_ = g_strdup ("->");
						_tmp9_ = pos;
						_tmp10_ = g_strdup ((const gchar*) (((gchar*) _tmp9_) + 2));
						_tmp11_ = g_new0 (gchar*, 3 + 1);
						_tmp11_[0] = _tmp7_;
						_tmp11_[1] = _tmp8_;
						_tmp11_[2] = _tmp10_;
						_tmp12_ = _tmp11_;
						_tmp12__length1 = 3;
						if (result_length1) {
							*result_length1 = _tmp12__length1;
						}
						result = _tmp12_;
						return result;
					}
					case ':':
					{
						const gchar* _tmp13_ = NULL;
						const gchar* _tmp14_;
						const gchar* _tmp15_;
						gchar* sep = NULL;
						gchar* _tmp16_;
						const gchar* _tmp17_;
						gchar* _tmp18_;
						const gchar* _tmp19_;
						gchar* _tmp20_;
						const gchar* _tmp21_;
						const gchar* _tmp22_;
						gint _tmp23_;
						gint _tmp24_;
						gchar* _tmp25_;
						gchar** _tmp26_;
						gchar** _tmp27_;
						gint _tmp27__length1;
						_tmp14_ = pos;
						_tmp15_ = g_utf8_next_char (_tmp14_);
						if (string_get_char (_tmp15_, (glong) 0) == ((gunichar) ':')) {
							_tmp13_ = "::";
						} else {
							_tmp13_ = ":";
						}
						_tmp16_ = g_strdup (_tmp13_);
						sep = _tmp16_;
						_tmp17_ = pos;
						_tmp18_ = string_substring (id, (glong) 0, (glong) (((gchar*) _tmp17_) - ((gchar*) id)));
						_tmp19_ = sep;
						_tmp20_ = g_strdup (_tmp19_);
						_tmp21_ = pos;
						_tmp22_ = sep;
						_tmp23_ = strlen (_tmp22_);
						_tmp24_ = _tmp23_;
						_tmp25_ = g_strdup ((const gchar*) (((gchar*) _tmp21_) + _tmp24_));
						_tmp26_ = g_new0 (gchar*, 3 + 1);
						_tmp26_[0] = _tmp18_;
						_tmp26_[1] = _tmp20_;
						_tmp26_[2] = _tmp25_;
						_tmp27_ = _tmp26_;
						_tmp27__length1 = 3;
						if (result_length1) {
							*result_length1 = _tmp27__length1;
						}
						result = _tmp27_;
						_g_free0 (sep);
						return result;
					}
					case '.':
					{
						const gchar* _tmp28_;
						gchar* _tmp29_;
						gchar* _tmp30_;
						const gchar* _tmp31_;
						gchar* _tmp32_;
						gchar** _tmp33_;
						gchar** _tmp34_;
						gint _tmp34__length1;
						_tmp28_ = pos;
						_tmp29_ = string_substring (id, (glong) 0, (glong) (((gchar*) _tmp28_) - ((gchar*) id)));
						_tmp30_ = g_strdup (".");
						_tmp31_ = pos;
						_tmp32_ = g_strdup ((const gchar*) (((gchar*) _tmp31_) + 1));
						_tmp33_ = g_new0 (gchar*, 3 + 1);
						_tmp33_[0] = _tmp29_;
						_tmp33_[1] = _tmp30_;
						_tmp33_[2] = _tmp32_;
						_tmp34_ = _tmp33_;
						_tmp34__length1 = 3;
						if (result_length1) {
							*result_length1 = _tmp34__length1;
						}
						result = _tmp34_;
						return result;
					}
					default:
					break;
				}
			}
		}
	}
	_tmp35_ = g_strdup (id);
	_tmp36_ = g_new0 (gchar*, 1 + 1);
	_tmp36_[0] = _tmp35_;
	_tmp37_ = _tmp36_;
	_tmp37__length1 = 1;
	if (result_length1) {
		*result_length1 = _tmp37__length1;
	}
	result = _tmp37_;
	return result;
}


G_GNUC_INTERNAL void
valadoc_importer_helper_extract_short_desc (ValadocContentComment* comment,
                                            ValadocContentContentFactory* factory)
{
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	gint _tmp2_;
	gint _tmp3_;
	ValadocContentParagraph* first_paragraph = NULL;
	ValaList* _tmp4_;
	ValaList* _tmp5_;
	gpointer _tmp6_;
	ValadocContentBlock* _tmp7_;
	ValadocContentParagraph* _tmp8_;
	ValadocContentParagraph* _tmp9_;
	ValadocContentParagraph* _tmp14_;
	ValadocContentParagraph* _tmp15_;
	ValadocContentParagraph* _tmp16_;
	ValadocContentParagraph* second_paragraph = NULL;
	ValadocContentParagraph* _tmp17_;
	ValadocContentParagraph* _tmp18_;
	ValadocContentParagraph* _tmp19_;
	ValadocContentParagraph* _tmp20_;
	g_return_if_fail (comment != NULL);
	g_return_if_fail (factory != NULL);
	_tmp0_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) comment);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_collection_get_size ((ValaCollection*) _tmp1_);
	_tmp3_ = _tmp2_;
	if (_tmp3_ == 0) {
		return;
	}
	_tmp4_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) comment);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_list_get (_tmp5_, 0);
	_tmp7_ = (ValadocContentBlock*) _tmp6_;
	_tmp8_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp7_, VALADOC_CONTENT_TYPE_PARAGRAPH) ? ((ValadocContentParagraph*) _tmp7_) : NULL;
	if (_tmp8_ == NULL) {
		_g_object_unref0 (_tmp7_);
	}
	first_paragraph = _tmp8_;
	_tmp9_ = first_paragraph;
	if (_tmp9_ == NULL) {
		ValaList* _tmp10_;
		ValaList* _tmp11_;
		ValadocContentParagraph* _tmp12_;
		ValadocContentParagraph* _tmp13_;
		_tmp10_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) comment);
		_tmp11_ = _tmp10_;
		_tmp12_ = valadoc_content_content_factory_create_paragraph (factory);
		_tmp13_ = _tmp12_;
		vala_list_insert (_tmp11_, 1, (ValadocContentBlock*) _tmp13_);
		_g_object_unref0 (_tmp13_);
		_g_object_unref0 (first_paragraph);
		return;
	}
	_tmp14_ = first_paragraph;
	valadoc_content_style_attributes_set_horizontal_align ((ValadocContentStyleAttributes*) _tmp14_, VALADOC_CONTENT_HORIZONTAL_ALIGN_NONE);
	_tmp15_ = first_paragraph;
	valadoc_content_style_attributes_set_vertical_align ((ValadocContentStyleAttributes*) _tmp15_, VALADOC_CONTENT_VERTICAL_ALIGN_NONE);
	_tmp16_ = first_paragraph;
	valadoc_content_style_attributes_set_style ((ValadocContentStyleAttributes*) _tmp16_, NULL);
	_tmp17_ = first_paragraph;
	_tmp18_ = valadoc_importer_helper_split_paragraph (_tmp17_, factory);
	second_paragraph = _tmp18_;
	_tmp19_ = second_paragraph;
	if (_tmp19_ == NULL) {
		_g_object_unref0 (second_paragraph);
		_g_object_unref0 (first_paragraph);
		return;
	}
	_tmp20_ = second_paragraph;
	if (valadoc_content_content_element_is_empty ((ValadocContentContentElement*) _tmp20_) == FALSE) {
		ValaList* _tmp21_;
		ValaList* _tmp22_;
		ValadocContentParagraph* _tmp23_;
		_tmp21_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) comment);
		_tmp22_ = _tmp21_;
		_tmp23_ = second_paragraph;
		vala_list_insert (_tmp22_, 1, (ValadocContentBlock*) _tmp23_);
	}
	_g_object_unref0 (second_paragraph);
	_g_object_unref0 (first_paragraph);
}


static gint
string_index_of_char (const gchar* self,
                      gunichar c,
                      gint start_index)
{
	gint result = 0;
	gchar* _result_ = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = g_utf8_strchr (((gchar*) self) + start_index, (gssize) -1, c);
	_result_ = _tmp0_;
	_tmp1_ = _result_;
	if (_tmp1_ != NULL) {
		gchar* _tmp2_;
		_tmp2_ = _result_;
		result = (gint) (_tmp2_ - ((gchar*) self));
		return result;
	} else {
		result = -1;
		return result;
	}
}


static gchar
string_get (const gchar* self,
            glong index)
{
	gchar result = '\0';
	gchar _tmp0_;
	g_return_val_if_fail (self != NULL, '\0');
	_tmp0_ = ((gchar*) self)[index];
	result = _tmp0_;
	return result;
}


G_GNUC_INTERNAL inline ValadocContentText*
valadoc_importer_helper_split_text (ValadocContentText* text,
                                    ValadocContentContentFactory* factory)
{
	ValadocContentText* result = NULL;
	gint offset = 0;
	g_return_val_if_fail (text != NULL, NULL);
	g_return_val_if_fail (factory != NULL, NULL);
	offset = 0;
	while (TRUE) {
		const gchar* _tmp0_;
		const gchar* _tmp1_;
		gint _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		const gchar* cmp0 = NULL;
		const gchar* _tmp16_;
		const gchar* _tmp17_;
		gint _tmp18_;
		const gchar* _tmp19_;
		const gchar* _tmp21_;
		ValadocContentText* sec = NULL;
		const gchar* _tmp23_;
		const gchar* _tmp24_;
		gint _tmp25_;
		gchar* _tmp26_;
		gchar* _tmp27_;
		ValadocContentText* _tmp28_;
		ValadocContentText* _tmp29_;
		const gchar* _tmp30_;
		const gchar* _tmp31_;
		gint _tmp32_;
		gchar* _tmp33_;
		gchar* _tmp34_;
		_tmp0_ = valadoc_content_text_get_content (text);
		_tmp1_ = _tmp0_;
		_tmp2_ = offset;
		offset = string_index_of_char (_tmp1_, (gunichar) '.', _tmp2_);
		_tmp3_ = offset;
		if (!(_tmp3_ >= 0)) {
			break;
		}
		_tmp4_ = offset;
		if (_tmp4_ >= 2) {
			const gchar* cmp4 = NULL;
			const gchar* _tmp5_;
			const gchar* _tmp6_;
			gint _tmp7_;
			gboolean _tmp8_ = FALSE;
			const gchar* _tmp9_;
			gboolean _tmp12_ = FALSE;
			const gchar* _tmp13_;
			_tmp5_ = valadoc_content_text_get_content (text);
			_tmp6_ = _tmp5_;
			_tmp7_ = offset;
			cmp4 = (const gchar*) ((((gchar*) _tmp6_) + _tmp7_) - 2);
			_tmp9_ = cmp4;
			if (g_str_has_prefix (_tmp9_, " e.g.")) {
				_tmp8_ = TRUE;
			} else {
				const gchar* _tmp10_;
				_tmp10_ = cmp4;
				_tmp8_ = g_str_has_prefix (_tmp10_, "(e.g.");
			}
			if (_tmp8_) {
				gint _tmp11_;
				_tmp11_ = offset;
				offset = _tmp11_ + 3;
				continue;
			}
			_tmp13_ = cmp4;
			if (g_str_has_prefix (_tmp13_, " i.e.")) {
				_tmp12_ = TRUE;
			} else {
				const gchar* _tmp14_;
				_tmp14_ = cmp4;
				_tmp12_ = g_str_has_prefix (_tmp14_, "(i.e.");
			}
			if (_tmp12_) {
				gint _tmp15_;
				_tmp15_ = offset;
				offset = _tmp15_ + 3;
				continue;
			}
		}
		_tmp16_ = valadoc_content_text_get_content (text);
		_tmp17_ = _tmp16_;
		_tmp18_ = offset;
		cmp0 = (const gchar*) (((gchar*) _tmp17_) + _tmp18_);
		_tmp19_ = cmp0;
		if (g_str_has_prefix (_tmp19_, "...")) {
			gint _tmp20_;
			_tmp20_ = offset;
			offset = _tmp20_ + 3;
			continue;
		}
		_tmp21_ = cmp0;
		if (g_ascii_isdigit (string_get (_tmp21_, (glong) 1))) {
			gint _tmp22_;
			_tmp22_ = offset;
			offset = _tmp22_ + 2;
			continue;
		}
		_tmp23_ = valadoc_content_text_get_content (text);
		_tmp24_ = _tmp23_;
		_tmp25_ = offset;
		_tmp26_ = string_substring (_tmp24_, (glong) (_tmp25_ + 1), (glong) -1);
		_tmp27_ = _tmp26_;
		_tmp28_ = valadoc_content_content_factory_create_text (factory, _tmp27_);
		_tmp29_ = _tmp28_;
		_g_free0 (_tmp27_);
		sec = _tmp29_;
		_tmp30_ = valadoc_content_text_get_content (text);
		_tmp31_ = _tmp30_;
		_tmp32_ = offset;
		_tmp33_ = string_substring (_tmp31_, (glong) 0, (glong) (_tmp32_ + 1));
		_tmp34_ = _tmp33_;
		valadoc_content_text_set_content (text, _tmp34_);
		_g_free0 (_tmp34_);
		result = sec;
		return result;
	}
	result = NULL;
	return result;
}


G_GNUC_INTERNAL inline ValadocContentRun*
valadoc_importer_helper_split_run (ValadocContentRun* run,
                                   ValadocContentContentFactory* factory)
{
	ValadocContentRun* result = NULL;
	ValadocContentRunStyle _tmp0_;
	ValadocContentRunStyle _tmp1_;
	ValadocContentRun* sec = NULL;
	ValaIterator* iter = NULL;
	ValaList* _tmp2_;
	ValaList* _tmp3_;
	ValaIterator* _tmp4_;
	g_return_val_if_fail (run != NULL, NULL);
	g_return_val_if_fail (factory != NULL, NULL);
	_tmp0_ = valadoc_content_run_get_style (run);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != VALADOC_CONTENT_RUN_STYLE_NONE) {
		result = NULL;
		return result;
	}
	sec = NULL;
	_tmp2_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) run);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_iterable_iterator ((ValaIterable*) _tmp3_);
	iter = _tmp4_;
	{
		gboolean has_next = FALSE;
		ValaIterator* _tmp5_;
		_tmp5_ = iter;
		has_next = vala_iterator_next (_tmp5_);
		{
			gboolean _tmp6_ = FALSE;
			_tmp6_ = TRUE;
			while (TRUE) {
				gboolean _tmp8_;
				ValadocContentInline* item = NULL;
				ValaIterator* _tmp9_;
				gpointer _tmp10_;
				ValadocContentRun* _tmp11_;
				if (!_tmp6_) {
					ValaIterator* _tmp7_;
					_tmp7_ = iter;
					has_next = vala_iterator_next (_tmp7_);
				}
				_tmp6_ = FALSE;
				_tmp8_ = has_next;
				if (!_tmp8_) {
					break;
				}
				_tmp9_ = iter;
				_tmp10_ = vala_iterator_get (_tmp9_);
				item = (ValadocContentInline*) _tmp10_;
				_tmp11_ = sec;
				if (_tmp11_ == NULL) {
					ValadocContentInline* tmp = NULL;
					ValadocContentInline* _tmp12_;
					ValadocContentInline* _tmp13_;
					ValadocContentInline* _tmp14_;
					_tmp12_ = item;
					_tmp13_ = valadoc_importer_helper_split_inline (_tmp12_, factory);
					tmp = _tmp13_;
					_tmp14_ = tmp;
					if (_tmp14_ != NULL) {
						ValadocContentRunStyle _tmp15_;
						ValadocContentRunStyle _tmp16_;
						ValadocContentRun* _tmp17_;
						ValadocContentRun* _tmp18_;
						ValaList* _tmp19_;
						ValaList* _tmp20_;
						ValadocContentInline* _tmp21_;
						_tmp15_ = valadoc_content_run_get_style (run);
						_tmp16_ = _tmp15_;
						_tmp17_ = valadoc_content_content_factory_create_run (factory, _tmp16_);
						_g_object_unref0 (sec);
						sec = _tmp17_;
						_tmp18_ = sec;
						_tmp19_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp18_);
						_tmp20_ = _tmp19_;
						_tmp21_ = tmp;
						vala_collection_add ((ValaCollection*) _tmp20_, _tmp21_);
					}
					_g_object_unref0 (tmp);
				} else {
					ValadocContentRun* _tmp22_;
					ValaList* _tmp23_;
					ValaList* _tmp24_;
					ValadocContentInline* _tmp25_;
					ValaIterator* _tmp26_;
					_tmp22_ = sec;
					_tmp23_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp22_);
					_tmp24_ = _tmp23_;
					_tmp25_ = item;
					vala_collection_add ((ValaCollection*) _tmp24_, _tmp25_);
					_tmp26_ = iter;
					vala_iterator_remove (_tmp26_);
				}
				_g_object_unref0 (item);
			}
		}
	}
	result = sec;
	_vala_iterator_unref0 (iter);
	return result;
}


G_GNUC_INTERNAL inline ValadocContentInline*
valadoc_importer_helper_split_inline (ValadocContentInline* item,
                                      ValadocContentContentFactory* factory)
{
	ValadocContentInline* result = NULL;
	g_return_val_if_fail (item != NULL, NULL);
	g_return_val_if_fail (factory != NULL, NULL);
	if (G_TYPE_CHECK_INSTANCE_TYPE (item, VALADOC_CONTENT_TYPE_TEXT)) {
		ValadocContentText* _tmp0_;
		_tmp0_ = valadoc_importer_helper_split_text (G_TYPE_CHECK_INSTANCE_CAST (item, VALADOC_CONTENT_TYPE_TEXT, ValadocContentText), factory);
		result = (ValadocContentInline*) _tmp0_;
		return result;
	} else {
		if (G_TYPE_CHECK_INSTANCE_TYPE (item, VALADOC_CONTENT_TYPE_RUN)) {
			ValadocContentRun* _tmp1_;
			_tmp1_ = valadoc_importer_helper_split_run (G_TYPE_CHECK_INSTANCE_CAST (item, VALADOC_CONTENT_TYPE_RUN, ValadocContentRun), factory);
			result = (ValadocContentInline*) _tmp1_;
			return result;
		}
	}
	result = NULL;
	return result;
}


G_GNUC_INTERNAL inline ValadocContentParagraph*
valadoc_importer_helper_split_paragraph (ValadocContentParagraph* p,
                                         ValadocContentContentFactory* factory)
{
	ValadocContentParagraph* result = NULL;
	ValadocContentParagraph* sec = NULL;
	ValaIterator* iter = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	ValaIterator* _tmp2_;
	g_return_val_if_fail (p != NULL, NULL);
	g_return_val_if_fail (factory != NULL, NULL);
	sec = NULL;
	_tmp0_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) p);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_iterable_iterator ((ValaIterable*) _tmp1_);
	iter = _tmp2_;
	{
		gboolean has_next = FALSE;
		ValaIterator* _tmp3_;
		_tmp3_ = iter;
		has_next = vala_iterator_next (_tmp3_);
		{
			gboolean _tmp4_ = FALSE;
			_tmp4_ = TRUE;
			while (TRUE) {
				gboolean _tmp6_;
				ValadocContentInline* item = NULL;
				ValaIterator* _tmp7_;
				gpointer _tmp8_;
				ValadocContentParagraph* _tmp9_;
				if (!_tmp4_) {
					ValaIterator* _tmp5_;
					_tmp5_ = iter;
					has_next = vala_iterator_next (_tmp5_);
				}
				_tmp4_ = FALSE;
				_tmp6_ = has_next;
				if (!_tmp6_) {
					break;
				}
				_tmp7_ = iter;
				_tmp8_ = vala_iterator_get (_tmp7_);
				item = (ValadocContentInline*) _tmp8_;
				_tmp9_ = sec;
				if (_tmp9_ == NULL) {
					ValadocContentInline* tmp = NULL;
					ValadocContentInline* _tmp10_;
					ValadocContentInline* _tmp11_;
					ValadocContentInline* _tmp12_;
					_tmp10_ = item;
					_tmp11_ = valadoc_importer_helper_split_inline (_tmp10_, factory);
					tmp = _tmp11_;
					_tmp12_ = tmp;
					if (_tmp12_ != NULL) {
						ValadocContentParagraph* _tmp13_;
						ValadocContentParagraph* _tmp14_;
						ValadocContentHorizontalAlign _tmp15_;
						ValadocContentHorizontalAlign _tmp16_;
						ValadocContentParagraph* _tmp17_;
						ValadocContentVerticalAlign _tmp18_;
						ValadocContentVerticalAlign _tmp19_;
						ValadocContentParagraph* _tmp20_;
						const gchar* _tmp21_;
						const gchar* _tmp22_;
						ValadocContentParagraph* _tmp23_;
						ValaList* _tmp24_;
						ValaList* _tmp25_;
						ValadocContentInline* _tmp26_;
						_tmp13_ = valadoc_content_content_factory_create_paragraph (factory);
						_g_object_unref0 (sec);
						sec = _tmp13_;
						_tmp14_ = sec;
						_tmp15_ = valadoc_content_style_attributes_get_horizontal_align ((ValadocContentStyleAttributes*) p);
						_tmp16_ = _tmp15_;
						valadoc_content_style_attributes_set_horizontal_align ((ValadocContentStyleAttributes*) _tmp14_, _tmp16_);
						_tmp17_ = sec;
						_tmp18_ = valadoc_content_style_attributes_get_vertical_align ((ValadocContentStyleAttributes*) p);
						_tmp19_ = _tmp18_;
						valadoc_content_style_attributes_set_vertical_align ((ValadocContentStyleAttributes*) _tmp17_, _tmp19_);
						_tmp20_ = sec;
						_tmp21_ = valadoc_content_style_attributes_get_style ((ValadocContentStyleAttributes*) p);
						_tmp22_ = _tmp21_;
						valadoc_content_style_attributes_set_style ((ValadocContentStyleAttributes*) _tmp20_, _tmp22_);
						_tmp23_ = sec;
						_tmp24_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp23_);
						_tmp25_ = _tmp24_;
						_tmp26_ = tmp;
						vala_collection_add ((ValaCollection*) _tmp25_, _tmp26_);
					}
					_g_object_unref0 (tmp);
				} else {
					ValadocContentParagraph* _tmp27_;
					ValaList* _tmp28_;
					ValaList* _tmp29_;
					ValadocContentInline* _tmp30_;
					ValaIterator* _tmp31_;
					_tmp27_ = sec;
					_tmp28_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp27_);
					_tmp29_ = _tmp28_;
					_tmp30_ = item;
					vala_collection_add ((ValaCollection*) _tmp29_, _tmp30_);
					_tmp31_ = iter;
					vala_iterator_remove (_tmp31_);
				}
				_g_object_unref0 (item);
			}
		}
	}
	result = sec;
	_vala_iterator_unref0 (iter);
	return result;
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


