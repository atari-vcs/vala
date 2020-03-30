/* valaforstatement.c generated by valac, the Vala compiler
 * generated from valaforstatement.vala, do not modify */

/* valaforstatement.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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
#include "vala.h"
#include <valagee.h>

#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaForStatementPrivate {
	ValaList* initializer;
	ValaList* iterator;
	ValaExpression* _condition;
	ValaBlock* _body;
};


static gint ValaForStatement_private_offset;
static gpointer vala_for_statement_parent_class = NULL;
static ValaStatementIface * vala_for_statement_vala_statement_parent_iface = NULL;

static void vala_for_statement_real_accept (ValaCodeNode* base,
                                     ValaCodeVisitor* visitor);
static void vala_for_statement_real_accept_children (ValaCodeNode* base,
                                              ValaCodeVisitor* visitor);
static void vala_for_statement_real_replace_expression (ValaCodeNode* base,
                                                 ValaExpression* old_node,
                                                 ValaExpression* new_node);
static gboolean vala_for_statement_always_true (ValaForStatement* self,
                                         ValaExpression* condition);
static gboolean vala_for_statement_always_false (ValaForStatement* self,
                                          ValaExpression* condition);
static gboolean vala_for_statement_real_check (ValaCodeNode* base,
                                        ValaCodeContext* context);
static void vala_for_statement_finalize (ValaCodeNode * obj);


static inline gpointer
vala_for_statement_get_instance_private (ValaForStatement* self)
{
	return G_STRUCT_MEMBER_P (self, ValaForStatement_private_offset);
}


/**
 * Creates a new for statement.
 *
 * @param condition        loop condition
 * @param body             loop body
 * @param source_reference reference to source code
 * @return                 newly created for statement
 */
ValaForStatement*
vala_for_statement_construct (GType object_type,
                              ValaExpression* condition,
                              ValaBlock* body,
                              ValaSourceReference* source_reference)
{
	ValaForStatement* self = NULL;
	g_return_val_if_fail (body != NULL, NULL);
	self = (ValaForStatement*) vala_code_node_construct (object_type);
	vala_for_statement_set_condition (self, condition);
	vala_for_statement_set_body (self, body);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}


ValaForStatement*
vala_for_statement_new (ValaExpression* condition,
                        ValaBlock* body,
                        ValaSourceReference* source_reference)
{
	return vala_for_statement_construct (VALA_TYPE_FOR_STATEMENT, condition, body, source_reference);
}


/**
 * Appends the specified expression to the list of initializers.
 *
 * @param init an initializer expression
 */
void
vala_for_statement_add_initializer (ValaForStatement* self,
                                    ValaExpression* init)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (init != NULL);
	vala_code_node_set_parent_node ((ValaCodeNode*) init, (ValaCodeNode*) self);
	_tmp0_ = self->priv->initializer;
	vala_collection_add ((ValaCollection*) _tmp0_, init);
}


/**
 * Returns a copy of the list of initializers.
 *
 * @return initializer list
 */
static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


ValaList*
vala_for_statement_get_initializer (ValaForStatement* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->initializer;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Appends the specified expression to the iterator.
 *
 * @param iter an iterator expression
 */
void
vala_for_statement_add_iterator (ValaForStatement* self,
                                 ValaExpression* iter)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (iter != NULL);
	vala_code_node_set_parent_node ((ValaCodeNode*) iter, (ValaCodeNode*) self);
	_tmp0_ = self->priv->iterator;
	vala_collection_add ((ValaCollection*) _tmp0_, iter);
}


/**
 * Returns a copy of the iterator.
 *
 * @return iterator
 */
