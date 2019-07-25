/* valaenumregisterfunction.c generated by valac, the Vala compiler
 * generated from valaenumregisterfunction.vala, do not modify */

/* valaenumregisterfunction.vala
 *
 * Copyright (C) 2008  Jürg Billeter
 * Copyright (C) 2010  Marc-Andre Lureau
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
#include "valacodegen.h"
#include <vala.h>


struct _ValaEnumRegisterFunctionPrivate {
	ValaEnum* _enum_reference;
};


static gint ValaEnumRegisterFunction_private_offset;
static gpointer vala_enum_register_function_parent_class = NULL;

static ValaTypeSymbol* vala_enum_register_function_real_get_type_declaration (ValaTypeRegisterFunction* base);
static ValaSymbolAccessibility vala_enum_register_function_real_get_accessibility (ValaTypeRegisterFunction* base);
static void vala_enum_register_function_finalize (ValaTypeRegisterFunction * obj);


static inline gpointer
vala_enum_register_function_get_instance_private (ValaEnumRegisterFunction* self)
{
	return G_STRUCT_MEMBER_P (self, ValaEnumRegisterFunction_private_offset);
}


/**
 * Creates a new C function to register the specified enum at runtime.
 *
 * @param en an enum
 * @return   newly created enum register function
 */
ValaEnumRegisterFunction*
vala_enum_register_function_construct (GType object_type,
                                       ValaEnum* en)
{
	ValaEnumRegisterFunction* self = NULL;
	g_return_val_if_fail (en != NULL, NULL);
	self = (ValaEnumRegisterFunction*) vala_typeregister_function_construct (object_type);
	vala_enum_register_function_set_enum_reference (self, en);
	return self;
}


ValaEnumRegisterFunction*
vala_enum_register_function_new (ValaEnum* en)
{
	return vala_enum_register_function_construct (VALA_TYPE_ENUM_REGISTER_FUNCTION, en);
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


static ValaTypeSymbol*
vala_enum_register_function_real_get_type_declaration (ValaTypeRegisterFunction* base)
{
	ValaEnumRegisterFunction * self;
	ValaTypeSymbol* result = NULL;
	ValaEnum* _tmp0_;
	ValaTypeSymbol* _tmp1_;
	self = (ValaEnumRegisterFunction*) base;
	_tmp0_ = self->priv->_enum_reference;
	_tmp1_ = _vala_code_node_ref0 ((ValaTypeSymbol*) _tmp0_);
	result = _tmp1_;
	return result;
}


static ValaSymbolAccessibility
vala_enum_register_function_real_get_accessibility (ValaTypeRegisterFunction* base)
{
	ValaEnumRegisterFunction * self;
	ValaSymbolAccessibility result = 0;
	ValaEnum* _tmp0_;
	ValaSymbolAccessibility _tmp1_;
	ValaSymbolAccessibility _tmp2_;
	self = (ValaEnumRegisterFunction*) base;
	_tmp0_ = self->priv->_enum_reference;
	_tmp1_ = vala_symbol_get_access ((ValaSymbol*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


ValaEnum*
vala_enum_register_function_get_enum_reference (ValaEnumRegisterFunction* self)
{
	ValaEnum* result;
	ValaEnum* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_enum_reference;
	result = _tmp0_;
	return result;
}


void
vala_enum_register_function_set_enum_reference (ValaEnumRegisterFunction* self,
                                                ValaEnum* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_enum_reference = value;
}


static void
vala_enum_register_function_class_init (ValaEnumRegisterFunctionClass * klass)
{
	vala_enum_register_function_parent_class = g_type_class_peek_parent (klass);
	((ValaTypeRegisterFunctionClass *) klass)->finalize = vala_enum_register_function_finalize;
	g_type_class_adjust_private_offset (klass, &ValaEnumRegisterFunction_private_offset);
	((ValaTypeRegisterFunctionClass *) klass)->get_type_declaration = (ValaTypeSymbol* (*) (ValaTypeRegisterFunction*)) vala_enum_register_function_real_get_type_declaration;
	((ValaTypeRegisterFunctionClass *) klass)->get_accessibility = (ValaSymbolAccessibility (*) (ValaTypeRegisterFunction*)) vala_enum_register_function_real_get_accessibility;
}


static void
vala_enum_register_function_instance_init (ValaEnumRegisterFunction * self)
{
	self->priv = vala_enum_register_function_get_instance_private (self);
}


static void
vala_enum_register_function_finalize (ValaTypeRegisterFunction * obj)
{
	ValaEnumRegisterFunction * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ENUM_REGISTER_FUNCTION, ValaEnumRegisterFunction);
	VALA_TYPEREGISTER_FUNCTION_CLASS (vala_enum_register_function_parent_class)->finalize (obj);
}


/**
 * C function to register an enum at runtime.
 */
GType
vala_enum_register_function_get_type (void)
{
	static volatile gsize vala_enum_register_function_type_id__volatile = 0;
	if (g_once_init_enter (&vala_enum_register_function_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaEnumRegisterFunctionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_enum_register_function_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaEnumRegisterFunction), 0, (GInstanceInitFunc) vala_enum_register_function_instance_init, NULL };
		GType vala_enum_register_function_type_id;
		vala_enum_register_function_type_id = g_type_register_static (VALA_TYPE_TYPEREGISTER_FUNCTION, "ValaEnumRegisterFunction", &g_define_type_info, 0);
		ValaEnumRegisterFunction_private_offset = g_type_add_instance_private (vala_enum_register_function_type_id, sizeof (ValaEnumRegisterFunctionPrivate));
		g_once_init_leave (&vala_enum_register_function_type_id__volatile, vala_enum_register_function_type_id);
	}
	return vala_enum_register_function_type_id__volatile;
}



