/* valaccodevariabledeclarator.c generated by valac, the Vala compiler
 * generated from valaccodevariabledeclarator.vala, do not modify */

/* valaccodevariabledeclarator.vala
 *
 * Copyright (C) 2006-2009  Jürg Billeter
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
#include <gobject/gvaluecollector.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _vala_ccode_declarator_suffix_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_declarator_suffix_unref (var), NULL)))
typedef struct _ValaParamSpecCCodeDeclaratorSuffix ValaParamSpecCCodeDeclaratorSuffix;

struct _ValaCCodeVariableDeclaratorPrivate {
	gchar* _name;
	ValaCCodeExpression* _initializer;
	ValaCCodeDeclaratorSuffix* _declarator_suffix;
	gboolean _init0;
};

struct _ValaCCodeDeclaratorSuffixPrivate {
	gboolean array;
	ValaCCodeExpression* array_length;
};

struct _ValaParamSpecCCodeDeclaratorSuffix {
	GParamSpec parent_instance;
};


static gint ValaCCodeVariableDeclarator_private_offset;
static gpointer vala_ccode_variable_declarator_parent_class = NULL;
static gint ValaCCodeDeclaratorSuffix_private_offset;
static gpointer vala_ccode_declarator_suffix_parent_class = NULL;

static void vala_ccode_variable_declarator_real_write (ValaCCodeNode* base,
                                                ValaCCodeWriter* writer);
static void vala_ccode_variable_declarator_real_write_declaration (ValaCCodeNode* base,
                                                            ValaCCodeWriter* writer);
static void vala_ccode_variable_declarator_real_write_initialization (ValaCCodeDeclarator* base,
                                                               ValaCCodeWriter* writer);
static void vala_ccode_variable_declarator_finalize (ValaCCodeNode * obj);
static void vala_ccode_declarator_suffix_finalize (ValaCCodeDeclaratorSuffix * obj);


static inline gpointer
vala_ccode_variable_declarator_get_instance_private (ValaCCodeVariableDeclarator* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeVariableDeclarator_private_offset);
}


ValaCCodeVariableDeclarator*
vala_ccode_variable_declarator_construct (GType object_type,
                                          const gchar* name,
                                          ValaCCodeExpression* initializer,
                                          ValaCCodeDeclaratorSuffix* declarator_suffix)
{
	ValaCCodeVariableDeclarator* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaCCodeVariableDeclarator*) vala_ccode_declarator_construct (object_type);
	vala_ccode_variable_declarator_set_name (self, name);
	vala_ccode_variable_declarator_set_initializer (self, initializer);
	vala_ccode_variable_declarator_set_declarator_suffix (self, declarator_suffix);
	return self;
}


ValaCCodeVariableDeclarator*
vala_ccode_variable_declarator_new (const gchar* name,
                                    ValaCCodeExpression* initializer,
                                    ValaCCodeDeclaratorSuffix* declarator_suffix)
{
	return vala_ccode_variable_declarator_construct (VALA_TYPE_CCODE_VARIABLE_DECLARATOR, name, initializer, declarator_suffix);
}


ValaCCodeVariableDeclarator*
vala_ccode_variable_declarator_construct_zero (GType object_type,
                                               const gchar* name,
                                               ValaCCodeExpression* initializer,
                                               ValaCCodeDeclaratorSuffix* declarator_suffix)
{
	ValaCCodeVariableDeclarator* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaCCodeVariableDeclarator*) vala_ccode_declarator_construct (object_type);
	vala_ccode_variable_declarator_set_name (self, name);
	vala_ccode_variable_declarator_set_initializer (self, initializer);
	vala_ccode_variable_declarator_set_declarator_suffix (self, declarator_suffix);
	vala_ccode_variable_declarator_set_init0 (self, TRUE);
	return self;
}


ValaCCodeVariableDeclarator*
vala_ccode_variable_declarator_new_zero (const gchar* name,
                                         ValaCCodeExpression* initializer,
                                         ValaCCodeDeclaratorSuffix* declarator_suffix)
{
	return vala_ccode_variable_declarator_construct_zero (VALA_TYPE_CCODE_VARIABLE_DECLARATOR, name, initializer, declarator_suffix);
}


static void
vala_ccode_variable_declarator_real_write (ValaCCodeNode* base,
                                           ValaCCodeWriter* writer)
{
	ValaCCodeVariableDeclarator * self;
	const gchar* _tmp0_;
	ValaCCodeDeclaratorSuffix* _tmp1_;
	ValaCCodeExpression* _tmp3_;
	self = (ValaCCodeVariableDeclarator*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_name;
	vala_ccode_writer_write_string (writer, _tmp0_);
	_tmp1_ = self->priv->_declarator_suffix;
	if (_tmp1_ != NULL) {
		ValaCCodeDeclaratorSuffix* _tmp2_;
		_tmp2_ = self->priv->_declarator_suffix;
		vala_ccode_declarator_suffix_write (_tmp2_, writer);
	}
	_tmp3_ = self->priv->_initializer;
	if (_tmp3_ != NULL) {
		ValaCCodeExpression* _tmp4_;
		vala_ccode_writer_write_string (writer, " = ");
		_tmp4_ = self->priv->_initializer;
		vala_ccode_node_write ((ValaCCodeNode*) _tmp4_, writer);
	}
}


static void
vala_ccode_variable_declarator_real_write_declaration (ValaCCodeNode* base,
                                                       ValaCCodeWriter* writer)
{
	ValaCCodeVariableDeclarator * self;
	const gchar* _tmp0_;
	ValaCCodeDeclaratorSuffix* _tmp1_;
	gboolean _tmp3_ = FALSE;
	ValaCCodeExpression* _tmp4_;
	self = (ValaCCodeVariableDeclarator*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_name;
	vala_ccode_writer_write_string (writer, _tmp0_);
	_tmp1_ = self->priv->_declarator_suffix;
	if (_tmp1_ != NULL) {
		ValaCCodeDeclaratorSuffix* _tmp2_;
		_tmp2_ = self->priv->_declarator_suffix;
		vala_ccode_declarator_suffix_write (_tmp2_, writer);
	}
	_tmp4_ = self->priv->_initializer;
	if (_tmp4_ != NULL) {
		gboolean _tmp5_;
		_tmp5_ = self->priv->_init0;
		_tmp3_ = _tmp5_;
	} else {
		_tmp3_ = FALSE;
	}
	if (_tmp3_) {
		ValaCCodeExpression* _tmp6_;
		vala_ccode_writer_write_string (writer, " = ");
		_tmp6_ = self->priv->_initializer;
		vala_ccode_node_write ((ValaCCodeNode*) _tmp6_, writer);
	}
}


static void
vala_ccode_variable_declarator_real_write_initialization (ValaCCodeDeclarator* base,
                                                          ValaCCodeWriter* writer)
{
	ValaCCodeVariableDeclarator * self;
	gboolean _tmp0_ = FALSE;
	ValaCCodeExpression* _tmp1_;
	self = (ValaCCodeVariableDeclarator*) base;
	g_return_if_fail (writer != NULL);
	_tmp1_ = self->priv->_initializer;
	if (_tmp1_ != NULL) {
		gboolean _tmp2_;
		_tmp2_ = self->priv->_init0;
		_tmp0_ = !_tmp2_;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		ValaCCodeLineDirective* _tmp3_;
		ValaCCodeLineDirective* _tmp4_;
		const gchar* _tmp5_;
		ValaCCodeExpression* _tmp6_;
		_tmp3_ = vala_ccode_node_get_line ((ValaCCodeNode*) self);
		_tmp4_ = _tmp3_;
		vala_ccode_writer_write_indent (writer, _tmp4_);
		_tmp5_ = self->priv->_name;
		vala_ccode_writer_write_string (writer, _tmp5_);
		vala_ccode_writer_write_string (writer, " = ");
		_tmp6_ = self->priv->_initializer;
		vala_ccode_node_write ((ValaCCodeNode*) _tmp6_, writer);
		vala_ccode_writer_write_string (writer, ";");
		vala_ccode_writer_write_newline (writer);
	}
}


const gchar*
vala_ccode_variable_declarator_get_name (ValaCCodeVariableDeclarator* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void
vala_ccode_variable_declarator_set_name (ValaCCodeVariableDeclarator* self,
                                         const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
}


ValaCCodeExpression*
vala_ccode_variable_declarator_get_initializer (ValaCCodeVariableDeclarator* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_initializer;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_ccode_node_ref0 (gpointer self)
{
	return self ? vala_ccode_node_ref (self) : NULL;
}


void
vala_ccode_variable_declarator_set_initializer (ValaCCodeVariableDeclarator* self,
                                                ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_initializer);
	self->priv->_initializer = _tmp0_;
}


ValaCCodeDeclaratorSuffix*
vala_ccode_variable_declarator_get_declarator_suffix (ValaCCodeVariableDeclarator* self)
{
	ValaCCodeDeclaratorSuffix* result;
	ValaCCodeDeclaratorSuffix* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_declarator_suffix;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_ccode_declarator_suffix_ref0 (gpointer self)
{
	return self ? vala_ccode_declarator_suffix_ref (self) : NULL;
}


void
vala_ccode_variable_declarator_set_declarator_suffix (ValaCCodeVariableDeclarator* self,
                                                      ValaCCodeDeclaratorSuffix* value)
{
	ValaCCodeDeclaratorSuffix* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_declarator_suffix_ref0 (value);
	_vala_ccode_declarator_suffix_unref0 (self->priv->_declarator_suffix);
	self->priv->_declarator_suffix = _tmp0_;
}


gboolean
vala_ccode_variable_declarator_get_init0 (ValaCCodeVariableDeclarator* self)
{
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_init0;
	result = _tmp0_;
	return result;
}


void
vala_ccode_variable_declarator_set_init0 (ValaCCodeVariableDeclarator* self,
                                          gboolean value)
{
	g_return_if_fail (self != NULL);
	self->priv->_init0 = value;
}


static void
vala_ccode_variable_declarator_class_init (ValaCCodeVariableDeclaratorClass * klass)
{
	vala_ccode_variable_declarator_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_variable_declarator_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeVariableDeclarator_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_variable_declarator_real_write;
	((ValaCCodeNodeClass *) klass)->write_declaration = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_variable_declarator_real_write_declaration;
	((ValaCCodeDeclaratorClass *) klass)->write_initialization = (void (*) (ValaCCodeDeclarator*, ValaCCodeWriter*)) vala_ccode_variable_declarator_real_write_initialization;
}


static void
vala_ccode_variable_declarator_instance_init (ValaCCodeVariableDeclarator * self)
{
	self->priv = vala_ccode_variable_declarator_get_instance_private (self);
}


static void
vala_ccode_variable_declarator_finalize (ValaCCodeNode * obj)
{
	ValaCCodeVariableDeclarator * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_VARIABLE_DECLARATOR, ValaCCodeVariableDeclarator);
	_g_free0 (self->priv->_name);
	_vala_ccode_node_unref0 (self->priv->_initializer);
	_vala_ccode_declarator_suffix_unref0 (self->priv->_declarator_suffix);
	VALA_CCODE_NODE_CLASS (vala_ccode_variable_declarator_parent_class)->finalize (obj);
}


/**
 * Represents a variable declarator in the C code.
 */
