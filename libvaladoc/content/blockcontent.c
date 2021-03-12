/* blockcontent.c generated by valac, the Vala compiler
 * generated from blockcontent.vala, do not modify */

/* blockcontent.vala
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

#include "valadoc.h"
#include <valagee.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

enum  {
	VALADOC_CONTENT_BLOCK_CONTENT_0_PROPERTY,
	VALADOC_CONTENT_BLOCK_CONTENT_CONTENT_PROPERTY,
	VALADOC_CONTENT_BLOCK_CONTENT_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_block_content_properties[VALADOC_CONTENT_BLOCK_CONTENT_NUM_PROPERTIES];
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValadocContentBlockContentPrivate {
	ValaList* _content;
};

static gint ValadocContentBlockContent_private_offset;
static gpointer valadoc_content_block_content_parent_class = NULL;

G_GNUC_INTERNAL ValadocContentBlockContent* valadoc_content_block_content_construct (GType object_type);
static void valadoc_content_block_content_real_configure (ValadocContentContentElement* base,
                                                   ValadocSettings* settings,
                                                   ValadocResourceLocator* locator);
static void valadoc_content_block_content_real_check (ValadocContentContentElement* base,
                                               ValadocApiTree* api_root,
                                               ValadocApiNode* container,
                                               const gchar* file_path,
                                               ValadocErrorReporter* reporter,
                                               ValadocSettings* settings);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_content_block_content_real_accept_children (ValadocContentContentElement* base,
                                                         ValadocContentContentVisitor* visitor);
static gboolean valadoc_content_block_content_real_is_empty (ValadocContentContentElement* base);
static GObject * valadoc_content_block_content_constructor (GType type,
                                                     guint n_construct_properties,
                                                     GObjectConstructParam * construct_properties);
static void valadoc_content_block_content_finalize (GObject * obj);
static GType valadoc_content_block_content_get_type_once (void);
static void _vala_valadoc_content_block_content_get_property (GObject * object,
                                                       guint property_id,
                                                       GValue * value,
                                                       GParamSpec * pspec);

static inline gpointer
valadoc_content_block_content_get_instance_private (ValadocContentBlockContent* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentBlockContent_private_offset);
}

ValaList*
valadoc_content_block_content_get_content (ValadocContentBlockContent* self)
{
	ValaList* result;
	ValaList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_content;
	result = _tmp0_;
	return result;
}

G_GNUC_INTERNAL ValadocContentBlockContent*
valadoc_content_block_content_construct (GType object_type)
{
	ValadocContentBlockContent * self = NULL;
	self = (ValadocContentBlockContent*) valadoc_content_content_element_construct (object_type);
	return self;
}

static void
valadoc_content_block_content_real_configure (ValadocContentContentElement* base,
                                              ValadocSettings* settings,
                                              ValadocResourceLocator* locator)
{
	ValadocContentBlockContent * self;
	self = (ValadocContentBlockContent*) base;
	g_return_if_fail (settings != NULL);
	g_return_if_fail (locator != NULL);
}

static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

static void
valadoc_content_block_content_real_check (ValadocContentContentElement* base,
                                          ValadocApiTree* api_root,
                                          ValadocApiNode* container,
                                          const gchar* file_path,
                                          ValadocErrorReporter* reporter,
                                          ValadocSettings* settings)
{
	ValadocContentBlockContent * self;
	self = (ValadocContentBlockContent*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	{
		ValaList* _element_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		gint _element_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _element_index = 0;
		_tmp0_ = self->priv->_content;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_element_list = _tmp1_;
		_tmp2_ = _element_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_element_size = _tmp4_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			ValadocContentBlock* element = NULL;
			ValaList* _tmp7_;
			gpointer _tmp8_;
			ValadocContentBlock* _tmp9_;
			ValadocContentBlock* _tmp10_;
			_element_index = _element_index + 1;
			_tmp5_ = _element_index;
			_tmp6_ = _element_size;
			if (!(_tmp5_ < _tmp6_)) {
				break;
			}
			_tmp7_ = _element_list;
			_tmp8_ = vala_list_get (_tmp7_, _element_index);
			element = (ValadocContentBlock*) _tmp8_;
			_tmp9_ = element;
			valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp9_, (ValadocContentContentElement*) self);
			_tmp10_ = element;
			valadoc_content_content_element_check ((ValadocContentContentElement*) _tmp10_, api_root, container, file_path, reporter, settings);
			_g_object_unref0 (element);
		}
		_vala_iterable_unref0 (_element_list);
	}
}

static void
valadoc_content_block_content_real_accept_children (ValadocContentContentElement* base,
                                                    ValadocContentContentVisitor* visitor)
{
	ValadocContentBlockContent * self;
	self = (ValadocContentBlockContent*) base;
	g_return_if_fail (visitor != NULL);
	{
		ValaList* _element_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		gint _element_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _element_index = 0;
		_tmp0_ = self->priv->_content;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_element_list = _tmp1_;
		_tmp2_ = _element_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_element_size = _tmp4_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			ValadocContentBlock* element = NULL;
			ValaList* _tmp7_;
			gpointer _tmp8_;
			ValadocContentBlock* _tmp9_;
			_element_index = _element_index + 1;
			_tmp5_ = _element_index;
			_tmp6_ = _element_size;
			if (!(_tmp5_ < _tmp6_)) {
				break;
			}
			_tmp7_ = _element_list;
			_tmp8_ = vala_list_get (_tmp7_, _element_index);
			element = (ValadocContentBlock*) _tmp8_;
			_tmp9_ = element;
			valadoc_content_content_element_accept ((ValadocContentContentElement*) _tmp9_, visitor);
			_g_object_unref0 (element);
		}
		_vala_iterable_unref0 (_element_list);
	}
}

static gboolean
valadoc_content_block_content_real_is_empty (ValadocContentContentElement* base)
{
	ValadocContentBlockContent * self;
	gboolean result = FALSE;
	self = (ValadocContentBlockContent*) base;
	{
		ValaList* _item_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		ValaList* _tmp2_;
		gint _item_size = 0;
		ValaList* _tmp3_;
		gint _tmp4_;
		gint _tmp5_;
		gint _item_index = 0;
		_tmp0_ = valadoc_content_block_content_get_content (self);
		_tmp1_ = _tmp0_;
		_tmp2_ = _vala_iterable_ref0 (_tmp1_);
		_item_list = _tmp2_;
		_tmp3_ = _item_list;
		_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
		_tmp5_ = _tmp4_;
		_item_size = _tmp5_;
		_item_index = -1;
		while (TRUE) {
			gint _tmp6_;
			gint _tmp7_;
			ValadocContentBlock* item = NULL;
			ValaList* _tmp8_;
			gpointer _tmp9_;
			ValadocContentBlock* _tmp10_;
			_item_index = _item_index + 1;
			_tmp6_ = _item_index;
			_tmp7_ = _item_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _item_list;
			_tmp9_ = vala_list_get (_tmp8_, _item_index);
			item = (ValadocContentBlock*) _tmp9_;
			_tmp10_ = item;
			if (!valadoc_content_content_element_is_empty ((ValadocContentContentElement*) _tmp10_)) {
				result = FALSE;
				_g_object_unref0 (item);
				_vala_iterable_unref0 (_item_list);
				return result;
			}
			_g_object_unref0 (item);
		}
		_vala_iterable_unref0 (_item_list);
	}
	result = TRUE;
	return result;
}

static GObject *
valadoc_content_block_content_constructor (GType type,
                                           guint n_construct_properties,
                                           GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	ValadocContentBlockContent * self;
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	parent_class = G_OBJECT_CLASS (valadoc_content_block_content_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALADOC_CONTENT_TYPE_BLOCK, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp0_);
	_vala_iterable_unref0 (self->priv->_content);
	self->priv->_content = (ValaList*) _tmp1_;
	return obj;
}

static void
valadoc_content_block_content_class_init (ValadocContentBlockContentClass * klass,
                                          gpointer klass_data)
{
	valadoc_content_block_content_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentBlockContent_private_offset);
	((ValadocContentContentElementClass *) klass)->configure = (void (*) (ValadocContentContentElement*, ValadocSettings*, ValadocResourceLocator*)) valadoc_content_block_content_real_configure;
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_block_content_real_check;
	((ValadocContentContentElementClass *) klass)->accept_children = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_block_content_real_accept_children;
	((ValadocContentContentElementClass *) klass)->is_empty = (gboolean (*) (ValadocContentContentElement*)) valadoc_content_block_content_real_is_empty;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_content_block_content_get_property;
	G_OBJECT_CLASS (klass)->constructor = valadoc_content_block_content_constructor;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_block_content_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_BLOCK_CONTENT_CONTENT_PROPERTY, valadoc_content_block_content_properties[VALADOC_CONTENT_BLOCK_CONTENT_CONTENT_PROPERTY] = vala_param_spec_iterable ("content", "content", "content", VALA_TYPE_LIST, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
valadoc_content_block_content_instance_init (ValadocContentBlockContent * self,
                                             gpointer klass)
{
	self->priv = valadoc_content_block_content_get_instance_private (self);
}

static void
valadoc_content_block_content_finalize (GObject * obj)
{
	ValadocContentBlockContent * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent);
	_vala_iterable_unref0 (self->priv->_content);
	G_OBJECT_CLASS (valadoc_content_block_content_parent_class)->finalize (obj);
}

static GType
valadoc_content_block_content_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocContentBlockContentClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_block_content_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentBlockContent), 0, (GInstanceInitFunc) valadoc_content_block_content_instance_init, NULL };
	GType valadoc_content_block_content_type_id;
	valadoc_content_block_content_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_CONTENT_ELEMENT, "ValadocContentBlockContent", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	ValadocContentBlockContent_private_offset = g_type_add_instance_private (valadoc_content_block_content_type_id, sizeof (ValadocContentBlockContentPrivate));
	return valadoc_content_block_content_type_id;
}

GType
valadoc_content_block_content_get_type (void)
{
	static volatile gsize valadoc_content_block_content_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_block_content_type_id__volatile)) {
		GType valadoc_content_block_content_type_id;
		valadoc_content_block_content_type_id = valadoc_content_block_content_get_type_once ();
		g_once_init_leave (&valadoc_content_block_content_type_id__volatile, valadoc_content_block_content_type_id);
	}
	return valadoc_content_block_content_type_id__volatile;
}

static void
_vala_valadoc_content_block_content_get_property (GObject * object,
                                                  guint property_id,
                                                  GValue * value,
                                                  GParamSpec * pspec)
{
	ValadocContentBlockContent * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent);
	switch (property_id) {
		case VALADOC_CONTENT_BLOCK_CONTENT_CONTENT_PROPERTY:
		vala_value_set_iterable (value, valadoc_content_block_content_get_content (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

