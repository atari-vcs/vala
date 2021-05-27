/* valapropertyprototype.c generated by valac, the Vala compiler
 * generated from valapropertyprototype.vala, do not modify */

/* valafieldprototype.vala
 *
 * Copyright (C) 2018  Rico Tzschichholz
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
 * 	Rico Tzschichholz <ricotz@ubuntu.com>
 */


#include <glib.h>
#include <glib-object.h>
#include "vala.h"
#include <stdlib.h>
#include <string.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaPropertyPrototypePrivate {
	ValaProperty* _property_symbol;
};


static gint ValaPropertyPrototype_private_offset;
static gpointer vala_property_prototype_parent_class = NULL;

static ValaDataType* vala_property_prototype_real_copy (ValaDataType* base);
static gchar* vala_property_prototype_real_to_qualified_string (ValaDataType* base,
                                                         ValaScope* scope);
static void vala_property_prototype_finalize (ValaCodeNode * obj);


static inline gpointer
vala_property_prototype_get_instance_private (ValaPropertyPrototype* self)
{
	return G_STRUCT_MEMBER_P (self, ValaPropertyPrototype_private_offset);
}


ValaPropertyPrototype*
vala_property_prototype_construct (GType object_type,
                                   ValaProperty* property_symbol)
{
	ValaPropertyPrototype* self = NULL;
	g_return_val_if_fail (property_symbol != NULL, NULL);
	self = (ValaPropertyPrototype*) vala_data_type_construct (object_type);
	vala_property_prototype_set_property_symbol (self, property_symbol);
	return self;
}


ValaPropertyPrototype*
vala_property_prototype_new (ValaProperty* property_symbol)
{
	return vala_property_prototype_construct (VALA_TYPE_PROPERTY_PROTOTYPE, property_symbol);
}


static ValaDataType*
vala_property_prototype_real_copy (ValaDataType* base)
{
	ValaPropertyPrototype * self;
	ValaDataType* result = NULL;
	ValaPropertyPrototype* _result_ = NULL;
	ValaProperty* _tmp0_;
	ValaPropertyPrototype* _tmp1_;
	self = (ValaPropertyPrototype*) base;
	_tmp0_ = self->priv->_property_symbol;
	_tmp1_ = vala_property_prototype_new (_tmp0_);
	_result_ = _tmp1_;
	result = (ValaDataType*) _result_;
	return result;
}


static gchar*
vala_property_prototype_real_to_qualified_string (ValaDataType* base,
                                                  ValaScope* scope)
{
	ValaPropertyPrototype * self;
	gchar* result = NULL;
	ValaProperty* _tmp0_;
	gchar* _tmp1_;
	self = (ValaPropertyPrototype*) base;
	_tmp0_ = self->priv->_property_symbol;
	_tmp1_ = vala_symbol_get_full_name ((ValaSymbol*) _tmp0_);
	result = _tmp1_;
	return result;
}


ValaProperty*
vala_property_prototype_get_property_symbol (ValaPropertyPrototype* self)
{
	ValaProperty* result;
	ValaProperty* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_property_symbol;
	result = _tmp0_;
	return result;
}


void
vala_property_prototype_set_property_symbol (ValaPropertyPrototype* self,
                                             ValaProperty* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_property_symbol = value;
}


static void
vala_property_prototype_class_init (ValaPropertyPrototypeClass * klass)
{
	vala_property_prototype_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_property_prototype_finalize;
	g_type_class_adjust_private_offset (klass, &ValaPropertyPrototype_private_offset);
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) vala_property_prototype_real_copy;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*) (ValaDataType*, ValaScope*)) vala_property_prototype_real_to_qualified_string;
}


static void
vala_property_prototype_instance_init (ValaPropertyPrototype * self)
{
	self->priv = vala_property_prototype_get_instance_private (self);
}


static void
vala_property_prototype_finalize (ValaCodeNode * obj)
{
	ValaPropertyPrototype * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_PROPERTY_PROTOTYPE, ValaPropertyPrototype);
	VALA_CODE_NODE_CLASS (vala_property_prototype_parent_class)->finalize (obj);
}


/**
 * A reference to an instance property without a specific instance.
 */
GType
vala_property_prototype_get_type (void)
{
	static volatile gsize vala_property_prototype_type_id__volatile = 0;
	if (g_once_init_enter (&vala_property_prototype_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaPropertyPrototypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_property_prototype_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaPropertyPrototype), 0, (GInstanceInitFunc) vala_property_prototype_instance_init, NULL };
		GType vala_property_prototype_type_id;
		vala_property_prototype_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaPropertyPrototype", &g_define_type_info, 0);
		ValaPropertyPrototype_private_offset = g_type_add_instance_private (vala_property_prototype_type_id, sizeof (ValaPropertyPrototypePrivate));
		g_once_init_leave (&vala_property_prototype_type_id__volatile, vala_property_prototype_type_id);
	}
	return vala_property_prototype_type_id__volatile;
}


