/* valabooleantype.c generated by valac, the Vala compiler
 * generated from valabooleantype.vala, do not modify */

/* valabooleantype.vala
 *
 * Copyright (C) 2009  Jürg Billeter
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

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))


static gpointer vala_boolean_type_parent_class = NULL;

static ValaDataType* vala_boolean_type_real_copy (ValaDataType* base);


ValaBooleanType*
vala_boolean_type_construct (GType object_type,
                             ValaStruct* type_symbol)
{
	ValaBooleanType* self = NULL;
	g_return_val_if_fail (type_symbol != NULL, NULL);
	self = (ValaBooleanType*) vala_value_type_construct (object_type, (ValaTypeSymbol*) type_symbol);
	return self;
}


ValaBooleanType*
vala_boolean_type_new (ValaStruct* type_symbol)
{
	return vala_boolean_type_construct (VALA_TYPE_BOOLEAN_TYPE, type_symbol);
}


static ValaDataType*
vala_boolean_type_real_copy (ValaDataType* base)
{
	ValaBooleanType * self;
	ValaDataType* result = NULL;
	ValaBooleanType* _result_ = NULL;
	ValaTypeSymbol* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	ValaBooleanType* _tmp2_;
	ValaSourceReference* _tmp3_;
	ValaSourceReference* _tmp4_;
	gboolean _tmp5_;
	gboolean _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	self = (ValaBooleanType*) base;
	_tmp0_ = vala_value_type_get_type_symbol ((ValaValueType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_boolean_type_new (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, VALA_TYPE_STRUCT, ValaStruct));
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


static void
vala_boolean_type_class_init (ValaBooleanTypeClass * klass)
{
	vala_boolean_type_parent_class = g_type_class_peek_parent (klass);
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) vala_boolean_type_real_copy;
}


static void
vala_boolean_type_instance_init (ValaBooleanType * self)
{
}


/**
 * A boolean type.
 */
GType
vala_boolean_type_get_type (void)
{
	static volatile gsize vala_boolean_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_boolean_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaBooleanTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_boolean_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaBooleanType), 0, (GInstanceInitFunc) vala_boolean_type_instance_init, NULL };
		GType vala_boolean_type_type_id;
		vala_boolean_type_type_id = g_type_register_static (VALA_TYPE_VALUE_TYPE, "ValaBooleanType", &g_define_type_info, 0);
		g_once_init_leave (&vala_boolean_type_type_id__volatile, vala_boolean_type_type_id);
	}
	return vala_boolean_type_type_id__volatile;
}


