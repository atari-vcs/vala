/* valaenumvaluetype.c generated by valac, the Vala compiler
 * generated from valaenumvaluetype.vala, do not modify */

/* valaenumvaluetype.vala
 *
 * Copyright (C) 2009-2011  Jürg Billeter
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

#include "vala.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))

struct _ValaEnumValueTypePrivate {
	ValaMethod* to_string_method;
};

static gint ValaEnumValueType_private_offset;
static gpointer vala_enum_value_type_parent_class = NULL;

static ValaDataType* vala_enum_value_type_real_copy (ValaDataType* base);
static ValaSymbol* vala_enum_value_type_real_get_member (ValaDataType* base,
                                                  const gchar* member_name);
static void vala_enum_value_type_finalize (ValaCodeNode * obj);
static GType vala_enum_value_type_get_type_once (void);

static inline gpointer
vala_enum_value_type_get_instance_private (ValaEnumValueType* self)
{
	return G_STRUCT_MEMBER_P (self, ValaEnumValueType_private_offset);
}

ValaEnumValueType*
vala_enum_value_type_construct (GType object_type,
                                ValaEnum* type_symbol)
{
	ValaEnumValueType* self = NULL;
	g_return_val_if_fail (type_symbol != NULL, NULL);
	self = (ValaEnumValueType*) vala_value_type_construct (object_type, (ValaTypeSymbol*) type_symbol);
	return self;
}

ValaEnumValueType*
vala_enum_value_type_new (ValaEnum* type_symbol)
{
	return vala_enum_value_type_construct (VALA_TYPE_ENUM_VALUE_TYPE, type_symbol);
}

static ValaDataType*
vala_enum_value_type_real_copy (ValaDataType* base)
{
	ValaEnumValueType * self;
	ValaEnumValueType* _result_ = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	ValaEnumValueType* _tmp2_;
	ValaSourceReference* _tmp3_;
	ValaSourceReference* _tmp4_;
	gboolean _tmp5_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	ValaDataType* result = NULL;
	self = (ValaEnumValueType*) base;
	_tmp0_ = vala_data_type_get_type_symbol ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_enum_value_type_new (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, VALA_TYPE_ENUM, ValaEnum));
	_result_ = _tmp2_;
	_tmp3_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp4_ = _tmp3_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _result_, _tmp4_);
	_tmp5_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp6_ = _tmp5_;
	vala_data_type_set_value_owned ((ValaDataType*) _result_, _tmp6_);
	_tmp7_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp8_ = _tmp7_;
	vala_data_type_set_nullable ((ValaDataType*) _result_, _tmp8_);
	result = (ValaDataType*) _result_;
	return result;
}

ValaMethod*
vala_enum_value_type_get_to_string_method (ValaEnumValueType* self)
{
	ValaMethod* _tmp0_;
	ValaMethod* _tmp44_;
	ValaMethod* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->to_string_method;
	if (_tmp0_ == NULL) {
		ValaObjectType* string_type = NULL;
		ValaCodeContext* _tmp1_;
		ValaCodeContext* _tmp2_;
		ValaNamespace* _tmp3_;
		ValaNamespace* _tmp4_;
		ValaScope* _tmp5_;
		ValaScope* _tmp6_;
		ValaSymbol* _tmp7_;
		ValaClass* _tmp8_;
		ValaObjectType* _tmp9_;
		ValaObjectType* _tmp10_;
		ValaObjectType* _tmp11_;
		ValaObjectType* _tmp12_;
		ValaMethod* _tmp13_;
		ValaMethod* _tmp14_;
		ValaMethod* _tmp15_;
		ValaCodeContext* _tmp16_;
		ValaCodeContext* _tmp17_;
		ValaProfile _tmp18_;
		ValaProfile _tmp19_;
		gboolean _tmp20_;
		ValaMethod* _tmp23_;
		ValaTypeSymbol* _tmp24_;
		ValaTypeSymbol* _tmp25_;
		ValaScope* _tmp26_;
		ValaScope* _tmp27_;
		ValaMethod* _tmp28_;
		ValaDataType* _tmp29_;
		ValaDataType* _tmp30_;
		ValaParameter* _tmp31_;
		ValaParameter* _tmp32_;
		ValaMethod* _tmp33_;
		ValaScope* _tmp34_;
		ValaScope* _tmp35_;
		ValaMethod* _tmp36_;
		ValaParameter* _tmp37_;
		ValaParameter* _tmp38_;
		const gchar* _tmp39_;
		const gchar* _tmp40_;
		ValaMethod* _tmp41_;
		ValaParameter* _tmp42_;
		ValaParameter* _tmp43_;
		_tmp1_ = vala_code_context_get ();
		_tmp2_ = _tmp1_;
		_tmp3_ = vala_code_context_get_root (_tmp2_);
		_tmp4_ = _tmp3_;
		_tmp5_ = vala_symbol_get_scope ((ValaSymbol*) _tmp4_);
		_tmp6_ = _tmp5_;
		_tmp7_ = vala_scope_lookup (_tmp6_, "string");
		_tmp8_ = G_TYPE_CHECK_INSTANCE_CAST (_tmp7_, VALA_TYPE_CLASS, ValaClass);
		_tmp9_ = vala_object_type_new ((ValaObjectTypeSymbol*) _tmp8_);
		_tmp10_ = _tmp9_;
		_vala_code_node_unref0 (_tmp8_);
		_vala_code_context_unref0 (_tmp2_);
		string_type = _tmp10_;
		_tmp11_ = string_type;
		vala_data_type_set_value_owned ((ValaDataType*) _tmp11_, FALSE);
		_tmp12_ = string_type;
		_tmp13_ = vala_method_new ("to_string", (ValaDataType*) _tmp12_, NULL, NULL);
		_vala_code_node_unref0 (self->priv->to_string_method);
		self->priv->to_string_method = _tmp13_;
		_tmp14_ = self->priv->to_string_method;
		vala_symbol_set_access ((ValaSymbol*) _tmp14_, VALA_SYMBOL_ACCESSIBILITY_PUBLIC);
		_tmp15_ = self->priv->to_string_method;
		vala_symbol_set_is_extern ((ValaSymbol*) _tmp15_, TRUE);
		_tmp16_ = vala_code_context_get ();
		_tmp17_ = _tmp16_;
		_tmp18_ = vala_code_context_get_profile (_tmp17_);
		_tmp19_ = _tmp18_;
		_tmp20_ = _tmp19_ == VALA_PROFILE_POSIX;
		_vala_code_context_unref0 (_tmp17_);
		if (_tmp20_) {
			ValaMethod* _tmp21_;
			_tmp21_ = self->priv->to_string_method;
			vala_code_node_set_attribute_string ((ValaCodeNode*) _tmp21_, "CCode", "cheader_filename", "stdlib.h", NULL);
		} else {
			ValaMethod* _tmp22_;
			_tmp22_ = self->priv->to_string_method;
			vala_code_node_set_attribute_string ((ValaCodeNode*) _tmp22_, "CCode", "cheader_filename", "glib-object.h", NULL);
		}
		_tmp23_ = self->priv->to_string_method;
		_tmp24_ = vala_data_type_get_type_symbol ((ValaDataType*) self);
		_tmp25_ = _tmp24_;
		_tmp26_ = vala_symbol_get_scope ((ValaSymbol*) _tmp25_);
		_tmp27_ = _tmp26_;
		vala_symbol_set_owner ((ValaSymbol*) _tmp23_, _tmp27_);
		_tmp28_ = self->priv->to_string_method;
		_tmp29_ = vala_data_type_copy ((ValaDataType*) self);
		_tmp30_ = _tmp29_;
		_tmp31_ = vala_parameter_new ("this", _tmp30_, NULL);
		_tmp32_ = _tmp31_;
		vala_method_set_this_parameter (_tmp28_, _tmp32_);
		_vala_code_node_unref0 (_tmp32_);
		_vala_code_node_unref0 (_tmp30_);
		_tmp33_ = self->priv->to_string_method;
		_tmp34_ = vala_symbol_get_scope ((ValaSymbol*) _tmp33_);
		_tmp35_ = _tmp34_;
		_tmp36_ = self->priv->to_string_method;
		_tmp37_ = vala_method_get_this_parameter (_tmp36_);
		_tmp38_ = _tmp37_;
		_tmp39_ = vala_symbol_get_name ((ValaSymbol*) _tmp38_);
		_tmp40_ = _tmp39_;
		_tmp41_ = self->priv->to_string_method;
		_tmp42_ = vala_method_get_this_parameter (_tmp41_);
		_tmp43_ = _tmp42_;
		vala_scope_add (_tmp35_, _tmp40_, (ValaSymbol*) _tmp43_);
		_vala_code_node_unref0 (string_type);
	}
	_tmp44_ = self->priv->to_string_method;
	result = _tmp44_;
	return result;
}

static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}

static ValaSymbol*
vala_enum_value_type_real_get_member (ValaDataType* base,
                                      const gchar* member_name)
{
	ValaEnumValueType * self;
	ValaSymbol* _result_ = NULL;
	ValaSymbol* _tmp0_;
	gboolean _tmp1_ = FALSE;
	ValaSymbol* _tmp2_;
	ValaSymbol* result = NULL;
	self = (ValaEnumValueType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	_tmp0_ = VALA_DATA_TYPE_CLASS (vala_enum_value_type_parent_class)->get_member ((ValaDataType*) G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_VALUE_TYPE, ValaValueType), member_name);
	_result_ = _tmp0_;
	_tmp2_ = _result_;
	if (_tmp2_ == NULL) {
		_tmp1_ = g_strcmp0 (member_name, "to_string") == 0;
	} else {
		_tmp1_ = FALSE;
	}
	if (_tmp1_) {
		ValaMethod* _tmp3_;
		ValaSymbol* _tmp4_;
		_tmp3_ = vala_enum_value_type_get_to_string_method (self);
		_tmp4_ = _vala_code_node_ref0 ((ValaSymbol*) _tmp3_);
		result = _tmp4_;
		_vala_code_node_unref0 (_result_);
		return result;
	}
	result = _result_;
	return result;
}

static void
vala_enum_value_type_class_init (ValaEnumValueTypeClass * klass,
                                 gpointer klass_data)
{
	vala_enum_value_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_enum_value_type_finalize;
	g_type_class_adjust_private_offset (klass, &ValaEnumValueType_private_offset);
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) vala_enum_value_type_real_copy;
	((ValaDataTypeClass *) klass)->get_member = (ValaSymbol* (*) (ValaDataType*, const gchar*)) vala_enum_value_type_real_get_member;
}

static void
vala_enum_value_type_instance_init (ValaEnumValueType * self,
                                    gpointer klass)
{
	self->priv = vala_enum_value_type_get_instance_private (self);
}

static void
vala_enum_value_type_finalize (ValaCodeNode * obj)
{
	ValaEnumValueType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ENUM_VALUE_TYPE, ValaEnumValueType);
	_vala_code_node_unref0 (self->priv->to_string_method);
	VALA_CODE_NODE_CLASS (vala_enum_value_type_parent_class)->finalize (obj);
}

/**
 * An enum value type.
 */
static GType
vala_enum_value_type_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaEnumValueTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_enum_value_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaEnumValueType), 0, (GInstanceInitFunc) vala_enum_value_type_instance_init, NULL };
	GType vala_enum_value_type_type_id;
	vala_enum_value_type_type_id = g_type_register_static (VALA_TYPE_VALUE_TYPE, "ValaEnumValueType", &g_define_type_info, 0);
	ValaEnumValueType_private_offset = g_type_add_instance_private (vala_enum_value_type_type_id, sizeof (ValaEnumValueTypePrivate));
	return vala_enum_value_type_type_id;
}

GType
vala_enum_value_type_get_type (void)
{
	static volatile gsize vala_enum_value_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_enum_value_type_type_id__volatile)) {
		GType vala_enum_value_type_type_id;
		vala_enum_value_type_type_id = vala_enum_value_type_get_type_once ();
		g_once_init_leave (&vala_enum_value_type_type_id__volatile, vala_enum_value_type_type_id);
	}
	return vala_enum_value_type_type_id__volatile;
}