ValaList*
vala_for_statement_get_iterator (ValaForStatement* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->iterator;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static void
vala_for_statement_real_accept (ValaCodeNode* base,
                                ValaCodeVisitor* visitor)
{
	ValaForStatement * self;
	self = (ValaForStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_for_statement (visitor, self);
}


static void
vala_for_statement_real_accept_children (ValaCodeNode* base,
                                         ValaCodeVisitor* visitor)
{
	ValaForStatement * self;
	ValaExpression* _tmp13_;
	ValaExpression* _tmp14_;
	ValaBlock* _tmp32_;
	ValaBlock* _tmp33_;
	self = (ValaForStatement*) base;
	g_return_if_fail (visitor != NULL);
	{
		ValaList* _init_expr_list = NULL;
		ValaList* _tmp0_;
		ValaList* _tmp1_;
		gint _init_expr_size = 0;
		ValaList* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		gint _init_expr_index = 0;
		_tmp0_ = self->priv->initializer;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_init_expr_list = _tmp1_;
		_tmp2_ = _init_expr_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_init_expr_size = _tmp4_;
		_init_expr_index = -1;
		while (TRUE) {
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			ValaExpression* init_expr = NULL;
			ValaList* _tmp8_;
			gint _tmp9_;
			gpointer _tmp10_;
			ValaExpression* _tmp11_;
			ValaExpression* _tmp12_;
			_tmp5_ = _init_expr_index;
			_init_expr_index = _tmp5_ + 1;
			_tmp6_ = _init_expr_index;
			_tmp7_ = _init_expr_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _init_expr_list;
			_tmp9_ = _init_expr_index;
			_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
			init_expr = (ValaExpression*) _tmp10_;
			_tmp11_ = init_expr;
			vala_code_node_accept ((ValaCodeNode*) _tmp11_, visitor);
			_tmp12_ = init_expr;
			vala_code_visitor_visit_end_full_expression (visitor, _tmp12_);
			_vala_code_node_unref0 (init_expr);
		}
		_vala_iterable_unref0 (_init_expr_list);
	}
	_tmp13_ = vala_for_statement_get_condition (self);
	_tmp14_ = _tmp13_;
	if (_tmp14_ != NULL) {
		ValaExpression* _tmp15_;
		ValaExpression* _tmp16_;
		ValaExpression* _tmp17_;
		ValaExpression* _tmp18_;
		_tmp15_ = vala_for_statement_get_condition (self);
		_tmp16_ = _tmp15_;
		vala_code_node_accept ((ValaCodeNode*) _tmp16_, visitor);
		_tmp17_ = vala_for_statement_get_condition (self);
		_tmp18_ = _tmp17_;
		vala_code_visitor_visit_end_full_expression (visitor, _tmp18_);
	}
	{
		ValaList* _it_expr_list = NULL;
		ValaList* _tmp19_;
		ValaList* _tmp20_;
		gint _it_expr_size = 0;
		ValaList* _tmp21_;
		gint _tmp22_;
		gint _tmp23_;
		gint _it_expr_index = 0;
		_tmp19_ = self->priv->iterator;
		_tmp20_ = _vala_iterable_ref0 (_tmp19_);
		_it_expr_list = _tmp20_;
		_tmp21_ = _it_expr_list;
		_tmp22_ = vala_collection_get_size ((ValaCollection*) _tmp21_);
		_tmp23_ = _tmp22_;
		_it_expr_size = _tmp23_;
		_it_expr_index = -1;
		while (TRUE) {
			gint _tmp24_;
			gint _tmp25_;
			gint _tmp26_;
			ValaExpression* it_expr = NULL;
			ValaList* _tmp27_;
			gint _tmp28_;
			gpointer _tmp29_;
			ValaExpression* _tmp30_;
			ValaExpression* _tmp31_;
			_tmp24_ = _it_expr_index;
			_it_expr_index = _tmp24_ + 1;
			_tmp25_ = _it_expr_index;
			_tmp26_ = _it_expr_size;
			if (!(_tmp25_ < _tmp26_)) {
				break;
			}
			_tmp27_ = _it_expr_list;
			_tmp28_ = _it_expr_index;
			_tmp29_ = vala_list_get (_tmp27_, _tmp28_);
			it_expr = (ValaExpression*) _tmp29_;
			_tmp30_ = it_expr;
			vala_code_node_accept ((ValaCodeNode*) _tmp30_, visitor);
			_tmp31_ = it_expr;
			vala_code_visitor_visit_end_full_expression (visitor, _tmp31_);
			_vala_code_node_unref0 (it_expr);
		}
		_vala_iterable_unref0 (_it_expr_list);
	}
	_tmp32_ = vala_for_statement_get_body (self);
	_tmp33_ = _tmp32_;
	vala_code_node_accept ((ValaCodeNode*) _tmp33_, visitor);
}


static void
vala_for_statement_real_replace_expression (ValaCodeNode* base,
                                            ValaExpression* old_node,
                                            ValaExpression* new_node)
{
	ValaForStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaForStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_for_statement_get_condition (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_for_statement_set_condition (self, new_node);
	}
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp2_ = FALSE;
			_tmp2_ = TRUE;
			while (TRUE) {
				gint _tmp4_;
				ValaList* _tmp5_;
				gint _tmp6_;
				gint _tmp7_;
				ValaList* _tmp8_;
				gint _tmp9_;
				gpointer _tmp10_;
				ValaExpression* _tmp11_;
				gboolean _tmp12_;
				if (!_tmp2_) {
					gint _tmp3_;
					_tmp3_ = i;
					i = _tmp3_ + 1;
				}
				_tmp2_ = FALSE;
				_tmp4_ = i;
				_tmp5_ = self->priv->initializer;
				_tmp6_ = vala_collection_get_size ((ValaCollection*) _tmp5_);
				_tmp7_ = _tmp6_;
				if (!(_tmp4_ < _tmp7_)) {
					break;
				}
				_tmp8_ = self->priv->initializer;
				_tmp9_ = i;
				_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
				_tmp11_ = (ValaExpression*) _tmp10_;
				_tmp12_ = _tmp11_ == old_node;
				_vala_code_node_unref0 (_tmp11_);
				if (_tmp12_) {
					ValaList* _tmp13_;
					gint _tmp14_;
					_tmp13_ = self->priv->initializer;
					_tmp14_ = i;
					vala_list_set (_tmp13_, _tmp14_, new_node);
					vala_code_node_set_parent_node ((ValaCodeNode*) new_node, (ValaCodeNode*) self);
				}
			}
		}
	}
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp15_ = FALSE;
			_tmp15_ = TRUE;
			while (TRUE) {
				gint _tmp17_;
				ValaList* _tmp18_;
				gint _tmp19_;
				gint _tmp20_;
				ValaList* _tmp21_;
				gint _tmp22_;
				gpointer _tmp23_;
				ValaExpression* _tmp24_;
				gboolean _tmp25_;
				if (!_tmp15_) {
					gint _tmp16_;
					_tmp16_ = i;
					i = _tmp16_ + 1;
				}
				_tmp15_ = FALSE;
				_tmp17_ = i;
				_tmp18_ = self->priv->iterator;
				_tmp19_ = vala_collection_get_size ((ValaCollection*) _tmp18_);
				_tmp20_ = _tmp19_;
				if (!(_tmp17_ < _tmp20_)) {
					break;
				}
				_tmp21_ = self->priv->iterator;
				_tmp22_ = i;
				_tmp23_ = vala_list_get (_tmp21_, _tmp22_);
				_tmp24_ = (ValaExpression*) _tmp23_;
				_tmp25_ = _tmp24_ == old_node;
				_vala_code_node_unref0 (_tmp24_);
				if (_tmp25_) {
					ValaList* _tmp26_;
					gint _tmp27_;
					_tmp26_ = self->priv->iterator;
					_tmp27_ = i;
					vala_list_set (_tmp26_, _tmp27_, new_node);
					vala_code_node_set_parent_node ((ValaCodeNode*) new_node, (ValaCodeNode*) self);
				}
			}
		}
	}
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean
vala_for_statement_always_true (ValaForStatement* self,
                                ValaExpression* condition)
{
	gboolean result = FALSE;
	ValaBooleanLiteral* literal = NULL;
	ValaBooleanLiteral* _tmp0_;
	gboolean _tmp1_ = FALSE;
	ValaBooleanLiteral* _tmp2_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (condition != NULL, FALSE);
	_tmp0_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (condition, VALA_TYPE_BOOLEAN_LITERAL) ? ((ValaBooleanLiteral*) condition) : NULL);
	literal = _tmp0_;
	_tmp2_ = literal;
	if (_tmp2_ != NULL) {
		ValaBooleanLiteral* _tmp3_;
		gboolean _tmp4_;
		gboolean _tmp5_;
		_tmp3_ = literal;
		_tmp4_ = vala_boolean_literal_get_value (_tmp3_);
		_tmp5_ = _tmp4_;
		_tmp1_ = _tmp5_;
	} else {
		_tmp1_ = FALSE;
	}
	result = _tmp1_;
	_vala_code_node_unref0 (literal);
	return result;
}


