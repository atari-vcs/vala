/* paragraph.c generated by valac, the Vala compiler
 * generated from paragraph.vala, do not modify */

/* paragraph.vala
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
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <valagee.h>
#include <glib-object.h>

enum  {
	VALADOC_CONTENT_PARAGRAPH_0_PROPERTY,
	VALADOC_CONTENT_PARAGRAPH_HORIZONTAL_ALIGN_PROPERTY,
	VALADOC_CONTENT_PARAGRAPH_VERTICAL_ALIGN_PROPERTY,
	VALADOC_CONTENT_PARAGRAPH_STYLE_PROPERTY,
	VALADOC_CONTENT_PARAGRAPH_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_paragraph_properties[VALADOC_CONTENT_PARAGRAPH_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValadocContentParagraphPrivate {
	ValadocContentHorizontalAlign _horizontal_align;
	ValadocContentVerticalAlign _vertical_align;
	gchar* _style;
};

static gint ValadocContentParagraph_private_offset;
static gpointer valadoc_content_paragraph_parent_class = NULL;
static ValadocContentBlockIface * valadoc_content_paragraph_valadoc_content_block_parent_iface = NULL;
static ValadocContentStyleAttributesIface * valadoc_content_paragraph_valadoc_content_style_attributes_parent_iface = NULL;

G_GNUC_INTERNAL ValadocContentParagraph* valadoc_content_paragraph_new (void);
G_GNUC_INTERNAL ValadocContentParagraph* valadoc_content_paragraph_construct (GType object_type);
G_GNUC_INTERNAL ValadocContentInlineContent* valadoc_content_inline_content_construct (GType object_type);
static void valadoc_content_paragraph_real_check (ValadocContentContentElement* base,
                                           ValadocApiTree* api_root,
                                           ValadocApiNode* container,
                                           const gchar* file_path,
                                           ValadocErrorReporter* reporter,
                                           ValadocSettings* settings);
static void valadoc_content_paragraph_real_accept (ValadocContentContentElement* base,
                                            ValadocContentContentVisitor* visitor);
static ValadocContentContentElement* valadoc_content_paragraph_real_copy (ValadocContentContentElement* base,
                                                                   ValadocContentContentElement* new_parent);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_content_paragraph_finalize (GObject * obj);
static GType valadoc_content_paragraph_get_type_once (void);
static void _vala_valadoc_content_paragraph_get_property (GObject * object,
                                                   guint property_id,
                                                   GValue * value,
                                                   GParamSpec * pspec);
static void _vala_valadoc_content_paragraph_set_property (GObject * object,
                                                   guint property_id,
                                                   const GValue * value,
                                                   GParamSpec * pspec);

static inline gpointer
valadoc_content_paragraph_get_instance_private (ValadocContentParagraph* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentParagraph_private_offset);
}

static ValadocContentHorizontalAlign
valadoc_content_paragraph_real_get_horizontal_align (ValadocContentStyleAttributes* base)
{
	ValadocContentHorizontalAlign result;
	ValadocContentParagraph* self;
	ValadocContentHorizontalAlign _tmp0_;
	self = (ValadocContentParagraph*) base;
	_tmp0_ = self->priv->_horizontal_align;
	result = _tmp0_;
	return result;
}

static void
valadoc_content_paragraph_real_set_horizontal_align (ValadocContentStyleAttributes* base,
                                                     ValadocContentHorizontalAlign value)
{
	ValadocContentParagraph* self;
	ValadocContentHorizontalAlign old_value;
	self = (ValadocContentParagraph*) base;
	old_value = valadoc_content_paragraph_real_get_horizontal_align (base);
	if (old_value != value) {
		self->priv->_horizontal_align = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_paragraph_properties[VALADOC_CONTENT_PARAGRAPH_HORIZONTAL_ALIGN_PROPERTY]);
	}
}

static ValadocContentVerticalAlign
valadoc_content_paragraph_real_get_vertical_align (ValadocContentStyleAttributes* base)
{
	ValadocContentVerticalAlign result;
	ValadocContentParagraph* self;
	ValadocContentVerticalAlign _tmp0_;
	self = (ValadocContentParagraph*) base;
	_tmp0_ = self->priv->_vertical_align;
	result = _tmp0_;
	return result;
}

static void
valadoc_content_paragraph_real_set_vertical_align (ValadocContentStyleAttributes* base,
                                                   ValadocContentVerticalAlign value)
{
	ValadocContentParagraph* self;
	ValadocContentVerticalAlign old_value;
	self = (ValadocContentParagraph*) base;
	old_value = valadoc_content_paragraph_real_get_vertical_align (base);
	if (old_value != value) {
		self->priv->_vertical_align = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_paragraph_properties[VALADOC_CONTENT_PARAGRAPH_VERTICAL_ALIGN_PROPERTY]);
	}
}

static const gchar*
valadoc_content_paragraph_real_get_style (ValadocContentStyleAttributes* base)
{
	const gchar* result;
	ValadocContentParagraph* self;
	const gchar* _tmp0_;
	self = (ValadocContentParagraph*) base;
	_tmp0_ = self->priv->_style;
	result = _tmp0_;
	return result;
}

static void
valadoc_content_paragraph_real_set_style (ValadocContentStyleAttributes* base,
                                          const gchar* value)
{
	ValadocContentParagraph* self;
	gchar* old_value;
	self = (ValadocContentParagraph*) base;
	old_value = valadoc_content_paragraph_real_get_style (base);
	if (g_strcmp0 (value, old_value) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_style);
		self->priv->_style = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_paragraph_properties[VALADOC_CONTENT_PARAGRAPH_STYLE_PROPERTY]);
	}
}

G_GNUC_INTERNAL ValadocContentParagraph*
valadoc_content_paragraph_construct (GType object_type)
{
	ValadocContentParagraph * self = NULL;
	self = (ValadocContentParagraph*) valadoc_content_inline_content_construct (object_type);
	return self;
}

G_GNUC_INTERNAL ValadocContentParagraph*
valadoc_content_paragraph_new (void)
{
	return valadoc_content_paragraph_construct (VALADOC_CONTENT_TYPE_PARAGRAPH);
}

static void
valadoc_content_paragraph_real_check (ValadocContentContentElement* base,
                                      ValadocApiTree* api_root,
                                      ValadocApiNode* container,
                                      const gchar* file_path,
                                      ValadocErrorReporter* reporter,
                                      ValadocSettings* settings)
{
	ValadocContentParagraph * self;
	self = (ValadocContentParagraph*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_content_paragraph_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_INLINE_CONTENT, ValadocContentInlineContent), api_root, container, file_path, reporter, settings);
}

static void
valadoc_content_paragraph_real_accept (ValadocContentContentElement* base,
                                       ValadocContentContentVisitor* visitor)
{
	ValadocContentParagraph * self;
	self = (ValadocContentParagraph*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_paragraph (visitor, self);
}

static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

static ValadocContentContentElement*
valadoc_content_paragraph_real_copy (ValadocContentContentElement* base,
                                     ValadocContentContentElement* new_parent)
{
	ValadocContentParagraph * self;
	ValadocContentParagraph* p = NULL;
	ValadocContentParagraph* _tmp0_;
	ValadocContentParagraph* _tmp1_;
	ValadocContentParagraph* _tmp2_;
	ValadocContentHorizontalAlign _tmp3_;
	ValadocContentHorizontalAlign _tmp4_;
	ValadocContentParagraph* _tmp5_;
	ValadocContentVerticalAlign _tmp6_;
	ValadocContentVerticalAlign _tmp7_;
	ValadocContentParagraph* _tmp8_;
	const gchar* _tmp9_;
	const gchar* _tmp10_;
	ValadocContentContentElement* result = NULL;
	self = (ValadocContentParagraph*) base;
	_tmp0_ = valadoc_content_paragraph_new ();
	p = _tmp0_;
	_tmp1_ = p;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp1_, new_parent);
	_tmp2_ = p;
	_tmp3_ = valadoc_content_style_attributes_get_horizontal_align ((ValadocContentStyleAttributes*) self);
	_tmp4_ = _tmp3_;
	valadoc_content_style_attributes_set_horizontal_align ((ValadocContentStyleAttributes*) _tmp2_, _tmp4_);
	_tmp5_ = p;
	_tmp6_ = valadoc_content_style_attributes_get_vertical_align ((ValadocContentStyleAttributes*) self);
	_tmp7_ = _tmp6_;
	valadoc_content_style_attributes_set_vertical_align ((ValadocContentStyleAttributes*) _tmp5_, _tmp7_);
	_tmp8_ = p;
	_tmp9_ = valadoc_content_style_attributes_get_style ((ValadocContentStyleAttributes*) self);
	_tmp10_ = _tmp9_;
	valadoc_content_style_attributes_set_style ((ValadocContentStyleAttributes*) _tmp8_, _tmp10_);
	{
		ValaList* _element_list = NULL;
		ValaList* _tmp11_;
		ValaList* _tmp12_;
		ValaList* _tmp13_;
		gint _element_size = 0;
		ValaList* _tmp14_;
		gint _tmp15_;
		gint _tmp16_;
		gint _element_index = 0;
		_tmp11_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) self);
		_tmp12_ = _tmp11_;
		_tmp13_ = _vala_iterable_ref0 (_tmp12_);
		_element_list = _tmp13_;
		_tmp14_ = _element_list;
		_tmp15_ = vala_collection_get_size ((ValaCollection*) _tmp14_);
		_tmp16_ = _tmp15_;
		_element_size = _tmp16_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp17_;
			gint _tmp18_;
			ValadocContentInline* element = NULL;
			ValaList* _tmp19_;
			gpointer _tmp20_;
			ValadocContentInline* copy = NULL;
			ValadocContentInline* _tmp21_;
			ValadocContentParagraph* _tmp22_;
			ValadocContentContentElement* _tmp23_;
			ValadocContentInline* _tmp24_;
			ValadocContentParagraph* _tmp25_;
			ValaList* _tmp26_;
			ValaList* _tmp27_;
			ValadocContentInline* _tmp28_;
			_element_index = _element_index + 1;
			_tmp17_ = _element_index;
			_tmp18_ = _element_size;
			if (!(_tmp17_ < _tmp18_)) {
				break;
			}
			_tmp19_ = _element_list;
			_tmp20_ = vala_list_get (_tmp19_, _element_index);
			element = (ValadocContentInline*) _tmp20_;
			_tmp21_ = element;
			_tmp22_ = p;
			_tmp23_ = valadoc_content_content_element_copy ((ValadocContentContentElement*) _tmp21_, (ValadocContentContentElement*) _tmp22_);
			_tmp24_ = VALADOC_CONTENT_IS_INLINE (_tmp23_) ? ((ValadocContentInline*) _tmp23_) : NULL;
			if (_tmp24_ == NULL) {
				_g_object_unref0 (_tmp23_);
			}
			copy = _tmp24_;
			_tmp25_ = p;
			_tmp26_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp25_);
			_tmp27_ = _tmp26_;
			_tmp28_ = copy;
			vala_collection_add ((ValaCollection*) _tmp27_, _tmp28_);
			_g_object_unref0 (copy);
			_g_object_unref0 (element);
		}
		_vala_iterable_unref0 (_element_list);
	}
	result = (ValadocContentContentElement*) p;
	return result;
}

static void
valadoc_content_paragraph_class_init (ValadocContentParagraphClass * klass,
                                      gpointer klass_data)
{
	valadoc_content_paragraph_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentParagraph_private_offset);
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_paragraph_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_paragraph_real_accept;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_paragraph_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_content_paragraph_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_content_paragraph_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_paragraph_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_PARAGRAPH_HORIZONTAL_ALIGN_PROPERTY, valadoc_content_paragraph_properties[VALADOC_CONTENT_PARAGRAPH_HORIZONTAL_ALIGN_PROPERTY] = g_param_spec_enum ("horizontal-align", "horizontal-align", "horizontal-align", VALADOC_CONTENT_TYPE_HORIZONTAL_ALIGN, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_PARAGRAPH_VERTICAL_ALIGN_PROPERTY, valadoc_content_paragraph_properties[VALADOC_CONTENT_PARAGRAPH_VERTICAL_ALIGN_PROPERTY] = g_param_spec_enum ("vertical-align", "vertical-align", "vertical-align", VALADOC_CONTENT_TYPE_VERTICAL_ALIGN, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_PARAGRAPH_STYLE_PROPERTY, valadoc_content_paragraph_properties[VALADOC_CONTENT_PARAGRAPH_STYLE_PROPERTY] = g_param_spec_string ("style", "style", "style", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}

static void
valadoc_content_paragraph_valadoc_content_block_interface_init (ValadocContentBlockIface * iface,
                                                                gpointer iface_data)
{
	valadoc_content_paragraph_valadoc_content_block_parent_iface = g_type_interface_peek_parent (iface);
}

static void
valadoc_content_paragraph_valadoc_content_style_attributes_interface_init (ValadocContentStyleAttributesIface * iface,
                                                                           gpointer iface_data)
{
	valadoc_content_paragraph_valadoc_content_style_attributes_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_horizontal_align = valadoc_content_paragraph_real_get_horizontal_align;
	iface->set_horizontal_align = valadoc_content_paragraph_real_set_horizontal_align;
	iface->get_vertical_align = valadoc_content_paragraph_real_get_vertical_align;
	iface->set_vertical_align = valadoc_content_paragraph_real_set_vertical_align;
	iface->get_style = valadoc_content_paragraph_real_get_style;
	iface->set_style = valadoc_content_paragraph_real_set_style;
}

static void
valadoc_content_paragraph_instance_init (ValadocContentParagraph * self,
                                         gpointer klass)
{
	self->priv = valadoc_content_paragraph_get_instance_private (self);
}

static void
valadoc_content_paragraph_finalize (GObject * obj)
{
	ValadocContentParagraph * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_PARAGRAPH, ValadocContentParagraph);
	_g_free0 (self->priv->_style);
	G_OBJECT_CLASS (valadoc_content_paragraph_parent_class)->finalize (obj);
}

static GType
valadoc_content_paragraph_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocContentParagraphClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_paragraph_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentParagraph), 0, (GInstanceInitFunc) valadoc_content_paragraph_instance_init, NULL };
	static const GInterfaceInfo valadoc_content_block_info = { (GInterfaceInitFunc) valadoc_content_paragraph_valadoc_content_block_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo valadoc_content_style_attributes_info = { (GInterfaceInitFunc) valadoc_content_paragraph_valadoc_content_style_attributes_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType valadoc_content_paragraph_type_id;
	valadoc_content_paragraph_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_INLINE_CONTENT, "ValadocContentParagraph", &g_define_type_info, 0);
	g_type_add_interface_static (valadoc_content_paragraph_type_id, VALADOC_CONTENT_TYPE_BLOCK, &valadoc_content_block_info);
	g_type_add_interface_static (valadoc_content_paragraph_type_id, VALADOC_CONTENT_TYPE_STYLE_ATTRIBUTES, &valadoc_content_style_attributes_info);
	ValadocContentParagraph_private_offset = g_type_add_instance_private (valadoc_content_paragraph_type_id, sizeof (ValadocContentParagraphPrivate));
	return valadoc_content_paragraph_type_id;
}

GType
valadoc_content_paragraph_get_type (void)
{
	static volatile gsize valadoc_content_paragraph_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_paragraph_type_id__volatile)) {
		GType valadoc_content_paragraph_type_id;
		valadoc_content_paragraph_type_id = valadoc_content_paragraph_get_type_once ();
		g_once_init_leave (&valadoc_content_paragraph_type_id__volatile, valadoc_content_paragraph_type_id);
	}
	return valadoc_content_paragraph_type_id__volatile;
}

static void
_vala_valadoc_content_paragraph_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec)
{
	ValadocContentParagraph * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_PARAGRAPH, ValadocContentParagraph);
	switch (property_id) {
		case VALADOC_CONTENT_PARAGRAPH_HORIZONTAL_ALIGN_PROPERTY:
		g_value_set_enum (value, valadoc_content_style_attributes_get_horizontal_align ((ValadocContentStyleAttributes*) self));
		break;
		case VALADOC_CONTENT_PARAGRAPH_VERTICAL_ALIGN_PROPERTY:
		g_value_set_enum (value, valadoc_content_style_attributes_get_vertical_align ((ValadocContentStyleAttributes*) self));
		break;
		case VALADOC_CONTENT_PARAGRAPH_STYLE_PROPERTY:
		g_value_set_string (value, valadoc_content_style_attributes_get_style ((ValadocContentStyleAttributes*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_valadoc_content_paragraph_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec)
{
	ValadocContentParagraph * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_PARAGRAPH, ValadocContentParagraph);
	switch (property_id) {
		case VALADOC_CONTENT_PARAGRAPH_HORIZONTAL_ALIGN_PROPERTY:
		valadoc_content_style_attributes_set_horizontal_align ((ValadocContentStyleAttributes*) self, g_value_get_enum (value));
		break;
		case VALADOC_CONTENT_PARAGRAPH_VERTICAL_ALIGN_PROPERTY:
		valadoc_content_style_attributes_set_vertical_align ((ValadocContentStyleAttributes*) self, g_value_get_enum (value));
		break;
		case VALADOC_CONTENT_PARAGRAPH_STYLE_PROPERTY:
		valadoc_content_style_attributes_set_style ((ValadocContentStyleAttributes*) self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

