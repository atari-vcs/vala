/* note.c generated by valac, the Vala compiler
 * generated from note.vala, do not modify */

/* note.vala
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
	VALADOC_CONTENT_NOTE_0_PROPERTY,
	VALADOC_CONTENT_NOTE_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_note_properties[VALADOC_CONTENT_NOTE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

static gpointer valadoc_content_note_parent_class = NULL;
static ValadocContentBlockIface * valadoc_content_note_valadoc_content_block_parent_iface = NULL;

G_GNUC_INTERNAL ValadocContentNote* valadoc_content_note_new (void);
G_GNUC_INTERNAL ValadocContentNote* valadoc_content_note_construct (GType object_type);
G_GNUC_INTERNAL ValadocContentBlockContent* valadoc_content_block_content_construct (GType object_type);
static void valadoc_content_note_real_check (ValadocContentContentElement* base,
                                      ValadocApiTree* api_root,
                                      ValadocApiNode* container,
                                      const gchar* file_path,
                                      ValadocErrorReporter* reporter,
                                      ValadocSettings* settings);
static void valadoc_content_note_real_accept (ValadocContentContentElement* base,
                                       ValadocContentContentVisitor* visitor);
static ValadocContentContentElement* valadoc_content_note_real_copy (ValadocContentContentElement* base,
                                                              ValadocContentContentElement* new_parent);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static GType valadoc_content_note_get_type_once (void);

G_GNUC_INTERNAL ValadocContentNote*
valadoc_content_note_construct (GType object_type)
{
	ValadocContentNote * self = NULL;
	self = (ValadocContentNote*) valadoc_content_block_content_construct (object_type);
	return self;
}

G_GNUC_INTERNAL ValadocContentNote*
valadoc_content_note_new (void)
{
	return valadoc_content_note_construct (VALADOC_CONTENT_TYPE_NOTE);
}

static void
valadoc_content_note_real_check (ValadocContentContentElement* base,
                                 ValadocApiTree* api_root,
                                 ValadocApiNode* container,
                                 const gchar* file_path,
                                 ValadocErrorReporter* reporter,
                                 ValadocSettings* settings)
{
	ValadocContentNote * self;
	self = (ValadocContentNote*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	VALADOC_CONTENT_CONTENT_ELEMENT_CLASS (valadoc_content_note_parent_class)->check ((ValadocContentContentElement*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_CONTENT_TYPE_BLOCK_CONTENT, ValadocContentBlockContent), api_root, container, file_path, reporter, settings);
}

static void
valadoc_content_note_real_accept (ValadocContentContentElement* base,
                                  ValadocContentContentVisitor* visitor)
{
	ValadocContentNote * self;
	self = (ValadocContentNote*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_note (visitor, self);
}

static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

static ValadocContentContentElement*
valadoc_content_note_real_copy (ValadocContentContentElement* base,
                                ValadocContentContentElement* new_parent)
{
	ValadocContentNote * self;
	ValadocContentNote* note = NULL;
	ValadocContentNote* _tmp0_;
	ValadocContentNote* _tmp1_;
	ValadocContentContentElement* result = NULL;
	self = (ValadocContentNote*) base;
	_tmp0_ = valadoc_content_note_new ();
	note = _tmp0_;
	_tmp1_ = note;
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
			ValadocContentBlock* block = NULL;
			ValaList* _tmp10_;
			gpointer _tmp11_;
			ValadocContentBlock* copy = NULL;
			ValadocContentBlock* _tmp12_;
			ValadocContentNote* _tmp13_;
			ValadocContentContentElement* _tmp14_;
			ValadocContentBlock* _tmp15_;
			ValadocContentNote* _tmp16_;
			ValaList* _tmp17_;
			ValaList* _tmp18_;
			ValadocContentBlock* _tmp19_;
			_block_index = _block_index + 1;
			_tmp8_ = _block_index;
			_tmp9_ = _block_size;
			if (!(_tmp8_ < _tmp9_)) {
				break;
			}
			_tmp10_ = _block_list;
			_tmp11_ = vala_list_get (_tmp10_, _block_index);
			block = (ValadocContentBlock*) _tmp11_;
			_tmp12_ = block;
			_tmp13_ = note;
			_tmp14_ = valadoc_content_content_element_copy ((ValadocContentContentElement*) _tmp12_, (ValadocContentContentElement*) _tmp13_);
			_tmp15_ = VALADOC_CONTENT_IS_BLOCK (_tmp14_) ? ((ValadocContentBlock*) _tmp14_) : NULL;
			if (_tmp15_ == NULL) {
				_g_object_unref0 (_tmp14_);
			}
			copy = _tmp15_;
			_tmp16_ = note;
			_tmp17_ = valadoc_content_block_content_get_content ((ValadocContentBlockContent*) _tmp16_);
			_tmp18_ = _tmp17_;
			_tmp19_ = copy;
			vala_collection_add ((ValaCollection*) _tmp18_, _tmp19_);
			_g_object_unref0 (copy);
			_g_object_unref0 (block);
		}
		_vala_iterable_unref0 (_block_list);
	}
	result = (ValadocContentContentElement*) note;
	return result;
}

static void
valadoc_content_note_class_init (ValadocContentNoteClass * klass,
                                 gpointer klass_data)
{
	valadoc_content_note_parent_class = g_type_class_peek_parent (klass);
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_note_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_note_real_accept;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_note_real_copy;
}

static void
valadoc_content_note_valadoc_content_block_interface_init (ValadocContentBlockIface * iface,
                                                           gpointer iface_data)
{
	valadoc_content_note_valadoc_content_block_parent_iface = g_type_interface_peek_parent (iface);
}

static void
valadoc_content_note_instance_init (ValadocContentNote * self,
                                    gpointer klass)
{
}

static GType
valadoc_content_note_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocContentNoteClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_note_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentNote), 0, (GInstanceInitFunc) valadoc_content_note_instance_init, NULL };
	static const GInterfaceInfo valadoc_content_block_info = { (GInterfaceInitFunc) valadoc_content_note_valadoc_content_block_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType valadoc_content_note_type_id;
	valadoc_content_note_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_BLOCK_CONTENT, "ValadocContentNote", &g_define_type_info, 0);
	g_type_add_interface_static (valadoc_content_note_type_id, VALADOC_CONTENT_TYPE_BLOCK, &valadoc_content_block_info);
	return valadoc_content_note_type_id;
}

GType
valadoc_content_note_get_type (void)
{
	static volatile gsize valadoc_content_note_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_note_type_id__volatile)) {
		GType valadoc_content_note_type_id;
		valadoc_content_note_type_id = valadoc_content_note_get_type_once ();
		g_once_init_leave (&valadoc_content_note_type_id__volatile, valadoc_content_note_type_id);
	}
	return valadoc_content_note_type_id__volatile;
}