GType
vala_ccode_variable_declarator_get_type (void)
{
	static volatile gsize vala_ccode_variable_declarator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_variable_declarator_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeVariableDeclaratorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_variable_declarator_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeVariableDeclarator), 0, (GInstanceInitFunc) vala_ccode_variable_declarator_instance_init, NULL };
		GType vala_ccode_variable_declarator_type_id;
		vala_ccode_variable_declarator_type_id = g_type_register_static (VALA_TYPE_CCODE_DECLARATOR, "ValaCCodeVariableDeclarator", &g_define_type_info, 0);
		ValaCCodeVariableDeclarator_private_offset = g_type_add_instance_private (vala_ccode_variable_declarator_type_id, sizeof (ValaCCodeVariableDeclaratorPrivate));
		g_once_init_leave (&vala_ccode_variable_declarator_type_id__volatile, vala_ccode_variable_declarator_type_id);
	}
	return vala_ccode_variable_declarator_type_id__volatile;
}


static inline gpointer
vala_ccode_declarator_suffix_get_instance_private (ValaCCodeDeclaratorSuffix* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeDeclaratorSuffix_private_offset);
}


ValaCCodeDeclaratorSuffix*
vala_ccode_declarator_suffix_construct_with_array (GType object_type,
                                                   ValaCCodeExpression* array_length)
{
	ValaCCodeDeclaratorSuffix* self = NULL;
	ValaCCodeExpression* _tmp0_;
	self = (ValaCCodeDeclaratorSuffix*) g_type_create_instance (object_type);
	_tmp0_ = _vala_ccode_node_ref0 (array_length);
	_vala_ccode_node_unref0 (self->priv->array_length);
	self->priv->array_length = _tmp0_;
	self->priv->array = TRUE;
	return self;
}


