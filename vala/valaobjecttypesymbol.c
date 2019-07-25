/* valaobjecttypesymbol.c generated by valac, the Vala compiler
 * generated from valaobjecttypesymbol.vala, do not modify */

/* valaobjecttypesymbol.vala
 *
 * Copyright (C) 2008-2009  Jürg Billeter
 * Copyright (C) 2008  Philip Van Hoof
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
 * 	Philip Van Hoof <pvanhoof@gnome.org>
 */


#include <glib.h>
#include <glib-object.h>
#include "vala.h"
#include <valagee.h>
#include <stdlib.h>
#include <string.h>

#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaObjectTypeSymbolPrivate {
	ValaList* type_parameters;
	ValaList* members;
	ValaList* fields;
	ValaList* methods;
	ValaList* properties;
	ValaList* signals;
	ValaList* classes;
	ValaList* structs;
	ValaList* enums;
	ValaList* delegates;
	ValaList* constants;
};


static gint ValaObjectTypeSymbol_private_offset;
static gpointer vala_object_type_symbol_parent_class = NULL;

static void vala_object_type_symbol_real_add_field (ValaSymbol* base,
                                             ValaField* f);
static void vala_object_type_symbol_real_add_method (ValaSymbol* base,
                                              ValaMethod* m);
static void vala_object_type_symbol_real_add_property (ValaSymbol* base,
                                                ValaProperty* prop);
static void vala_object_type_symbol_real_add_signal (ValaSymbol* base,
                                              ValaSignal* sig);
static void vala_object_type_symbol_real_add_class (ValaSymbol* base,
                                             ValaClass* cl);
static void vala_object_type_symbol_real_add_struct (ValaSymbol* base,
                                              ValaStruct* st);
static void vala_object_type_symbol_real_add_enum (ValaSymbol* base,
                                            ValaEnum* en);
static void vala_object_type_symbol_real_add_delegate (ValaSymbol* base,
                                                ValaDelegate* d);
static void vala_object_type_symbol_real_add_constant (ValaSymbol* base,
                                                ValaConstant* c);
static gint vala_object_type_symbol_real_get_type_parameter_index (ValaTypeSymbol* base,
                                                            const gchar* name);
static void vala_object_type_symbol_finalize (ValaCodeNode * obj);


static inline gpointer
vala_object_type_symbol_get_instance_private (ValaObjectTypeSymbol* self)
{
	return G_STRUCT_MEMBER_P (self, ValaObjectTypeSymbol_private_offset);
}


ValaObjectTypeSymbol*
vala_object_type_symbol_construct (GType object_type,
                                   const gchar* name,
                                   ValaSourceReference* source_reference,
                                   ValaComment* comment)
{
	ValaObjectTypeSymbol* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaObjectTypeSymbol*) vala_typesymbol_construct (object_type, name, source_reference, comment);
	return self;
}


/**
 * Returns the list of members.
 *
 * @return list of members
 */
static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


