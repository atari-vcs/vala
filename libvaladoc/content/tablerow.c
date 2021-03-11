/* tablerow.c generated by valac, the Vala compiler
 * generated from tablerow.vala, do not modify */

/* tablerow.vala
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
	VALADOC_CONTENT_TABLE_ROW_0_PROPERTY,
	VALADOC_CONTENT_TABLE_ROW_CELLS_PROPERTY,
	VALADOC_CONTENT_TABLE_ROW_NUM_PROPERTIES
};
static GParamSpec* valadoc_content_table_row_properties[VALADOC_CONTENT_TABLE_ROW_NUM_PROPERTIES];
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValadocContentTableRowPrivate {
	ValaList* _cells;
};

static gint ValadocContentTableRow_private_offset;
static gpointer valadoc_content_table_row_parent_class = NULL;

G_GNUC_INTERNAL ValadocContentTableRow* valadoc_content_table_row_new (void);
G_GNUC_INTERNAL ValadocContentTableRow* valadoc_content_table_row_construct (GType object_type);
static void valadoc_content_table_row_real_check (ValadocContentContentElement* base,
                                           ValadocApiTree* api_root,
                                           ValadocApiNode* container,
                                           const gchar* file_path,
                                           ValadocErrorReporter* reporter,
                                           ValadocSettings* settings);
G_GNUC_INTERNAL void valadoc_content_content_element_set_parent (ValadocContentContentElement* self,
                                                 ValadocContentContentElement* value);
static void valadoc_content_table_row_real_accept (ValadocContentContentElement* base,
                                            ValadocContentContentVisitor* visitor);
static void valadoc_content_table_row_real_accept_children (ValadocContentContentElement* base,
                                                     ValadocContentContentVisitor* visitor);
static gboolean valadoc_content_table_row_real_is_empty (ValadocContentContentElement* base);
static ValadocContentContentElement* valadoc_content_table_row_real_copy (ValadocContentContentElement* base,
                                                                   ValadocContentContentElement* new_parent);
static void valadoc_content_table_row_finalize (GObject * obj);
static GType valadoc_content_table_row_get_type_once (void);
static void _vala_valadoc_content_table_row_get_property (GObject * object,
                                                   guint property_id,
                                                   GValue * value,
                                                   GParamSpec * pspec);

static inline gpointer
valadoc_content_table_row_get_instance_private (ValadocContentTableRow* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocContentTableRow_private_offset);
}

ValaList*
valadoc_content_table_row_get_cells (ValadocContentTableRow* self)
{
	ValaList* result;
	ValaList* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_cells;
	result = _tmp0_;
	return result;
}

G_GNUC_INTERNAL ValadocContentTableRow*
valadoc_content_table_row_construct (GType object_type)
{
	ValadocContentTableRow * self = NULL;
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self = (ValadocContentTableRow*) valadoc_content_content_element_construct (object_type);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALADOC_CONTENT_TYPE_TABLE_CELL, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp0_);
	_vala_iterable_unref0 (self->priv->_cells);
	self->priv->_cells = (ValaList*) _tmp1_;
	return self;
}

G_GNUC_INTERNAL ValadocContentTableRow*
valadoc_content_table_row_new (void)
{
	return valadoc_content_table_row_construct (VALADOC_CONTENT_TYPE_TABLE_ROW);
}

static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

static void
valadoc_content_table_row_real_check (ValadocContentContentElement* base,
                                      ValadocApiTree* api_root,
                                      ValadocApiNode* container,
                                      const gchar* file_path,
                                      ValadocErrorReporter* reporter,
                                      ValadocSettings* settings)
{
	ValadocContentTableRow * self;
	self = (ValadocContentTableRow*) base;
	g_return_if_fail (api_root != NULL);
	g_return_if_fail (container != NULL);
	g_return_if_fail (file_path != NULL);
	g_return_if_fail (reporter != NULL);
	g_return_if_fail (settings != NULL);
	{
		ValaList* _cell_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		gint _cell_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _cell_index = 0;
		_tmp0_ = self->priv->_cells;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_cell_list = _tmp1_;
		_tmp2_ = _cell_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_cell_size = _tmp4_;
		_cell_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			ValadocContentTableCell* cell = NULL;
			ValaList* _tmp7_;
			gpointer _tmp8_;
			ValadocContentTableCell* _tmp9_;
			ValadocContentTableCell* _tmp10_;
			_cell_index = _cell_index + 1;
			_tmp5_ = _cell_index;
			_tmp6_ = _cell_size;
			if (!(_tmp5_ < _tmp6_)) {
				break;
			}
			_tmp7_ = _cell_list;
			_tmp8_ = vala_list_get (_tmp7_, _cell_index);
			cell = (ValadocContentTableCell*) _tmp8_;
			_tmp9_ = cell;
			valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp9_, (ValadocContentContentElement*) self);
			_tmp10_ = cell;
			valadoc_content_content_element_check ((ValadocContentContentElement*) _tmp10_, api_root, container, file_path, reporter, settings);
			_g_object_unref0 (cell);
		}
		_vala_iterable_unref0 (_cell_list);
	}
}

static void
valadoc_content_table_row_real_accept (ValadocContentContentElement* base,
                                       ValadocContentContentVisitor* visitor)
{
	ValadocContentTableRow * self;
	self = (ValadocContentTableRow*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_content_content_visitor_visit_table_row (visitor, self);
}

static void
valadoc_content_table_row_real_accept_children (ValadocContentContentElement* base,
                                                ValadocContentContentVisitor* visitor)
{
	ValadocContentTableRow * self;
	self = (ValadocContentTableRow*) base;
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
		_tmp0_ = self->priv->_cells;
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
			ValadocContentTableCell* element = NULL;
			ValaList* _tmp7_;
			gpointer _tmp8_;
			ValadocContentTableCell* _tmp9_;
			_element_index = _element_index + 1;
			_tmp5_ = _element_index;
			_tmp6_ = _element_size;
			if (!(_tmp5_ < _tmp6_)) {
				break;
			}
			_tmp7_ = _element_list;
			_tmp8_ = vala_list_get (_tmp7_, _element_index);
			element = (ValadocContentTableCell*) _tmp8_;
			_tmp9_ = element;
			valadoc_content_content_element_accept ((ValadocContentContentElement*) _tmp9_, visitor);
			_g_object_unref0 (element);
		}
		_vala_iterable_unref0 (_element_list);
	}
}

static gboolean
valadoc_content_table_row_real_is_empty (ValadocContentContentElement* base)
{
	ValadocContentTableRow * self;
	gboolean result = FALSE;
	self = (ValadocContentTableRow*) base;
	result = FALSE;
	return result;
}

static ValadocContentContentElement*
valadoc_content_table_row_real_copy (ValadocContentContentElement* base,
                                     ValadocContentContentElement* new_parent)
{
	ValadocContentTableRow * self;
	ValadocContentTableRow* row = NULL;
	ValadocContentTableRow* _tmp0_;
	ValadocContentTableRow* _tmp1_;
	ValadocContentContentElement* result = NULL;
	self = (ValadocContentTableRow*) base;
	_tmp0_ = valadoc_content_table_row_new ();
	row = _tmp0_;
	_tmp1_ = row;
	valadoc_content_content_element_set_parent ((ValadocContentContentElement*) _tmp1_, new_parent);
	{
		ValaList* _cell_list = NULL;
		ValaList* _tmp2_;
		ValaList* _tmp3_;
		gint _cell_size = 0;
		ValaList* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
		gint _cell_index = 0;
		_tmp2_ = self->priv->_cells;
		_tmp3_ = _vala_iterable_ref0 (_tmp2_);
		_cell_list = _tmp3_;
		_tmp4_ = _cell_list;
		_tmp5_ = vala_collection_get_size ((ValaCollection*) _tmp4_);
		_tmp6_ = _tmp5_;
		_cell_size = _tmp6_;
		_cell_index = -1;
		while (TRUE) {
			gint _tmp7_;
			gint _tmp8_;
			ValadocContentTableCell* cell = NULL;
			ValaList* _tmp9_;
			gpointer _tmp10_;
			ValadocContentTableCell* copy = NULL;
			ValadocContentTableCell* _tmp11_;
			ValadocContentTableRow* _tmp12_;
			ValadocContentContentElement* _tmp13_;
			ValadocContentTableCell* _tmp14_;
			ValadocContentTableRow* _tmp15_;
			ValaList* _tmp16_;
			ValaList* _tmp17_;
			ValadocContentTableCell* _tmp18_;
			_cell_index = _cell_index + 1;
			_tmp7_ = _cell_index;
			_tmp8_ = _cell_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _cell_list;
			_tmp10_ = vala_list_get (_tmp9_, _cell_index);
			cell = (ValadocContentTableCell*) _tmp10_;
			_tmp11_ = cell;
			_tmp12_ = row;
			_tmp13_ = valadoc_content_content_element_copy ((ValadocContentContentElement*) _tmp11_, (ValadocContentContentElement*) _tmp12_);
			_tmp14_ = VALADOC_CONTENT_IS_TABLE_CELL (_tmp13_) ? ((ValadocContentTableCell*) _tmp13_) : NULL;
			if (_tmp14_ == NULL) {
				_g_object_unref0 (_tmp13_);
			}
			copy = _tmp14_;
			_tmp15_ = row;
			_tmp16_ = valadoc_content_table_row_get_cells (_tmp15_);
			_tmp17_ = _tmp16_;
			_tmp18_ = copy;
			vala_collection_add ((ValaCollection*) _tmp17_, _tmp18_);
			_g_object_unref0 (copy);
			_g_object_unref0 (cell);
		}
		_vala_iterable_unref0 (_cell_list);
	}
	result = (ValadocContentContentElement*) row;
	return result;
}

static void
valadoc_content_table_row_class_init (ValadocContentTableRowClass * klass,
                                      gpointer klass_data)
{
	valadoc_content_table_row_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocContentTableRow_private_offset);
	((ValadocContentContentElementClass *) klass)->check = (void (*) (ValadocContentContentElement*, ValadocApiTree*, ValadocApiNode*, const gchar*, ValadocErrorReporter*, ValadocSettings*)) valadoc_content_table_row_real_check;
	((ValadocContentContentElementClass *) klass)->accept = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_table_row_real_accept;
	((ValadocContentContentElementClass *) klass)->accept_children = (void (*) (ValadocContentContentElement*, ValadocContentContentVisitor*)) valadoc_content_table_row_real_accept_children;
	((ValadocContentContentElementClass *) klass)->is_empty = (gboolean (*) (ValadocContentContentElement*)) valadoc_content_table_row_real_is_empty;
	((ValadocContentContentElementClass *) klass)->copy = (ValadocContentContentElement* (*) (ValadocContentContentElement*, ValadocContentContentElement*)) valadoc_content_table_row_real_copy;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_content_table_row_get_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_content_table_row_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_CONTENT_TABLE_ROW_CELLS_PROPERTY, valadoc_content_table_row_properties[VALADOC_CONTENT_TABLE_ROW_CELLS_PROPERTY] = vala_param_spec_iterable ("cells", "cells", "cells", VALA_TYPE_LIST, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
valadoc_content_table_row_instance_init (ValadocContentTableRow * self,
                                         gpointer klass)
{
	self->priv = valadoc_content_table_row_get_instance_private (self);
}

static void
valadoc_content_table_row_finalize (GObject * obj)
{
	ValadocContentTableRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_CONTENT_TYPE_TABLE_ROW, ValadocContentTableRow);
	_vala_iterable_unref0 (self->priv->_cells);
	G_OBJECT_CLASS (valadoc_content_table_row_parent_class)->finalize (obj);
}

static GType
valadoc_content_table_row_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocContentTableRowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_table_row_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocContentTableRow), 0, (GInstanceInitFunc) valadoc_content_table_row_instance_init, NULL };
	GType valadoc_content_table_row_type_id;
	valadoc_content_table_row_type_id = g_type_register_static (VALADOC_CONTENT_TYPE_CONTENT_ELEMENT, "ValadocContentTableRow", &g_define_type_info, 0);
	ValadocContentTableRow_private_offset = g_type_add_instance_private (valadoc_content_table_row_type_id, sizeof (ValadocContentTableRowPrivate));
	return valadoc_content_table_row_type_id;
}

GType
valadoc_content_table_row_get_type (void)
{
	static volatile gsize valadoc_content_table_row_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_table_row_type_id__volatile)) {
		GType valadoc_content_table_row_type_id;
		valadoc_content_table_row_type_id = valadoc_content_table_row_get_type_once ();
		g_once_init_leave (&valadoc_content_table_row_type_id__volatile, valadoc_content_table_row_type_id);
	}
	return valadoc_content_table_row_type_id__volatile;
}

static void
_vala_valadoc_content_table_row_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec)
{
	ValadocContentTableRow * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_CONTENT_TYPE_TABLE_ROW, ValadocContentTableRow);
	switch (property_id) {
		case VALADOC_CONTENT_TABLE_ROW_CELLS_PROPERTY:
		vala_value_set_iterable (value, valadoc_content_table_row_get_cells (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