ValaCCodeDeclaratorSuffix*
vala_ccode_declarator_suffix_new_with_array (ValaCCodeExpression* array_length)
{
	return vala_ccode_declarator_suffix_construct_with_array (VALA_TYPE_CCODE_DECLARATOR_SUFFIX, array_length);
}


void
vala_ccode_declarator_suffix_write (ValaCCodeDeclaratorSuffix* self,
                                    ValaCCodeWriter* writer)
{
	gboolean _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->array;
	if (_tmp0_) {
		ValaCCodeExpression* _tmp1_;
		vala_ccode_writer_write_string (writer, "[");
		_tmp1_ = self->priv->array_length;
		if (_tmp1_ != NULL) {
			ValaCCodeExpression* _tmp2_;
			_tmp2_ = self->priv->array_length;
			vala_ccode_node_write ((ValaCCodeNode*) _tmp2_, writer);
		}
		vala_ccode_writer_write_string (writer, "]");
	}
}


ValaCCodeDeclaratorSuffix*
vala_ccode_declarator_suffix_construct (GType object_type)
{
	ValaCCodeDeclaratorSuffix* self = NULL;
	self = (ValaCCodeDeclaratorSuffix*) g_type_create_instance (object_type);
	return self;
}


ValaCCodeDeclaratorSuffix*
vala_ccode_declarator_suffix_new (void)
{
	return vala_ccode_declarator_suffix_construct (VALA_TYPE_CCODE_DECLARATOR_SUFFIX);
}


