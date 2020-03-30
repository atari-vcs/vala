/* valaccodeggnucsection.c generated by valac, the Vala compiler
 * generated from valaccodeggnucsection.vala, do not modify */

/* valaccodeggnucsection.vala
 *
 * Copyright (C) 2016  Rico Tzschichholz
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Rico Tzschichholz <ricotz@ubuntu.com>
 */


#include <glib.h>
#include <glib-object.h>
#include "valaccode.h"
#include <valagee.h>
#include <stdlib.h>
#include <string.h>

#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValaCCodeGGnucSectionPrivate {
	ValaGGnucSectionType _section_type;
};


static gint ValaCCodeGGnucSection_private_offset;
static gpointer vala_ccode_ggnuc_section_parent_class = NULL;

static void vala_ccode_ggnuc_section_real_write (ValaCCodeNode* base,
                                          ValaCCodeWriter* writer);
static void vala_ccode_ggnuc_section_real_write_declaration (ValaCCodeNode* base,
                                                      ValaCCodeWriter* writer);
static void vala_ccode_ggnuc_section_finalize (ValaCCodeNode * obj);


static inline gpointer
vala_ccode_ggnuc_section_get_instance_private (ValaCCodeGGnucSection* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeGGnucSection_private_offset);
}


ValaCCodeGGnucSection*
vala_ccode_ggnuc_section_construct (GType object_type,
                                    ValaGGnucSectionType t)
{
	ValaCCodeGGnucSection* self = NULL;
	self = (ValaCCodeGGnucSection*) vala_ccode_fragment_construct (object_type);
	vala_ccode_ggnuc_section_set_section_type (self, t);
	return self;
}


ValaCCodeGGnucSection*
vala_ccode_ggnuc_section_new (ValaGGnucSectionType t)
{
	return vala_ccode_ggnuc_section_construct (VALA_TYPE_CCODE_GGNUC_SECTION, t);
}


static void
vala_ccode_ggnuc_section_real_write (ValaCCodeNode* base,
                                     ValaCCodeWriter* writer)
{
	ValaCCodeGGnucSection * self;
	ValaGGnucSectionType _tmp0_;
	const gchar* _tmp1_;
	ValaGGnucSectionType _tmp13_;
	const gchar* _tmp14_;
	self = (ValaCCodeGGnucSection*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_string (writer, "G_GNUC_BEGIN_");
	_tmp0_ = self->priv->_section_type;
	_tmp1_ = vala_ggnuc_section_type_to_string (_tmp0_);
	vala_ccode_writer_write_string (writer, _tmp1_);
	vala_ccode_writer_write_newline (writer);
	{
		ValaList* _node_list = NULL;
		ValaList* _tmp2_;
		gint _node_size = 0;
		ValaList* _tmp3_;
		gint _tmp4_;
		gint _tmp5_;
		gint _node_index = 0;
		_tmp2_ = vala_ccode_fragment_get_children ((ValaCCodeFragment*) self);
		_node_list = _tmp2_;
		_tmp3_ = _node_list;
		_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
		_tmp5_ = _tmp4_;
		_node_size = _tmp5_;
		_node_index = -1;
		while (TRUE) {
			gint _tmp6_;
			gint _tmp7_;
			gint _tmp8_;
			ValaCCodeNode* node = NULL;
			ValaList* _tmp9_;
			gint _tmp10_;
			gpointer _tmp11_;
			ValaCCodeNode* _tmp12_;
			_tmp6_ = _node_index;
			_node_index = _tmp6_ + 1;
			_tmp7_ = _node_index;
			_tmp8_ = _node_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _node_list;
			_tmp10_ = _node_index;
			_tmp11_ = vala_list_get (_tmp9_, _tmp10_);
			node = (ValaCCodeNode*) _tmp11_;
			_tmp12_ = node;
			vala_ccode_node_write_combined (_tmp12_, writer);
			_vala_ccode_node_unref0 (node);
		}
		_vala_iterable_unref0 (_node_list);
	}
	vala_ccode_writer_write_string (writer, "G_GNUC_END_");
	_tmp13_ = self->priv->_section_type;
	_tmp14_ = vala_ggnuc_section_type_to_string (_tmp13_);
	vala_ccode_writer_write_string (writer, _tmp14_);
	vala_ccode_writer_write_newline (writer);
}


static void
vala_ccode_ggnuc_section_real_write_declaration (ValaCCodeNode* base,
                                                 ValaCCodeWriter* writer)
{
	ValaCCodeGGnucSection * self;
	self = (ValaCCodeGGnucSection*) base;
	g_return_if_fail (writer != NULL);
}


ValaGGnucSectionType
vala_ccode_ggnuc_section_get_section_type (ValaCCodeGGnucSection* self)
{
	ValaGGnucSectionType result;
	ValaGGnucSectionType _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_section_type;
	result = _tmp0_;
	return result;
}


void
vala_ccode_ggnuc_section_set_section_type (ValaCCodeGGnucSection* self,
                                           ValaGGnucSectionType value)
{
	g_return_if_fail (self != NULL);
	self->priv->_section_type = value;
}


static void
vala_ccode_ggnuc_section_class_init (ValaCCodeGGnucSectionClass * klass)
{
	vala_ccode_ggnuc_section_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_ggnuc_section_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeGGnucSection_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_ggnuc_section_real_write;
	((ValaCCodeNodeClass *) klass)->write_declaration = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_ggnuc_section_real_write_declaration;
}


static void
vala_ccode_ggnuc_section_instance_init (ValaCCodeGGnucSection * self)
{
	self->priv = vala_ccode_ggnuc_section_get_instance_private (self);
}


static void
vala_ccode_ggnuc_section_finalize (ValaCCodeNode * obj)
{
	ValaCCodeGGnucSection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_GGNUC_SECTION, ValaCCodeGGnucSection);
	VALA_CCODE_NODE_CLASS (vala_ccode_ggnuc_section_parent_class)->finalize (obj);
}


