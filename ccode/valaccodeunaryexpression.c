/* valaccodeunaryexpression.c generated by valac, the Vala compiler
 * generated from valaccodeunaryexpression.vala, do not modify */

/* valaccodeunaryexpression.vala
 *
 * Copyright (C) 2006-2009  Jürg Billeter
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

#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeUnaryExpressionPrivate {
	ValaCCodeUnaryOperator _operator;
	ValaCCodeExpression* _inner;
};


static gint ValaCCodeUnaryExpression_private_offset;
static gpointer vala_ccode_unary_expression_parent_class = NULL;

static void vala_ccode_unary_expression_real_write (ValaCCodeNode* base,
                                             ValaCCodeWriter* writer);
static void vala_ccode_unary_expression_real_write_inner (ValaCCodeExpression* base,
                                                   ValaCCodeWriter* writer);
static void vala_ccode_unary_expression_finalize (ValaCCodeNode * obj);


static inline gpointer
vala_ccode_unary_expression_get_instance_private (ValaCCodeUnaryExpression* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeUnaryExpression_private_offset);
}


ValaCCodeUnaryExpression*
vala_ccode_unary_expression_construct (GType object_type,
                                       ValaCCodeUnaryOperator op,
                                       ValaCCodeExpression* expr)
{
	ValaCCodeUnaryExpression* self = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	self = (ValaCCodeUnaryExpression*) vala_ccode_expression_construct (object_type);
	vala_ccode_unary_expression_set_operator (self, op);
	vala_ccode_unary_expression_set_inner (self, expr);
	return self;
}


ValaCCodeUnaryExpression*
vala_ccode_unary_expression_new (ValaCCodeUnaryOperator op,
                                 ValaCCodeExpression* expr)
{
	return vala_ccode_unary_expression_construct (VALA_TYPE_CCODE_UNARY_EXPRESSION, op, expr);
}


static gpointer
_vala_ccode_node_ref0 (gpointer self)
{
	return self ? vala_ccode_node_ref (self) : NULL;
}


static void
vala_ccode_unary_expression_real_write (ValaCCodeNode* base,
                                        ValaCCodeWriter* writer)
{
	ValaCCodeUnaryExpression * self;
	ValaCCodeUnaryOperator _tmp0_;
	self = (ValaCCodeUnaryExpression*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_operator;
	switch (_tmp0_) {
		case VALA_CCODE_UNARY_OPERATOR_PLUS:
		{
			ValaCCodeExpression* _tmp1_;
			vala_ccode_writer_write_string (writer, "+");
			_tmp1_ = self->priv->_inner;
			vala_ccode_expression_write_inner (_tmp1_, writer);
			break;
		}
		case VALA_CCODE_UNARY_OPERATOR_MINUS:
		{
			ValaCCodeExpression* _tmp2_;
			vala_ccode_writer_write_string (writer, "-");
			_tmp2_ = self->priv->_inner;
			vala_ccode_expression_write_inner (_tmp2_, writer);
			break;
		}
		case VALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION:
		{
			ValaCCodeExpression* _tmp3_;
			vala_ccode_writer_write_string (writer, "!");
			_tmp3_ = self->priv->_inner;
			vala_ccode_expression_write_inner (_tmp3_, writer);
			break;
		}
		case VALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT:
		{
			ValaCCodeExpression* _tmp4_;
			vala_ccode_writer_write_string (writer, "~");
			_tmp4_ = self->priv->_inner;
			vala_ccode_expression_write_inner (_tmp4_, writer);
			break;
		}
		case VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION:
		{
			ValaCCodeUnaryExpression* inner_unary = NULL;
			ValaCCodeExpression* _tmp5_;
			ValaCCodeUnaryExpression* _tmp6_;
			gboolean _tmp7_ = FALSE;
			ValaCCodeUnaryExpression* _tmp8_;
			ValaCCodeExpression* _tmp13_;
			_tmp5_ = self->priv->_inner;
			_tmp6_ = _vala_ccode_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp5_, VALA_TYPE_CCODE_UNARY_EXPRESSION) ? ((ValaCCodeUnaryExpression*) _tmp5_) : NULL);
			inner_unary = _tmp6_;
			_tmp8_ = inner_unary;
			if (_tmp8_ != NULL) {
				ValaCCodeUnaryExpression* _tmp9_;
				ValaCCodeUnaryOperator _tmp10_;
				_tmp9_ = inner_unary;
				_tmp10_ = _tmp9_->priv->_operator;
				_tmp7_ = _tmp10_ == VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF;
			} else {
				_tmp7_ = FALSE;
			}
			if (_tmp7_) {
				ValaCCodeUnaryExpression* _tmp11_;
				ValaCCodeExpression* _tmp12_;
				_tmp11_ = inner_unary;
				_tmp12_ = _tmp11_->priv->_inner;
				vala_ccode_node_write ((ValaCCodeNode*) _tmp12_, writer);
				_vala_ccode_node_unref0 (inner_unary);
				return;
			}
			vala_ccode_writer_write_string (writer, "*");
			_tmp13_ = self->priv->_inner;
			vala_ccode_expression_write_inner (_tmp13_, writer);
			_vala_ccode_node_unref0 (inner_unary);
			break;
		}
		case VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF:
		{
			ValaCCodeUnaryExpression* inner_unary = NULL;
			ValaCCodeExpression* _tmp14_;
			ValaCCodeUnaryExpression* _tmp15_;
			gboolean _tmp16_ = FALSE;
			ValaCCodeUnaryExpression* _tmp17_;
			ValaCCodeExpression* _tmp22_;
			_tmp14_ = self->priv->_inner;
			_tmp15_ = _vala_ccode_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp14_, VALA_TYPE_CCODE_UNARY_EXPRESSION) ? ((ValaCCodeUnaryExpression*) _tmp14_) : NULL);
			inner_unary = _tmp15_;
			_tmp17_ = inner_unary;
			if (_tmp17_ != NULL) {
				ValaCCodeUnaryExpression* _tmp18_;
				ValaCCodeUnaryOperator _tmp19_;
				_tmp18_ = inner_unary;
				_tmp19_ = _tmp18_->priv->_operator;
				_tmp16_ = _tmp19_ == VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION;
			} else {
				_tmp16_ = FALSE;
			}
			if (_tmp16_) {
				ValaCCodeUnaryExpression* _tmp20_;
				ValaCCodeExpression* _tmp21_;
				_tmp20_ = inner_unary;
				_tmp21_ = _tmp20_->priv->_inner;
				vala_ccode_node_write ((ValaCCodeNode*) _tmp21_, writer);
				_vala_ccode_node_unref0 (inner_unary);
				return;
			}
			vala_ccode_writer_write_string (writer, "&");
			_tmp22_ = self->priv->_inner;
			vala_ccode_expression_write_inner (_tmp22_, writer);
			_vala_ccode_node_unref0 (inner_unary);
			break;
		}
		case VALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT:
		{
			vala_ccode_writer_write_string (writer, "++");
			break;
		}
		case VALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT:
		{
			vala_ccode_writer_write_string (writer, "--");
			break;
		}
		case VALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT:
		{
			ValaCCodeExpression* _tmp23_;
			_tmp23_ = self->priv->_inner;
			vala_ccode_expression_write_inner (_tmp23_, writer);
			vala_ccode_writer_write_string (writer, "++");
			break;
		}
		case VALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT:
		{
			ValaCCodeExpression* _tmp24_;
			_tmp24_ = self->priv->_inner;
			vala_ccode_expression_write_inner (_tmp24_, writer);
			vala_ccode_writer_write_string (writer, "--");
			break;
		}
		default:
		{
			g_assert_not_reached ();
		}
	}
}


static void
vala_ccode_unary_expression_real_write_inner (ValaCCodeExpression* base,
                                              ValaCCodeWriter* writer)
{
	ValaCCodeUnaryExpression * self;
	self = (ValaCCodeUnaryExpression*) base;
	g_return_if_fail (writer != NULL);
	vala_ccode_writer_write_string (writer, "(");
	vala_ccode_node_write ((ValaCCodeNode*) self, writer);
	vala_ccode_writer_write_string (writer, ")");
}


ValaCCodeUnaryOperator
vala_ccode_unary_expression_get_operator (ValaCCodeUnaryExpression* self)
{
	ValaCCodeUnaryOperator result;
	ValaCCodeUnaryOperator _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_operator;
	result = _tmp0_;
	return result;
}


void
vala_ccode_unary_expression_set_operator (ValaCCodeUnaryExpression* self,
                                          ValaCCodeUnaryOperator value)
{
	g_return_if_fail (self != NULL);
	self->priv->_operator = value;
}


ValaCCodeExpression*
vala_ccode_unary_expression_get_inner (ValaCCodeUnaryExpression* self)
{
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_inner;
	result = _tmp0_;
	return result;
}


void
vala_ccode_unary_expression_set_inner (ValaCCodeUnaryExpression* self,
                                       ValaCCodeExpression* value)
{
	ValaCCodeExpression* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_inner);
	self->priv->_inner = _tmp0_;
}


static void
vala_ccode_unary_expression_class_init (ValaCCodeUnaryExpressionClass * klass)
{
	vala_ccode_unary_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_unary_expression_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeUnaryExpression_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_unary_expression_real_write;
	((ValaCCodeExpressionClass *) klass)->write_inner = (void (*) (ValaCCodeExpression*, ValaCCodeWriter*)) vala_ccode_unary_expression_real_write_inner;
}


static void
vala_ccode_unary_expression_instance_init (ValaCCodeUnaryExpression * self)
{
	self->priv = vala_ccode_unary_expression_get_instance_private (self);
}


static void
vala_ccode_unary_expression_finalize (ValaCCodeNode * obj)
{
	ValaCCodeUnaryExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_UNARY_EXPRESSION, ValaCCodeUnaryExpression);
	_vala_ccode_node_unref0 (self->priv->_inner);
	VALA_CCODE_NODE_CLASS (vala_ccode_unary_expression_parent_class)->finalize (obj);
}


/**
 * Represents an expression with one operand in the C code.
 */
