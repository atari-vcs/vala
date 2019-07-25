/* valasourcereference.c generated by valac, the Vala compiler
 * generated from valasourcereference.vala, do not modify */

/* valasourcereference.vala
 *
 * Copyright (C) 2006-2012  Jürg Billeter
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
#include <valagee.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>

#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
typedef struct _ValaParamSpecSourceReference ValaParamSpecSourceReference;

struct _ValaSourceReferencePrivate {
	ValaSourceFile* _file;
	ValaSourceLocation _begin;
	ValaSourceLocation _end;
	ValaList* _using_directives;
};

struct _ValaParamSpecSourceReference {
	GParamSpec parent_instance;
};


static gint ValaSourceReference_private_offset;
static gpointer vala_source_reference_parent_class = NULL;

static void vala_source_reference_set_using_directives (ValaSourceReference* self,
                                                 ValaList* value);
static void vala_source_reference_finalize (ValaSourceReference * obj);


static inline gpointer
vala_source_reference_get_instance_private (ValaSourceReference* self)
{
	return G_STRUCT_MEMBER_P (self, ValaSourceReference_private_offset);
}


/**
 * Creates a new source reference.
 *
 * @param _file        a source file
 * @param begin        the begin of the referenced source code
 * @param end          the end of the referenced source code
 * @return             newly created source reference
 */
ValaSourceReference*
vala_source_reference_construct (GType object_type,
                                 ValaSourceFile* _file,
                                 ValaSourceLocation* begin,
                                 ValaSourceLocation* end)
{
	ValaSourceReference* self = NULL;
	ValaSourceLocation _tmp0_;
	ValaSourceLocation _tmp1_;
	ValaSourceFile* _tmp2_;
	ValaList* _tmp3_;
	ValaList* _tmp4_;
	g_return_val_if_fail (_file != NULL, NULL);
	g_return_val_if_fail (begin != NULL, NULL);
	g_return_val_if_fail (end != NULL, NULL);
	self = (ValaSourceReference*) g_type_create_instance (object_type);
	vala_source_reference_set_file (self, _file);
	_tmp0_ = *begin;
	vala_source_reference_set_begin (self, &_tmp0_);
	_tmp1_ = *end;
	vala_source_reference_set_end (self, &_tmp1_);
	_tmp2_ = self->priv->_file;
	_tmp3_ = vala_source_file_get_current_using_directives (_tmp2_);
	_tmp4_ = _tmp3_;
	vala_source_reference_set_using_directives (self, _tmp4_);
	return self;
}


ValaSourceReference*
vala_source_reference_new (ValaSourceFile* _file,
                           ValaSourceLocation* begin,
                           ValaSourceLocation* end)
{
	return vala_source_reference_construct (VALA_TYPE_SOURCE_REFERENCE, _file, begin, end);
}


/**
 * Returns a string representation of this source reference.
 *
 * @return human-readable string
 */
gchar*
vala_source_reference_to_string (ValaSourceReference* self)
{
	gchar* result = NULL;
	ValaSourceFile* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	ValaSourceLocation _tmp3_;
	gint _tmp4_;
	ValaSourceLocation _tmp5_;
	gint _tmp6_;
	ValaSourceLocation _tmp7_;
	gint _tmp8_;
	ValaSourceLocation _tmp9_;
	gint _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_file;
	_tmp1_ = vala_source_file_get_relative_filename (_tmp0_);
	_tmp2_ = _tmp1_;
	_tmp3_ = self->priv->_begin;
	_tmp4_ = _tmp3_.line;
	_tmp5_ = self->priv->_begin;
	_tmp6_ = _tmp5_.column;
	_tmp7_ = self->priv->_end;
	_tmp8_ = _tmp7_.line;
	_tmp9_ = self->priv->_end;
	_tmp10_ = _tmp9_.column;
	_tmp11_ = g_strdup_printf ("%s:%d.%d-%d.%d", _tmp2_, _tmp4_, _tmp6_, _tmp8_, _tmp10_);
	_tmp12_ = _tmp11_;
	_g_free0 (_tmp2_);
	result = _tmp12_;
	return result;
}


ValaSourceFile*
vala_source_reference_get_file (ValaSourceReference* self)
{
	ValaSourceFile* result;
	ValaSourceFile* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_file;
	result = _tmp0_;
	return result;
}


void
vala_source_reference_set_file (ValaSourceReference* self,
                                ValaSourceFile* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_file = value;
}


void
vala_source_reference_get_begin (ValaSourceReference* self,
                                 ValaSourceLocation * result)
{
	ValaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_begin;
	*result = _tmp0_;
	return;
}


void
vala_source_reference_set_begin (ValaSourceReference* self,
                                 ValaSourceLocation * value)
{
	ValaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = *value;
	self->priv->_begin = _tmp0_;
}


