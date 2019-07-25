/* valanulltype.c generated by valac, the Vala compiler
 * generated from valanulltype.vala, do not modify */

/* valanulltype.vala
 *
 * Copyright (C) 2007-2010  Jürg Billeter
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
#include "vala.h"
#include <stdlib.h>
#include <string.h>

#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))


static gpointer vala_null_type_parent_class = NULL;

static gboolean vala_null_type_real_compatible (ValaDataType* base,
                                         ValaDataType* target_type);
static ValaDataType* vala_null_type_real_copy (ValaDataType* base);
static gboolean vala_null_type_real_is_disposable (ValaDataType* base);
static gchar* vala_null_type_real_to_qualified_string (ValaDataType* base,
                                                ValaScope* scope);


ValaNullType*
vala_null_type_construct (GType object_type,
                          ValaSourceReference* source_reference)
{
	ValaNullType* self = NULL;
	self = (ValaNullType*) vala_reference_type_construct (object_type);
	vala_data_type_set_nullable ((ValaDataType*) self, TRUE);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}


ValaNullType*
vala_null_type_new (ValaSourceReference* source_reference)
{
	return vala_null_type_construct (VALA_TYPE_NULL_TYPE, source_reference);
}


static gboolean
vala_null_type_real_compatible (ValaDataType* base,
                                ValaDataType* target_type)
{
	ValaNullType * self;
	gboolean result = FALSE;
	ValaCodeContext* _tmp0_;
	ValaCodeContext* _tmp1_;
	gboolean _tmp2_;
	gboolean _tmp3_;
	gboolean _tmp4_;
	gboolean _tmp7_ = FALSE;
	gboolean _tmp12_ = FALSE;
	gboolean _tmp13_ = FALSE;
	gboolean _tmp14_ = FALSE;
	gboolean _tmp20_ = FALSE;
	gboolean _tmp21_ = FALSE;
	ValaTypeSymbol* _tmp22_;
	ValaTypeSymbol* _tmp23_;
	self = (ValaNullType*) base;
	g_return_val_if_fail (target_type != NULL, FALSE);
	_tmp0_ = vala_code_context_get ();
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_code_context_get_experimental_non_null (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = _tmp3_;
	_vala_code_context_unref0 (_tmp1_);
	if (_tmp4_) {
		gboolean _tmp5_;
		gboolean _tmp6_;
		_tmp5_ = vala_data_type_get_nullable (target_type);
		_tmp6_ = _tmp5_;
		result = _tmp6_;
		return result;
	}
	if (!G_TYPE_CHECK_INSTANCE_TYPE (target_type, VALA_TYPE_POINTER_TYPE)) {
		gboolean _tmp8_ = FALSE;
		if (G_TYPE_CHECK_INSTANCE_TYPE (target_type, VALA_TYPE_NULL_TYPE)) {
			_tmp8_ = TRUE;
		} else {
			gboolean _tmp9_ = FALSE;
			ValaTypeSymbol* _tmp10_;
			ValaTypeSymbol* _tmp11_;
			_tmp10_ = vala_data_type_get_data_type (target_type);
			_tmp11_ = _tmp10_;
			if (_tmp11_ == NULL) {
				_tmp9_ = !G_TYPE_CHECK_INSTANCE_TYPE (target_type, VALA_TYPE_GENERIC_TYPE);
			} else {
				_tmp9_ = FALSE;
			}
			_tmp8_ = _tmp9_;
		}
		_tmp7_ = _tmp8_;
	} else {
		_tmp7_ = FALSE;
	}
	if (_tmp7_) {
		result = TRUE;
		return result;
	}
	if (G_TYPE_CHECK_INSTANCE_TYPE (target_type, VALA_TYPE_GENERIC_TYPE)) {
		_tmp14_ = TRUE;
	} else {
		_tmp14_ = G_TYPE_CHECK_INSTANCE_TYPE (target_type, VALA_TYPE_POINTER_TYPE);
	}
	if (_tmp14_) {
		_tmp13_ = TRUE;
	} else {
		gboolean _tmp15_;
		gboolean _tmp16_;
		_tmp15_ = vala_data_type_get_nullable (target_type);
		_tmp16_ = _tmp15_;
		_tmp13_ = _tmp16_;
	}
	if (_tmp13_) {
		_tmp12_ = TRUE;
	} else {
		ValaTypeSymbol* _tmp17_;
		ValaTypeSymbol* _tmp18_;
		ValaAttribute* _tmp19_;
		_tmp17_ = vala_data_type_get_data_type (target_type);
		_tmp18_ = _tmp17_;
		_tmp19_ = vala_code_node_get_attribute ((ValaCodeNode*) _tmp18_, "PointerType");
		_tmp12_ = _tmp19_ != NULL;
	}
	if (_tmp12_) {
		result = TRUE;
		return result;
	}
	_tmp22_ = vala_data_type_get_data_type (target_type);
	_tmp23_ = _tmp22_;
	if (vala_typesymbol_is_reference_type (_tmp23_)) {
		_tmp21_ = TRUE;
	} else {
		_tmp21_ = G_TYPE_CHECK_INSTANCE_TYPE (target_type, VALA_TYPE_ARRAY_TYPE);
	}
	if (_tmp21_) {
		_tmp20_ = TRUE;
	} else {
		_tmp20_ = G_TYPE_CHECK_INSTANCE_TYPE (target_type, VALA_TYPE_DELEGATE_TYPE);
	}
	if (_tmp20_) {
		result = TRUE;
		return result;
	}
	result = FALSE;
	return result;
}


static ValaDataType*
vala_null_type_real_copy (ValaDataType* base)
{
	ValaNullType * self;
	ValaDataType* result = NULL;
	ValaSourceReference* _tmp0_;
	ValaSourceReference* _tmp1_;
	ValaNullType* _tmp2_;
	self = (ValaNullType*) base;
	_tmp0_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_null_type_new (_tmp1_);
	result = (ValaDataType*) _tmp2_;
	return result;
}


static gboolean
vala_null_type_real_is_disposable (ValaDataType* base)
{
	ValaNullType * self;
	gboolean result = FALSE;
	self = (ValaNullType*) base;
	result = FALSE;
	return result;
}


static gchar*
vala_null_type_real_to_qualified_string (ValaDataType* base,
                                         ValaScope* scope)
{
	ValaNullType * self;
	gchar* result = NULL;
	gchar* _tmp0_;
	self = (ValaNullType*) base;
	_tmp0_ = g_strdup ("null");
	result = _tmp0_;
	return result;
}


static void
vala_null_type_class_init (ValaNullTypeClass * klass)
{
	vala_null_type_parent_class = g_type_class_peek_parent (klass);
	((ValaDataTypeClass *) klass)->compatible = (gboolean (*) (ValaDataType*, ValaDataType*)) vala_null_type_real_compatible;
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) vala_null_type_real_copy;
	((ValaDataTypeClass *) klass)->is_disposable = (gboolean (*) (ValaDataType*)) vala_null_type_real_is_disposable;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*) (ValaDataType*, ValaScope*)) vala_null_type_real_to_qualified_string;
}


static void
vala_null_type_instance_init (ValaNullType * self)
{
}


/**
 * The type of the null literal.
 */
GType
vala_null_type_get_type (void)
{
	static volatile gsize vala_null_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_null_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaNullTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_null_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaNullType), 0, (GInstanceInitFunc) vala_null_type_instance_init, NULL };
		GType vala_null_type_type_id;
		vala_null_type_type_id = g_type_register_static (VALA_TYPE_REFERENCE_TYPE, "ValaNullType", &g_define_type_info, 0);
		g_once_init_leave (&vala_null_type_type_id__volatile, vala_null_type_type_id);
	}
	return vala_null_type_type_id__volatile;
}



