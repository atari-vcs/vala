/* valaccodelinedirective.c generated by valac, the Vala compiler
 * generated from valaccodelinedirective.vala, do not modify */

/* valaccodelinedirective.vala
 *
 * Copyright (C) 2006  Jürg Billeter
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
 * 	Jürg Billeter <j@bitron.ch>
 */

#include "valaccode.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>

#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaCCodeLineDirectivePrivate {
	gchar* _filename;
	gint _line_number;
};

static gint ValaCCodeLineDirective_private_offset;
static gpointer vala_ccode_line_directive_parent_class = NULL;

static void vala_ccode_line_directive_real_write (ValaCCodeNode* base,
                                           ValaCCodeWriter* writer);
static void vala_ccode_line_directive_finalize (ValaCCodeNode * obj);
static GType vala_ccode_line_directive_get_type_once (void);

static inline gpointer
vala_ccode_line_directive_get_instance_private (ValaCCodeLineDirective* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeLineDirective_private_offset);
}

const gchar*
vala_ccode_line_directive_get_filename (ValaCCodeLineDirective* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_filename;
	result = _tmp0_;
	return result;
}

void
vala_ccode_line_directive_set_filename (ValaCCodeLineDirective* self,
                                        const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_filename);
	self->priv->_filename = _tmp0_;
}

gint
vala_ccode_line_directive_get_line_number (ValaCCodeLineDirective* self)
{
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_line_number;
	return result;
}

void
vala_ccode_line_directive_set_line_number (ValaCCodeLineDirective* self,
                                           gint value)
{
	g_return_if_fail (self != NULL);
	self->priv->_line_number = value;
}

ValaCCodeLineDirective*
vala_ccode_line_directive_construct (GType object_type,
                                     const gchar* _filename,
                                     gint _line)
{
	ValaCCodeLineDirective* self = NULL;
	g_return_val_if_fail (_filename != NULL, NULL);
	self = (ValaCCodeLineDirective*) vala_ccode_node_construct (object_type);
	vala_ccode_line_directive_set_filename (self, _filename);
	vala_ccode_line_directive_set_line_number (self, _line);
	return self;
}

ValaCCodeLineDirective*
vala_ccode_line_directive_new (const gchar* _filename,
                               gint _line)
{
	return vala_ccode_line_directive_construct (VALA_TYPE_CCODE_LINE_DIRECTIVE, _filename, _line);
}

static void
vala_ccode_line_directive_real_write (ValaCCodeNode* base,
                                      ValaCCodeWriter* writer)
{
	ValaCCodeLineDirective * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	gint _tmp2_;
	const gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	self = (ValaCCodeLineDirective*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = vala_ccode_writer_get_bol (writer);
	_tmp1_ = _tmp0_;
	if (!_tmp1_) {
		vala_ccode_writer_write_newline (writer);
	}
	_tmp2_ = self->priv->_line_number;
	_tmp3_ = self->priv->_filename;
	_tmp4_ = g_strdup_printf ("#line %d \"%s\"", _tmp2_, _tmp3_);
	_tmp5_ = _tmp4_;
	vala_ccode_writer_write_string (writer, _tmp5_);
	_g_free0 (_tmp5_);
	vala_ccode_writer_write_newline (writer);
}

static void
vala_ccode_line_directive_class_init (ValaCCodeLineDirectiveClass * klass,
                                      gpointer klass_data)
{
	vala_ccode_line_directive_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_line_directive_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeLineDirective_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_line_directive_real_write;
}

static void
vala_ccode_line_directive_instance_init (ValaCCodeLineDirective * self,
                                         gpointer klass)
{
	self->priv = vala_ccode_line_directive_get_instance_private (self);
}

static void
vala_ccode_line_directive_finalize (ValaCCodeNode * obj)
{
	ValaCCodeLineDirective * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirective);
	_g_free0 (self->priv->_filename);
	VALA_CCODE_NODE_CLASS (vala_ccode_line_directive_parent_class)->finalize (obj);
}

/**
 * Represents a line directive in the C code.
 */
static GType
vala_ccode_line_directive_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeLineDirectiveClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_line_directive_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeLineDirective), 0, (GInstanceInitFunc) vala_ccode_line_directive_instance_init, NULL };
	GType vala_ccode_line_directive_type_id;
	vala_ccode_line_directive_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeLineDirective", &g_define_type_info, 0);
	ValaCCodeLineDirective_private_offset = g_type_add_instance_private (vala_ccode_line_directive_type_id, sizeof (ValaCCodeLineDirectivePrivate));
	return vala_ccode_line_directive_type_id;
}

GType
vala_ccode_line_directive_get_type (void)
{
	static volatile gsize vala_ccode_line_directive_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_line_directive_type_id__volatile)) {
		GType vala_ccode_line_directive_type_id;
		vala_ccode_line_directive_type_id = vala_ccode_line_directive_get_type_once ();
		g_once_init_leave (&vala_ccode_line_directive_type_id__volatile, vala_ccode_line_directive_type_id);
	}
	return vala_ccode_line_directive_type_id__volatile;
}

