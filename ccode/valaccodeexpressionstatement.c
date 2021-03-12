/* valaccodeexpressionstatement.c generated by valac, the Vala compiler
 * generated from valaccodeexpressionstatement.vala, do not modify */

/* valaccodeexpressionstatement.vala
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

#include "valaccode.h"
#include <glib.h>
#include <valagee.h>
#include <glib-object.h>

#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValaCCodeExpressionStatementPrivate {
	ValaCCodeExpression* _expression;
};

static gint ValaCCodeExpressionStatement_private_offset;
static gpointer vala_ccode_expression_statement_parent_class = NULL;

static void vala_ccode_expression_statement_real_write (ValaCCodeNode* base,
                                                 ValaCCodeWriter* writer);
static void vala_ccode_expression_statement_write_expression (ValaCCodeExpressionStatement* self,
                                                       ValaCCodeWriter* writer,
                                                       ValaCCodeExpression* expr);
static void vala_ccode_expression_statement_finalize (ValaCCodeNode * obj);
static GType vala_ccode_expression_statement_get_type_once (void);

static inline gpointer
vala_ccode_expression_statement_get_instance_private (ValaCCodeExpressionStatement* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeExpressionStatement_private_offset);
}

ValaCCodeExpression*
vala_ccode_expression_statement_get_expression (ValaCCodeExpressionStatement* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_expression;
	result = _tmp0_;
	return result;
}

static gpointer
_vala_ccode_node_ref0 (gpointer self)
{
	return self ? vala_ccode_node_ref (self) : NULL;
}

void
vala_ccode_expression_statement_set_expression (ValaCCodeExpressionStatement* self,
                                                ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_expression);
	self->priv->_expression = _tmp0_;
}

ValaCCodeExpressionStatement*
vala_ccode_expression_statement_construct (GType object_type,
                                           ValaCCodeExpression* expr)
{
	ValaCCodeExpressionStatement* self = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	self = (ValaCCodeExpressionStatement*) vala_ccode_statement_construct (object_type);
	vala_ccode_expression_statement_set_expression (self, expr);
	return self;
}

ValaCCodeExpressionStatement*
vala_ccode_expression_statement_new (ValaCCodeExpression* expr)
{
	return vala_ccode_expression_statement_construct (VALA_TYPE_CCODE_EXPRESSION_STATEMENT, expr);
}

static void
vala_ccode_expression_statement_real_write (ValaCCodeNode* base,
                                            ValaCCodeWriter* writer)
{
	ValaCCodeExpressionStatement * self;
	ValaCCodeExpression* _tmp0_;
	self = (ValaCCodeExpressionStatement*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_expression;
	if (VALA_IS_CCODE_COMMA_EXPRESSION (_tmp0_)) {
		ValaCCodeCommaExpression* ccomma = NULL;
		ValaCCodeExpression* _tmp1_;
		ValaCCodeCommaExpression* _tmp2_;
		_tmp1_ = self->priv->_expression;
		_tmp2_ = _vala_ccode_node_ref0 (VALA_IS_CCODE_COMMA_EXPRESSION (_tmp1_) ? ((ValaCCodeCommaExpression*) _tmp1_) : NULL);
		ccomma = _tmp2_;
		{
			ValaList* _expr_list = NULL;
			ValaCCodeCommaExpression* _tmp3_;
			ValaList* _tmp4_;
			gint _expr_size = 0;
			ValaList* _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			gint _expr_index = 0;
			_tmp3_ = ccomma;
			_tmp4_ = vala_ccode_comma_expression_get_inner (_tmp3_);
			_expr_list = _tmp4_;
			_tmp5_ = _expr_list;
			_tmp6_ = vala_collection_get_size ((ValaCollection*) _tmp5_);
			_tmp7_ = _tmp6_;
			_expr_size = _tmp7_;
			_expr_index = -1;
			while (TRUE) {
				gint _tmp8_;
				gint _tmp9_;
				ValaCCodeExpression* expr = NULL;
				ValaList* _tmp10_;
				gpointer _tmp11_;
				ValaCCodeExpression* _tmp12_;
				_expr_index = _expr_index + 1;
				_tmp8_ = _expr_index;
				_tmp9_ = _expr_size;
				if (!(_tmp8_ < _tmp9_)) {
					break;
				}
				_tmp10_ = _expr_list;
				_tmp11_ = vala_list_get (_tmp10_, _expr_index);
				expr = (ValaCCodeExpression*) _tmp11_;
				_tmp12_ = expr;
				vala_ccode_expression_statement_write_expression (self, writer, _tmp12_);
				_vala_ccode_node_unref0 (expr);
			}
			_vala_iterable_unref0 (_expr_list);
		}
		_vala_ccode_node_unref0 (ccomma);
	} else {
		ValaCCodeExpression* _tmp13_;
		_tmp13_ = self->priv->_expression;
		if (VALA_IS_CCODE_PARENTHESIZED_EXPRESSION (_tmp13_)) {
			ValaCCodeParenthesizedExpression* cpar = NULL;
			ValaCCodeExpression* _tmp14_;
			ValaCCodeParenthesizedExpression* _tmp15_;
			ValaCCodeParenthesizedExpression* _tmp16_;
			ValaCCodeExpression* _tmp17_;
			ValaCCodeExpression* _tmp18_;
			_tmp14_ = self->priv->_expression;
			_tmp15_ = _vala_ccode_node_ref0 (VALA_IS_CCODE_PARENTHESIZED_EXPRESSION (_tmp14_) ? ((ValaCCodeParenthesizedExpression*) _tmp14_) : NULL);
			cpar = _tmp15_;
			_tmp16_ = cpar;
			_tmp17_ = vala_ccode_parenthesized_expression_get_inner (_tmp16_);
			_tmp18_ = _tmp17_;
			vala_ccode_expression_statement_write_expression (self, writer, _tmp18_);
			_vala_ccode_node_unref0 (cpar);
		} else {
			ValaCCodeExpression* _tmp19_;
			_tmp19_ = self->priv->_expression;
			vala_ccode_expression_statement_write_expression (self, writer, _tmp19_);
		}
	}
}

static void
vala_ccode_expression_statement_write_expression (ValaCCodeExpressionStatement* self,
                                                  ValaCCodeWriter* writer,
                                                  ValaCCodeExpression* expr)
{
	ValaCCodeLineDirective* _tmp0_;
	ValaCCodeLineDirective* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (writer != NULL);
	_tmp0_ = vala_ccode_node_get_line ((ValaCCodeNode*) self);
	_tmp1_ = _tmp0_;
	vala_ccode_writer_write_indent (writer, _tmp1_);
	if (expr != NULL) {
		vala_ccode_node_write ((ValaCCodeNode*) expr, writer);
	}
	vala_ccode_writer_write_string (writer, ";");
	vala_ccode_writer_write_newline (writer);
}

static void
vala_ccode_expression_statement_class_init (ValaCCodeExpressionStatementClass * klass,
                                            gpointer klass_data)
{
	vala_ccode_expression_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_expression_statement_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeExpressionStatement_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_expression_statement_real_write;
}

static void
vala_ccode_expression_statement_instance_init (ValaCCodeExpressionStatement * self,
                                               gpointer klass)
{
	self->priv = vala_ccode_expression_statement_get_instance_private (self);
}

static void
vala_ccode_expression_statement_finalize (ValaCCodeNode * obj)
{
	ValaCCodeExpressionStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_EXPRESSION_STATEMENT, ValaCCodeExpressionStatement);
	_vala_ccode_node_unref0 (self->priv->_expression);
	VALA_CCODE_NODE_CLASS (vala_ccode_expression_statement_parent_class)->finalize (obj);
}

/**
 * Represents a C code statement that evaluates a given expression.
 */
static GType
vala_ccode_expression_statement_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeExpressionStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_expression_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeExpressionStatement), 0, (GInstanceInitFunc) vala_ccode_expression_statement_instance_init, NULL };
	GType vala_ccode_expression_statement_type_id;
	vala_ccode_expression_statement_type_id = g_type_register_static (VALA_TYPE_CCODE_STATEMENT, "ValaCCodeExpressionStatement", &g_define_type_info, 0);
	ValaCCodeExpressionStatement_private_offset = g_type_add_instance_private (vala_ccode_expression_statement_type_id, sizeof (ValaCCodeExpressionStatementPrivate));
	return vala_ccode_expression_statement_type_id;
}

GType
vala_ccode_expression_statement_get_type (void)
{
	static volatile gsize vala_ccode_expression_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_expression_statement_type_id__volatile)) {
		GType vala_ccode_expression_statement_type_id;
		vala_ccode_expression_statement_type_id = vala_ccode_expression_statement_get_type_once ();
		g_once_init_leave (&vala_ccode_expression_statement_type_id__volatile, vala_ccode_expression_statement_type_id);
	}
	return vala_ccode_expression_statement_type_id__volatile;
}