ValaList*
vala_object_type_symbol_get_members (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->members;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Returns the list of fields.
 *
 * @return list of fields
 */
ValaList*
vala_object_type_symbol_get_fields (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->fields;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Returns the list of methods.
 *
 * @return list of methods
 */
ValaList*
vala_object_type_symbol_get_methods (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->methods;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Returns the list of properties.
 *
 * @return list of properties
 */
ValaList*
vala_object_type_symbol_get_properties (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->properties;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Returns the list of signals.
 *
 * @return list of signals
 */
ValaList*
vala_object_type_symbol_get_signals (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->signals;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Adds the specified field as a member to this object-symbol.
 *
 * @param f a field
 */
static void
vala_object_type_symbol_real_add_field (ValaSymbol* base,
                                        ValaField* f)
{
	ValaObjectTypeSymbol * self;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	ValaScope* _tmp2_;
	ValaScope* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	self = (ValaObjectTypeSymbol*) base;
	g_return_if_fail (f != NULL);
	_tmp0_ = self->priv->fields;
	vala_collection_add ((ValaCollection*) _tmp0_, f);
	_tmp1_ = self->priv->members;
	vala_collection_add ((ValaCollection*) _tmp1_, (ValaSymbol*) f);
	_tmp2_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_symbol_get_name ((ValaSymbol*) f);
	_tmp5_ = _tmp4_;
	vala_scope_add (_tmp3_, _tmp5_, (ValaSymbol*) f);
}


/**
 * Adds the specified method as a member to this object-symbol.
 *
 * @param m a method
 */
static void
vala_object_type_symbol_real_add_method (ValaSymbol* base,
                                         ValaMethod* m)
{
	ValaObjectTypeSymbol * self;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	ValaScope* _tmp2_;
	ValaScope* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	self = (ValaObjectTypeSymbol*) base;
	g_return_if_fail (m != NULL);
	_tmp0_ = self->priv->methods;
	vala_collection_add ((ValaCollection*) _tmp0_, m);
	_tmp1_ = self->priv->members;
	vala_collection_add ((ValaCollection*) _tmp1_, (ValaSymbol*) m);
	_tmp2_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_symbol_get_name ((ValaSymbol*) m);
	_tmp5_ = _tmp4_;
	vala_scope_add (_tmp3_, _tmp5_, (ValaSymbol*) m);
}


/**
 * Adds the specified property as a member to this object-symbol.
 *
 * @param prop a property
 */
static void
vala_object_type_symbol_real_add_property (ValaSymbol* base,
                                           ValaProperty* prop)
{
	ValaObjectTypeSymbol * self;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	ValaScope* _tmp2_;
	ValaScope* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	self = (ValaObjectTypeSymbol*) base;
	g_return_if_fail (prop != NULL);
	_tmp0_ = self->priv->properties;
	vala_collection_add ((ValaCollection*) _tmp0_, prop);
	_tmp1_ = self->priv->members;
	vala_collection_add ((ValaCollection*) _tmp1_, (ValaSymbol*) prop);
	_tmp2_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_symbol_get_name ((ValaSymbol*) prop);
	_tmp5_ = _tmp4_;
	vala_scope_add (_tmp3_, _tmp5_, (ValaSymbol*) prop);
}


/**
 * Adds the specified signal as a member to this object-symbol.
 *
 * @param sig a signal
 */
static void
vala_object_type_symbol_real_add_signal (ValaSymbol* base,
                                         ValaSignal* sig)
{
	ValaObjectTypeSymbol * self;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	ValaScope* _tmp2_;
	ValaScope* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	self = (ValaObjectTypeSymbol*) base;
	g_return_if_fail (sig != NULL);
	_tmp0_ = self->priv->signals;
	vala_collection_add ((ValaCollection*) _tmp0_, sig);
	_tmp1_ = self->priv->members;
	vala_collection_add ((ValaCollection*) _tmp1_, (ValaSymbol*) sig);
	_tmp2_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_symbol_get_name ((ValaSymbol*) sig);
	_tmp5_ = _tmp4_;
	vala_scope_add (_tmp3_, _tmp5_, (ValaSymbol*) sig);
}


/**
 * Returns the list of classes.
 *
 * @return list of classes
 */
ValaList*
vala_object_type_symbol_get_classes (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->classes;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Returns the list of structs.
 *
 * @return list of structs
 */
ValaList*
vala_object_type_symbol_get_structs (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->structs;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Returns the list of enums.
 *
 * @return list of enums
 */
ValaList*
vala_object_type_symbol_get_enums (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->enums;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Returns the list of delegates.
 *
 * @return list of delegates
 */
ValaList*
vala_object_type_symbol_get_delegates (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->delegates;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Adds the specified class as an inner class.
 *
 * @param cl a class
 */
static void
vala_object_type_symbol_real_add_class (ValaSymbol* base,
                                        ValaClass* cl)
{
	ValaObjectTypeSymbol * self;
	ValaList* _tmp0_;
	ValaScope* _tmp1_;
	ValaScope* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	self = (ValaObjectTypeSymbol*) base;
	g_return_if_fail (cl != NULL);
	_tmp0_ = self->priv->classes;
	vala_collection_add ((ValaCollection*) _tmp0_, cl);
	_tmp1_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp2_ = _tmp1_;
	_tmp3_ = vala_symbol_get_name ((ValaSymbol*) cl);
	_tmp4_ = _tmp3_;
	vala_scope_add (_tmp2_, _tmp4_, (ValaSymbol*) cl);
}


/**
 * Adds the specified struct as an inner struct.
 *
 * @param st a struct
 */
static void
vala_object_type_symbol_real_add_struct (ValaSymbol* base,
                                         ValaStruct* st)
{
	ValaObjectTypeSymbol * self;
	ValaList* _tmp0_;
	ValaScope* _tmp1_;
	ValaScope* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	self = (ValaObjectTypeSymbol*) base;
	g_return_if_fail (st != NULL);
	_tmp0_ = self->priv->structs;
	vala_collection_add ((ValaCollection*) _tmp0_, st);
	_tmp1_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp2_ = _tmp1_;
	_tmp3_ = vala_symbol_get_name ((ValaSymbol*) st);
	_tmp4_ = _tmp3_;
	vala_scope_add (_tmp2_, _tmp4_, (ValaSymbol*) st);
}


/**
 * Adds the specified enum as an inner enum.
 *
 * @param en an enum
 */
static void
vala_object_type_symbol_real_add_enum (ValaSymbol* base,
                                       ValaEnum* en)
{
	ValaObjectTypeSymbol * self;
	ValaList* _tmp0_;
	ValaScope* _tmp1_;
	ValaScope* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	self = (ValaObjectTypeSymbol*) base;
	g_return_if_fail (en != NULL);
	_tmp0_ = self->priv->enums;
	vala_collection_add ((ValaCollection*) _tmp0_, en);
	_tmp1_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp2_ = _tmp1_;
	_tmp3_ = vala_symbol_get_name ((ValaSymbol*) en);
	_tmp4_ = _tmp3_;
	vala_scope_add (_tmp2_, _tmp4_, (ValaSymbol*) en);
}


/**
 * Adds the specified delegate as an inner delegate.
 *
 * @param d a delegate
 */
static void
vala_object_type_symbol_real_add_delegate (ValaSymbol* base,
                                           ValaDelegate* d)
{
	ValaObjectTypeSymbol * self;
	ValaList* _tmp0_;
	ValaScope* _tmp1_;
	ValaScope* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	self = (ValaObjectTypeSymbol*) base;
	g_return_if_fail (d != NULL);
	_tmp0_ = self->priv->delegates;
	vala_collection_add ((ValaCollection*) _tmp0_, d);
	_tmp1_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp2_ = _tmp1_;
	_tmp3_ = vala_symbol_get_name ((ValaSymbol*) d);
	_tmp4_ = _tmp3_;
	vala_scope_add (_tmp2_, _tmp4_, (ValaSymbol*) d);
}


/**
 * Adds the specified constant as a member to this interface.
 *
 * @param c a constant
 */
static void
vala_object_type_symbol_real_add_constant (ValaSymbol* base,
                                           ValaConstant* c)
{
	ValaObjectTypeSymbol * self;
	ValaList* _tmp0_;
	ValaScope* _tmp1_;
	ValaScope* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	self = (ValaObjectTypeSymbol*) base;
	g_return_if_fail (c != NULL);
	_tmp0_ = self->priv->constants;
	vala_collection_add ((ValaCollection*) _tmp0_, c);
	_tmp1_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp2_ = _tmp1_;
	_tmp3_ = vala_symbol_get_name ((ValaSymbol*) c);
	_tmp4_ = _tmp3_;
	vala_scope_add (_tmp2_, _tmp4_, (ValaSymbol*) c);
}


/**
 * Returns the list of constants.
 *
 * @return list of constants
 */
ValaList*
vala_object_type_symbol_get_constants (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->constants;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Appends the specified parameter to the list of type parameters.
 *
 * @param p a type parameter
 */
void
vala_object_type_symbol_add_type_parameter (ValaObjectTypeSymbol* self,
                                            ValaTypeParameter* p)
{
	ValaList* _tmp0_;
	ValaScope* _tmp1_;
	ValaScope* _tmp2_;
	const gchar* _tmp3_;
	const gchar* _tmp4_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (p != NULL);
	_tmp0_ = self->priv->type_parameters;
	vala_collection_add ((ValaCollection*) _tmp0_, p);
	_tmp1_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp2_ = _tmp1_;
	_tmp3_ = vala_symbol_get_name ((ValaSymbol*) p);
	_tmp4_ = _tmp3_;
	vala_scope_add (_tmp2_, _tmp4_, (ValaSymbol*) p);
}


/**
 * Returns a copy of the type parameter list.
 *
 * @return list of type parameters
 */
ValaList*
vala_object_type_symbol_get_type_parameters (ValaObjectTypeSymbol* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->type_parameters;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static gint
vala_object_type_symbol_real_get_type_parameter_index (ValaTypeSymbol* base,
                                                       const gchar* name)
{
	ValaObjectTypeSymbol * self;
	gint result = 0;
	gint i = 0;
	self = (ValaObjectTypeSymbol*) base;
	g_return_val_if_fail (name != NULL, 0);
	i = 0;
	{
		ValaList* _parameter_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		gint _parameter_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _parameter_index = 0;
		_tmp0_ = self->priv->type_parameters;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_parameter_list = _tmp1_;
		_tmp2_ = _parameter_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_parameter_size = _tmp4_;
		_parameter_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			ValaTypeParameter* parameter = NULL;
			ValaList* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_;
			ValaTypeParameter* _tmp11_;
			const gchar* _tmp12_;
			const gchar* _tmp13_;
			gint _tmp14_;
			_tmp5_ = _parameter_index;
			_parameter_index = _tmp5_ + 1;
			_tmp6_ = _parameter_index;
			_tmp7_ = _parameter_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _parameter_list;
			_tmp9_ = _parameter_index;
			_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
			parameter = (ValaTypeParameter*) _tmp10_;
			_tmp11_ = parameter;
			_tmp12_ = vala_symbol_get_name ((ValaSymbol*) _tmp11_);
			_tmp13_ = _tmp12_;
			if (g_strcmp0 (_tmp13_, name) == 0) {
				result = i;
				_vala_code_node_unref0 (parameter);
				_vala_iterable_unref0 (_parameter_list);
				return result;
			}
			_tmp14_ = i;
			i = _tmp14_ + 1;
			_vala_code_node_unref0 (parameter);
		}
		_vala_iterable_unref0 (_parameter_list);
	}
	result = -1;
	return result;
}


ValaObjectType*
vala_object_type_symbol_get_this_type (ValaObjectTypeSymbol* self)
{
	ValaObjectType* result = NULL;
	ValaObjectType* _result_ = NULL;
	ValaObjectType* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = vala_object_type_new (self);
	_result_ = _tmp0_;
	{
		ValaList* _type_parameter_list = NULL;
		ValaList* _tmp1_;
		gint _type_parameter_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _type_parameter_index = 0;
		_tmp1_ = vala_object_type_symbol_get_type_parameters (self);
		_type_parameter_list = _tmp1_;
		_tmp2_ = _type_parameter_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_type_parameter_size = _tmp4_;
		_type_parameter_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			ValaTypeParameter* type_parameter = NULL;
			ValaList* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_;
			ValaGenericType* type_arg = NULL;
			ValaTypeParameter* _tmp11_;
			ValaGenericType* _tmp12_;
			ValaGenericType* _tmp13_;
			ValaObjectType* _tmp14_;
			ValaGenericType* _tmp15_;
			_tmp5_ = _type_parameter_index;
			_type_parameter_index = _tmp5_ + 1;
			_tmp6_ = _type_parameter_index;
			_tmp7_ = _type_parameter_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _type_parameter_list;
			_tmp9_ = _type_parameter_index;
			_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
			type_parameter = (ValaTypeParameter*) _tmp10_;
			_tmp11_ = type_parameter;
			_tmp12_ = vala_generic_type_new (_tmp11_);
			type_arg = _tmp12_;
			_tmp13_ = type_arg;
			vala_data_type_set_value_owned ((ValaDataType*) _tmp13_, TRUE);
			_tmp14_ = _result_;
			_tmp15_ = type_arg;
			vala_data_type_add_type_argument ((ValaDataType*) _tmp14_, (ValaDataType*) _tmp15_);
			_vala_code_node_unref0 (type_arg);
			_vala_code_node_unref0 (type_parameter);
		}
		_vala_iterable_unref0 (_type_parameter_list);
	}
	result = _result_;
	return result;
}


/**
 * Adds the specified method as a hidden member to this class,
 * primarily used for default signal handlers.
 *
 * The hidden methods are not part of the `methods` collection.
 *
 * There may also be other use cases, eg, convert array.resize() to
 * this type of method?
 *
 * @param m a method
 */
void
vala_object_type_symbol_add_hidden_method (ValaObjectTypeSymbol* self,
                                           ValaMethod* m)
{
	ValaMemberBinding _tmp0_;
	ValaMemberBinding _tmp1_;
	gboolean _tmp22_ = FALSE;
	ValaDataType* _tmp23_;
	ValaDataType* _tmp24_;
	ValaScope* _tmp45_;
	ValaScope* _tmp46_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (m != NULL);
	_tmp0_ = vala_method_get_binding (m);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == VALA_MEMBER_BINDING_INSTANCE) {
		ValaParameter* _tmp2_;
		ValaParameter* _tmp3_;
		ValaObjectType* _tmp10_;
		ValaObjectType* _tmp11_;
		ValaParameter* _tmp12_;
		ValaParameter* _tmp13_;
		ValaScope* _tmp14_;
		ValaScope* _tmp15_;
		ValaParameter* _tmp16_;
		ValaParameter* _tmp17_;
		const gchar* _tmp18_;
		const gchar* _tmp19_;
		ValaParameter* _tmp20_;
		ValaParameter* _tmp21_;
		_tmp2_ = vala_method_get_this_parameter (m);
		_tmp3_ = _tmp2_;
		if (_tmp3_ != NULL) {
			ValaScope* _tmp4_;
			ValaScope* _tmp5_;
			ValaParameter* _tmp6_;
			ValaParameter* _tmp7_;
			const gchar* _tmp8_;
			const gchar* _tmp9_;
			_tmp4_ = vala_symbol_get_scope ((ValaSymbol*) m);
			_tmp5_ = _tmp4_;
			_tmp6_ = vala_method_get_this_parameter (m);
			_tmp7_ = _tmp6_;
			_tmp8_ = vala_symbol_get_name ((ValaSymbol*) _tmp7_);
			_tmp9_ = _tmp8_;
			vala_scope_remove (_tmp5_, _tmp9_);
		}
		_tmp10_ = vala_object_type_symbol_get_this_type (self);
		_tmp11_ = _tmp10_;
		_tmp12_ = vala_parameter_new ("this", (ValaDataType*) _tmp11_, NULL);
		_tmp13_ = _tmp12_;
		vala_method_set_this_parameter (m, _tmp13_);
		_vala_code_node_unref0 (_tmp13_);
		_vala_code_node_unref0 (_tmp11_);
		_tmp14_ = vala_symbol_get_scope ((ValaSymbol*) m);
		_tmp15_ = _tmp14_;
		_tmp16_ = vala_method_get_this_parameter (m);
		_tmp17_ = _tmp16_;
		_tmp18_ = vala_symbol_get_name ((ValaSymbol*) _tmp17_);
		_tmp19_ = _tmp18_;
		_tmp20_ = vala_method_get_this_parameter (m);
		_tmp21_ = _tmp20_;
		vala_scope_add (_tmp15_, _tmp19_, (ValaSymbol*) _tmp21_);
	}
	_tmp23_ = vala_callable_get_return_type ((ValaCallable*) m);
	_tmp24_ = _tmp23_;
	if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp24_, VALA_TYPE_VOID_TYPE)) {
		ValaList* _tmp25_;
		ValaList* _tmp26_;
		gint _tmp27_;
		gint _tmp28_;
		_tmp25_ = vala_method_get_postconditions (m);
		_tmp26_ = _tmp25_;
		_tmp27_ = vala_collection_get_size ((ValaCollection*) _tmp26_);
		_tmp28_ = _tmp27_;
		_tmp22_ = _tmp28_ > 0;
		_vala_iterable_unref0 (_tmp26_);
	} else {
		_tmp22_ = FALSE;
	}
	if (_tmp22_) {
		ValaLocalVariable* _tmp29_;
		ValaLocalVariable* _tmp30_;
		ValaDataType* _tmp37_;
		ValaDataType* _tmp38_;
		ValaDataType* _tmp39_;
		ValaDataType* _tmp40_;
		ValaLocalVariable* _tmp41_;
		ValaLocalVariable* _tmp42_;
		ValaLocalVariable* _tmp43_;
		ValaLocalVariable* _tmp44_;
		_tmp29_ = vala_subroutine_get_result_var ((ValaSubroutine*) m);
		_tmp30_ = _tmp29_;
		if (_tmp30_ != NULL) {
			ValaScope* _tmp31_;
			ValaScope* _tmp32_;
			ValaLocalVariable* _tmp33_;
			ValaLocalVariable* _tmp34_;
			const gchar* _tmp35_;
			const gchar* _tmp36_;
			_tmp31_ = vala_symbol_get_scope ((ValaSymbol*) m);
			_tmp32_ = _tmp31_;
			_tmp33_ = vala_subroutine_get_result_var ((ValaSubroutine*) m);
			_tmp34_ = _tmp33_;
			_tmp35_ = vala_symbol_get_name ((ValaSymbol*) _tmp34_);
			_tmp36_ = _tmp35_;
			vala_scope_remove (_tmp32_, _tmp36_);
		}
		_tmp37_ = vala_callable_get_return_type ((ValaCallable*) m);
		_tmp38_ = _tmp37_;
		_tmp39_ = vala_data_type_copy (_tmp38_);
		_tmp40_ = _tmp39_;
		_tmp41_ = vala_local_variable_new (_tmp40_, "result", NULL, NULL);
		_tmp42_ = _tmp41_;
		vala_subroutine_set_result_var ((ValaSubroutine*) m, _tmp42_);
		_vala_code_node_unref0 (_tmp42_);
		_vala_code_node_unref0 (_tmp40_);
		_tmp43_ = vala_subroutine_get_result_var ((ValaSubroutine*) m);
		_tmp44_ = _tmp43_;
		vala_local_variable_set_is_result (_tmp44_, TRUE);
	}
	_tmp45_ = vala_symbol_get_scope ((ValaSymbol*) self);
	_tmp46_ = _tmp45_;
	vala_scope_add (_tmp46_, NULL, (ValaSymbol*) m);
}


static void
vala_object_type_symbol_class_init (ValaObjectTypeSymbolClass * klass)
{
	vala_object_type_symbol_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_object_type_symbol_finalize;
	g_type_class_adjust_private_offset (klass, &ValaObjectTypeSymbol_private_offset);
	((ValaSymbolClass *) klass)->add_field = (void (*) (ValaSymbol*, ValaField*)) vala_object_type_symbol_real_add_field;
	((ValaSymbolClass *) klass)->add_method = (void (*) (ValaSymbol*, ValaMethod*)) vala_object_type_symbol_real_add_method;
	((ValaSymbolClass *) klass)->add_property = (void (*) (ValaSymbol*, ValaProperty*)) vala_object_type_symbol_real_add_property;
	((ValaSymbolClass *) klass)->add_signal = (void (*) (ValaSymbol*, ValaSignal*)) vala_object_type_symbol_real_add_signal;
	((ValaSymbolClass *) klass)->add_class = (void (*) (ValaSymbol*, ValaClass*)) vala_object_type_symbol_real_add_class;
	((ValaSymbolClass *) klass)->add_struct = (void (*) (ValaSymbol*, ValaStruct*)) vala_object_type_symbol_real_add_struct;
	((ValaSymbolClass *) klass)->add_enum = (void (*) (ValaSymbol*, ValaEnum*)) vala_object_type_symbol_real_add_enum;
	((ValaSymbolClass *) klass)->add_delegate = (void (*) (ValaSymbol*, ValaDelegate*)) vala_object_type_symbol_real_add_delegate;
	((ValaSymbolClass *) klass)->add_constant = (void (*) (ValaSymbol*, ValaConstant*)) vala_object_type_symbol_real_add_constant;
	((ValaTypeSymbolClass *) klass)->get_type_parameter_index = (gint (*) (ValaTypeSymbol*, const gchar*)) vala_object_type_symbol_real_get_type_parameter_index;
}


static void
vala_object_type_symbol_instance_init (ValaObjectTypeSymbol * self)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	GEqualFunc _tmp2_;
	ValaArrayList* _tmp3_;
	GEqualFunc _tmp4_;
	ValaArrayList* _tmp5_;
	GEqualFunc _tmp6_;
	ValaArrayList* _tmp7_;
	GEqualFunc _tmp8_;
	ValaArrayList* _tmp9_;
	GEqualFunc _tmp10_;
	ValaArrayList* _tmp11_;
	GEqualFunc _tmp12_;
	ValaArrayList* _tmp13_;
	GEqualFunc _tmp14_;
	ValaArrayList* _tmp15_;
	GEqualFunc _tmp16_;
	ValaArrayList* _tmp17_;
	GEqualFunc _tmp18_;
	ValaArrayList* _tmp19_;
	GEqualFunc _tmp20_;
	ValaArrayList* _tmp21_;
	self->priv = vala_object_type_symbol_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_TYPEPARAMETER, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp0_);
	self->priv->type_parameters = (ValaList*) _tmp1_;
	_tmp2_ = g_direct_equal;
	_tmp3_ = vala_array_list_new (VALA_TYPE_SYMBOL, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp2_);
	self->priv->members = (ValaList*) _tmp3_;
	_tmp4_ = g_direct_equal;
	_tmp5_ = vala_array_list_new (VALA_TYPE_FIELD, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp4_);
	self->priv->fields = (ValaList*) _tmp5_;
	_tmp6_ = g_direct_equal;
	_tmp7_ = vala_array_list_new (VALA_TYPE_METHOD, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp6_);
	self->priv->methods = (ValaList*) _tmp7_;
	_tmp8_ = g_direct_equal;
	_tmp9_ = vala_array_list_new (VALA_TYPE_PROPERTY, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp8_);
	self->priv->properties = (ValaList*) _tmp9_;
	_tmp10_ = g_direct_equal;
	_tmp11_ = vala_array_list_new (VALA_TYPE_SIGNAL, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp10_);
	self->priv->signals = (ValaList*) _tmp11_;
	_tmp12_ = g_direct_equal;
	_tmp13_ = vala_array_list_new (VALA_TYPE_CLASS, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp12_);
	self->priv->classes = (ValaList*) _tmp13_;
	_tmp14_ = g_direct_equal;
	_tmp15_ = vala_array_list_new (VALA_TYPE_STRUCT, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp14_);
	self->priv->structs = (ValaList*) _tmp15_;
	_tmp16_ = g_direct_equal;
	_tmp17_ = vala_array_list_new (VALA_TYPE_ENUM, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp16_);
	self->priv->enums = (ValaList*) _tmp17_;
	_tmp18_ = g_direct_equal;
	_tmp19_ = vala_array_list_new (VALA_TYPE_DELEGATE, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp18_);
	self->priv->delegates = (ValaList*) _tmp19_;
	_tmp20_ = g_direct_equal;
	_tmp21_ = vala_array_list_new (VALA_TYPE_CONSTANT, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp20_);
	self->priv->constants = (ValaList*) _tmp21_;
}


static void
vala_object_type_symbol_finalize (ValaCodeNode * obj)
{
	ValaObjectTypeSymbol * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbol);
	_vala_iterable_unref0 (self->priv->type_parameters);
	_vala_iterable_unref0 (self->priv->members);
	_vala_iterable_unref0 (self->priv->fields);
	_vala_iterable_unref0 (self->priv->methods);
	_vala_iterable_unref0 (self->priv->properties);
	_vala_iterable_unref0 (self->priv->signals);
	_vala_iterable_unref0 (self->priv->classes);
	_vala_iterable_unref0 (self->priv->structs);
	_vala_iterable_unref0 (self->priv->enums);
	_vala_iterable_unref0 (self->priv->delegates);
	_vala_iterable_unref0 (self->priv->constants);
	VALA_CODE_NODE_CLASS (vala_object_type_symbol_parent_class)->finalize (obj);
}


/**
 * Represents a runtime data type for objects and interfaces. This data type may
 * be defined in Vala source code or imported from an external library with a
 * Vala API file.
 */
GType
vala_object_type_symbol_get_type (void)
{
	static volatile gsize vala_object_type_symbol_type_id__volatile = 0;
	if (g_once_init_enter (&vala_object_type_symbol_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaObjectTypeSymbolClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_object_type_symbol_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaObjectTypeSymbol), 0, (GInstanceInitFunc) vala_object_type_symbol_instance_init, NULL };
		GType vala_object_type_symbol_type_id;
		vala_object_type_symbol_type_id = g_type_register_static (VALA_TYPE_TYPESYMBOL, "ValaObjectTypeSymbol", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		ValaObjectTypeSymbol_private_offset = g_type_add_instance_private (vala_object_type_symbol_type_id, sizeof (ValaObjectTypeSymbolPrivate));
		g_once_init_leave (&vala_object_type_symbol_type_id__volatile, vala_object_type_symbol_type_id);
	}
	return vala_object_type_symbol_type_id__volatile;
}