/**
 * Represents a section that should be processed on condition.
 */
GType
vala_ccode_ggnuc_section_get_type (void)
{
	static volatile gsize vala_ccode_ggnuc_section_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_ggnuc_section_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeGGnucSectionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_ggnuc_section_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeGGnucSection), 0, (GInstanceInitFunc) vala_ccode_ggnuc_section_instance_init, NULL };
		GType vala_ccode_ggnuc_section_type_id;
		vala_ccode_ggnuc_section_type_id = g_type_register_static (VALA_TYPE_CCODE_FRAGMENT, "ValaCCodeGGnucSection", &g_define_type_info, 0);
		ValaCCodeGGnucSection_private_offset = g_type_add_instance_private (vala_ccode_ggnuc_section_type_id, sizeof (ValaCCodeGGnucSectionPrivate));
		g_once_init_leave (&vala_ccode_ggnuc_section_type_id__volatile, vala_ccode_ggnuc_section_type_id);
	}
	return vala_ccode_ggnuc_section_type_id__volatile;
}


const gchar*
vala_ggnuc_section_type_to_string (ValaGGnucSectionType self)
{
	const gchar* result = NULL;
	switch (self) {
		case VALA_GGNUC_SECTION_TYPE_IGNORE_DEPRECATIONS:
		{
			result = "IGNORE_DEPRECATIONS";
			return result;
		}
		default:
		{
			g_assert_not_reached ();
		}
	}
}


GType
vala_ggnuc_section_type_get_type (void)
{
	static volatile gsize vala_ggnuc_section_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ggnuc_section_type_type_id__volatile)) {
		static const GEnumValue values[] = {{VALA_GGNUC_SECTION_TYPE_IGNORE_DEPRECATIONS, "VALA_GGNUC_SECTION_TYPE_IGNORE_DEPRECATIONS", "ignore-deprecations"}, {0, NULL, NULL}};
		GType vala_ggnuc_section_type_type_id;
		vala_ggnuc_section_type_type_id = g_enum_register_static ("ValaGGnucSectionType", values);
		g_once_init_leave (&vala_ggnuc_section_type_type_id__volatile, vala_ggnuc_section_type_type_id);
	}
	return vala_ggnuc_section_type_type_id__volatile;
}