static void
vala_value_ccode_declarator_suffix_init (GValue* value)
{
	value->data[0].v_pointer = NULL;
}


static void
vala_value_ccode_declarator_suffix_free_value (GValue* value)
{
	if (value->data[0].v_pointer) {
		vala_ccode_declarator_suffix_unref (value->data[0].v_pointer);
	}
}


static void
vala_value_ccode_declarator_suffix_copy_value (const GValue* src_value,
                                               GValue* dest_value)
{
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = vala_ccode_declarator_suffix_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer
vala_value_ccode_declarator_suffix_peek_pointer (const GValue* value)
{
	return value->data[0].v_pointer;
}


static gchar*
vala_value_ccode_declarator_suffix_collect_value (GValue* value,
                                                  guint n_collect_values,
                                                  GTypeCValue* collect_values,
                                                  guint collect_flags)
{
	if (collect_values[0].v_pointer) {
		ValaCCodeDeclaratorSuffix * object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = vala_ccode_declarator_suffix_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar*
vala_value_ccode_declarator_suffix_lcopy_value (const GValue* value,
                                                guint n_collect_values,
                                                GTypeCValue* collect_values,
                                                guint collect_flags)
{
	ValaCCodeDeclaratorSuffix ** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = vala_ccode_declarator_suffix_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec*
vala_param_spec_ccode_declarator_suffix (const gchar* name,
                                         const gchar* nick,
                                         const gchar* blurb,
                                         GType object_type,
                                         GParamFlags flags)
{
	ValaParamSpecCCodeDeclaratorSuffix* spec;
	g_return_val_if_fail (g_type_is_a (object_type, VALA_TYPE_CCODE_DECLARATOR_SUFFIX), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer
vala_value_get_ccode_declarator_suffix (const GValue* value)
{
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_DECLARATOR_SUFFIX), NULL);
	return value->data[0].v_pointer;
}


void
vala_value_set_ccode_declarator_suffix (GValue* value,
                                        gpointer v_object)
{
	ValaCCodeDeclaratorSuffix * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_DECLARATOR_SUFFIX));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_CCODE_DECLARATOR_SUFFIX));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		vala_ccode_declarator_suffix_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_ccode_declarator_suffix_unref (old);
	}
}


