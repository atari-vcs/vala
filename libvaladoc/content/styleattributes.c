/* styleattributes.c generated by valac, the Vala compiler
 * generated from styleattributes.vala, do not modify */

/* styleattributes.vala
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

#include "valadoc.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>

static GType valadoc_content_style_attributes_get_type_once (void);

ValadocContentHorizontalAlign
valadoc_content_horizontal_align_from_string (const gchar* str)
{
	const gchar* _tmp0_;
	GQuark _tmp2_ = 0U;
	static GQuark _tmp1_label0 = 0;
	static GQuark _tmp1_label1 = 0;
	static GQuark _tmp1_label2 = 0;
	static GQuark _tmp1_label3 = 0;
	ValadocContentHorizontalAlign result = 0;
	g_return_val_if_fail (str != NULL, 0);
	_tmp0_ = str;
	_tmp2_ = (NULL == _tmp0_) ? 0 : g_quark_from_string (_tmp0_);
	if (_tmp2_ == ((0 != _tmp1_label0) ? _tmp1_label0 : (_tmp1_label0 = g_quark_from_static_string ("none")))) {
		switch (0) {
			default:
			{
				result = VALADOC_CONTENT_HORIZONTAL_ALIGN_NONE;
				return result;
			}
		}
	} else if (_tmp2_ == ((0 != _tmp1_label1) ? _tmp1_label1 : (_tmp1_label1 = g_quark_from_static_string ("left")))) {
		switch (0) {
			default:
			{
				result = VALADOC_CONTENT_HORIZONTAL_ALIGN_LEFT;
				return result;
			}
		}
	} else if (_tmp2_ == ((0 != _tmp1_label2) ? _tmp1_label2 : (_tmp1_label2 = g_quark_from_static_string ("right")))) {
		switch (0) {
			default:
			{
				result = VALADOC_CONTENT_HORIZONTAL_ALIGN_RIGHT;
				return result;
			}
		}
	} else if (_tmp2_ == ((0 != _tmp1_label3) ? _tmp1_label3 : (_tmp1_label3 = g_quark_from_static_string ("center")))) {
		switch (0) {
			default:
			{
				result = VALADOC_CONTENT_HORIZONTAL_ALIGN_CENTER;
				return result;
			}
		}
	}
	g_assert_not_reached ();
}

const gchar*
valadoc_content_horizontal_align_to_string (ValadocContentHorizontalAlign self)
{
	const gchar* result = NULL;
	switch (self) {
		case VALADOC_CONTENT_HORIZONTAL_ALIGN_NONE:
		{
			result = "none";
			return result;
		}
		case VALADOC_CONTENT_HORIZONTAL_ALIGN_LEFT:
		{
			result = "left";
			return result;
		}
		case VALADOC_CONTENT_HORIZONTAL_ALIGN_RIGHT:
		{
			result = "right";
			return result;
		}
		case VALADOC_CONTENT_HORIZONTAL_ALIGN_CENTER:
		{
			result = "center";
			return result;
		}
		default:
		break;
	}
	g_assert_not_reached ();
}

static GType
valadoc_content_horizontal_align_get_type_once (void)
{
	static const GEnumValue values[] = {{VALADOC_CONTENT_HORIZONTAL_ALIGN_NONE, "VALADOC_CONTENT_HORIZONTAL_ALIGN_NONE", "none"}, {VALADOC_CONTENT_HORIZONTAL_ALIGN_LEFT, "VALADOC_CONTENT_HORIZONTAL_ALIGN_LEFT", "left"}, {VALADOC_CONTENT_HORIZONTAL_ALIGN_RIGHT, "VALADOC_CONTENT_HORIZONTAL_ALIGN_RIGHT", "right"}, {VALADOC_CONTENT_HORIZONTAL_ALIGN_CENTER, "VALADOC_CONTENT_HORIZONTAL_ALIGN_CENTER", "center"}, {0, NULL, NULL}};
	GType valadoc_content_horizontal_align_type_id;
	valadoc_content_horizontal_align_type_id = g_enum_register_static ("ValadocContentHorizontalAlign", values);
	return valadoc_content_horizontal_align_type_id;
}

GType
valadoc_content_horizontal_align_get_type (void)
{
	static volatile gsize valadoc_content_horizontal_align_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_horizontal_align_type_id__volatile)) {
		GType valadoc_content_horizontal_align_type_id;
		valadoc_content_horizontal_align_type_id = valadoc_content_horizontal_align_get_type_once ();
		g_once_init_leave (&valadoc_content_horizontal_align_type_id__volatile, valadoc_content_horizontal_align_type_id);
	}
	return valadoc_content_horizontal_align_type_id__volatile;
}

ValadocContentVerticalAlign
valadoc_content_vertical_align_from_string (const gchar* str)
{
	const gchar* _tmp0_;
	GQuark _tmp2_ = 0U;
	static GQuark _tmp1_label0 = 0;
	static GQuark _tmp1_label1 = 0;
	static GQuark _tmp1_label2 = 0;
	static GQuark _tmp1_label3 = 0;
	ValadocContentVerticalAlign result = 0;
	g_return_val_if_fail (str != NULL, 0);
	_tmp0_ = str;
	_tmp2_ = (NULL == _tmp0_) ? 0 : g_quark_from_string (_tmp0_);
	if (_tmp2_ == ((0 != _tmp1_label0) ? _tmp1_label0 : (_tmp1_label0 = g_quark_from_static_string ("none")))) {
		switch (0) {
			default:
			{
				result = VALADOC_CONTENT_VERTICAL_ALIGN_NONE;
				return result;
			}
		}
	} else if (_tmp2_ == ((0 != _tmp1_label1) ? _tmp1_label1 : (_tmp1_label1 = g_quark_from_static_string ("top")))) {
		switch (0) {
			default:
			{
				result = VALADOC_CONTENT_VERTICAL_ALIGN_TOP;
				return result;
			}
		}
	} else if (_tmp2_ == ((0 != _tmp1_label2) ? _tmp1_label2 : (_tmp1_label2 = g_quark_from_static_string ("middle")))) {
		switch (0) {
			default:
			{
				result = VALADOC_CONTENT_VERTICAL_ALIGN_MIDDLE;
				return result;
			}
		}
	} else if (_tmp2_ == ((0 != _tmp1_label3) ? _tmp1_label3 : (_tmp1_label3 = g_quark_from_static_string ("bottom")))) {
		switch (0) {
			default:
			{
				result = VALADOC_CONTENT_VERTICAL_ALIGN_BOTTOM;
				return result;
			}
		}
	}
	g_assert_not_reached ();
}

const gchar*
valadoc_content_vertical_align_to_string (ValadocContentVerticalAlign self)
{
	const gchar* result = NULL;
	switch (self) {
		case VALADOC_CONTENT_VERTICAL_ALIGN_NONE:
		{
			result = "none";
			return result;
		}
		case VALADOC_CONTENT_VERTICAL_ALIGN_TOP:
		{
			result = "top";
			return result;
		}
		case VALADOC_CONTENT_VERTICAL_ALIGN_MIDDLE:
		{
			result = "middle";
			return result;
		}
		case VALADOC_CONTENT_VERTICAL_ALIGN_BOTTOM:
		{
			result = "bottom";
			return result;
		}
		default:
		break;
	}
	g_assert_not_reached ();
}

static GType
valadoc_content_vertical_align_get_type_once (void)
{
	static const GEnumValue values[] = {{VALADOC_CONTENT_VERTICAL_ALIGN_NONE, "VALADOC_CONTENT_VERTICAL_ALIGN_NONE", "none"}, {VALADOC_CONTENT_VERTICAL_ALIGN_TOP, "VALADOC_CONTENT_VERTICAL_ALIGN_TOP", "top"}, {VALADOC_CONTENT_VERTICAL_ALIGN_MIDDLE, "VALADOC_CONTENT_VERTICAL_ALIGN_MIDDLE", "middle"}, {VALADOC_CONTENT_VERTICAL_ALIGN_BOTTOM, "VALADOC_CONTENT_VERTICAL_ALIGN_BOTTOM", "bottom"}, {0, NULL, NULL}};
	GType valadoc_content_vertical_align_type_id;
	valadoc_content_vertical_align_type_id = g_enum_register_static ("ValadocContentVerticalAlign", values);
	return valadoc_content_vertical_align_type_id;
}

GType
valadoc_content_vertical_align_get_type (void)
{
	static volatile gsize valadoc_content_vertical_align_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_vertical_align_type_id__volatile)) {
		GType valadoc_content_vertical_align_type_id;
		valadoc_content_vertical_align_type_id = valadoc_content_vertical_align_get_type_once ();
		g_once_init_leave (&valadoc_content_vertical_align_type_id__volatile, valadoc_content_vertical_align_type_id);
	}
	return valadoc_content_vertical_align_type_id__volatile;
}

ValadocContentHorizontalAlign
valadoc_content_style_attributes_get_horizontal_align (ValadocContentStyleAttributes* self)
{
	g_return_val_if_fail (self != NULL, 0);
	return VALADOC_CONTENT_STYLE_ATTRIBUTES_GET_INTERFACE (self)->get_horizontal_align (self);
}

void
valadoc_content_style_attributes_set_horizontal_align (ValadocContentStyleAttributes* self,
                                                       ValadocContentHorizontalAlign value)
{
	g_return_if_fail (self != NULL);
	VALADOC_CONTENT_STYLE_ATTRIBUTES_GET_INTERFACE (self)->set_horizontal_align (self, value);
}

ValadocContentVerticalAlign
valadoc_content_style_attributes_get_vertical_align (ValadocContentStyleAttributes* self)
{
	g_return_val_if_fail (self != NULL, 0);
	return VALADOC_CONTENT_STYLE_ATTRIBUTES_GET_INTERFACE (self)->get_vertical_align (self);
}

void
valadoc_content_style_attributes_set_vertical_align (ValadocContentStyleAttributes* self,
                                                     ValadocContentVerticalAlign value)
{
	g_return_if_fail (self != NULL);
	VALADOC_CONTENT_STYLE_ATTRIBUTES_GET_INTERFACE (self)->set_vertical_align (self, value);
}

const gchar*
valadoc_content_style_attributes_get_style (ValadocContentStyleAttributes* self)
{
	g_return_val_if_fail (self != NULL, NULL);
	return VALADOC_CONTENT_STYLE_ATTRIBUTES_GET_INTERFACE (self)->get_style (self);
}

void
valadoc_content_style_attributes_set_style (ValadocContentStyleAttributes* self,
                                            const gchar* value)
{
	g_return_if_fail (self != NULL);
	VALADOC_CONTENT_STYLE_ATTRIBUTES_GET_INTERFACE (self)->set_style (self, value);
}

static void
valadoc_content_style_attributes_default_init (ValadocContentStyleAttributesIface * iface,
                                               gpointer iface_data)
{
	g_object_interface_install_property (iface, g_param_spec_enum ("horizontal-align", "horizontal-align", "horizontal-align", VALADOC_CONTENT_TYPE_HORIZONTAL_ALIGN, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_interface_install_property (iface, g_param_spec_enum ("vertical-align", "vertical-align", "vertical-align", VALADOC_CONTENT_TYPE_VERTICAL_ALIGN, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_interface_install_property (iface, g_param_spec_string ("style", "style", "style", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
}

static GType
valadoc_content_style_attributes_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValadocContentStyleAttributesIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_content_style_attributes_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	GType valadoc_content_style_attributes_type_id;
	valadoc_content_style_attributes_type_id = g_type_register_static (G_TYPE_INTERFACE, "ValadocContentStyleAttributes", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (valadoc_content_style_attributes_type_id, VALADOC_CONTENT_TYPE_CONTENT_ELEMENT);
	return valadoc_content_style_attributes_type_id;
}

GType
valadoc_content_style_attributes_get_type (void)
{
	static volatile gsize valadoc_content_style_attributes_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_content_style_attributes_type_id__volatile)) {
		GType valadoc_content_style_attributes_type_id;
		valadoc_content_style_attributes_type_id = valadoc_content_style_attributes_get_type_once ();
		g_once_init_leave (&valadoc_content_style_attributes_type_id__volatile, valadoc_content_style_attributes_type_id);
	}
	return valadoc_content_style_attributes_type_id__volatile;
}