GType
vala_ccode_unary_expression_get_type (void)
{
	static volatile gsize vala_ccode_unary_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_unary_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeUnaryExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_unary_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeUnaryExpression), 0, (GInstanceInitFunc) vala_ccode_unary_expression_instance_init, NULL };
		GType vala_ccode_unary_expression_type_id;
		vala_ccode_unary_expression_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeUnaryExpression", &g_define_type_info, 0);
		ValaCCodeUnaryExpression_private_offset = g_type_add_instance_private (vala_ccode_unary_expression_type_id, sizeof (ValaCCodeUnaryExpressionPrivate));
		g_once_init_leave (&vala_ccode_unary_expression_type_id__volatile, vala_ccode_unary_expression_type_id);
	}
	return vala_ccode_unary_expression_type_id__volatile;
}


GType
vala_ccode_unary_operator_get_type (void)
{
	static volatile gsize vala_ccode_unary_operator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_unary_operator_type_id__volatile)) {
		static const GEnumValue values[] = {{VALA_CCODE_UNARY_OPERATOR_PLUS, "VALA_CCODE_UNARY_OPERATOR_PLUS", "plus"}, {VALA_CCODE_UNARY_OPERATOR_MINUS, "VALA_CCODE_UNARY_OPERATOR_MINUS", "minus"}, {VALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION, "VALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION", "logical-negation"}, {VALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT, "VALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT", "bitwise-complement"}, {VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION, "VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION", "pointer-indirection"}, {VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF, "VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF", "address-of"}, {VALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT, "VALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT", "prefix-increment"}, {VALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT, "VALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT", "prefix-decrement"}, {VALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT, "VALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT", "postfix-increment"}, {VALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT, "VALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT", "postfix-decrement"}, {0, NULL, NULL}};
		GType vala_ccode_unary_operator_type_id;
		vala_ccode_unary_operator_type_id = g_enum_register_static ("ValaCCodeUnaryOperator", values);
		g_once_init_leave (&vala_ccode_unary_operator_type_id__volatile, vala_ccode_unary_operator_type_id);
	}
	return vala_ccode_unary_operator_type_id__volatile;
}