void
vala_source_reference_get_end (ValaSourceReference* self,
                               ValaSourceLocation * result)
{
	ValaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_end;
	*result = _tmp0_;
	return;
}


void
vala_source_reference_set_end (ValaSourceReference* self,
                               ValaSourceLocation * value)
{
	ValaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = *value;
	self->priv->_end = _tmp0_;
}


ValaList*
vala_source_reference_get_using_directives (ValaSourceReference* self)
{
	ValaList* result;
	ValaList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_using_directives;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


static void
vala_source_reference_set_using_directives (ValaSourceReference* self,
                                            ValaList* value)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_iterable_ref0 (value);
	_vala_iterable_unref0 (self->priv->_using_directives);
	self->priv->_using_directives = _tmp0_;
}


static void
vala_value_source_reference_init (GValue* value)
{
	value->data[0].v_pointer = NULL;
}


static void
vala_value_source_reference_free_value (GValue* value)
{
	if (value->data[0].v_pointer) {
		vala_source_reference_unref (value->data[0].v_pointer);
	}
}


static void
vala_value_source_reference_copy_value (const GValue* src_value,
                                        GValue* dest_value)
{
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = vala_source_reference_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer
vala_value_source_reference_peek_pointer (const GValue* value)
{
	return value->data[0].v_pointer;
}


static gchar*
vala_value_source_reference_collect_value (GValue* value,
                                           guint n_collect_values,
                                           GTypeCValue* collect_values,
                                           guint collect_flags)
{
	if (collect_values[0].v_pointer) {
		ValaSourceReference * object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = vala_source_reference_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar*
vala_value_source_reference_lcopy_value (const GValue* value,
                                         guint n_collect_values,
                                         GTypeCValue* collect_values,
                                         guint collect_flags)
{
	ValaSourceReference ** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = vala_source_reference_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec*
vala_param_spec_source_reference (const gchar* name,
                                  const gchar* nick,
                                  const gchar* blurb,
                                  GType object_type,
                                  GParamFlags flags)
{
	ValaParamSpecSourceReference* spec;
	g_return_val_if_fail (g_type_is_a (object_type, VALA_TYPE_SOURCE_REFERENCE), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer
vala_value_get_source_reference (const GValue* value)
{
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_SOURCE_REFERENCE), NULL);
	return value->data[0].v_pointer;
}


void
vala_value_set_source_reference (GValue* value,
                                 gpointer v_object)
{
	ValaSourceReference * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_SOURCE_REFERENCE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_SOURCE_REFERENCE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		vala_source_reference_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_source_reference_unref (old);
	}
}


void
vala_value_take_source_reference (GValue* value,
                                  gpointer v_object)
{
	ValaSourceReference * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_SOURCE_REFERENCE));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_SOURCE_REFERENCE));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_source_reference_unref (old);
	}
}


static void
vala_source_reference_class_init (ValaSourceReferenceClass * klass)
{
	vala_source_reference_parent_class = g_type_class_peek_parent (klass);
	((ValaSourceReferenceClass *) klass)->finalize = vala_source_reference_finalize;
	g_type_class_adjust_private_offset (klass, &ValaSourceReference_private_offset);
}


static void
vala_source_reference_instance_init (ValaSourceReference * self)
{
	self->priv = vala_source_reference_get_instance_private (self);
	self->ref_count = 1;
}


static void
vala_source_reference_finalize (ValaSourceReference * obj)
{
	ValaSourceReference * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference);
	g_signal_handlers_destroy (self);
	_vala_iterable_unref0 (self->priv->_using_directives);
}


/**
 * Represents a reference to a location in a source file.
 */
GType
vala_source_reference_get_type (void)
{
	static volatile gsize vala_source_reference_type_id__volatile = 0;
	if (g_once_init_enter (&vala_source_reference_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { vala_value_source_reference_init, vala_value_source_reference_free_value, vala_value_source_reference_copy_value, vala_value_source_reference_peek_pointer, "p", vala_value_source_reference_collect_value, "p", vala_value_source_reference_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ValaSourceReferenceClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_source_reference_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaSourceReference), 0, (GInstanceInitFunc) vala_source_reference_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType vala_source_reference_type_id;
		vala_source_reference_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValaSourceReference", &g_define_type_info, &g_define_type_fundamental_info, 0);
		ValaSourceReference_private_offset = g_type_add_instance_private (vala_source_reference_type_id, sizeof (ValaSourceReferencePrivate));
		g_once_init_leave (&vala_source_reference_type_id__volatile, vala_source_reference_type_id);
	}
	return vala_source_reference_type_id__volatile;
}


gpointer
vala_source_reference_ref (gpointer instance)
{
	ValaSourceReference * self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void
vala_source_reference_unref (gpointer instance)
{
	ValaSourceReference * self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		VALA_SOURCE_REFERENCE_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



