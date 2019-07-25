/* valaccodeparameter.c generated by valac, the Vala compiler
 * generated from valaccodeparameter.vala, do not modify */

/* valaccodeparameter.vala
 *
 * Copyright (C) 2006-2008  Jürg Billeter
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

struct _ValaCCodeParameterPrivate {
	gchar* _name;
	gchar* _type_name;
	gboolean _ellipsis;
};


static gint ValaCCodeParameter_private_offset;
static gpointer vala_ccode_parameter_parent_class = NULL;

static void vala_ccode_parameter_real_write (ValaCCodeNode* base,
                                      ValaCCodeWriter* writer);
static void vala_ccode_parameter_finalize (ValaCCodeNode * obj);


static inline gpointer
vala_ccode_parameter_get_instance_private (ValaCCodeParameter* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeParameter_private_offset);
}


ValaCCodeParameter*
vala_ccode_parameter_construct (GType object_type,
                                const gchar* n,
                                const gchar* type)
{
	ValaCCodeParameter* self = NULL;
	g_return_val_if_fail (n != NULL, NULL);
	g_return_val_if_fail (type != NULL, NULL);
	self = (ValaCCodeParameter*) vala_ccode_node_construct (object_type);
	vala_ccode_parameter_set_name (self, n);
	vala_ccode_parameter_set_type_name (self, type);
	return self;
}


ValaCCodeParameter*
vala_ccode_parameter_new (const gchar* n,
                          const gchar* type)
{
	return vala_ccode_parameter_construct (VALA_TYPE_CCODE_PARAMETER, n, type);
}


ValaCCodeParameter*
vala_ccode_parameter_construct_with_ellipsis (GType object_type)
{
	ValaCCodeParameter* self = NULL;
	self = (ValaCCodeParameter*) vala_ccode_node_construct (object_type);
	vala_ccode_parameter_set_ellipsis (self, TRUE);
	return self;
}


ValaCCodeParameter*
vala_ccode_parameter_new_with_ellipsis (void)
{
	return vala_ccode_parameter_construct_with_ellipsis (VALA_TYPE_CCODE_PARAMETER);
}


static void
vala_ccode_parameter_real_write (ValaCCodeNode* base,
                                 ValaCCodeWriter* writer)
{
	ValaCCodeParameter * self;
	gboolean _tmp0_;
	self = (ValaCCodeParameter*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_ellipsis;
	if (!_tmp0_) {
		const gchar* _tmp1_;
		const gchar* _tmp2_;
		_tmp1_ = self->priv->_type_name;
		vala_ccode_writer_write_string (writer, _tmp1_);
		vala_ccode_writer_write_string (writer, " ");
		_tmp2_ = self->priv->_name;
		vala_ccode_writer_write_string (writer, _tmp2_);
	} else {
		vala_ccode_writer_write_string (writer, "...");
	}
}


const gchar*
vala_ccode_parameter_get_name (ValaCCodeParameter* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void
vala_ccode_parameter_set_name (ValaCCodeParameter* self,
                               const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
}


const gchar*
vala_ccode_parameter_get_type_name (ValaCCodeParameter* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_type_name;
	result = _tmp0_;
	return result;
}


void
vala_ccode_parameter_set_type_name (ValaCCodeParameter* self,
                                    const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_type_name);
	self->priv->_type_name = _tmp0_;
}


gboolean
vala_ccode_parameter_get_ellipsis (ValaCCodeParameter* self)
{
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_ellipsis;
	result = _tmp0_;
	return result;
}


void
vala_ccode_parameter_set_ellipsis (ValaCCodeParameter* self,
                                   gboolean value)
{
	g_return_if_fail (self != NULL);
	self->priv->_ellipsis = value;
}


static void
vala_ccode_parameter_class_init (ValaCCodeParameterClass * klass)
{
	vala_ccode_parameter_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_parameter_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeParameter_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_parameter_real_write;
}


static void
vala_ccode_parameter_instance_init (ValaCCodeParameter * self)
{
	self->priv = vala_ccode_parameter_get_instance_private (self);
}


static void
vala_ccode_parameter_finalize (ValaCCodeNode * obj)
{
	ValaCCodeParameter * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_PARAMETER, ValaCCodeParameter);
	_g_free0 (self->priv->_name);
	_g_free0 (self->priv->_type_name);
	VALA_CCODE_NODE_CLASS (vala_ccode_parameter_parent_class)->finalize (obj);
}


/**
 * Represents a formal parameter in a C method signature.
 */
GType
vala_ccode_parameter_get_type (void)
{
	static volatile gsize vala_ccode_parameter_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_parameter_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeParameterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_parameter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeParameter), 0, (GInstanceInitFunc) vala_ccode_parameter_instance_init, NULL };
		GType vala_ccode_parameter_type_id;
		vala_ccode_parameter_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeParameter", &g_define_type_info, 0);
		ValaCCodeParameter_private_offset = g_type_add_instance_private (vala_ccode_parameter_type_id, sizeof (ValaCCodeParameterPrivate));
		g_once_init_leave (&vala_ccode_parameter_type_id__volatile, vala_ccode_parameter_type_id);
	}
	return vala_ccode_parameter_type_id__volatile;
}



