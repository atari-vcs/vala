/* page.c generated by valac, the Vala compiler
 * generated from page.vala, do not modify */

/* page.vala
 *
 * Copyright (C) 2008-2009 Florian Brosch, Didier Villevalois
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
	VALADOC_CONTENT_PAGE_0_PROPERTY,
	VALADOC_CONTENT_PAGE_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_page_properties[VALADOC_CONTENT_PAGE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _ValadocContentPagePrivate {
	gboolean checked;
};


static gint ValadocContentPage_private_offset;
static gpointer valadoc_content_page_parent_class = NULL;

G_GNUC_INTERNAL ValadocContentPage* valadoc_content_page_new (void);
G_GNUC_INTERNAL ValadocContentPage* valadoc_content_page_construct (GType object_type);
G_GNUC_INTERNAL ValadocContentBlockContent* valadoc_content_block_content_construct (GType object_type);
static void valadoc_content_page_real_accept (ValadocContentContentElement* base,
                                       ValadocContentContentVisitor* visitor);
static void valadoc_content_page_real_check (ValadocContentContentElement* base,
                                      ValadocApiTree* api_root,
                                      ValadocApiNode* container,
                                      const gchar* file_path,
                                      ValadocErrorReporter* reporter,
                                      ValadocSettings* settings);
static ValadocContentContentElement* valadoc_content_page_real_copy (ValadocContentContentElement* base,
                                                              ValadocContentContentElement* new_parent);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_content_page_finalize (GObject * obj);


static inline gpointer
valadoc_content_page_get_instance_private (ValadocContentPage* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentPage_private_offset);
}


G_GNUC_INTERNAL ValadocContentPage*
valadoc_content_page_construct (GType object_type)
{
	ValadocContentPage * self = NULL;
	self = (ValadocContentPage*) valadoc_content_block_content_construct (object_type);
	return self;
}


G_GNUC_INTERNAL ValadocContentPage*
valadoc_content_page_new (void)
{
	return valadoc_content_page_construct (VALADOC_CONTENT_TYPE_PAGE);
}


static void
valadoc_content_page_real_accept (ValadocContentContentElement* base,
                                  ValadocContentContentVisitor* visitor)
{
	ValadocContentPage * self;
	self = (ValadocContentPage*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_page (visitor, self);
}


static void
valadoc_content_page_real_check (ValadocContentContentElement* base,
                                 ValadocApiTree* api_root,
                                 ValadocApiNode* container,
                                 const gchar* file_path,
                                 ValadocErrorReporter* reporter,
                                 ValadocSettings* settings)
{
	ValadocContentPage * self;
	gboolean _tmp0_;
	self = (ValadocContentPage*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	_tmp0_ = self->priv->checked;
	if (_tmp0_ == TRUE) {
		return;
	}
	self->priv->checked = TRUE;
	VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_content_page_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent), api_root, container, file_path, reporter, settings);
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


static ValadocContentContentElement*
valadoc_content_page_real_copy (ValadocContentContentElement* base,
                                ValadocContentContentElement* new_parent)
{
	ValadocContentPage * self;
	ValadocContentContentElement* result = NULL;
	ValadocContentPage* page = NULL;
	ValadocContentPage* _tmp0_;
	ValadocContentPage* _tmp1_;
	self = (ValadocContentPage*) base;
	_vala_assert (new_parent == NULL, "new_parent == null");
	_tmp0_ = valadoc_content_page_new ();
	page = _tmp0_;
	_tmp1_ = page;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp1_, new_parent);
	{
		ValaList* _block_list = NULL;
		ValaList* _tmp2_;
		ValaList* _tmp3_;
		ValaList* _tmp4_;
		gint _block_size = 0;
		ValaList* _tmp5_;
		gint _tmp6_;
		gint _tmp7_;
		gint _block_index = 0;
		_tmp2_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) self);
		_tmp3_ = _tmp2_;
		_tmp4_ = _vala_iterable_ref0 (_tmp3_);
		_block_list = _tmp4_;
		_tmp5_ = _block_list;
		_tmp6_ = vala_collection_get_size ((ValaCollection*) _tmp5_);
		_tmp7_ = _tmp6_;
		_block_size = _tmp7_;
		_block_index = -1;
		while (TRUE) {
			gint _tmp8_;
			gint _tmp9_;
			gint _tmp10_;
			ValadocContentBlock* block = NULL;
			ValaList* _tmp11_;
			gint _tmp12_;
			gpointer _tmp13_;
			ValadocContentBlock* copy = NULL;
			ValadocContentBlock* _tmp14_;
			ValadocContentPage* _tmp15_;
			ValadocContentContentElement* _tmp16_;
			ValadocContentBlock* _tmp17_;
			ValadocContentPage* _tmp18_;
			ValaList* _tmp19_;
			ValaList* _tmp20_;
			ValadocContentBlock* _tmp21_;
			_tmp8_ = _block_index;
			_block_index = _tmp8_ + 1;
			_tmp9_ = _block_index;
			_tmp10_ = _block_size;
			if (!(_tmp9_ < _tmp10_)) {
				break;
			}
			_tmp11_ = _block_list;
			_tmp12_ = _block_index;
			_tmp13_ = vala_list_get (_tmp11_, _tmp12_);
			block = (ValadocContentBlock*) _tmp13_;
			_tmp14_ = block;
			_tmp15_ = page;
			_tmp16_ = valadoc_content_content_element_copy ((ValadocContentContentElement*) _tmp14_, (ValadocContentContentElement*) _tmp15_);
			_tmp17_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp16_, VALADOC_CONTENT_TYPE_BLOCK) ? ((ValadocContentBlock*) _tmp16_) : NULL;
			if (_tmp17_ == NULL) {
				_g_object_unref0 (_tmp16_);
			}
			copy = _tmp17_;
			_tmp18_ = page;
			_tmp19_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) _tmp18_);
			_tmp20_ = _tmp19_;
			_tmp21_ = copy;
			vala_collection_add ((ValaCollection*) _tmp20_, _tmp21_);
			_g_object_unref0 (copy);
			_g_object_unref0 (block);
		}
		_vala_iterable_unref0 (_block_list);
	}
	result = (ValadocContentContentElement*) page;
	return result;
}


static void
valadoc_content_page_class_init (ValadocContentPageClass * klass)
{
	valadoc_content_page_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentPage_private_offset);
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_page_real_accept;
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_page_real_check;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_page_real_copy;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_page_finalize;
}


static void
valadoc_content_page_instance_init (ValadocContentPage * self)
{
	self->priv = valadoc_content_page_get_instance_private (self);
	self->priv->checked = FALSE;
}


static void
valadoc_content_page_finalize (GObject * obj)
{
	ValadocContentPage * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_PAGE, ValadocContentPage);
	G_OBJECT_CLASS (valadoc_content_page_parent_class)->finalize (obj);
}


GType
valadoc_content_page_get_type (void)
{
	static volatile gsize valadoc_content_page_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_page_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocContentPageClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_page_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentPage), 0, (GInstanceInitFunc) valadoc_content_page_instance_init, NULL };
		GType valadoc_content_page_type_id;
		valadoc_content_page_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_BLOCK_CONTENT, "ValadocContentPage", &g_define_type_info, 0);
		ValadocContentPage_private_offset = g_type_add_instance_private (valadoc_content_page_type_id, sizeof (ValadocContentPagePrivate));
		g_once_init_leave (&valadoc_content_page_type_id__volatile, valadoc_content_page_type_id);
	}
	return valadoc_content_page_type_id__volatile;
}



