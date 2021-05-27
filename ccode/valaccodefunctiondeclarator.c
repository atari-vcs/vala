/* valaccodefunctiondeclarator.c generated by valac, the Vala compiler
 * generated from valaccodefunctiondeclarator.vala, do not modify */

/* valaccodefunctiondeclarator.vala
 *
 * Copyright (C) 2006-2007  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */


#include <glib.h>
#include <glib-object.h>
#include "valaccode.h"
#include <stdlib.h>
#include <string.h>
#include <valagee.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeFunctionDeclaratorPrivate {
	gchar* _name;
	ValaList* parameters;
};


static gint ValaCCodeFunctionDeclarator_private_offset;
static gpointer vala_ccode_function_declarator_parent_class = NULL;

static void vala_ccode_function_declarator_real_write (ValaCCodeNode* base,
                                                ValaCCodeWriter* writer);
static void vala_ccode_function_declarator_real_write_declaration (ValaCCodeNode* base,
                                                            ValaCCodeWriter* writer);
static void vala_ccode_function_declarator_finalize (ValaCCodeNode * obj);


static inline gpointer
vala_ccode_function_declarator_get_instance_private (ValaCCodeFunctionDeclarator* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeFunctionDeclarator_private_offset);
}


ValaCCodeFunctionDeclarator*
vala_ccode_function_declarator_construct (GType object_type,
                                          const gchar* name)
{
	ValaCCodeFunctionDeclarator* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaCCodeFunctionDeclarator*) vala_ccode_declarator_construct (object_type);
	vala_ccode_function_declarator_set_name (self, name);
	return self;
}


ValaCCodeFunctionDeclarator*
vala_ccode_function_declarator_new (const gchar* name)
{
	return vala_ccode_function_declarator_construct (VALA_TYPE_CCODE_FUNCTION_DECLARATOR, name);
}


/**
 * Appends the specified parameter to the list of function parameters.
 *
 * @param param a formal parameter
 */
void
vala_ccode_function_declarator_add_parameter (ValaCCodeFunctionDeclarator* self,
                                              ValaCCodeParameter* param)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (param != NULL);
	_tmp0_ = self->priv->parameters;
	vala_collection_add ((ValaCollection*) _tmp0_, param);
}


