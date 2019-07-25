/* valatypesymbol.c generated by valac, the Vala compiler
 * generated from valatypesymbol.vala, do not modify */

/* valatypesymbol.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
 * Copyright (C) 2006-2008  Raffaele Sandrini
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
 *	Raffaele Sandrini <raffaele@sandrini.ch>
 */


#include <glib.h>
#include <glib-object.h>
#include "vala.h"
#include <stdlib.h>
#include <string.h>



static gpointer vala_typesymbol_parent_class = NULL;

static gboolean vala_typesymbol_real_is_reference_type (ValaTypeSymbol* self);
static gboolean vala_typesymbol_real_is_subtype_of (ValaTypeSymbol* self,
                                             ValaTypeSymbol* t);
static gint vala_typesymbol_real_get_type_parameter_index (ValaTypeSymbol* self,
                                                    const gchar* name);


ValaTypeSymbol*
vala_typesymbol_construct (GType object_type,
                           const gchar* name,
                           ValaSourceReference* source_reference,
                           ValaComment* comment)
{
	ValaTypeSymbol* self = NULL;
	self = (ValaTypeSymbol*) vala_symbol_construct (object_type, name, source_reference, comment);
	return self;
}


/**
 * Checks whether this data type has value or reference type semantics.
 *
 * @return true if this data type has reference type semantics
 */
static gboolean
vala_typesymbol_real_is_reference_type (ValaTypeSymbol* self)
{
	gboolean result = FALSE;
	result = FALSE;
	return result;
}


gboolean
vala_typesymbol_is_reference_type (ValaTypeSymbol* self)
{
	g_return_val_if_fail (self != NULL, FALSE);
	return VALA_TYPESYMBOL_GET_CLASS (self)->is_reference_type (self);
}


/**
 * Checks whether this data type is equal to or a subtype of the
 * specified data type.
 *
 * @param t a data type
 * @return  true if t is a supertype of this data type, false otherwise
 */
static gboolean
vala_typesymbol_real_is_subtype_of (ValaTypeSymbol* self,
                                    ValaTypeSymbol* t)
{
	gboolean result = FALSE;
	g_return_val_if_fail (t != NULL, FALSE);
	result = self == t;
	return result;
}


gboolean
vala_typesymbol_is_subtype_of (ValaTypeSymbol* self,
                               ValaTypeSymbol* t)
{
	g_return_val_if_fail (self != NULL, FALSE);
	return VALA_TYPESYMBOL_GET_CLASS (self)->is_subtype_of (self, t);
}


/**
 * Return the index of the specified type parameter name.
 */
static gint
vala_typesymbol_real_get_type_parameter_index (ValaTypeSymbol* self,
                                               const gchar* name)
{
	gint result = 0;
	g_return_val_if_fail (name != NULL, 0);
	result = -1;
	return result;
}


gint
vala_typesymbol_get_type_parameter_index (ValaTypeSymbol* self,
                                          const gchar* name)
{
	g_return_val_if_fail (self != NULL, 0);
	return VALA_TYPESYMBOL_GET_CLASS (self)->get_type_parameter_index (self, name);
}


static void
vala_typesymbol_class_init (ValaTypeSymbolClass * klass)
{
	vala_typesymbol_parent_class = g_type_class_peek_parent (klass);
	((ValaTypeSymbolClass *) klass)->is_reference_type = (gboolean (*) (ValaTypeSymbol*)) vala_typesymbol_real_is_reference_type;
	((ValaTypeSymbolClass *) klass)->is_subtype_of = (gboolean (*) (ValaTypeSymbol*, ValaTypeSymbol*)) vala_typesymbol_real_is_subtype_of;
	((ValaTypeSymbolClass *) klass)->get_type_parameter_index = (gint (*) (ValaTypeSymbol*, const gchar*)) vala_typesymbol_real_get_type_parameter_index;
}


static void
vala_typesymbol_instance_init (ValaTypeSymbol * self)
{
}


/**
 * Represents a runtime data type. This data type may be defined in Vala source
 * code or imported from an external library with a Vala API file.
 */
GType
vala_typesymbol_get_type (void)
{
	static volatile gsize vala_typesymbol_type_id__volatile = 0;
	if (g_once_init_enter (&vala_typesymbol_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaTypeSymbolClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_typesymbol_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaTypeSymbol), 0, (GInstanceInitFunc) vala_typesymbol_instance_init, NULL };
		GType vala_typesymbol_type_id;
		vala_typesymbol_type_id = g_type_register_static (VALA_TYPE_SYMBOL, "ValaTypeSymbol", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		g_once_init_leave (&vala_typesymbol_type_id__volatile, vala_typesymbol_type_id);
	}
	return vala_typesymbol_type_id__volatile;
}