static gboolean
vala_for_statement_always_false (ValaForStatement* self,
                                 ValaExpression* condition)
{
	gboolean result = FALSE;
	ValaBooleanLiteral* literal = NULL;
	ValaBooleanLiteral* _tmp0_;
	gboolean _tmp1_ = FALSE;
	ValaBooleanLiteral* _tmp2_;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (condition != NULL, FALSE);
	_tmp0_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (condition, VALA_TYPE_BOOLEAN_LITERAL) ? ((ValaBooleanLiteral*) condition) : NULL);
	literal = _tmp0_;
	_tmp2_ = literal;
	if (_tmp2_ != NULL) {
		ValaBooleanLiteral* _tmp3_;
		gboolean _tmp4_;
		gboolean _tmp5_;
		_tmp3_ = literal;
		_tmp4_ = vala_boolean_literal_get_value (_tmp3_);
		_tmp5_ = _tmp4_;
		_tmp1_ = !_tmp5_;
	} else {
		_tmp1_ = FALSE;
	}
	result = _tmp1_;
	_vala_code_node_unref0 (literal);
	return result;
}


static gboolean
vala_for_statement_real_check (ValaCodeNode* base,
                               ValaCodeContext* context)
{
	ValaForStatement * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaBlock* block = NULL;
	ValaSourceReference* _tmp4_;
	ValaSourceReference* _tmp5_;
	ValaBlock* _tmp6_;
	gboolean _tmp25_ = FALSE;
	ValaExpression* _tmp26_;
	ValaExpression* _tmp27_;
	ValaLocalVariable* first_local = NULL;
	ValaSemanticAnalyzer* _tmp69_;
	ValaSemanticAnalyzer* _tmp70_;
	ValaDataType* _tmp71_;
	ValaDataType* _tmp72_;
	ValaDataType* _tmp73_;
	gchar* _tmp74_;
	gchar* _tmp75_;
	ValaSourceReference* _tmp76_;
	ValaSourceReference* _tmp77_;
	ValaBooleanLiteral* _tmp78_;
	ValaBooleanLiteral* _tmp79_;
	ValaSourceReference* _tmp80_;
	ValaSourceReference* _tmp81_;
	ValaLocalVariable* _tmp82_;
	ValaLocalVariable* _tmp83_;
	ValaBlock* _tmp84_;
	ValaLocalVariable* _tmp85_;
	ValaSourceReference* _tmp86_;
	ValaSourceReference* _tmp87_;
	ValaDeclarationStatement* _tmp88_;
	ValaDeclarationStatement* _tmp89_;
	ValaBlock* iterator_block = NULL;
	ValaSourceReference* _tmp90_;
	ValaSourceReference* _tmp91_;
	ValaBlock* _tmp92_;
	ValaIfStatement* first_if = NULL;
	ValaLocalVariable* _tmp111_;
	const gchar* _tmp112_;
	const gchar* _tmp113_;
	ValaSourceReference* _tmp114_;
	ValaSourceReference* _tmp115_;
	ValaMemberAccess* _tmp116_;
	ValaMemberAccess* _tmp117_;
	ValaSourceReference* _tmp118_;
	ValaSourceReference* _tmp119_;
	ValaUnaryExpression* _tmp120_;
	ValaUnaryExpression* _tmp121_;
	ValaBlock* _tmp122_;
	ValaSourceReference* _tmp123_;
	ValaSourceReference* _tmp124_;
	ValaIfStatement* _tmp125_;
	ValaIfStatement* _tmp126_;
	ValaBlock* _tmp127_;
	ValaBlock* _tmp128_;
	ValaIfStatement* _tmp129_;
	ValaBlock* _tmp130_;
	ValaBlock* _tmp131_;
	ValaLocalVariable* _tmp132_;
	const gchar* _tmp133_;
	const gchar* _tmp134_;
	ValaSourceReference* _tmp135_;
	ValaSourceReference* _tmp136_;
	ValaMemberAccess* _tmp137_;
	ValaMemberAccess* _tmp138_;
	ValaSourceReference* _tmp139_;
	ValaSourceReference* _tmp140_;
	ValaBooleanLiteral* _tmp141_;
	ValaBooleanLiteral* _tmp142_;
	ValaSourceReference* _tmp143_;
	ValaSourceReference* _tmp144_;
	ValaAssignment* _tmp145_;
	ValaAssignment* _tmp146_;
	ValaSourceReference* _tmp147_;
	ValaSourceReference* _tmp148_;
	ValaExpressionStatement* _tmp149_;
	ValaExpressionStatement* _tmp150_;
	ValaBlock* _tmp151_;
	ValaBlock* _tmp152_;
	ValaBlock* _tmp153_;
	ValaSourceReference* _tmp154_;
	ValaSourceReference* _tmp155_;
	ValaLoop* _tmp156_;
	ValaLoop* _tmp157_;
	ValaBlock* parent_block = NULL;
	ValaCodeNode* _tmp158_;
	ValaCodeNode* _tmp159_;
	ValaBlock* _tmp160_;
	ValaBlock* _tmp161_;
	ValaBlock* _tmp162_;
	ValaBlock* _tmp163_;
	gboolean _tmp164_;
	gboolean _tmp165_;
	self = (ValaForStatement*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_code_node_get_checked ((ValaCodeNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		gboolean _tmp2_;
		gboolean _tmp3_;
		_tmp2_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp3_ = _tmp2_;
		result = !_tmp3_;
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	_tmp4_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_block_new (_tmp5_);
	block = _tmp6_;
	{
		ValaList* _init_expr_list = NULL;
		ValaList* _tmp7_;
		ValaList* _tmp8_;
		gint _init_expr_size = 0;
		ValaList* _tmp9_;
		gint _tmp10_;
		gint _tmp11_;
		gint _init_expr_index = 0;
		_tmp7_ = self->priv->initializer;
		_tmp8_ = _vala_iterable_ref0 (_tmp7_);
		_init_expr_list = _tmp8_;
		_tmp9_ = _init_expr_list;
		_tmp10_ = vala_collection_get_size ((ValaCollection*) _tmp9_);
		_tmp11_ = _tmp10_;
		_init_expr_size = _tmp11_;
		_init_expr_index = -1;
		while (TRUE) {
			gint _tmp12_;
			gint _tmp13_;
			gint _tmp14_;
			ValaExpression* init_expr = NULL;
			ValaList* _tmp15_;
			gint _tmp16_;
			gpointer _tmp17_;
			ValaBlock* _tmp18_;
			ValaExpression* _tmp19_;
			ValaExpression* _tmp20_;
			ValaSourceReference* _tmp21_;
			ValaSourceReference* _tmp22_;
			ValaExpressionStatement* _tmp23_;
			ValaExpressionStatement* _tmp24_;
			_tmp12_ = _init_expr_index;
			_init_expr_index = _tmp12_ + 1;
			_tmp13_ = _init_expr_index;
			_tmp14_ = _init_expr_size;
			if (!(_tmp13_ < _tmp14_)) {
				break;
			}
			_tmp15_ = _init_expr_list;
			_tmp16_ = _init_expr_index;
			_tmp17_ = vala_list_get (_tmp15_, _tmp16_);
			init_expr = (ValaExpression*) _tmp17_;
			_tmp18_ = block;
			_tmp19_ = init_expr;
			_tmp20_ = init_expr;
			_tmp21_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp20_);
			_tmp22_ = _tmp21_;
			_tmp23_ = vala_expression_statement_new (_tmp19_, _tmp22_);
			_tmp24_ = _tmp23_;
			vala_block_add_statement (_tmp18_, (ValaStatement*) _tmp24_);
			_vala_code_node_unref0 (_tmp24_);
			_vala_code_node_unref0 (init_expr);
		}
		_vala_iterable_unref0 (_init_expr_list);
	}
	_tmp26_ = vala_for_statement_get_condition (self);
	_tmp27_ = _tmp26_;
	if (_tmp27_ == NULL) {
		_tmp25_ = TRUE;
	} else {
		ValaExpression* _tmp28_;
		ValaExpression* _tmp29_;
		_tmp28_ = vala_for_statement_get_condition (self);
		_tmp29_ = _tmp28_;
		_tmp25_ = vala_for_statement_always_true (self, _tmp29_);
	}
	if (_tmp25_) {
	} else {
		ValaExpression* _tmp30_;
		ValaExpression* _tmp31_;
		_tmp30_ = vala_for_statement_get_condition (self);
		_tmp31_ = _tmp30_;
		if (vala_for_statement_always_false (self, _tmp31_)) {
			ValaBlock* _tmp32_;
			ValaBlock* _tmp33_;
			ValaExpression* _tmp34_;
			ValaExpression* _tmp35_;
			ValaSourceReference* _tmp36_;
			ValaSourceReference* _tmp37_;
			ValaBreakStatement* _tmp38_;
			ValaBreakStatement* _tmp39_;
			_tmp32_ = vala_for_statement_get_body (self);
			_tmp33_ = _tmp32_;
			_tmp34_ = vala_for_statement_get_condition (self);
			_tmp35_ = _tmp34_;
			_tmp36_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp35_);
			_tmp37_ = _tmp36_;
			_tmp38_ = vala_break_statement_new (_tmp37_);
			_tmp39_ = _tmp38_;
			vala_block_insert_statement (_tmp33_, 0, (ValaStatement*) _tmp39_);
			_vala_code_node_unref0 (_tmp39_);
		} else {
			ValaUnaryExpression* if_condition = NULL;
			ValaExpression* _tmp40_;
			ValaExpression* _tmp41_;
			ValaExpression* _tmp42_;
			ValaExpression* _tmp43_;
			ValaSourceReference* _tmp44_;
			ValaSourceReference* _tmp45_;
			ValaUnaryExpression* _tmp46_;
			ValaBlock* true_block = NULL;
			ValaExpression* _tmp47_;
			ValaExpression* _tmp48_;
			ValaSourceReference* _tmp49_;
			ValaSourceReference* _tmp50_;
			ValaBlock* _tmp51_;
			ValaBlock* _tmp52_;
			ValaExpression* _tmp53_;
			ValaExpression* _tmp54_;
			ValaSourceReference* _tmp55_;
			ValaSourceReference* _tmp56_;
			ValaBreakStatement* _tmp57_;
			ValaBreakStatement* _tmp58_;
			ValaIfStatement* if_stmt = NULL;
			ValaUnaryExpression* _tmp59_;
			ValaBlock* _tmp60_;
			ValaExpression* _tmp61_;
			ValaExpression* _tmp62_;
			ValaSourceReference* _tmp63_;
			ValaSourceReference* _tmp64_;
			ValaIfStatement* _tmp65_;
			ValaBlock* _tmp66_;
			ValaBlock* _tmp67_;
			ValaIfStatement* _tmp68_;
			_tmp40_ = vala_for_statement_get_condition (self);
			_tmp41_ = _tmp40_;
			_tmp42_ = vala_for_statement_get_condition (self);
			_tmp43_ = _tmp42_;
			_tmp44_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp43_);
			_tmp45_ = _tmp44_;
			_tmp46_ = vala_unary_expression_new (VALA_UNARY_OPERATOR_LOGICAL_NEGATION, _tmp41_, _tmp45_);
			if_condition = _tmp46_;
			_tmp47_ = vala_for_statement_get_condition (self);
			_tmp48_ = _tmp47_;
			_tmp49_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp48_);
			_tmp50_ = _tmp49_;
			_tmp51_ = vala_block_new (_tmp50_);
			true_block = _tmp51_;
			_tmp52_ = true_block;
			_tmp53_ = vala_for_statement_get_condition (self);
			_tmp54_ = _tmp53_;
			_tmp55_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp54_);
			_tmp56_ = _tmp55_;
			_tmp57_ = vala_break_statement_new (_tmp56_);
			_tmp58_ = _tmp57_;
			vala_block_add_statement (_tmp52_, (ValaStatement*) _tmp58_);
			_vala_code_node_unref0 (_tmp58_);
			_tmp59_ = if_condition;
			_tmp60_ = true_block;
			_tmp61_ = vala_for_statement_get_condition (self);
			_tmp62_ = _tmp61_;
			_tmp63_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp62_);
			_tmp64_ = _tmp63_;
			_tmp65_ = vala_if_statement_new ((ValaExpression*) _tmp59_, _tmp60_, NULL, _tmp64_);
			if_stmt = _tmp65_;
			_tmp66_ = vala_for_statement_get_body (self);
			_tmp67_ = _tmp66_;
			_tmp68_ = if_stmt;
			vala_block_insert_statement (_tmp67_, 0, (ValaStatement*) _tmp68_);
			_vala_code_node_unref0 (if_stmt);
			_vala_code_node_unref0 (true_block);
			_vala_code_node_unref0 (if_condition);
		}
	}
	_tmp69_ = vala_code_context_get_analyzer (context);
	_tmp70_ = _tmp69_;
	_tmp71_ = _tmp70_->bool_type;
	_tmp72_ = vala_data_type_copy (_tmp71_);
	_tmp73_ = _tmp72_;
	_tmp74_ = vala_code_node_get_temp_name ();
	_tmp75_ = _tmp74_;
	_tmp76_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp77_ = _tmp76_;
	_tmp78_ = vala_boolean_literal_new (TRUE, _tmp77_);
	_tmp79_ = _tmp78_;
	_tmp80_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp81_ = _tmp80_;
	_tmp82_ = vala_local_variable_new (_tmp73_, _tmp75_, (ValaExpression*) _tmp79_, _tmp81_);
	_tmp83_ = _tmp82_;
	_vala_code_node_unref0 (_tmp79_);
	_g_free0 (_tmp75_);
	_vala_code_node_unref0 (_tmp73_);
	first_local = _tmp83_;
	_tmp84_ = block;
	_tmp85_ = first_local;
	_tmp86_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp87_ = _tmp86_;
	_tmp88_ = vala_declaration_statement_new ((ValaSymbol*) _tmp85_, _tmp87_);
	_tmp89_ = _tmp88_;
	vala_block_add_statement (_tmp84_, (ValaStatement*) _tmp89_);
	_vala_code_node_unref0 (_tmp89_);
	_tmp90_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp91_ = _tmp90_;
	_tmp92_ = vala_block_new (_tmp91_);
	iterator_block = _tmp92_;
	{
		ValaList* _it_expr_list = NULL;
		ValaList* _tmp93_;
		ValaList* _tmp94_;
		gint _it_expr_size = 0;
		ValaList* _tmp95_;
		gint _tmp96_;
		gint _tmp97_;
		gint _it_expr_index = 0;
		_tmp93_ = self->priv->iterator;
		_tmp94_ = _vala_iterable_ref0 (_tmp93_);
		_it_expr_list = _tmp94_;
		_tmp95_ = _it_expr_list;
		_tmp96_ = vala_collection_get_size ((ValaCollection*) _tmp95_);
		_tmp97_ = _tmp96_;
		_it_expr_size = _tmp97_;
		_it_expr_index = -1;
		while (TRUE) {
			gint _tmp98_;
			gint _tmp99_;
			gint _tmp100_;
			ValaExpression* it_expr = NULL;
			ValaList* _tmp101_;
			gint _tmp102_;
			gpointer _tmp103_;
			ValaBlock* _tmp104_;
			ValaExpression* _tmp105_;
			ValaExpression* _tmp106_;
			ValaSourceReference* _tmp107_;
			ValaSourceReference* _tmp108_;
			ValaExpressionStatement* _tmp109_;
			ValaExpressionStatement* _tmp110_;
			_tmp98_ = _it_expr_index;
			_it_expr_index = _tmp98_ + 1;
			_tmp99_ = _it_expr_index;
			_tmp100_ = _it_expr_size;
			if (!(_tmp99_ < _tmp100_)) {
				break;
			}
			_tmp101_ = _it_expr_list;
			_tmp102_ = _it_expr_index;
			_tmp103_ = vala_list_get (_tmp101_, _tmp102_);
			it_expr = (ValaExpression*) _tmp103_;
			_tmp104_ = iterator_block;
			_tmp105_ = it_expr;
			_tmp106_ = it_expr;
			_tmp107_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp106_);
			_tmp108_ = _tmp107_;
			_tmp109_ = vala_expression_statement_new (_tmp105_, _tmp108_);
			_tmp110_ = _tmp109_;
			vala_block_add_statement (_tmp104_, (ValaStatement*) _tmp110_);
			_vala_code_node_unref0 (_tmp110_);
			_vala_code_node_unref0 (it_expr);
		}
		_vala_iterable_unref0 (_it_expr_list);
	}
	_tmp111_ = first_local;
	_tmp112_ = vala_symbol_get_name ((ValaSymbol*) _tmp111_);
	_tmp113_ = _tmp112_;
	_tmp114_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp115_ = _tmp114_;
	_tmp116_ = vala_member_access_new_simple (_tmp113_, _tmp115_);
	_tmp117_ = _tmp116_;
	_tmp118_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp119_ = _tmp118_;
	_tmp120_ = vala_unary_expression_new (VALA_UNARY_OPERATOR_LOGICAL_NEGATION, (ValaExpression*) _tmp117_, _tmp119_);
	_tmp121_ = _tmp120_;
	_tmp122_ = iterator_block;
	_tmp123_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp124_ = _tmp123_;
	_tmp125_ = vala_if_statement_new ((ValaExpression*) _tmp121_, _tmp122_, NULL, _tmp124_);
	_tmp126_ = _tmp125_;
	_vala_code_node_unref0 (_tmp121_);
	_vala_code_node_unref0 (_tmp117_);
	first_if = _tmp126_;
	_tmp127_ = vala_for_statement_get_body (self);
	_tmp128_ = _tmp127_;
	_tmp129_ = first_if;
	vala_block_insert_statement (_tmp128_, 0, (ValaStatement*) _tmp129_);
	_tmp130_ = vala_for_statement_get_body (self);
	_tmp131_ = _tmp130_;
	_tmp132_ = first_local;
	_tmp133_ = vala_symbol_get_name ((ValaSymbol*) _tmp132_);
	_tmp134_ = _tmp133_;
	_tmp135_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp136_ = _tmp135_;
	_tmp137_ = vala_member_access_new_simple (_tmp134_, _tmp136_);
	_tmp138_ = _tmp137_;
	_tmp139_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp140_ = _tmp139_;
	_tmp141_ = vala_boolean_literal_new (FALSE, _tmp140_);
	_tmp142_ = _tmp141_;
	_tmp143_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp144_ = _tmp143_;
	_tmp145_ = vala_assignment_new ((ValaExpression*) _tmp138_, (ValaExpression*) _tmp142_, VALA_ASSIGNMENT_OPERATOR_SIMPLE, _tmp144_);
	_tmp146_ = _tmp145_;
	_tmp147_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp148_ = _tmp147_;
	_tmp149_ = vala_expression_statement_new ((ValaExpression*) _tmp146_, _tmp148_);
	_tmp150_ = _tmp149_;
	vala_block_insert_statement (_tmp131_, 1, (ValaStatement*) _tmp150_);
	_vala_code_node_unref0 (_tmp150_);
	_vala_code_node_unref0 (_tmp146_);
	_vala_code_node_unref0 (_tmp142_);
	_vala_code_node_unref0 (_tmp138_);
	_tmp151_ = block;
	_tmp152_ = vala_for_statement_get_body (self);
	_tmp153_ = _tmp152_;
	_tmp154_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp155_ = _tmp154_;
	_tmp156_ = vala_loop_new (_tmp153_, _tmp155_);
	_tmp157_ = _tmp156_;
	vala_block_add_statement (_tmp151_, (ValaStatement*) _tmp157_);
	_vala_code_node_unref0 (_tmp157_);
	_tmp158_ = vala_code_node_get_parent_node ((ValaCodeNode*) self);
	_tmp159_ = _tmp158_;
	_tmp160_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp159_, VALA_TYPE_BLOCK, ValaBlock));
	parent_block = _tmp160_;
	_tmp161_ = parent_block;
	_tmp162_ = block;
	vala_block_replace_statement (_tmp161_, (ValaStatement*) self, (ValaStatement*) _tmp162_);
	_tmp163_ = block;
	if (!vala_code_node_check ((ValaCodeNode*) _tmp163_, context)) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
	}
	_tmp164_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp165_ = _tmp164_;
	result = !_tmp165_;
	_vala_code_node_unref0 (parent_block);
	_vala_code_node_unref0 (first_if);
	_vala_code_node_unref0 (iterator_block);
	_vala_code_node_unref0 (first_local);
	_vala_code_node_unref0 (block);
	return result;
}


