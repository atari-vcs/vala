/* valafieldprototype.c generated by valac, the Vala compiler
 * generated from valafieldprototype.vala, do not modify */

/* valafieldprototype.vala
 *
 * Copyright (C) 2008  Jürg Billeter
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

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaFieldPrototypePrivate {
	ValaField* _field_symbol;
};


static gint ValaFieldPrototype_private_offset;
static gpointer vala_field_prototype_parent_class = NULL;

static ValaDataType* vala_field_prototype_real_copy (ValaDataType* base);
static gchar* vala_field_prototype_real_to_qualified_string (ValaDataType* base,
                                                      ValaScope* scope);
static void vala_field_prototype_finalize (ValaCodeNode * obj);


static inline gpointer
vala_field_prototype_get_instance_private (ValaFieldPrototype* self)
{
	return G_STRUCT_MEMBER_P (self, ValaFieldPrototype_private_offset);
}


ValaFieldPrototype*
vala_field_prototype_construct (GType object_type,
                                ValaField* field_symbol)
{
	ValaFieldPrototype* self = NULL;
	g_return_val_if_fail (field_symbol != NULL, NULL);
	self = (ValaFieldPrototype*) vala_data_type_construct (object_type);
	vala_field_prototype_set_field_symbol (self, field_symbol);
	return self;
}


ValaFieldPrototype*
vala_field_prototype_new (ValaField* field_symbol)
{
	return vala_field_prototype_construct (VALA_TYPE_FIELD_PROTOTYPE, field_symbol);
}


static ValaDataType*
vala_field_prototype_real_copy (ValaDataType* base)
{
	ValaFieldPrototype * self;
	ValaDataType* result = NULL;
	ValaFieldPrototype* _result_ = NULL;
	ValaField* _tmp0_;
	ValaFieldPrototype* _tmp1_;
	self = (ValaFieldPrototype*) base;
	_tmp0_ = self->priv->_field_symbol;
	_tmp1_ = vala_field_prototype_new (_tmp0_);
	_result_ = _tmp1_;
	result = (ValaDataType*) _result_;
	return result;
}


static gchar*
vala_field_prototype_real_to_qualified_string (ValaDataType* base,
                                               ValaScope* scope)
{
	ValaFieldPrototype * self;
	gchar* result = NULL;
	ValaField* _tmp0_;
	gchar* _tmp1_;
	self = (ValaFieldPrototype*) base;
	_tmp0_ = self->priv->_field_symbol;
	_tmp1_ = vala_symbol_get_full_name ((ValaSymbol*) _tmp0_);
	result = _tmp1_;
	return result;
}


ValaField*
vala_field_prototype_get_field_symbol (ValaFieldPrototype* self)
{
	ValaField* result;
	ValaField* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_field_symbol;
	result = _tmp0_;
	return result;
}


void
vala_field_prototype_set_field_symbol (ValaFieldPrototype* self,
                                       ValaField* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_field_symbol = value;
}


static void
vala_field_prototype_class_init (ValaFieldPrototypeClass * klass)
{
	vala_field_prototype_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_field_prototype_finalize;
	g_type_class_adjust_private_offset (klass, &ValaFieldPrototype_private_offset);
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) vala_field_prototype_real_copy;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*) (ValaDataType*, ValaScope*)) vala_field_prototype_real_to_qualified_string;
}


static void
vala_field_prototype_instance_init (ValaFieldPrototype * self)
{
	self->priv = vala_field_prototype_get_instance_private (self);
}


static void
vala_field_prototype_finalize (ValaCodeNode * obj)
{
	ValaFieldPrototype * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_FIELD_PROTOTYPE, ValaFieldPrototype);
	VALA_CODE_NODE_CLASS (vala_field_prototype_parent_class)->finalize (obj);
}


/**
 * A reference to an instance field without a specific instance.
 */
GType
vala_field_prototype_get_type (void)
{
	static volatile gsize vala_field_prototype_type_id__volatile = 0;
	if (g_once_init_enter (&vala_field_prototype_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaFieldPrototypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_field_prototype_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaFieldPrototype), 0, (GInstanceInitFunc) vala_field_prototype_instance_init, NULL };
		GType vala_field_prototype_type_id;
		vala_field_prototype_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaFieldPrototype", &g_define_type_info, 0);
		ValaFieldPrototype_private_offset = g_type_add_instance_private (vala_field_prototype_type_id, sizeof (ValaFieldPrototypePrivate));
		g_once_init_leave (&vala_field_prototype_type_id__volatile, vala_field_prototype_type_id);
	}
	return vala_field_prototype_type_id__volatile;
}



