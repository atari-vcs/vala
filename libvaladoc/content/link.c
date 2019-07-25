/* link.c generated by valac, the Vala compiler
 * generated from link.vala, do not modify */

/* link.vala
 *
 * Copyright (C) 2008-2009 Didier Villevalois
 * Copyright (C) 2008-2014 Florian Brosch
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
	VALADOC_CONTENT_LINK_0_PROPERTY,
	VALADOC_CONTENT_LINK_URL_PROPERTY,
	VALADOC_CONTENT_LINK_ID_REGISTRAR_PROPERTY,
	VALADOC_CONTENT_LINK_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_link_properties[VALADOC_CONTENT_LINK_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))
#define _valadoc_importer_internal_id_registrar_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_importer_internal_id_registrar_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _ValadocContentLinkPrivate {
	gchar* _url;
	ValadocImporterInternalIdRegistrar* _id_registrar;
};


static gint ValadocContentLink_private_offset;
static gpointer valadoc_content_link_parent_class = NULL;
static ValadocContentInlineIface * valadoc_content_link_valadoc_content_inline_parent_iface = NULL;

G_GNUC_INTERNAL ValadocContentLink* valadoc_content_link_new (void);
G_GNUC_INTERNAL ValadocContentLink* valadoc_content_link_construct (GType object_type);
G_GNUC_INTERNAL ValadocContentInlineContent* valadoc_content_inline_content_construct (GType object_type);
static void valadoc_content_link_real_configure (ValadocContentContentElement* base,
                                          ValadocSettings* settings,
                                          ValadocResourceLocator* locator);
static void valadoc_content_link_real_check (ValadocContentContentElement* base,
                                      ValadocApiTree* api_root,
                                      ValadocApiNode* container,
                                      const gchar* file_path,
                                      ValadocErrorReporter* reporter,
                                      ValadocSettings* settings);
G_GNUC_INTERNAL ValadocContentSymbolLink* valadoc_content_symbol_link_new (ValadocApiNode* symbol,
                                                           const gchar* given_symbol_name);
G_GNUC_INTERNAL ValadocContentSymbolLink* valadoc_content_symbol_link_construct (GType object_type,
                                                                 ValadocApiNode* symbol,
                                                                 const gchar* given_symbol_name);
G_GNUC_INTERNAL void valadoc_content_inline_content_replace_node (ValadocContentInlineContent* self,
                                                  ValadocContentInline* old,
                                                  ValadocContentInline* replacement);
G_GNUC_INTERNAL ValadocContentRun* valadoc_content_run_new (ValadocContentRunStyle style);
G_GNUC_INTERNAL ValadocContentRun* valadoc_content_run_construct (GType object_type,
                                                  ValadocContentRunStyle style);
static void valadoc_content_link_real_accept (ValadocContentContentElement* base,
                                       ValadocContentContentVisitor* visitor);
static gboolean valadoc_content_link_real_is_empty (ValadocContentContentElement* base);
static ValadocContentContentElement* valadoc_content_link_real_copy (ValadocContentContentElement* base,
                                                              ValadocContentContentElement* new_parent);
G_GNUC_INTERNAL void valadoc_content_link_set_id_registrar (ValadocContentLink* self,
                                            ValadocImporterInternalIdRegistrar* value);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_content_link_finalize (GObject * obj);
static void _vala_valadoc_content_link_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec);
static void _vala_valadoc_content_link_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec);


static inline gpointer
valadoc_content_link_get_instance_private (ValadocContentLink* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentLink_private_offset);
}


G_GNUC_INTERNAL ValadocContentLink*
valadoc_content_link_construct (GType object_type)
{
	ValadocContentLink * self = NULL;
	self = (ValadocContentLink*) valadoc_content_inline_content_construct (object_type);
	return self;
}


G_GNUC_INTERNAL ValadocContentLink*
valadoc_content_link_new (void)
{
	return valadoc_content_link_construct (VALADOC_CONTENT_TYPE_LINK);
}


static void
valadoc_content_link_real_configure (ValadocContentContentElement* base,
                                     ValadocSettings* settings,
                                     ValadocResourceLocator* locator)
{
	ValadocContentLink * self;
	self = (ValadocContentLink*) base;
	g_return_if_fail (settings != NULL);
	g_return_if_fail (locator != NULL);
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


static void
valadoc_content_link_real_check (ValadocContentContentElement* base,
                                 ValadocApiTree* api_root,
                                 ValadocApiNode* container,
                                 const gchar* file_path,
                                 ValadocErrorReporter* reporter,
                                 ValadocSettings* settings)
{
	ValadocContentLink * self;
	ValadocImporterInternalIdRegistrar* _tmp0_;
	self = (ValadocContentLink*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	_tmp0_ = self->priv->_id_registrar;
	if (_tmp0_ != NULL) {
		ValadocApiNode* node = NULL;
		ValadocImporterInternalIdRegistrar* _tmp1_;
		const gchar* _tmp2_;
		ValadocApiNode* _tmp3_;
		ValadocApiNode* _tmp4_;
		gchar* _url = NULL;
		ValadocImporterInternalIdRegistrar* _tmp19_;
		const gchar* _tmp20_;
		gchar* _tmp21_;
		const gchar* _tmp22_;
		const gchar* _tmp46_;
		_tmp1_ = self->priv->_id_registrar;
		_tmp2_ = self->priv->_url;
		_tmp3_ = valadoc_importer_internal_id_registrar_map_symbol_id (_tmp1_, _tmp2_);
		node = _tmp3_;
		_tmp4_ = node;
		if (_tmp4_ != NULL) {
			ValadocContentInlineContent* _parent = NULL;
			ValadocContentContentElement* _tmp5_;
			ValadocContentContentElement* _tmp6_;
			ValadocContentInlineContent* _tmp7_;
			ValadocContentInlineContent* _tmp8_;
			ValadocContentSymbolLink* replacement = NULL;
			ValadocApiNode* _tmp9_;
			ValadocContentSymbolLink* _tmp10_;
			ValadocContentSymbolLink* _tmp11_;
			ValaList* _tmp12_;
			ValaList* _tmp13_;
			ValaList* _tmp14_;
			ValaList* _tmp15_;
			ValadocContentSymbolLink* _tmp16_;
			ValadocContentInlineContent* _tmp17_;
			ValadocContentSymbolLink* _tmp18_;
			_tmp5_ = valadoc_content_content_element_get_parent ((ValadocContentContentElement*) self);
			_tmp6_ = _tmp5_;
			_tmp7_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp6_, VALADOC_CONTENT_TYPE_INLINE_CONTENT) ? ((ValadocContentInlineContent*) _tmp6_) : NULL);
			_parent = _tmp7_;
			_tmp8_ = _parent;
			_vala_assert (_tmp8_ != NULL, "_parent != null");
			_tmp9_ = node;
			_tmp10_ = valadoc_content_symbol_link_new (_tmp9_, NULL);
			replacement = _tmp10_;
			_tmp11_ = replacement;
			_tmp12_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp11_);
			_tmp13_ = _tmp12_;
			_tmp14_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) self);
			_tmp15_ = _tmp14_;
			vala_collection_add_all ((ValaCollection*) _tmp13_, (ValaCollection*) _tmp15_);
			_tmp16_ = replacement;
			valadoc_content_content_element_check ((ValadocContentContentElement*) _tmp16_, api_root, container, file_path, reporter, settings);
			_tmp17_ = _parent;
			_tmp18_ = replacement;
			valadoc_content_inline_content_replace_node (_tmp17_, (ValadocContentInline*) self, (ValadocContentInline*) _tmp18_);
			_g_object_unref0 (replacement);
			_g_object_unref0 (_parent);
			_g_object_unref0 (node);
			return;
		}
		_tmp19_ = self->priv->_id_registrar;
		_tmp20_ = self->priv->_url;
		_tmp21_ = valadoc_importer_internal_id_registrar_map_url_id (_tmp19_, _tmp20_);
		_url = _tmp21_;
		_tmp22_ = _url;
		if (_tmp22_ == NULL) {
			gchar* _tmp23_ = NULL;
			gchar* node_segment = NULL;
			gchar* _tmp28_;
			const gchar* _tmp29_;
			gchar* _tmp30_;
			gchar* _tmp31_;
			const gchar* _tmp32_;
			ValadocContentInlineContent* _parent = NULL;
			ValadocContentContentElement* _tmp33_;
			ValadocContentContentElement* _tmp34_;
			ValadocContentInlineContent* _tmp35_;
			ValadocContentInlineContent* _tmp36_;
			ValadocContentRun* replacement = NULL;
			ValadocContentRun* _tmp37_;
			ValadocContentRun* _tmp38_;
			ValaList* _tmp39_;
			ValaList* _tmp40_;
			ValaList* _tmp41_;
			ValaList* _tmp42_;
			ValadocContentRun* _tmp43_;
			ValadocContentInlineContent* _tmp44_;
			ValadocContentRun* _tmp45_;
			if (G_TYPE_CHECK_INSTANCE_TYPE (container, VALADOC_API_TYPE_PACKAGE)) {
				gchar* _tmp24_;
				_tmp24_ = g_strdup ("");
				_g_free0 (_tmp23_);
				_tmp23_ = _tmp24_;
			} else {
				gchar* _tmp25_;
				gchar* _tmp26_;
				gchar* _tmp27_;
				_tmp25_ = valadoc_api_node_get_full_name (container);
				_tmp26_ = _tmp25_;
				_tmp27_ = g_strconcat (_tmp26_, ": ", NULL);
				_g_free0 (_tmp23_);
				_tmp23_ = _tmp27_;
				_g_free0 (_tmp26_);
			}
			_tmp28_ = g_strdup (_tmp23_);
			node_segment = _tmp28_;
			_tmp29_ = node_segment;
			_tmp30_ = g_strdup_printf ("%s: %s[[", file_path, _tmp29_);
			_tmp31_ = _tmp30_;
			_tmp32_ = self->priv->_url;
			valadoc_error_reporter_simple_warning (reporter, _tmp31_, "unknown imported internal id '%s'", _tmp32_);
			_g_free0 (_tmp31_);
			_tmp33_ = valadoc_content_content_element_get_parent ((ValadocContentContentElement*) self);
			_tmp34_ = _tmp33_;
			_tmp35_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp34_, VALADOC_CONTENT_TYPE_INLINE_CONTENT) ? ((ValadocContentInlineContent*) _tmp34_) : NULL);
			_parent = _tmp35_;
			_tmp36_ = _parent;
			_vala_assert (_tmp36_ != NULL, "_parent != null");
			_tmp37_ = valadoc_content_run_new (VALADOC_CONTENT_RUN_STYLE_ITALIC);
			replacement = _tmp37_;
			_tmp38_ = replacement;
			_tmp39_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp38_);
			_tmp40_ = _tmp39_;
			_tmp41_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) self);
			_tmp42_ = _tmp41_;
			vala_collection_add_all ((ValaCollection*) _tmp40_, (ValaCollection*) _tmp42_);
			_tmp43_ = replacement;
			valadoc_content_content_element_check ((ValadocContentContentElement*) _tmp43_, api_root, container, file_path, reporter, settings);
			_tmp44_ = _parent;
			_tmp45_ = replacement;
			valadoc_content_inline_content_replace_node (_tmp44_, (ValadocContentInline*) self, (ValadocContentInline*) _tmp45_);
			_g_object_unref0 (replacement);
			_g_object_unref0 (_parent);
			_g_free0 (node_segment);
			_g_free0 (_tmp23_);
			_g_free0 (_url);
			_g_object_unref0 (node);
			return;
		}
		_tmp46_ = _url;
		valadoc_content_link_set_url (self, _tmp46_);
		_g_free0 (_url);
		_g_object_unref0 (node);
	}
	VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_content_link_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_INLINE_CONTENT, ValadocContentInlineContent), api_root, container, file_path, reporter, settings);
}


static void
valadoc_content_link_real_accept (ValadocContentContentElement* base,
                                  ValadocContentContentVisitor* visitor)
{
	ValadocContentLink * self;
	self = (ValadocContentLink*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_link (visitor, self);
}


static gboolean
valadoc_content_link_real_is_empty (ValadocContentContentElement* base)
{
	ValadocContentLink * self;
	gboolean result = FALSE;
	self = (ValadocContentLink*) base;
	result = FALSE;
	return result;
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


static ValadocContentContentElement*
valadoc_content_link_real_copy (ValadocContentContentElement* base,
                                ValadocContentContentElement* new_parent)
{
	ValadocContentLink * self;
	ValadocContentContentElement* result = NULL;
	ValadocContentLink* link = NULL;
	ValadocContentLink* _tmp0_;
	ValadocContentLink* _tmp1_;
	ValadocImporterInternalIdRegistrar* _tmp2_;
	ValadocContentLink* _tmp3_;
	ValadocContentLink* _tmp4_;
	const gchar* _tmp5_;
	self = (ValadocContentLink*) base;
	_tmp0_ = valadoc_content_link_new ();
	link = _tmp0_;
	_tmp1_ = link;
	_tmp2_ = self->priv->_id_registrar;
	valadoc_content_link_set_id_registrar (_tmp1_, _tmp2_);
	_tmp3_ = link;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp3_, new_parent);
	_tmp4_ = link;
	_tmp5_ = self->priv->_url;
	valadoc_content_link_set_url (_tmp4_, _tmp5_);
	{
		ValaList* _element_list = NULL;
		ValaList* _tmp6_;
		ValaList* _tmp7_;
		ValaList* _tmp8_;
		gint _element_size = 0;
		ValaList* _tmp9_;
		gint _tmp10_;
		gint _tmp11_;
		gint _element_index = 0;
		_tmp6_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) self);
		_tmp7_ = _tmp6_;
		_tmp8_ = _vala_iterable_ref0 (_tmp7_);
		_element_list = _tmp8_;
		_tmp9_ = _element_list;
		_tmp10_ = vala_collection_get_size ((ValaCollection*) _tmp9_);
		_tmp11_ = _tmp10_;
		_element_size = _tmp11_;
		_element_index = -1;
		while (TRUE) {
			gint _tmp12_;
			gint _tmp13_;
			gint _tmp14_;
			ValadocContentInline* element = NULL;
			ValaList* _tmp15_;
			gint _tmp16_;
			gpointer _tmp17_;
			ValadocContentInline* copy = NULL;
			ValadocContentInline* _tmp18_;
			ValadocContentLink* _tmp19_;
			ValadocContentContentElement* _tmp20_;
			ValadocContentInline* _tmp21_;
			ValadocContentLink* _tmp22_;
			ValaList* _tmp23_;
			ValaList* _tmp24_;
			ValadocContentInline* _tmp25_;
			_tmp12_ = _element_index;
			_element_index = _tmp12_ + 1;
			_tmp13_ = _element_index;
			_tmp14_ = _element_size;
			if (!(_tmp13_ < _tmp14_)) {
				break;
			}
			_tmp15_ = _element_list;
			_tmp16_ = _element_index;
			_tmp17_ = vala_list_get (_tmp15_, _tmp16_);
			element = (ValadocContentInline*) _tmp17_;
			_tmp18_ = element;
			_tmp19_ = link;
			_tmp20_ = valadoc_content_content_element_copy ((ValadocContentContentElement*) _tmp18_, (ValadocContentContentElement*) _tmp19_);
			_tmp21_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp20_, VALADOC_CONTENT_TYPE_INLINE) ? ((ValadocContentInline*) _tmp20_) : NULL;
			if (_tmp21_ == NULL) {
				_g_object_unref0 (_tmp20_);
			}
			copy = _tmp21_;
			_tmp22_ = link;
			_tmp23_ = valadoc_content_inline_content_get_content ((ValadocContentInlineContent*) _tmp22_);
			_tmp24_ = _tmp23_;
			_tmp25_ = copy;
			vala_collection_add ((ValaCollection*) _tmp24_, _tmp25_);
			_g_object_unref0 (copy);
			_g_object_unref0 (element);
		}
		_vala_iterable_unref0 (_element_list);
	}
	result = (ValadocContentContentElement*) link;
	return result;
}


const gchar*
valadoc_content_link_get_url (ValadocContentLink* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_url;
	result = _tmp0_;
	return result;
}


void
valadoc_content_link_set_url (ValadocContentLink* self,
                              const gchar* value)
{
	g_return_if_fail (self != NULL);
	if (g_strcmp0 (value, valadoc_content_link_get_url (self)) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_url);
		self->priv->_url = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_link_properties[VALADOC_CONTENT_LINK_URL_PROPERTY]);
	}
}


ValadocImporterInternalIdRegistrar*
valadoc_content_link_get_id_registrar (ValadocContentLink* self)
{
	ValadocImporterInternalIdRegistrar* result;
	ValadocImporterInternalIdRegistrar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_id_registrar;
	result = _tmp0_;
	return result;
}


static gpointer
_valadoc_importer_internal_id_registrar_ref0 (gpointer self)
{
	return self ? valadoc_importer_internal_id_registrar_ref (self) : NULL;
}


G_GNUC_INTERNAL void
valadoc_content_link_set_id_registrar (ValadocContentLink* self,
                                       ValadocImporterInternalIdRegistrar* value)
{
	g_return_if_fail (self != NULL);
	if (valadoc_content_link_get_id_registrar (self) != value) {
		ValadocImporterInternalIdRegistrar* _tmp0_;
		_tmp0_ = _valadoc_importer_internal_id_registrar_ref0 (value);
		_valadoc_importer_internal_id_registrar_unref0 (self->priv->_id_registrar);
		self->priv->_id_registrar = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_link_properties[VALADOC_CONTENT_LINK_ID_REGISTRAR_PROPERTY]);
	}
}


static void
valadoc_content_link_class_init (ValadocContentLinkClass * klass)
{
	valadoc_content_link_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentLink_private_offset);
	((ValadocContentContentElementClass *) klass)->configure = (void (*) (ValadocContentContentElement*, ValadocSettings*, ValadocResourceLocator*)) valadoc_content_link_real_configure;
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_link_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_link_real_accept;
	((ValadocContentContentElementClass *) klass)->is_empty = (gboolean (*) (ValadocContentContentElement*)) valadoc_content_link_real_is_empty;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_link_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_content_link_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_content_link_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_link_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_LINK_URL_PROPERTY, valadoc_content_link_properties[VALADOC_CONTENT_LINK_URL_PROPERTY] = g_param_spec_string ("url", "url", "url", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * Used by importers to transform internal URLs
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_LINK_ID_REGISTRAR_PROPERTY, valadoc_content_link_properties[VALADOC_CONTENT_LINK_ID_REGISTRAR_PROPERTY] = valadoc_importer_param_spec_internal_id_registrar ("id-registrar", "id-registrar", "id-registrar", VALADOC_IMPORTER_TYPE_INTERNAL_ID_REGISTRAR, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void
valadoc_content_link_valadoc_content_inline_interface_init (ValadocContentInlineIface * iface)
{
	valadoc_content_link_valadoc_content_inline_parent_iface = g_type_interface_peek_parent (iface);
}


static void
valadoc_content_link_instance_init (ValadocContentLink * self)
{
	self->priv = valadoc_content_link_get_instance_private (self);
}


static void
valadoc_content_link_finalize (GObject * obj)
{
	ValadocContentLink * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_LINK, ValadocContentLink);
	_g_free0 (self->priv->_url);
	_valadoc_importer_internal_id_registrar_unref0 (self->priv->_id_registrar);
	G_OBJECT_CLASS (valadoc_content_link_parent_class)->finalize (obj);
}


GType
valadoc_content_link_get_type (void)
{
	static volatile gsize valadoc_content_link_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_link_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocContentLinkClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_link_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentLink), 0, (GInstanceInitFunc) valadoc_content_link_instance_init, NULL };
		static const GInterfaceInfo valadoc_content_inline_info = { (GInterfaceInitFunc) valadoc_content_link_valadoc_content_inline_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType valadoc_content_link_type_id;
		valadoc_content_link_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_INLINE_CONTENT, "ValadocContentLink", &g_define_type_info, 0);
		g_type_add_interface_static (valadoc_content_link_type_id, VALADOC_CONTENT_TYPE_INLINE, &valadoc_content_inline_info);
		ValadocContentLink_private_offset = g_type_add_instance_private (valadoc_content_link_type_id, sizeof (ValadocContentLinkPrivate));
		g_once_init_leave (&valadoc_content_link_type_id__volatile, valadoc_content_link_type_id);
	}
	return valadoc_content_link_type_id__volatile;
}


static void
_vala_valadoc_content_link_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec)
{
	ValadocContentLink * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_LINK, ValadocContentLink);
	switch (property_id) {
		case VALADOC_CONTENT_LINK_URL_PROPERTY:
		g_value_set_string (value, valadoc_content_link_get_url (self));
		break;
		case VALADOC_CONTENT_LINK_ID_REGISTRAR_PROPERTY:
		valadoc_importer_value_set_internal_id_registrar (value, valadoc_content_link_get_id_registrar (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void
_vala_valadoc_content_link_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec)
{
	ValadocContentLink * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_LINK, ValadocContentLink);
	switch (property_id) {
		case VALADOC_CONTENT_LINK_URL_PROPERTY:
		valadoc_content_link_set_url (self, g_value_get_string (value));
		break;
		case VALADOC_CONTENT_LINK_ID_REGISTRAR_PROPERTY:
		valadoc_content_link_set_id_registrar (self, valadoc_importer_value_get_internal_id_registrar (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



