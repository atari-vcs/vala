/* embedded.c generated by valac, the Vala compiler
 * generated from embedded.vala, do not modify */

/* embedded.vala
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
#include <glib/gstdio.h>

enum  {
	VALADOC_CONTENT_EMBEDDED_0_PROPERTY,
	VALADOC_CONTENT_EMBEDDED_URL_PROPERTY,
	VALADOC_CONTENT_EMBEDDED_CAPTION_PROPERTY,
	VALADOC_CONTENT_EMBEDDED_HORIZONTAL_ALIGN_PROPERTY,
	VALADOC_CONTENT_EMBEDDED_VERTICAL_ALIGN_PROPERTY,
	VALADOC_CONTENT_EMBEDDED_STYLE_PROPERTY,
	VALADOC_CONTENT_EMBEDDED_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValadocContentEmbeddedPrivate {
	gchar* _url;
	gchar* _caption;
	ValadocContentHorizontalAlign _horizontal_align;
	ValadocContentVerticalAlign _vertical_align;
	gchar* _style;
	ValadocResourceLocator* _locator;
};


static gint ValadocContentEmbedded_private_offset;
static gpointer valadoc_content_embedded_parent_class = NULL;
static ValadocContentInlineIface * valadoc_content_embedded_valadoc_content_inline_parent_iface = NULL;
static ValadocContentStyleAttributesIface * valadoc_content_embedded_valadoc_content_style_attributes_parent_iface = NULL;

G_GNUC_INTERNAL ValadocContentEmbedded* valadoc_content_embedded_new (void);
G_GNUC_INTERNAL ValadocContentEmbedded* valadoc_content_embedded_construct (GType object_type);
static void valadoc_content_embedded_real_configure (ValadocContentContentElement* base,
                                              ValadocSettings* settings,
                                              ValadocResourceLocator* locator);
static void valadoc_content_embedded_real_check (ValadocContentContentElement* base,
                                          ValadocApiTree* api_root,
                                          ValadocApiNode* container,
                                          const gchar* file_path,
                                          ValadocErrorReporter* reporter,
                                          ValadocSettings* settings);
static void valadoc_content_embedded_real_accept (ValadocContentContentElement* base,
                                           ValadocContentContentVisitor* visitor);
static gboolean valadoc_content_embedded_real_is_empty (ValadocContentContentElement* base);
static ValadocContentContentElement* valadoc_content_embedded_real_copy (ValadocContentContentElement* base,
                                                                  ValadocContentContentElement* new_parent);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_content_embedded_finalize (GObject * obj);
static void _vala_valadoc_content_embedded_get_property (GObject * object,
                                                  guint property_id,
                                                  GValue * value,
                                                  GParamSpec * pspec);
static void _vala_valadoc_content_embedded_set_property (GObject * object,
                                                  guint property_id,
                                                  const GValue * value,
                                                  GParamSpec * pspec);


static inline gpointer
valadoc_content_embedded_get_instance_private (ValadocContentEmbedded* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentEmbedded_private_offset);
}


G_GNUC_INTERNAL ValadocContentEmbedded*
valadoc_content_embedded_construct (GType object_type)
{
	ValadocContentEmbedded * self = NULL;
	self = (ValadocContentEmbedded*) valadoc_content_content_element_construct (object_type);
	return self;
}


G_GNUC_INTERNAL ValadocContentEmbedded*
valadoc_content_embedded_new (void)
{
	return valadoc_content_embedded_construct (VALADOC_CONTENT_TYPE_EMBEDDED);
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


static void
valadoc_content_embedded_real_configure (ValadocContentContentElement* base,
                                         ValadocSettings* settings,
                                         ValadocResourceLocator* locator)
{
	ValadocContentEmbedded * self;
	ValadocResourceLocator* _tmp0_;
	self = (ValadocContentEmbedded*) base;
	g_return_if_fail (settings != NULL);
	g_return_if_fail (locator != NULL);
	_tmp0_ = _g_object_ref0 (locator);
	_g_object_unref0 (self->priv->_locator);
	self->priv->_locator = _tmp0_;
}


static void
valadoc_content_embedded_real_check (ValadocContentContentElement* base,
                                     ValadocApiTree* api_root,
                                     ValadocApiNode* container,
                                     const gchar* file_path,
                                     ValadocErrorReporter* reporter,
                                     ValadocSettings* settings)
{
	ValadocContentEmbedded * self;
	const gchar* _tmp0_;
	const gchar* _tmp12_;
	self = (ValadocContentEmbedded*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	_tmp0_ = self->priv->_url;
	if (!g_path_is_absolute (_tmp0_)) {
		gchar* relative_to_file = NULL;
		gchar* _tmp1_;
		gchar* _tmp2_;
		const gchar* _tmp3_;
		gchar* _tmp4_;
		gchar* _tmp5_;
		const gchar* _tmp6_;
		_tmp1_ = g_path_get_dirname (file_path);
		_tmp2_ = _tmp1_;
		_tmp3_ = self->priv->_url;
		_tmp4_ = g_build_path (G_DIR_SEPARATOR_S, _tmp2_, _tmp3_, NULL);
		_tmp5_ = _tmp4_;
		_g_free0 (_tmp2_);
		relative_to_file = _tmp5_;
		_tmp6_ = relative_to_file;
		if (g_file_test (_tmp6_, G_FILE_TEST_EXISTS | G_FILE_TEST_IS_REGULAR)) {
			gchar* _tmp7_;
			gchar* _tmp8_;
			ValadocApiPackage* _tmp9_;
			ValadocApiPackage* _tmp10_;
			ValadocApiPackage* _tmp11_;
			_tmp7_ = relative_to_file;
			relative_to_file = NULL;
			_tmp8_ = _tmp7_;
			valadoc_content_embedded_set_url (self, _tmp8_);
			_g_free0 (_tmp8_);
			_tmp9_ = valadoc_documentation_get_package ((ValadocDocumentation*) container);
			_tmp10_ = _tmp9_;
			_tmp11_ = _g_object_ref0 (_tmp10_);
			_g_object_unref0 (self->package);
			self->package = _tmp11_;
			_g_free0 (relative_to_file);
			return;
		}
		_g_free0 (relative_to_file);
	}
	_tmp12_ = self->priv->_url;
	if (!g_file_test (_tmp12_, G_FILE_TEST_EXISTS | G_FILE_TEST_IS_REGULAR)) {
		gchar* base_name = NULL;
		const gchar* _tmp13_;
		gchar* _tmp14_;
		gchar** _tmp15_;
		gint _tmp15__length1;
		gchar* _tmp25_ = NULL;
		gchar* node_segment = NULL;
		gchar* _tmp30_;
		const gchar* _tmp31_;
		gchar* _tmp32_;
		gchar* _tmp33_;
		const gchar* _tmp34_;
		_tmp13_ = self->priv->_url;
		_tmp14_ = g_path_get_basename (_tmp13_);
		base_name = _tmp14_;
		_tmp15_ = settings->alternative_resource_dirs;
		_tmp15__length1 = settings->alternative_resource_dirs_length1;
		{
			gchar** dir_collection = NULL;
			gint dir_collection_length1 = 0;
			gint _dir_collection_size_ = 0;
			gint dir_it = 0;
			dir_collection = _tmp15_;
			dir_collection_length1 = _tmp15__length1;
			for (dir_it = 0; dir_it < _tmp15__length1; dir_it = dir_it + 1) {
				const gchar* dir = NULL;
				dir = dir_collection[dir_it];
				{
					gchar* alternative_path = NULL;
					const gchar* _tmp16_;
					const gchar* _tmp17_;
					gchar* _tmp18_;
					const gchar* _tmp19_;
					_tmp16_ = dir;
					_tmp17_ = base_name;
					_tmp18_ = g_build_path (G_DIR_SEPARATOR_S, _tmp16_, _tmp17_, NULL);
					alternative_path = _tmp18_;
					_tmp19_ = alternative_path;
					if (g_file_test (_tmp19_, G_FILE_TEST_EXISTS | G_FILE_TEST_IS_REGULAR)) {
						gchar* _tmp20_;
						gchar* _tmp21_;
						ValadocApiPackage* _tmp22_;
						ValadocApiPackage* _tmp23_;
						ValadocApiPackage* _tmp24_;
						_tmp20_ = alternative_path;
						alternative_path = NULL;
						_tmp21_ = _tmp20_;
						valadoc_content_embedded_set_url (self, _tmp21_);
						_g_free0 (_tmp21_);
						_tmp22_ = valadoc_documentation_get_package ((ValadocDocumentation*) container);
						_tmp23_ = _tmp22_;
						_tmp24_ = _g_object_ref0 (_tmp23_);
						_g_object_unref0 (self->package);
						self->package = _tmp24_;
						_g_free0 (alternative_path);
						_g_free0 (base_name);
						return;
					}
					_g_free0 (alternative_path);
				}
			}
		}
		if (G_TYPE_CHECK_INSTANCE_TYPE (container, VALADOC_API_TYPE_PACKAGE)) {
			gchar* _tmp26_;
			_tmp26_ = g_strdup ("");
			_g_free0 (_tmp25_);
			_tmp25_ = _tmp26_;
		} else {
			gchar* _tmp27_;
			gchar* _tmp28_;
			gchar* _tmp29_;
			_tmp27_ = valadoc_api_node_get_full_name (container);
			_tmp28_ = _tmp27_;
			_tmp29_ = g_strconcat (_tmp28_, ": ", NULL);
			_g_free0 (_tmp25_);
			_tmp25_ = _tmp29_;
			_g_free0 (_tmp28_);
		}
		_tmp30_ = g_strdup (_tmp25_);
		node_segment = _tmp30_;
		_tmp31_ = node_segment;
		_tmp32_ = g_strdup_printf ("%s: %s{{", file_path, _tmp31_);
		_tmp33_ = _tmp32_;
		_tmp34_ = self->priv->_url;
		valadoc_error_reporter_simple_error (reporter, _tmp33_, "'%s' does not exist", _tmp34_);
		_g_free0 (_tmp33_);
		_g_free0 (node_segment);
		_g_free0 (_tmp25_);
		_g_free0 (base_name);
	} else {
		ValadocApiPackage* _tmp35_;
		ValadocApiPackage* _tmp36_;
		ValadocApiPackage* _tmp37_;
		_tmp35_ = valadoc_documentation_get_package ((ValadocDocumentation*) container);
		_tmp36_ = _tmp35_;
		_tmp37_ = _g_object_ref0 (_tmp36_);
		_g_object_unref0 (self->package);
		self->package = _tmp37_;
	}
}


static void
valadoc_content_embedded_real_accept (ValadocContentContentElement* base,
                                      ValadocContentContentVisitor* visitor)
{
	ValadocContentEmbedded * self;
	self = (ValadocContentEmbedded*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_embedded (visitor, self);
}


static gboolean
valadoc_content_embedded_real_is_empty (ValadocContentContentElement* base)
{
	ValadocContentEmbedded * self;
	gboolean result = FALSE;
	self = (ValadocContentEmbedded*) base;
	result = FALSE;
	return result;
}


static ValadocContentContentElement*
valadoc_content_embedded_real_copy (ValadocContentContentElement* base,
                                    ValadocContentContentElement* new_parent)
{
	ValadocContentEmbedded * self;
	ValadocContentContentElement* result = NULL;
	ValadocContentEmbedded* embedded = NULL;
	ValadocContentEmbedded* _tmp0_;
	ValadocContentHorizontalAlign _tmp1_;
	ValadocContentHorizontalAlign _tmp2_;
	ValadocContentVerticalAlign _tmp3_;
	ValadocContentVerticalAlign _tmp4_;
	ValadocResourceLocator* _tmp5_;
	ValadocResourceLocator* _tmp6_;
	const gchar* _tmp7_;
	ValadocApiPackage* _tmp8_;
	ValadocApiPackage* _tmp9_;
	const gchar* _tmp10_;
	const gchar* _tmp11_;
	const gchar* _tmp12_;
	self = (ValadocContentEmbedded*) base;
	_tmp0_ = valadoc_content_embedded_new ();
	embedded = _tmp0_;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) embedded, new_parent);
	_tmp1_ = valadoc_content_style_attributes_get_horizontal_align ((ValadocContentStyleAttributes*) self);
	_tmp2_ = _tmp1_;
	valadoc_content_style_attributes_set_horizontal_align ((ValadocContentStyleAttributes*) embedded, _tmp2_);
	_tmp3_ = valadoc_content_style_attributes_get_vertical_align ((ValadocContentStyleAttributes*) self);
	_tmp4_ = _tmp3_;
	valadoc_content_style_attributes_set_vertical_align ((ValadocContentStyleAttributes*) embedded, _tmp4_);
	_tmp5_ = self->priv->_locator;
	_tmp6_ = _g_object_ref0 (_tmp5_);
	_g_object_unref0 (embedded->priv->_locator);
	embedded->priv->_locator = _tmp6_;
	_tmp7_ = self->priv->_caption;
	valadoc_content_embedded_set_caption (embedded, _tmp7_);
	_tmp8_ = self->package;
	_tmp9_ = _g_object_ref0 (_tmp8_);
	_g_object_unref0 (embedded->package);
	embedded->package = _tmp9_;
	_tmp10_ = valadoc_content_style_attributes_get_style ((ValadocContentStyleAttributes*) self);
	_tmp11_ = _tmp10_;
	valadoc_content_style_attributes_set_style ((ValadocContentStyleAttributes*) embedded, _tmp11_);
	_tmp12_ = self->priv->_url;
	valadoc_content_embedded_set_url (embedded, _tmp12_);
	result = (ValadocContentContentElement*) embedded;
	return result;
}


const gchar*
valadoc_content_embedded_get_url (ValadocContentEmbedded* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_url;
	result = _tmp0_;
	return result;
}


void
valadoc_content_embedded_set_url (ValadocContentEmbedded* self,
                                  const gchar* value)
{
	g_return_if_fail (self != NULL);
	if (g_strcmp0 (value, valadoc_content_embedded_get_url (self)) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_url);
		self->priv->_url = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_URL_PROPERTY]);
	}
}


const gchar*
valadoc_content_embedded_get_caption (ValadocContentEmbedded* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_caption;
	result = _tmp0_;
	return result;
}


void
valadoc_content_embedded_set_caption (ValadocContentEmbedded* self,
                                      const gchar* value)
{
	g_return_if_fail (self != NULL);
	if (g_strcmp0 (value, valadoc_content_embedded_get_caption (self)) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_caption);
		self->priv->_caption = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_CAPTION_PROPERTY]);
	}
}


static ValadocContentHorizontalAlign
valadoc_content_embedded_real_get_horizontal_align (ValadocContentStyleAttributes* base)
{
	ValadocContentHorizontalAlign result;
	ValadocContentEmbedded* self;
	ValadocContentHorizontalAlign _tmp0_;
	self = (ValadocContentEmbedded*) base;
	_tmp0_ = self->priv->_horizontal_align;
	result = _tmp0_;
	return result;
}


static void
valadoc_content_embedded_real_set_horizontal_align (ValadocContentStyleAttributes* base,
                                                    ValadocContentHorizontalAlign value)
{
	ValadocContentEmbedded* self;
	self = (ValadocContentEmbedded*) base;
	if (valadoc_content_embedded_real_get_horizontal_align (base) != value) {
		self->priv->_horizontal_align = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_HORIZONTAL_ALIGN_PROPERTY]);
	}
}


static ValadocContentVerticalAlign
valadoc_content_embedded_real_get_vertical_align (ValadocContentStyleAttributes* base)
{
	ValadocContentVerticalAlign result;
	ValadocContentEmbedded* self;
	ValadocContentVerticalAlign _tmp0_;
	self = (ValadocContentEmbedded*) base;
	_tmp0_ = self->priv->_vertical_align;
	result = _tmp0_;
	return result;
}


static void
valadoc_content_embedded_real_set_vertical_align (ValadocContentStyleAttributes* base,
                                                  ValadocContentVerticalAlign value)
{
	ValadocContentEmbedded* self;
	self = (ValadocContentEmbedded*) base;
	if (valadoc_content_embedded_real_get_vertical_align (base) != value) {
		self->priv->_vertical_align = value;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_VERTICAL_ALIGN_PROPERTY]);
	}
}


static const gchar*
valadoc_content_embedded_real_get_style (ValadocContentStyleAttributes* base)
{
	const gchar* result;
	ValadocContentEmbedded* self;
	const gchar* _tmp0_;
	self = (ValadocContentEmbedded*) base;
	_tmp0_ = self->priv->_style;
	result = _tmp0_;
	return result;
}


static void
valadoc_content_embedded_real_set_style (ValadocContentStyleAttributes* base,
                                         const gchar* value)
{
	ValadocContentEmbedded* self;
	self = (ValadocContentEmbedded*) base;
	if (g_strcmp0 (value, valadoc_content_embedded_real_get_style (base)) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_style);
		self->priv->_style = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_STYLE_PROPERTY]);
	}
}


static void
valadoc_content_embedded_class_init (ValadocContentEmbeddedClass * klass)
{
	valadoc_content_embedded_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentEmbedded_private_offset);
	((ValadocContentContentElementClass *) klass)->configure = (void (*) (ValadocContentContentElement*, ValadocSettings*, ValadocResourceLocator*)) valadoc_content_embedded_real_configure;
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_embedded_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_embedded_real_accept;
	((ValadocContentContentElementClass *) klass)->is_empty = (gboolean (*) (ValadocContentContentElement*)) valadoc_content_embedded_real_is_empty;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_embedded_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_content_embedded_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_content_embedded_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_embedded_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_EMBEDDED_URL_PROPERTY, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_URL_PROPERTY] = g_param_spec_string ("url", "url", "url", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_EMBEDDED_CAPTION_PROPERTY, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_CAPTION_PROPERTY] = g_param_spec_string ("caption", "caption", "caption", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_EMBEDDED_HORIZONTAL_ALIGN_PROPERTY, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_HORIZONTAL_ALIGN_PROPERTY] = g_param_spec_enum ("horizontal-align", "horizontal-align", "horizontal-align", VALADOC_CONTENT_TYPE_HORIZONTAL_ALIGN, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_EMBEDDED_VERTICAL_ALIGN_PROPERTY, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_VERTICAL_ALIGN_PROPERTY] = g_param_spec_enum ("vertical-align", "vertical-align", "vertical-align", VALADOC_CONTENT_TYPE_VERTICAL_ALIGN, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_EMBEDDED_STYLE_PROPERTY, valadoc_content_embedded_properties[VALADOC_CONTENT_EMBEDDED_STYLE_PROPERTY] = g_param_spec_string ("style", "style", "style", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void
valadoc_content_embedded_valadoc_content_inline_interface_init (ValadocContentInlineIface * iface)
{
	valadoc_content_embedded_valadoc_content_inline_parent_iface = g_type_interface_peek_parent (iface);
}


static void
valadoc_content_embedded_valadoc_content_style_attributes_interface_init (ValadocContentStyleAttributesIface * iface)
{
	valadoc_content_embedded_valadoc_content_style_attributes_parent_iface = g_type_interface_peek_parent (iface);
	iface->get_horizontal_align = valadoc_content_embedded_real_get_horizontal_align;
	iface->set_horizontal_align = valadoc_content_embedded_real_set_horizontal_align;
	iface->get_vertical_align = valadoc_content_embedded_real_get_vertical_align;
	iface->set_vertical_align = valadoc_content_embedded_real_set_vertical_align;
	iface->get_style = valadoc_content_embedded_real_get_style;
	iface->set_style = valadoc_content_embedded_real_set_style;
}


static void
valadoc_content_embedded_instance_init (ValadocContentEmbedded * self)
{
	self->priv = valadoc_content_embedded_get_instance_private (self);
}


static void
valadoc_content_embedded_finalize (GObject * obj)
{
	ValadocContentEmbedded * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_EMBEDDED, ValadocContentEmbedded);
	_g_free0 (self->priv->_url);
	_g_free0 (self->priv->_caption);
	_g_free0 (self->priv->_style);
	_g_object_unref0 (self->package);
	_g_object_unref0 (self->priv->_locator);
	G_OBJECT_CLASS (valadoc_content_embedded_parent_class)->finalize (obj);
}


GType
valadoc_content_embedded_get_type (void)
{
	static volatile gsize valadoc_content_embedded_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_embedded_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocContentEmbeddedClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_embedded_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentEmbedded), 0, (GInstanceInitFunc) valadoc_content_embedded_instance_init, NULL };
		static const GInterfaceInfo valadoc_content_inline_info = { (GInterfaceInitFunc) valadoc_content_embedded_valadoc_content_inline_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		static const GInterfaceInfo valadoc_content_style_attributes_info = { (GInterfaceInitFunc) valadoc_content_embedded_valadoc_content_style_attributes_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType valadoc_content_embedded_type_id;
		valadoc_content_embedded_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_CONTENT_ELEMENT, "ValadocContentEmbedded", &g_define_type_info, 0);
		g_type_add_interface_static (valadoc_content_embedded_type_id, VALADOC_CONTENT_TYPE_INLINE, &valadoc_content_inline_info);
		g_type_add_interface_static (valadoc_content_embedded_type_id, VALADOC_CONTENT_TYPE_STYLE_ATTRIBUTES, &valadoc_content_style_attributes_info);
		ValadocContentEmbedded_private_offset = g_type_add_instance_private (valadoc_content_embedded_type_id, sizeof (ValadocContentEmbeddedPrivate));
		g_once_init_leave (&valadoc_content_embedded_type_id__volatile, valadoc_content_embedded_type_id);
	}
	return valadoc_content_embedded_type_id__volatile;
}


static void
_vala_valadoc_content_embedded_get_property (GObject * object,
                                             guint property_id,
                                             GValue * value,
                                             GParamSpec * pspec)
{
	ValadocContentEmbedded * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_EMBEDDED, ValadocContentEmbedded);
	switch (property_id) {
		case VALADOC_CONTENT_EMBEDDED_URL_PROPERTY:
		g_value_set_string (value, valadoc_content_embedded_get_url (self));
		break;
		case VALADOC_CONTENT_EMBEDDED_CAPTION_PROPERTY:
		g_value_set_string (value, valadoc_content_embedded_get_caption (self));
		break;
		case VALADOC_CONTENT_EMBEDDED_HORIZONTAL_ALIGN_PROPERTY:
		g_value_set_enum (value, valadoc_content_style_attributes_get_horizontal_align ((ValadocContentStyleAttributes*) self));
		break;
		case VALADOC_CONTENT_EMBEDDED_VERTICAL_ALIGN_PROPERTY:
		g_value_set_enum (value, valadoc_content_style_attributes_get_vertical_align ((ValadocContentStyleAttributes*) self));
		break;
		case VALADOC_CONTENT_EMBEDDED_STYLE_PROPERTY:
		g_value_set_string (value, valadoc_content_style_attributes_get_style ((ValadocContentStyleAttributes*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void
_vala_valadoc_content_embedded_set_property (GObject * object,
                                             guint property_id,
                                             const GValue * value,
                                             GParamSpec * pspec)
{
	ValadocContentEmbedded * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_EMBEDDED, ValadocContentEmbedded);
	switch (property_id) {
		case VALADOC_CONTENT_EMBEDDED_URL_PROPERTY:
		valadoc_content_embedded_set_url (self, g_value_get_string (value));
		break;
		case VALADOC_CONTENT_EMBEDDED_CAPTION_PROPERTY:
		valadoc_content_embedded_set_caption (self, g_value_get_string (value));
		break;
		case VALADOC_CONTENT_EMBEDDED_HORIZONTAL_ALIGN_PROPERTY:
		valadoc_content_style_attributes_set_horizontal_align ((ValadocContentStyleAttributes*) self, g_value_get_enum (value));
		break;
		case VALADOC_CONTENT_EMBEDDED_VERTICAL_ALIGN_PROPERTY:
		valadoc_content_style_attributes_set_vertical_align ((ValadocContentStyleAttributes*) self, g_value_get_enum (value));
		break;
		case VALADOC_CONTENT_EMBEDDED_STYLE_PROPERTY:
		valadoc_content_style_attributes_set_style ((ValadocContentStyleAttributes*) self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