static void
vala_ccode_function_declarator_real_write (ValaCCodeNode* base,
                                           ValaCCodeWriter* writer)
{
	ValaCCodeFunctionDeclarator * self;
	self = (ValaCCodeFunctionDeclarator*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_node_write_declaration ((ValaCCodeNode*) self, writer);
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


static void
vala_ccode_function_declarator_real_write_declaration (ValaCCodeNode* base,
                                                       ValaCCodeWriter* writer)
{
	ValaCCodeFunctionDeclarator * self;
	const gchar* _tmp0_;
	gboolean _tmp1_ = FALSE;
	ValaCCodeModifiers _tmp2_;
	ValaCCodeModifiers _tmp3_;
	gboolean has_args = FALSE;
	gint i = 0;
	gint format_arg_index = 0;
	gint args_index = 0;
	gint _tmp38_;
	ValaCCodeModifiers _tmp39_;
	ValaCCodeModifiers _tmp40_;
	ValaCCodeModifiers _tmp41_;
	ValaCCodeModifiers _tmp42_;
	self = (ValaCCodeFunctionDeclarator*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_string (writer, "(*");
	_tmp0_ = self->priv->_name;
	vala_ccode_writer_write_string (writer, _tmp0_);
	vala_ccode_writer_write_string (writer, ") (");
	_tmp2_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp3_ = _tmp2_;
	if ((_tmp3_ & VALA_CCODE_MODIFIERS_PRINTF) == VALA_CCODE_MODIFIERS_PRINTF) {
		_tmp1_ = TRUE;
	} else {
		ValaCCodeModifiers _tmp4_;
		ValaCCodeModifiers _tmp5_;
		_tmp4_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp5_ = _tmp4_;
		_tmp1_ = (_tmp5_ & VALA_CCODE_MODIFIERS_SCANF) == VALA_CCODE_MODIFIERS_SCANF;
	}
	has_args = _tmp1_;
	i = 0;
	format_arg_index = -1;
	args_index = -1;
	{
		ValaList* _param_list = NULL;
		ValaList* _tmp6_;
		ValaList* _tmp7_;
		gint _param_size = 0;
		ValaList* _tmp8_;
		gint _tmp9_;
		gint _tmp10_;
		gint _param_index = 0;
		_tmp6_ = self->priv->parameters;
		_tmp7_ = _vala_iterable_ref0 (_tmp6_);
		_param_list = _tmp7_;
		_tmp8_ = _param_list;
		_tmp9_ = vala_collection_get_size ((ValaCollection*) _tmp8_);
		_tmp10_ = _tmp9_;
		_param_size = _tmp10_;
		_param_index = -1;
		while (TRUE) {
			gint _tmp11_;
			gint _tmp12_;
			gint _tmp13_;
			ValaCCodeParameter* param = NULL;
			ValaList* _tmp14_;
			gint _tmp15_;
			gpointer _tmp16_;
			gint _tmp17_;
			ValaCCodeParameter* _tmp18_;
			ValaCCodeParameter* _tmp19_;
			ValaCCodeModifiers _tmp20_;
			ValaCCodeModifiers _tmp21_;
			gboolean _tmp23_ = FALSE;
			gboolean _tmp24_;
			gint _tmp37_;
			_tmp11_ = _param_index;
			_param_index = _tmp11_ + 1;
			_tmp12_ = _param_index;
			_tmp13_ = _param_size;
			if (!(_tmp12_ < _tmp13_)) {
				break;
			}
			_tmp14_ = _param_list;
			_tmp15_ = _param_index;
			_tmp16_ = vala_list_get (_tmp14_, _tmp15_);
			param = (ValaCCodeParameter*) _tmp16_;
			_tmp17_ = i;
			if (_tmp17_ > 0) {
				vala_ccode_writer_write_string (writer, ", ");
			}
			_tmp18_ = param;
			vala_ccode_node_write ((ValaCCodeNode*) _tmp18_, writer);
			_tmp19_ = param;
			_tmp20_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) _tmp19_);
			_tmp21_ = _tmp20_;
			if ((_tmp21_ & VALA_CCODE_MODIFIERS_FORMAT_ARG) == VALA_CCODE_MODIFIERS_FORMAT_ARG) {
				gint _tmp22_;
				_tmp22_ = i;
				format_arg_index = _tmp22_;
			}
			_tmp24_ = has_args;
			if (_tmp24_) {
				ValaCCodeParameter* _tmp25_;
				gboolean _tmp26_;
				gboolean _tmp27_;
				_tmp25_ = param;
				_tmp26_ = vala_ccode_parameter_get_ellipsis (_tmp25_);
				_tmp27_ = _tmp26_;
				_tmp23_ = _tmp27_;
			} else {
				_tmp23_ = FALSE;
			}
			if (_tmp23_) {
				gint _tmp28_;
				_tmp28_ = i;
				args_index = _tmp28_;
			} else {
				gboolean _tmp29_ = FALSE;
				gboolean _tmp30_ = FALSE;
				gboolean _tmp31_;
				_tmp31_ = has_args;
				if (_tmp31_) {
					ValaCCodeParameter* _tmp32_;
					const gchar* _tmp33_;
					const gchar* _tmp34_;
					_tmp32_ = param;
					_tmp33_ = vala_ccode_parameter_get_type_name (_tmp32_);
					_tmp34_ = _tmp33_;
					_tmp30_ = g_strcmp0 (_tmp34_, "va_list") == 0;
				} else {
					_tmp30_ = FALSE;
				}
				if (_tmp30_) {
					gint _tmp35_;
					_tmp35_ = format_arg_index;
					_tmp29_ = _tmp35_ < 0;
				} else {
					_tmp29_ = FALSE;
				}
				if (_tmp29_) {
					gint _tmp36_;
					_tmp36_ = i;
					format_arg_index = _tmp36_ - 1;
				}
			}
			_tmp37_ = i;
			i = _tmp37_ + 1;
			_vala_ccode_node_unref0 (param);
		}
		_vala_iterable_unref0 (_param_list);
	}
	_tmp38_ = i;
	if (_tmp38_ == 0) {
		vala_ccode_writer_write_string (writer, "void");
	}
	vala_ccode_writer_write_string (writer, ")");
	_tmp39_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp40_ = _tmp39_;
	if ((_tmp40_ & VALA_CCODE_MODIFIERS_DEPRECATED) == VALA_CCODE_MODIFIERS_DEPRECATED) {
		vala_ccode_writer_write_string (writer, " G_GNUC_DEPRECATED");
	}
	_tmp41_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp42_ = _tmp41_;
	if ((_tmp42_ & VALA_CCODE_MODIFIERS_PRINTF) == VALA_CCODE_MODIFIERS_PRINTF) {
		gint _tmp43_ = 0;
		gint _tmp44_;
		gint _tmp47_;
		gint _tmp48_;
		gchar* _tmp49_;
		gchar* _tmp50_;
		_tmp44_ = format_arg_index;
		if (_tmp44_ >= 0) {
			gint _tmp45_;
			_tmp45_ = format_arg_index;
			_tmp43_ = _tmp45_ + 1;
		} else {
			gint _tmp46_;
			_tmp46_ = args_index;
			_tmp43_ = _tmp46_;
		}
		format_arg_index = _tmp43_;
		_tmp47_ = format_arg_index;
		_tmp48_ = args_index;
		_tmp49_ = g_strdup_printf (" G_GNUC_PRINTF(%d,%d)", _tmp47_, _tmp48_ + 1);
		_tmp50_ = _tmp49_;
		vala_ccode_writer_write_string (writer, _tmp50_);
		_g_free0 (_tmp50_);
	} else {
		ValaCCodeModifiers _tmp51_;
		ValaCCodeModifiers _tmp52_;
		_tmp51_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp52_ = _tmp51_;
		if ((_tmp52_ & VALA_CCODE_MODIFIERS_SCANF) == VALA_CCODE_MODIFIERS_SCANF) {
			gint _tmp53_ = 0;
			gint _tmp54_;
			gint _tmp57_;
			gint _tmp58_;
			gchar* _tmp59_;
			gchar* _tmp60_;
			_tmp54_ = format_arg_index;
			if (_tmp54_ >= 0) {
				gint _tmp55_;
				_tmp55_ = format_arg_index;
				_tmp53_ = _tmp55_ + 1;
			} else {
				gint _tmp56_;
				_tmp56_ = args_index;
				_tmp53_ = _tmp56_;
			}
			format_arg_index = _tmp53_;
			_tmp57_ = format_arg_index;
			_tmp58_ = args_index;
			_tmp59_ = g_strdup_printf (" G_GNUC_SCANF(%d,%d)", _tmp57_, _tmp58_ + 1);
			_tmp60_ = _tmp59_;
			vala_ccode_writer_write_string (writer, _tmp60_);
			_g_free0 (_tmp60_);
		} else {
			gint _tmp61_;
			_tmp61_ = format_arg_index;
			if (_tmp61_ >= 0) {
				gint _tmp62_;
				gchar* _tmp63_;
				gchar* _tmp64_;
				_tmp62_ = format_arg_index;
				_tmp63_ = g_strdup_printf (" G_GNUC_FORMAT(%d)", _tmp62_ + 1);
				_tmp64_ = _tmp63_;
				vala_ccode_writer_write_string (writer, _tmp64_);
				_g_free0 (_tmp64_);
			}
		}
	}
}


const gchar*
vala_ccode_function_declarator_get_name (ValaCCodeFunctionDeclarator* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void
vala_ccode_function_declarator_set_name (ValaCCodeFunctionDeclarator* self,
                                         const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
}


static void
vala_ccode_function_declarator_class_init (ValaCCodeFunctionDeclaratorClass * klass)
{
	vala_ccode_function_declarator_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_function_declarator_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeFunctionDeclarator_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_function_declarator_real_write;
	((ValaCCodeNodeClass *) klass)->write_declaration = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_function_declarator_real_write_declaration;
}


static void
vala_ccode_function_declarator_instance_init (ValaCCodeFunctionDeclarator * self)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = vala_ccode_function_declarator_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_PARAMETER, (GBoxedCopyFunc) vala_ccode_node_ref, (GDestroyNotify) vala_ccode_node_unref, _tmp0_);
	self->priv->parameters = (ValaList*) _tmp1_;
}