void
vala_value_take_ccode_declarator_suffix (GValue* value,
                                         gpointer v_object)
{
	ValaCCodeDeclaratorSuffix * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_DECLARATOR_SUFFIX));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_CCODE_DECLARATOR_SUFFIX));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_ccode_declarator_suffix_unref (old);
	}
}


static void
vala_ccode_declarator_suffix_class_init (ValaCCodeDeclaratorSuffixClass * klass)
{
	vala_ccode_declarator_suffix_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeDeclaratorSuffixClass *) klass)->finalize = vala_ccode_declarator_suffix_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeDeclaratorSuffix_private_offset);
}


static void
vala_ccode_declarator_suffix_instance_init (ValaCCodeDeclaratorSuffix * self)
{
	self->priv = vala_ccode_declarator_suffix_get_instance_private (self);
	self->ref_count = 1;
}


static void
vala_ccode_declarator_suffix_finalize (ValaCCodeDeclaratorSuffix * obj)
{
	ValaCCodeDeclaratorSuffix * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_DECLARATOR_SUFFIX, ValaCCodeDeclaratorSuffix);
	g_signal_handlers_destroy (self);
	_vala_ccode_node_unref0 (self->priv->array_length);
}


GType
vala_ccode_declarator_suffix_get_type (void)
{
	static volatile gsize vala_ccode_declarator_suffix_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_declarator_suffix_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { vala_value_ccode_declarator_suffix_init, vala_value_ccode_declarator_suffix_free_value, vala_value_ccode_declarator_suffix_copy_value, vala_value_ccode_declarator_suffix_peek_pointer, "p", vala_value_ccode_declarator_suffix_collect_value, "p", vala_value_ccode_declarator_suffix_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeDeclaratorSuffixClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_declarator_suffix_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeDeclaratorSuffix), 0, (GInstanceInitFunc) vala_ccode_declarator_suffix_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType vala_ccode_declarator_suffix_type_id;
		vala_ccode_declarator_suffix_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValaCCodeDeclaratorSuffix", &g_define_type_info, &g_define_type_fundamental_info, 0);
		ValaCCodeDeclaratorSuffix_private_offset = g_type_add_instance_private (vala_ccode_declarator_suffix_type_id, sizeof (ValaCCodeDeclaratorSuffixPrivate));
		g_once_init_leave (&vala_ccode_declarator_suffix_type_id__volatile, vala_ccode_declarator_suffix_type_id);
	}
	return vala_ccode_declarator_suffix_type_id__volatile;
}


gpointer
vala_ccode_declarator_suffix_ref (gpointer instance)
{
	ValaCCodeDeclaratorSuffix * self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void
vala_ccode_declarator_suffix_unref (gpointer instance)
{
	ValaCCodeDeclaratorSuffix * self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		VALA_CCODE_DECLARATOR_SUFFIX_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



