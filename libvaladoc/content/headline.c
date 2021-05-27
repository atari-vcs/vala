/* headline.c generated by valac, the Vala compiler
 * generated from headline.vala, do not modify */

/* headline.vala
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
#include <valagee.h>

enum  {
	VALADOC_CONTENT_HEADLINE_0_PROPERTY,
	VALADOC_CONTENT_HEADLINE_LEVEL_PROPERTY,
	VALADOC_CONTENT_HEADLINE_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_headline_properties[VALADOC_CONTENT_HEADLINE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValadocContentHeadlinePrivate {
	gint _level;
};


static gint ValadocContentHeadline_private_offset;
static gpointer valadoc_content_headline_parent_class = NULL;
static ValadocContentBlockIface * valadoc_content_headline_valadoc_content_block_parent_iface = NULL;

G_GNUC_INTERNAL ValadocContentHeadline* valadoc_content_headline_new (void);
G_GNUC_INTERNAL ValadocContentHeadline* valadoc_content_headline_construct (GType object_type);
G_GNUC_INTERNAL ValadocContentInlineContent* valadoc_content_inline_content_construct (GType object_type);
static void valadoc_content_headline_real_check (ValadocContentContentElement* base,
                                          ValadocApiTree* api_root,
                                          ValadocApiNode* container,
                                          const gchar* file_path,
                                          ValadocErrorReporter* reporter,
                                          ValadocSettings* settings);
static void valadoc_content_headline_real_accept (ValadocContentContentElement* base,
                                           ValadocContentContentVisitor* visitor);
static gboolean valadoc_content_headline_real_is_empty (ValadocContentContentElement* base);
static ValadocContentContentElement* valadoc_content_headline_real_copy (ValadocContentContentElement* base,
                                                                  ValadocContentContentElement* new_parent);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_content_headline_finalize (GObject * obj);
static void _vala_valadoc_content_headline_get_property (GObject * object,
                                                  guint property_id,
                                                  GValue * value,
                                                  GParamSpec * pspec);
static void _vala_valadoc_content_headline_set_property (GObject * object,
                                                  guint property_id,
                                                  const GValue * value,
                                                  GParamSpec * pspec);


static inline gpointer
valadoc_content_headline_get_instance_private (ValadocContentHeadline* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentHeadline_private_offset);
}


G_GNUC_INTERNAL ValadocContentHeadline*
valadoc_content_headline_construct (GType object_type)
{
	ValadocContentHeadline * self = NULL;
	self = (ValadocContentHeadline*) valadoc_content_inline_content_construct (object_type);
	self->priv->_level = 0;
	return self;
}


G_GNUC_INTERNAL ValadocContentHeadline*
valadoc_content_headline_new (void)
{
	return valadoc_content_headline_construct (VALADOC_CONTENT_TYPE_HEADLINE);
}


static void
valadoc_content_headline_real_check (ValadocContentContentElement* base,
                                     ValadocApiTree* api_root,
                                     ValadocApiNode* container,
                                     const gchar* file_path,
                                     ValadocErrorReporter* reporter,
                                     ValadocSettings* settings)
{
	ValadocContentHeadline * self;
	self = (ValadocContentHeadline*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_content_headline_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_INLINE_CONTENT, ValadocContentInlineContent), api_root, container, file_path, reporter, settings);
}


static void
valadoc_content_headline_real_accept (ValadocContentContentElement* base,
                                      ValadocContentContentVisitor* visitor)
{
	ValadocContentHeadline * self;
	self = (ValadocContentHeadline*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_headline (visitor, self);
}


static gboolean
valadoc_content_headline_real_is_empty (ValadocContentContentElement* base)
{
	ValadocContentHeadline * self;
	gboolean result = FALSE;
	self = (ValadocContentHeadline*) base;
	result = FALSE;
	return result;
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


static ValadocContentContentElement*
valadoc_content_headline_real_copy (ValadocContentContentElement* base,
                                    ValadocContentContentElement* new_parent)
{
	ValadocContentHeadline * self;
	ValadocContentContentElement* result = NULL;
	ValadocContentHeadline* headline = NULL;
	ValadocContentHeadline* _tmp0_;
	ValadocContentHeadline* _tmp1_;
	ValadocContentHeadline* _tmp2_;
	gint _tmp3_;
	self = (ValadocContentHeadline*) base;
	_tmp0_ = valadoc_content_headline_new ();
	headline = _tmp0_;
	_tmp1_ = headline;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp1_, new_parent);
	_tmp2_ = headline;
	_tmp3_ = self->priv->_level;
	valadoc_content_headline_set_level (_tmp2_, _tmp3_);
	{
		ValaList* _element_list = NULL;
		ValaList* _tmp4_;
		ValaList* _tmp5_;
		ValaList* _tmp6_;
		gint _element_size = 0;
		ValaList* _tmp7_;
		gint _tmp8_;
		gint _tmp9_;
		gint _element_index = 0;
		_tmp4_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) self);
		_tmp5_ = _tmp4_;
		_tmp6_ = _vala_iterable_ref0 (_tmp5_);
		_element_list = _tmp6_;
		_tmp7_ = _element_list;
		_tmp8_ = vala_collection_get_size ((ValaCollection*) _tmp7_);
		_tmp9_ = _tmp8_;
		_element_size = _tmp9_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp10_;
			gint _tmp11_;
			gint _tmp12_;
			ValadocContentInline* element = NULL;
			ValaList* _tmp13_;
			gint _tmp14_;
			gpointer _tmp15_;
			ValadocContentInline* copy = NULL;
			ValadocContentInline* _tmp16_;
			ValadocContentHeadline* _tmp17_;
			ValadocContentContentElement* _tmp18_;
			ValadocContentInline* _tmp19_;
			ValadocContentHeadline* _tmp20_;
			ValaList* _tmp21_;
			ValaList* _tmp22_;
			ValadocContentInline* _tmp23_;
			_tmp10_ = _element_index;
			_element_index = _tmp10_ + 1;
			_tmp11_ = _element_index;
			_tmp12_ = _element_size;
			if (!(_tmp11_ < _tmp12_)) {
				break;
			}
			_tmp13_ = _element_list;
			_tmp14_ = _element_index;
			_tmp15_ = vala_list_get (_tmp13_, _tmp14_);
			element = (ValadocContentInline*) _tmp15_;
			_tmp16_ = element;
			_tmp17_ = headline;
			_tmp18_ = valadoc_content_content_element_copy ((ValadocContentContentElement*) _tmp16_, (ValadocContentContentElement*) _tmp17_);
			_tmp19_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp18_, VALADOC_CONTENT_TYPE_INLINE) ? ((ValadocContentInline*) _tmp18_) : NULL;
			if (_tmp19_ == NULL) {
				_g_object_unref0 (_tmp18_);
			}
			copy = _tmp19_;
			_tmp20_ = headline;
			_tmp21_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp20_);
			_tmp22_ = _tmp21_;
			_tmp23_ = copy;
			vala_collection_add ((ValaCollection*) _tmp22_, _tmp23_);
			_g_object_unref0 (copy);
			_g_object_unref0 (element);
		}
		_vala_iterable_unref0 (_element_list);
	}
	result = (ValadocContentContentElement*) headline;
	return result;
}


gint
valadoc_content_headline_get_level (ValadocContentHeadline* self)
{
	gint result;
	gint _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_level;
	result = _tmp0_;
	return result;
}


void
valadoc_content_headline_set_level (ValadocContentHeadline* self,
                                    gint value)
{
	g_return_if_fail (self != NULL);
	if (valadoc_content_headline_get_level (self) != value) {
		self->priv->_level = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_headline_properties[VALADOC_CONTENT_HEADLINE_LEVEL_PROPERTY]);
	}
}


static void
valadoc_content_headline_class_init (ValadocContentHeadlineClass * klass)
{
	valadoc_content_headline_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentHeadline_private_offset);
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_headline_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_headline_real_accept;
	((ValadocContentContentElementClass *) klass)->is_empty = (gboolean (*) (ValadocContentContentElement*)) valadoc_content_headline_real_is_empty;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_headline_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_content_headline_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_content_headline_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_headline_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_HEADLINE_LEVEL_PROPERTY, valadoc_content_headline_properties[VALADOC_CONTENT_HEADLINE_LEVEL_PROPERTY] = g_param_spec_int ("level", "level", "level", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void
valadoc_content_headline_valadoc_content_block_interface_init (ValadocContentBlockIface * iface)
{
	valadoc_content_headline_valadoc_content_block_parent_iface = g_type_interface_peek_parent (iface);
}


static void
valadoc_content_headline_instance_init (ValadocContentHeadline * self)
{
	self->priv = valadoc_content_headline_get_instance_private (self);
}


static void
valadoc_content_headline_finalize (GObject * obj)
{
	ValadocContentHeadline * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_HEADLINE, ValadocContentHeadline);
	G_OBJECT_CLASS (valadoc_content_headline_parent_class)->finalize (obj);
}


GType
valadoc_content_headline_get_type (void)
{
	static volatile gsize valadoc_content_headline_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_headline_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocContentHeadlineClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_headline_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentHeadline), 0, (GInstanceInitFunc) valadoc_content_headline_instance_init, NULL };
		static const GInterfaceInfo valadoc_content_block_info = { (GInterfaceInitFunc) valadoc_content_headline_valadoc_content_block_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType valadoc_content_headline_type_id;
		valadoc_content_headline_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_INLINE_CONTENT, "ValadocContentHeadline", &g_define_type_info, 0);
		g_type_add_interface_static (valadoc_content_headline_type_id, VALADOC_CONTENT_TYPE_BLOCK, &valadoc_content_block_info);
		ValadocContentHeadline_private_offset = g_type_add_instance_private (valadoc_content_headline_type_id, sizeof (ValadocContentHeadlinePrivate));
		g_once_init_leave (&valadoc_content_headline_type_id__volatile, valadoc_content_headline_type_id);
	}
	return valadoc_content_headline_type_id__volatile;
}


static void
_vala_valadoc_content_headline_get_property (GObject * object,
                                             guint property_id,
                                             GValue * value,
                                             GParamSpec * pspec)
{
	ValadocContentHeadline * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_HEADLINE, ValadocContentHeadline);
	switch (property_id) {
		case VALADOC_CONTENT_HEADLINE_LEVEL_PROPERTY:
		g_value_set_int (value, valadoc_content_headline_get_level (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void
_vala_valadoc_content_headline_set_property (GObject * object,
                                             guint property_id,
                                             const GValue * value,
                                             GParamSpec * pspec)
{
	ValadocContentHeadline * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_HEADLINE, ValadocContentHeadline);
	switch (property_id) {
		case VALADOC_CONTENT_HEADLINE_LEVEL_PROPERTY:
		valadoc_content_headline_set_level (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


