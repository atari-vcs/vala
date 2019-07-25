/* contentelement.c generated by valac, the Vala compiler
 * generated from contentelement.vala, do not modify */

/* contentelement.vala
 *
 * Copyright (C) 2008-2009 Didier Villevalois
 * Copyright (C) 2008-2012 Florian Brosch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */


#include <glib.h>
#include <glib-object.h>
#include "valadoc.h"
#include <stdlib.h>
#include <string.h>

enum  {
	VALADOC_CONTENT_CONTENT_ELEMENT_0_PROPERTY,
	VALADOC_CONTENT_CONTENT_ELEMENT_PARENT_PROPERTY,
	VALADOC_CONTENT_CONTENT_ELEMENT_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_content_element_properties[VALADOC_CONTENT_CONTENT_ELEMENT_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValadocContentContentElementPrivate {
	ValadocContentContentElement* _parent;
};


static gint ValadocContentContentElement_private_offset;
static gpointer valadoc_content_content_element_parent_class = NULL;

static ValadocContentContentElement* valadoc_content_content_element_real_copy (ValadocContentContentElement* self,
                                                                         ValadocContentContentElement* new_parent);
static void valadoc_content_content_element_real_configure (ValadocContentContentElement* self,
                                                     ValadocSettings* settings,
                                                     ValadocResourceLocator* locator);
static void valadoc_content_content_element_real_check (ValadocContentContentElement* self,
                                                 ValadocApiTree* api_root,
                                                 ValadocApiNode* container,
                                                 const gchar* file_path,
                                                 ValadocErrorReporter* reporter,
                                                 ValadocSettings* settings);
static void valadoc_content_content_element_real_accept (ValadocContentContentElement* self,
                                                  ValadocContentContentVisitor* visitor);
static gboolean valadoc_content_content_element_real_is_empty (ValadocContentContentElement* self);
static void valadoc_content_content_element_real_accept_children (ValadocContentContentElement* self,
                                                           ValadocContentContentVisitor* visitor);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_content_content_element_finalize (GObject * obj);
static void _vala_valadoc_content_content_element_get_property (GObject * object,
                                                         guint property_id,
                                                         GValue * value,
                                                         GParamSpec * pspec);
static void _vala_valadoc_content_content_element_set_property (GObject * object,
                                                         guint property_id,
                                                         const GValue * value,
                                                         GParamSpec * pspec);


static inline gpointer
valadoc_content_content_element_get_instance_private (ValadocContentContentElement* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentContentElement_private_offset);
}


static ValadocContentContentElement*
valadoc_content_content_element_real_copy (ValadocContentContentElement* self,
                                           ValadocContentContentElement* new_parent)
{
	g_critical ("Type `%s' does not implement abstract method `valadoc_content_content_element_copy'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}


ValadocContentContentElement*
valadoc_content_content_element_copy (ValadocContentContentElement* self,
                                      ValadocContentContentElement* new_parent)
{
	g_return_val_if_fail (self != NULL, NULL);
	return VALADOC_CONTENT_CONTENT_ELEMENT_GET_CLASS (self)->copy (self, new_parent);
}


static void
valadoc_content_content_element_real_configure (ValadocContentContentElement* self,
                                                ValadocSettings* settings,
                                                ValadocResourceLocator* locator)
{
	g_return_if_fail (settings != NULL);
	g_return_if_fail (locator != NULL);
}


void
valadoc_content_content_element_configure (ValadocContentContentElement* self,
                                           ValadocSettings* settings,
                                           ValadocResourceLocator* locator)
{
	g_return_if_fail (self != NULL);
	VALADOC_CONTENT_CONTENT_ELEMENT_GET_CLASS (self)->configure (self, settings, locator);
}


static void
valadoc_content_content_element_real_check (ValadocContentContentElement* self,
                                            ValadocApiTree* api_root,
                                            ValadocApiNode* container,
                                            const gchar* file_path,
                                            ValadocErrorReporter* reporter,
                                            ValadocSettings* settings)
{
	g_critical ("Type `%s' does not implement abstract method `valadoc_content_content_element_check'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void
valadoc_content_content_element_check (ValadocContentContentElement* self,
                                       ValadocApiTree* api_root,
                                       ValadocApiNode* container,
                                       const gchar* file_path,
                                       ValadocErrorReporter* reporter,
                                       ValadocSettings* settings)
{
	g_return_if_fail (self != NULL);
	VALADOC_CONTENT_CONTENT_ELEMENT_GET_CLASS (self)->check (self, api_root, container, file_path, reporter, settings);
}


static void
valadoc_content_content_element_real_accept (ValadocContentContentElement* self,
                                             ValadocContentContentVisitor* visitor)
{
	g_critical ("Type `%s' does not implement abstract method `valadoc_content_content_element_accept'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}


void
valadoc_content_content_element_accept (ValadocContentContentElement* self,
                                        ValadocContentContentVisitor* visitor)
{
	g_return_if_fail (self != NULL);
	VALADOC_CONTENT_CONTENT_ELEMENT_GET_CLASS (self)->accept (self, visitor);
}


static gboolean
valadoc_content_content_element_real_is_empty (ValadocContentContentElement* self)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `valadoc_content_content_element_is_empty'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}


gboolean
valadoc_content_content_element_is_empty (ValadocContentContentElement* self)
{
	g_return_val_if_fail (self != NULL, FALSE);
	return VALADOC_CONTENT_CONTENT_ELEMENT_GET_CLASS (self)->is_empty (self);
}


static void
valadoc_content_content_element_real_accept_children (ValadocContentContentElement* self,
                                                      ValadocContentContentVisitor* visitor)
{
	g_return_if_fail (visitor != NULL);
}


void
valadoc_content_content_element_accept_children (ValadocContentContentElement* self,
                                                 ValadocContentContentVisitor* visitor)
{
	g_return_if_fail (self != NULL);
	VALADOC_CONTENT_CONTENT_ELEMENT_GET_CLASS (self)->accept_children (self, visitor);
}


ValadocContentContentElement*
valadoc_content_content_element_construct (GType object_type)
{
	ValadocContentContentElement * self = NULL;
	self = (ValadocContentContentElement*) g_object_new (object_type, NULL);
	return self;
}


ValadocContentContentElement*
valadoc_content_content_element_get_parent (ValadocContentContentElement* self)
{
	ValadocContentContentElement* result;
	ValadocContentContentElement* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_parent;
	result = _tmp0_;
	return result;
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


G_GNUC_INTERNAL void
valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                            ValadocContentContentElement* value)
{
	g_return_if_fail (self != NULL);
	if (valadoc_content_content_element_get_parent (self) != value) {
		ValadocContentContentElement* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_parent);
		self->priv->_parent = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_content_element_properties[VALADOC_CONTENT_CONTENT_ELEMENT_PARENT_PROPERTY]);
	}
}


static void
valadoc_content_content_element_class_init (ValadocContentContentElementClass * klass)
{
	valadoc_content_content_element_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentContentElement_private_offset);
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_content_element_real_copy;
	((ValadocContentContentElementClass *) klass)->configure = (void (*) (ValadocContentContentElement*, ValadocSettings*, ValadocResourceLocator*)) valadoc_content_content_element_real_configure;
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_content_element_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_content_element_real_accept;
	((ValadocContentContentElementClass *) klass)->is_empty = (gboolean (*) (ValadocContentContentElement*)) valadoc_content_content_element_real_is_empty;
	((ValadocContentContentElementClass *) klass)->accept_children = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_content_element_real_accept_children;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_content_content_element_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_content_content_element_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_content_element_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_CONTENT_ELEMENT_PARENT_PROPERTY, valadoc_content_content_element_properties[VALADOC_CONTENT_CONTENT_ELEMENT_PARENT_PROPERTY] = g_param_spec_object ("parent", "parent", "parent", VALADOC_CONTENT_TYPE_CONTENT_ELEMENT, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void
valadoc_content_content_element_instance_init (ValadocContentContentElement * self)
{
	self->priv = valadoc_content_content_element_get_instance_private (self);
}


static void
valadoc_content_content_element_finalize (GObject * obj)
{
	ValadocContentContentElement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_CONTENT_ELEMENT, ValadocContentContentElement);
	_g_object_unref0 (self->priv->_parent);
	G_OBJECT_CLASS (valadoc_content_content_element_parent_class)->finalize (obj);
}


GType
valadoc_content_content_element_get_type (void)
{
	static volatile gsize valadoc_content_content_element_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_content_element_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocContentContentElementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_content_element_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentContentElement), 0, (GInstanceInitFunc) valadoc_content_content_element_instance_init, NULL };
		GType valadoc_content_content_element_type_id;
		valadoc_content_content_element_type_id = g_type_register_static (G_TYPE_OBJECT, "ValadocContentContentElement", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		ValadocContentContentElement_private_offset = g_type_add_instance_private (valadoc_content_content_element_type_id, sizeof (ValadocContentContentElementPrivate));
		g_once_init_leave (&valadoc_content_content_element_type_id__volatile, valadoc_content_content_element_type_id);
	}
	return valadoc_content_content_element_type_id__volatile;
}


static void
_vala_valadoc_content_content_element_get_property (GObject * object,
                                                    guint property_id,
                                                    GValue * value,
                                                    GParamSpec * pspec)
{
	ValadocContentContentElement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_CONTENT_ELEMENT, ValadocContentContentElement);
	switch (property_id) {
		case VALADOC_CONTENT_CONTENT_ELEMENT_PARENT_PROPERTY:
		g_value_set_object (value, valadoc_content_content_element_get_parent (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void
_vala_valadoc_content_content_element_set_property (GObject * object,
                                                    guint property_id,
                                                    const GValue * value,
                                                    GParamSpec * pspec)
{
	ValadocContentContentElement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_CONTENT_ELEMENT, ValadocContentContentElement);
	switch (property_id) {
		case VALADOC_CONTENT_CONTENT_ELEMENT_PARENT_PROPERTY:
		valadoc_content_content_element_set_parent (self, g_value_get_object (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



