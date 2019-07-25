/* wikilink.c generated by valac, the Vala compiler
 * generated from wikilink.vala, do not modify */

/* link.vala
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
	VALADOC_CONTENT_WIKI_LINK_0_PROPERTY,
	VALADOC_CONTENT_WIKI_LINK_PAGE_PROPERTY,
	VALADOC_CONTENT_WIKI_LINK_NAME_PROPERTY,
	VALADOC_CONTENT_WIKI_LINK_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_wiki_link_properties[VALADOC_CONTENT_WIKI_LINK_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValadocContentWikiLinkPrivate {
	ValadocWikiPage* _page;
	gchar* _name;
};


static gint ValadocContentWikiLink_private_offset;
static gpointer valadoc_content_wiki_link_parent_class = NULL;
static ValadocContentInlineIface * valadoc_content_wiki_link_valadoc_content_inline_parent_iface = NULL;

G_GNUC_INTERNAL ValadocContentWikiLink* valadoc_content_wiki_link_new (void);
G_GNUC_INTERNAL ValadocContentWikiLink* valadoc_content_wiki_link_construct (GType object_type);
G_GNUC_INTERNAL ValadocContentInlineContent* valadoc_content_inline_content_construct (GType object_type);
static void valadoc_content_wiki_link_real_check (ValadocContentContentElement* base,
                                           ValadocApiTree* api_root,
                                           ValadocApiNode* container,
                                           const gchar* file_path,
                                           ValadocErrorReporter* reporter,
                                           ValadocSettings* settings);
G_GNUC_INTERNAL void valadoc_content_wiki_link_set_page (ValadocContentWikiLink* self,
                                         ValadocWikiPage* value);
static void valadoc_content_wiki_link_real_accept (ValadocContentContentElement* base,
                                            ValadocContentContentVisitor* visitor);
static gboolean valadoc_content_wiki_link_real_is_empty (ValadocContentContentElement* base);
static ValadocContentContentElement* valadoc_content_wiki_link_real_copy (ValadocContentContentElement* base,
                                                                   ValadocContentContentElement* new_parent);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_content_wiki_link_finalize (GObject * obj);
static void _vala_valadoc_content_wiki_link_get_property (GObject * object,
                                                   guint property_id,
                                                   GValue * value,
                                                   GParamSpec * pspec);
static void _vala_valadoc_content_wiki_link_set_property (GObject * object,
                                                   guint property_id,
                                                   const GValue * value,
                                                   GParamSpec * pspec);


static inline gpointer
valadoc_content_wiki_link_get_instance_private (ValadocContentWikiLink* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentWikiLink_private_offset);
}


G_GNUC_INTERNAL ValadocContentWikiLink*
valadoc_content_wiki_link_construct (GType object_type)
{
	ValadocContentWikiLink * self = NULL;
	self = (ValadocContentWikiLink*) valadoc_content_inline_content_construct (object_type);
	return self;
}


G_GNUC_INTERNAL ValadocContentWikiLink*
valadoc_content_wiki_link_new (void)
{
	return valadoc_content_wiki_link_construct (VALADOC_CONTENT_TYPE_WIKI_LINK);
}


static void
valadoc_content_wiki_link_real_check (ValadocContentContentElement* base,
                                      ValadocApiTree* api_root,
                                      ValadocApiNode* container,
                                      const gchar* file_path,
                                      ValadocErrorReporter* reporter,
                                      ValadocSettings* settings)
{
	ValadocContentWikiLink * self;
	ValadocWikiPageTree* _tmp0_;
	ValadocWikiPageTree* _tmp1_;
	const gchar* _tmp2_;
	ValadocWikiPage* _tmp3_;
	ValadocWikiPage* _tmp4_;
	ValadocWikiPage* _tmp5_;
	self = (ValadocContentWikiLink*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_content_wiki_link_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_INLINE_CONTENT, ValadocContentInlineContent), api_root, container, file_path, reporter, settings);
	_tmp0_ = valadoc_api_tree_get_wikitree (api_root);
	_tmp1_ = _tmp0_;
	_tmp2_ = self->priv->_name;
	_tmp3_ = valadoc_wiki_page_tree_search (_tmp1_, _tmp2_);
	_tmp4_ = _tmp3_;
	valadoc_content_wiki_link_set_page (self, _tmp4_);
	_g_object_unref0 (_tmp4_);
	_tmp5_ = self->priv->_page;
	if (_tmp5_ == NULL) {
		gchar* _tmp6_ = NULL;
		gchar* node_segment = NULL;
		gchar* _tmp11_;
		const gchar* _tmp12_;
		gchar* _tmp13_;
		gchar* _tmp14_;
		const gchar* _tmp15_;
		if (G_TYPE_CHECK_INSTANCE_TYPE (container, VALADOC_API_TYPE_PACKAGE)) {
			gchar* _tmp7_;
			_tmp7_ = g_strdup ("");
			_g_free0 (_tmp6_);
			_tmp6_ = _tmp7_;
		} else {
			gchar* _tmp8_;
			gchar* _tmp9_;
			gchar* _tmp10_;
			_tmp8_ = valadoc_api_node_get_full_name (container);
			_tmp9_ = _tmp8_;
			_tmp10_ = g_strconcat (_tmp9_, ": ", NULL);
			_g_free0 (_tmp6_);
			_tmp6_ = _tmp10_;
			_g_free0 (_tmp9_);
		}
		_tmp11_ = g_strdup (_tmp6_);
		node_segment = _tmp11_;
		_tmp12_ = node_segment;
		_tmp13_ = g_strdup_printf ("%s: %s[[", file_path, _tmp12_);
		_tmp14_ = _tmp13_;
		_tmp15_ = self->priv->_name;
		valadoc_error_reporter_simple_warning (reporter, _tmp14_, "'%s' does not exist", _tmp15_);
		_g_free0 (_tmp14_);
		_g_free0 (node_segment);
		_g_free0 (_tmp6_);
		return;
	}
}


static void
valadoc_content_wiki_link_real_accept (ValadocContentContentElement* base,
                                       ValadocContentContentVisitor* visitor)
{
	ValadocContentWikiLink * self;
	self = (ValadocContentWikiLink*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_wiki_link (visitor, self);
}


static gboolean
valadoc_content_wiki_link_real_is_empty (ValadocContentContentElement* base)
{
	ValadocContentWikiLink * self;
	gboolean result = FALSE;
	self = (ValadocContentWikiLink*) base;
	result = FALSE;
	return result;
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


static ValadocContentContentElement*
valadoc_content_wiki_link_real_copy (ValadocContentContentElement* base,
                                     ValadocContentContentElement* new_parent)
{
	ValadocContentWikiLink * self;
	ValadocContentContentElement* result = NULL;
	ValadocContentWikiLink* link = NULL;
	ValadocContentWikiLink* _tmp0_;
	ValadocContentWikiLink* _tmp1_;
	ValadocContentWikiLink* _tmp2_;
	ValadocWikiPage* _tmp3_;
	ValadocContentWikiLink* _tmp4_;
	const gchar* _tmp5_;
	self = (ValadocContentWikiLink*) base;
	_tmp0_ = valadoc_content_wiki_link_new ();
	link = _tmp0_;
	_tmp1_ = link;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp1_, new_parent);
	_tmp2_ = link;
	_tmp3_ = self->priv->_page;
	valadoc_content_wiki_link_set_page (_tmp2_, _tmp3_);
	_tmp4_ = link;
	_tmp5_ = self->priv->_name;
	valadoc_content_wiki_link_set_name (_tmp4_, _tmp5_);
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
			ValadocContentWikiLink* _tmp19_;
			ValadocContentContentElement* _tmp20_;
			ValadocContentInline* _tmp21_;
			ValadocContentWikiLink* _tmp22_;
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


ValadocWikiPage*
valadoc_content_wiki_link_get_page (ValadocContentWikiLink* self)
{
	ValadocWikiPage* result;
	ValadocWikiPage* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_page;
	result = _tmp0_;
	return result;
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


G_GNUC_INTERNAL void
valadoc_content_wiki_link_set_page (ValadocContentWikiLink* self,
                                    ValadocWikiPage* value)
{
	g_return_if_fail (self != NULL);
	if (valadoc_content_wiki_link_get_page (self) != value) {
		ValadocWikiPage* _tmp0_;
		_tmp0_ = _g_object_ref0 (value);
		_g_object_unref0 (self->priv->_page);
		self->priv->_page = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_wiki_link_properties[VALADOC_CONTENT_WIKI_LINK_PAGE_PROPERTY]);
	}
}


const gchar*
valadoc_content_wiki_link_get_name (ValadocContentWikiLink* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void
valadoc_content_wiki_link_set_name (ValadocContentWikiLink* self,
                                    const gchar* value)
{
	g_return_if_fail (self != NULL);
	if (g_strcmp0 (value, valadoc_content_wiki_link_get_name (self)) != 0) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup (value);
		_g_free0 (self->priv->_name);
		self->priv->_name = _tmp0_;
		g_object_notify_by_pspec ((GObject *) self, valadoc_content_wiki_link_properties[VALADOC_CONTENT_WIKI_LINK_NAME_PROPERTY]);
	}
}


static void
valadoc_content_wiki_link_class_init (ValadocContentWikiLinkClass * klass)
{
	valadoc_content_wiki_link_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentWikiLink_private_offset);
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_wiki_link_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_wiki_link_real_accept;
	((ValadocContentContentElementClass *) klass)->is_empty = (gboolean (*) (ValadocContentContentElement*)) valadoc_content_wiki_link_real_is_empty;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_wiki_link_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_content_wiki_link_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_valadoc_content_wiki_link_set_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_wiki_link_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_WIKI_LINK_PAGE_PROPERTY, valadoc_content_wiki_link_properties[VALADOC_CONTENT_WIKI_LINK_PAGE_PROPERTY] = g_param_spec_object ("page", "page", "page", VALADOC_TYPE_WIKI_PAGE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_WIKI_LINK_NAME_PROPERTY, valadoc_content_wiki_link_properties[VALADOC_CONTENT_WIKI_LINK_NAME_PROPERTY] = g_param_spec_string ("name", "name", "name", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void
valadoc_content_wiki_link_valadoc_content_inline_interface_init (ValadocContentInlineIface * iface)
{
	valadoc_content_wiki_link_valadoc_content_inline_parent_iface = g_type_interface_peek_parent (iface);
}


static void
valadoc_content_wiki_link_instance_init (ValadocContentWikiLink * self)
{
	self->priv = valadoc_content_wiki_link_get_instance_private (self);
}


static void
valadoc_content_wiki_link_finalize (GObject * obj)
{
	ValadocContentWikiLink * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_WIKI_LINK, ValadocContentWikiLink);
	_g_object_unref0 (self->priv->_page);
	_g_free0 (self->priv->_name);
	G_OBJECT_CLASS (valadoc_content_wiki_link_parent_class)->finalize (obj);
}


GType
valadoc_content_wiki_link_get_type (void)
{
	static volatile gsize valadoc_content_wiki_link_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_wiki_link_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocContentWikiLinkClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_wiki_link_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentWikiLink), 0, (GInstanceInitFunc) valadoc_content_wiki_link_instance_init, NULL };
		static const GInterfaceInfo valadoc_content_inline_info = { (GInterfaceInitFunc) valadoc_content_wiki_link_valadoc_content_inline_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType valadoc_content_wiki_link_type_id;
		valadoc_content_wiki_link_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_INLINE_CONTENT, "ValadocContentWikiLink", &g_define_type_info, 0);
		g_type_add_interface_static (valadoc_content_wiki_link_type_id, VALADOC_CONTENT_TYPE_INLINE, &valadoc_content_inline_info);
		ValadocContentWikiLink_private_offset = g_type_add_instance_private (valadoc_content_wiki_link_type_id, sizeof (ValadocContentWikiLinkPrivate));
		g_once_init_leave (&valadoc_content_wiki_link_type_id__volatile, valadoc_content_wiki_link_type_id);
	}
	return valadoc_content_wiki_link_type_id__volatile;
}


static void
_vala_valadoc_content_wiki_link_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec)
{
	ValadocContentWikiLink * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_WIKI_LINK, ValadocContentWikiLink);
	switch (property_id) {
		case VALADOC_CONTENT_WIKI_LINK_PAGE_PROPERTY:
		g_value_set_object (value, valadoc_content_wiki_link_get_page (self));
		break;
		case VALADOC_CONTENT_WIKI_LINK_NAME_PROPERTY:
		g_value_set_string (value, valadoc_content_wiki_link_get_name (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void
_vala_valadoc_content_wiki_link_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec)
{
	ValadocContentWikiLink * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_WIKI_LINK, ValadocContentWikiLink);
	switch (property_id) {
		case VALADOC_CONTENT_WIKI_LINK_PAGE_PROPERTY:
		valadoc_content_wiki_link_set_page (self, g_value_get_object (value));
		break;
		case VALADOC_CONTENT_WIKI_LINK_NAME_PROPERTY:
		valadoc_content_wiki_link_set_name (self, g_value_get_string (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



