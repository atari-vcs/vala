/* valaccodeenumvalue.c generated by valac, the Vala compiler
 * generated from valaccodeenumvalue.vala, do not modify */

/* valaccodeenumvalue.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
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

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeEnumValuePrivate {
	gchar* _name;
	ValaCCodeExpression* _value;
};


static gint ValaCCodeEnumValue_private_offset;
static gpointer vala_ccode_enum_value_parent_class = NULL;

static void vala_ccode_enum_value_real_write (ValaCCodeNode* base,
                                       ValaCCodeWriter* writer);
static void vala_ccode_enum_value_finalize (ValaCCodeNode * obj);


static inline gpointer
vala_ccode_enum_value_get_instance_private (ValaCCodeEnumValue* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeEnumValue_private_offset);
}


ValaCCodeEnumValue*
vala_ccode_enum_value_construct (GType object_type,
                                 const gchar* name,
                                 ValaCCodeExpression* value)
{
	ValaCCodeEnumValue* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaCCodeEnumValue*) vala_ccode_node_construct (object_type);
	vala_ccode_enum_value_set_name (self, name);
	vala_ccode_enum_value_set_value (self, value);
	return self;
}


ValaCCodeEnumValue*
vala_ccode_enum_value_new (const gchar* name,
                           ValaCCodeExpression* value)
{
	return vala_ccode_enum_value_construct (VALA_TYPE_CCODE_ENUM_VALUE, name, value);
}


static void
vala_ccode_enum_value_real_write (ValaCCodeNode* base,
                                  ValaCCodeWriter* writer)
{
	ValaCCodeEnumValue * self;
	const gchar* _tmp0_;
	ValaCCodeModifiers _tmp1_;
	ValaCCodeModifiers _tmp2_;
	ValaCCodeExpression* _tmp3_;
	self = (ValaCCodeEnumValue*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_name;
	vala_ccode_writer_write_string (writer, _tmp0_);
	_tmp1_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp2_ = _tmp1_;
	if ((_tmp2_ & VALA_CCODE_MODIFIERS_DEPRECATED) == VALA_CCODE_MODIFIERS_DEPRECATED) {
	}
	_tmp3_ = self->priv->_value;
	if (_tmp3_ != NULL) {
		ValaCCodeExpression* _tmp4_;
		vala_ccode_writer_write_string (writer, " = ");
		_tmp4_ = self->priv->_value;
		vala_ccode_node_write ((ValaCCodeNode*) _tmp4_, writer);
	}
}


const gchar*
vala_ccode_enum_value_get_name (ValaCCodeEnumValue* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void
vala_ccode_enum_value_set_name (ValaCCodeEnumValue* self,
                                const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
}


ValaCCodeExpression*
vala_ccode_enum_value_get_value (ValaCCodeEnumValue* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_value;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_ccode_node_ref0 (gpointer self)
{
	return self ? vala_ccode_node_ref (self) : NULL;
}


void
vala_ccode_enum_value_set_value (ValaCCodeEnumValue* self,
                                 ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_value);
	self->priv->_value = _tmp0_;
}


static void
vala_ccode_enum_value_class_init (ValaCCodeEnumValueClass * klass)
{
	vala_ccode_enum_value_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_enum_value_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeEnumValue_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_enum_value_real_write;
}


static void
vala_ccode_enum_value_instance_init (ValaCCodeEnumValue * self)
{
	self->priv = vala_ccode_enum_value_get_instance_private (self);
}


static void
vala_ccode_enum_value_finalize (ValaCCodeNode * obj)
{
	ValaCCodeEnumValue * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_ENUM_VALUE, ValaCCodeEnumValue);
	_g_free0 (self->priv->_name);
	_vala_ccode_node_unref0 (self->priv->_value);
	VALA_CCODE_NODE_CLASS (vala_ccode_enum_value_parent_class)->finalize (obj);
}


/**
 * Represents an enum value in the C code.
 */
GType
vala_ccode_enum_value_get_type (void)
{
	static volatile gsize vala_ccode_enum_value_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_enum_value_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeEnumValueClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_enum_value_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeEnumValue), 0, (GInstanceInitFunc) vala_ccode_enum_value_instance_init, NULL };
		GType vala_ccode_enum_value_type_id;
		vala_ccode_enum_value_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeEnumValue", &g_define_type_info, 0);
		ValaCCodeEnumValue_private_offset = g_type_add_instance_private (vala_ccode_enum_value_type_id, sizeof (ValaCCodeEnumValuePrivate));
		g_once_init_leave (&vala_ccode_enum_value_type_id__volatile, vala_ccode_enum_value_type_id);
	}
	return vala_ccode_enum_value_type_id__volatile;
}