static void
vala_ccode_function_declarator_finalize (ValaCCodeNode * obj)
{
	ValaCCodeFunctionDeclarator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_FUNCTION_DECLARATOR, ValaCCodeFunctionDeclarator);
	_g_free0 (self->priv->_name);
	_vala_iterable_unref0 (self->priv->parameters);
	VALA_CCODE_NODE_CLASS (vala_ccode_function_declarator_parent_class)->finalize (obj);
}


/**
 * Represents a function pointer declarator in the C code.
 */
GType
vala_ccode_function_declarator_get_type (void)
{
	static volatile gsize vala_ccode_function_declarator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_function_declarator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeFunctionDeclaratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_function_declarator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeFunctionDeclarator), 0, (GInstanceInitFunc) vala_ccode_function_declarator_instance_init, NULL };
		GType vala_ccode_function_declarator_type_id;
		vala_ccode_function_declarator_type_id = g_type_register_static (VALA_TYPE_CCODE_DECLARATOR, "ValaCCodeFunctionDeclarator", &g_define_type_info, 0);
		ValaCCodeFunctionDeclarator_private_offset = g_type_add_instance_private (vala_ccode_function_declarator_type_id, sizeof (ValaCCodeFunctionDeclaratorPrivate));
		g_once_init_leave (&vala_ccode_function_declarator_type_id__volatile, vala_ccode_function_declarator_type_id);
	}
	return vala_ccode_function_declarator_type_id__volatile;
}


