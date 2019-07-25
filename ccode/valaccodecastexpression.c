/* valaccodecastexpression.c generated by valac, the Vala compiler
 * generated from valaccodecastexpression.vala, do not modify */

/* valaccodecastexpression.vala
 *
 * Copyright (C) 2006-2008  Jürg Billeter
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


#include <glib.h>
#include <glib-object.h>
#include "valaccode.h"
#include <stdlib.h>
#include <string.h>

#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaCCodeCastExpressionPrivate {
	ValaCCodeExpression* _inner;
	gchar* _type_name;
};


static gint ValaCCodeCastExpression_private_offset;
static gpointer vala_ccode_cast_expression_parent_class = NULL;

static void vala_ccode_cast_expression_real_write (ValaCCodeNode* base,
                                            ValaCCodeWriter* writer);
static void vala_ccode_cast_expression_real_write_inner (ValaCCodeExpression* base,
                                                  ValaCCodeWriter* writer);
static void vala_ccode_cast_expression_finalize (ValaCCodeNode * obj);


static inline gpointer
vala_ccode_cast_expression_get_instance_private (ValaCCodeCastExpression* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeCastExpression_private_offset);
}


ValaCCodeCastExpression*
vala_ccode_cast_expression_construct (GType object_type,
                                      ValaCCodeExpression* expr,
                                      const gchar* type)
{
	ValaCCodeCastExpression* self = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	g_return_val_if_fail (type != NULL, NULL);
	self = (ValaCCodeCastExpression*) vala_ccode_expression_construct (object_type);
	vala_ccode_cast_expression_set_inner (self, expr);
	vala_ccode_cast_expression_set_type_name (self, type);
	return self;
}


ValaCCodeCastExpression*
vala_ccode_cast_expression_new (ValaCCodeExpression* expr,
                                const gchar* type)
{
	return vala_ccode_cast_expression_construct (VALA_TYPE_CCODE_CAST_EXPRESSION, expr, type);
}


static void
vala_ccode_cast_expression_real_write (ValaCCodeNode* base,
                                       ValaCCodeWriter* writer)
{
	ValaCCodeCastExpression * self;
	const gchar* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	self = (ValaCCodeCastExpression*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_string (writer, "(");
	_tmp0_ = self->priv->_type_name;
	vala_ccode_writer_write_string (writer, _tmp0_);
	vala_ccode_writer_write_string (writer, ") ");
	_tmp1_ = self->priv->_inner;
	vala_ccode_expression_write_inner (_tmp1_, writer);
}


static void
vala_ccode_cast_expression_real_write_inner (ValaCCodeExpression* base,
                                             ValaCCodeWriter* writer)
{
	ValaCCodeCastExpression * self;
	self = (ValaCCodeCastExpression*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_string (writer, "(");
	vala_ccode_node_write ((ValaCCodeNode*) self, writer);
	vala_ccode_writer_write_string (writer, ")");
}


ValaCCodeExpression*
vala_ccode_cast_expression_get_inner (ValaCCodeCastExpression* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_inner;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_ccode_node_ref0 (gpointer self)
{
	return self ? vala_ccode_node_ref (self) : NULL;
}


void
vala_ccode_cast_expression_set_inner (ValaCCodeCastExpression* self,
                                      ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_inner);
	self->priv->_inner = _tmp0_;
}


const gchar*
vala_ccode_cast_expression_get_type_name (ValaCCodeCastExpression* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_type_name;
	result = _tmp0_;
	return result;
}


void
vala_ccode_cast_expression_set_type_name (ValaCCodeCastExpression* self,
                                          const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_type_name);
	self->priv->_type_name = _tmp0_;
}


static void
vala_ccode_cast_expression_class_init (ValaCCodeCastExpressionClass * klass)
{
	vala_ccode_cast_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_cast_expression_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeCastExpression_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_cast_expression_real_write;
	((ValaCCodeExpressionClass *) klass)->write_inner = (void (*) (ValaCCodeExpression*, ValaCCodeWriter*)) vala_ccode_cast_expression_real_write_inner;
}


static void
vala_ccode_cast_expression_instance_init (ValaCCodeCastExpression * self)
{
	self->priv = vala_ccode_cast_expression_get_instance_private (self);
}


static void
vala_ccode_cast_expression_finalize (ValaCCodeNode * obj)
{
	ValaCCodeCastExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_CAST_EXPRESSION, ValaCCodeCastExpression);
	_vala_ccode_node_unref0 (self->priv->_inner);
	_g_free0 (self->priv->_type_name);
	VALA_CCODE_NODE_CLASS (vala_ccode_cast_expression_parent_class)->finalize (obj);
}


/**
 * Represents a type cast in the generated C code.
 */
GType
vala_ccode_cast_expression_get_type (void)
{
	static volatile gsize vala_ccode_cast_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_cast_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeCastExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_cast_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeCastExpression), 0, (GInstanceInitFunc) vala_ccode_cast_expression_instance_init, NULL };
		GType vala_ccode_cast_expression_type_id;
		vala_ccode_cast_expression_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeCastExpression", &g_define_type_info, 0);
		ValaCCodeCastExpression_private_offset = g_type_add_instance_private (vala_ccode_cast_expression_type_id, sizeof (ValaCCodeCastExpressionPrivate));
		g_once_init_leave (&vala_ccode_cast_expression_type_id__volatile, vala_ccode_cast_expression_type_id);
	}
	return vala_ccode_cast_expression_type_id__volatile;
}