ValaExpression*
vala_for_statement_get_condition (ValaForStatement* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_condition;
	result = _tmp0_;
	return result;
}


void
vala_for_statement_set_condition (ValaForStatement* self,
                                  ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_condition);
	self->priv->_condition = _tmp0_;
	_tmp1_ = self->priv->_condition;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		_tmp2_ = self->priv->_condition;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
	}
}


ValaBlock*
vala_for_statement_get_body (ValaForStatement* self)
{
	ValaBlock* result;
	ValaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_body;
	result = _tmp0_;
	return result;
}


void
vala_for_statement_set_body (ValaForStatement* self,
                             ValaBlock* value)
{
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_body);
	self->priv->_body = _tmp0_;
	_tmp1_ = self->priv->_body;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}


static void
vala_for_statement_class_init (ValaForStatementClass * klass)
{
	vala_for_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_for_statement_finalize;
	g_type_class_adjust_private_offset (klass, &ValaForStatement_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_for_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_for_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_for_statement_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_for_statement_real_check;
}


static void
vala_for_statement_vala_statement_interface_init (ValaStatementIface * iface)
{
	vala_for_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void
vala_for_statement_instance_init (ValaForStatement * self)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	GEqualFunc _tmp2_;
	ValaArrayList* _tmp3_;
	self->priv = vala_for_statement_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_EXPRESSION, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp0_);
	self->priv->initializer = (ValaList*) _tmp1_;
	_tmp2_ = g_direct_equal;
	_tmp3_ = vala_array_list_new (VALA_TYPE_EXPRESSION, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp2_);
	self->priv->iterator = (ValaList*) _tmp3_;
}


static void
vala_for_statement_finalize (ValaCodeNode * obj)
{
	ValaForStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_FOR_STATEMENT, ValaForStatement);
	_vala_iterable_unref0 (self->priv->initializer);
	_vala_iterable_unref0 (self->priv->iterator);
	_vala_code_node_unref0 (self->priv->_condition);
	_vala_code_node_unref0 (self->priv->_body);
	VALA_CODE_NODE_CLASS (vala_for_statement_parent_class)->finalize (obj);
}


/**
 * Represents a for iteration statement in the source code.
 */
GType
vala_for_statement_get_type (void)
{
	static volatile gsize vala_for_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_for_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaForStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_for_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaForStatement), 0, (GInstanceInitFunc) vala_for_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_for_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_for_statement_type_id;
		vala_for_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaForStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_for_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		ValaForStatement_private_offset = g_type_add_instance_private (vala_for_statement_type_id, sizeof (ValaForStatementPrivate));
		g_once_init_leave (&vala_for_statement_type_id__volatile, vala_for_statement_type_id);
	}
	return vala_for_statement_type_id__volatile;
}


