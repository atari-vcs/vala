/* valadostatement.c generated by valac, the Vala compiler
 * generated from valadostatement.vala, do not modify */

/* valadostatement.vala
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
#include "vala.h"

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaDoStatementPrivate {
	ValaExpression* _condition;
	ValaBlock* _body;
};


static gint ValaDoStatement_private_offset;
static gpointer vala_do_statement_parent_class = NULL;
static ValaStatementIface * vala_do_statement_vala_statement_parent_iface = NULL;

static void vala_do_statement_real_accept (ValaCodeNode* base,
                                    ValaCodeVisitor* visitor);
static void vala_do_statement_real_accept_children (ValaCodeNode* base,
                                             ValaCodeVisitor* visitor);
static gboolean vala_do_statement_always_true (ValaDoStatement* self,
                                        ValaExpression* condition);
static void vala_do_statement_real_replace_expression (ValaCodeNode* base,
                                                ValaExpression* old_node,
                                                ValaExpression* new_node);
static gboolean vala_do_statement_real_check (ValaCodeNode* base,
                                       ValaCodeContext* context);
static void vala_do_statement_finalize (ValaCodeNode * obj);


static inline gpointer
vala_do_statement_get_instance_private (ValaDoStatement* self)
{
	return G_STRUCT_MEMBER_P (self, ValaDoStatement_private_offset);
}


/**
 * Creates a new do statement.
 *
 * @param body              loop body
 * @param condition         loop condition
 * @param source_reference  reference to source code
 * @return                  newly created do statement
 */
ValaDoStatement*
vala_do_statement_construct (GType object_type,
                             ValaBlock* body,
                             ValaExpression* condition,
                             ValaSourceReference* source_reference)
{
	ValaDoStatement* self = NULL;
	g_return_val_if_fail (body != NULL, NULL);
	g_return_val_if_fail (condition != NULL, NULL);
	self = (ValaDoStatement*) vala_code_node_construct (object_type);
	vala_do_statement_set_condition (self, condition);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_do_statement_set_body (self, body);
	return self;
}


ValaDoStatement*
vala_do_statement_new (ValaBlock* body,
                       ValaExpression* condition,
                       ValaSourceReference* source_reference)
{
	return vala_do_statement_construct (VALA_TYPE_DO_STATEMENT, body, condition, source_reference);
}


static void
vala_do_statement_real_accept (ValaCodeNode* base,
                               ValaCodeVisitor* visitor)
{
	ValaDoStatement * self;
	self = (ValaDoStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_do_statement (visitor, self);
}


static void
vala_do_statement_real_accept_children (ValaCodeNode* base,
                                        ValaCodeVisitor* visitor)
{
	ValaDoStatement * self;
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	ValaExpression* _tmp2_;
	ValaExpression* _tmp3_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	self = (ValaDoStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_do_statement_get_body (self);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
	_tmp2_ = vala_do_statement_get_condition (self);
	_tmp3_ = _tmp2_;
	vala_code_node_accept ((ValaCodeNode*) _tmp3_, visitor);
	_tmp4_ = vala_do_statement_get_condition (self);
	_tmp5_ = _tmp4_;
	vala_code_visitor_visit_end_full_expression (visitor, _tmp5_);
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean
vala_do_statement_always_true (ValaDoStatement* self,
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


static void
vala_do_statement_real_replace_expression (ValaCodeNode* base,
                                           ValaExpression* old_node,
                                           ValaExpression* new_node)
{
	ValaDoStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaDoStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_do_statement_get_condition (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_do_statement_set_condition (self, new_node);
	}
}


static gboolean
vala_do_statement_real_check (ValaCodeNode* base,
                              ValaCodeContext* context)
{
	ValaDoStatement * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	ValaBlock* block = NULL;
	ValaSourceReference* _tmp19_;
	ValaSourceReference* _tmp20_;
	ValaBlock* _tmp21_;
	ValaLocalVariable* first_local = NULL;
	ValaSemanticAnalyzer* _tmp22_;
	ValaSemanticAnalyzer* _tmp23_;
	ValaDataType* _tmp24_;
	ValaDataType* _tmp25_;
	ValaDataType* _tmp26_;
	gchar* _tmp27_;
	gchar* _tmp28_;
	ValaSourceReference* _tmp29_;
	ValaSourceReference* _tmp30_;
	ValaBooleanLiteral* _tmp31_;
	ValaBooleanLiteral* _tmp32_;
	ValaSourceReference* _tmp33_;
	ValaSourceReference* _tmp34_;
	ValaLocalVariable* _tmp35_;
	ValaLocalVariable* _tmp36_;
	ValaBlock* _tmp37_;
	ValaLocalVariable* _tmp38_;
	ValaSourceReference* _tmp39_;
	ValaSourceReference* _tmp40_;
	ValaDeclarationStatement* _tmp41_;
	ValaDeclarationStatement* _tmp42_;
	ValaUnaryExpression* if_condition = NULL;
	ValaExpression* _tmp43_;
	ValaExpression* _tmp44_;
	ValaExpression* _tmp45_;
	ValaExpression* _tmp46_;
	ValaSourceReference* _tmp47_;
	ValaSourceReference* _tmp48_;
	ValaUnaryExpression* _tmp49_;
	ValaBlock* true_block = NULL;
	ValaExpression* _tmp50_;
	ValaExpression* _tmp51_;
	ValaSourceReference* _tmp52_;
	ValaSourceReference* _tmp53_;
	ValaBlock* _tmp54_;
	ValaBlock* _tmp55_;
	ValaExpression* _tmp56_;
	ValaExpression* _tmp57_;
	ValaSourceReference* _tmp58_;
	ValaSourceReference* _tmp59_;
	ValaBreakStatement* _tmp60_;
	ValaBreakStatement* _tmp61_;
	ValaIfStatement* if_stmt = NULL;
	ValaUnaryExpression* _tmp62_;
	ValaBlock* _tmp63_;
	ValaExpression* _tmp64_;
	ValaExpression* _tmp65_;
	ValaSourceReference* _tmp66_;
	ValaSourceReference* _tmp67_;
	ValaIfStatement* _tmp68_;
	ValaBlock* condition_block = NULL;
	ValaExpression* _tmp69_;
	ValaExpression* _tmp70_;
	ValaSourceReference* _tmp71_;
	ValaSourceReference* _tmp72_;
	ValaBlock* _tmp73_;
	ValaBlock* _tmp74_;
	ValaIfStatement* _tmp75_;
	ValaIfStatement* first_if = NULL;
	ValaLocalVariable* _tmp76_;
	const gchar* _tmp77_;
	const gchar* _tmp78_;
	ValaSourceReference* _tmp79_;
	ValaSourceReference* _tmp80_;
	ValaMemberAccess* _tmp81_;
	ValaMemberAccess* _tmp82_;
	ValaSourceReference* _tmp83_;
	ValaSourceReference* _tmp84_;
	ValaUnaryExpression* _tmp85_;
	ValaUnaryExpression* _tmp86_;
	ValaBlock* _tmp87_;
	ValaSourceReference* _tmp88_;
	ValaSourceReference* _tmp89_;
	ValaIfStatement* _tmp90_;
	ValaIfStatement* _tmp91_;
	ValaBlock* _tmp92_;
	ValaBlock* _tmp93_;
	ValaIfStatement* _tmp94_;
	ValaBlock* _tmp95_;
	ValaBlock* _tmp96_;
	ValaLocalVariable* _tmp97_;
	const gchar* _tmp98_;
	const gchar* _tmp99_;
	ValaSourceReference* _tmp100_;
	ValaSourceReference* _tmp101_;
	ValaMemberAccess* _tmp102_;
	ValaMemberAccess* _tmp103_;
	ValaSourceReference* _tmp104_;
	ValaSourceReference* _tmp105_;
	ValaBooleanLiteral* _tmp106_;
	ValaBooleanLiteral* _tmp107_;
	ValaSourceReference* _tmp108_;
	ValaSourceReference* _tmp109_;
	ValaAssignment* _tmp110_;
	ValaAssignment* _tmp111_;
	ValaSourceReference* _tmp112_;
	ValaSourceReference* _tmp113_;
	ValaExpressionStatement* _tmp114_;
	ValaExpressionStatement* _tmp115_;
	ValaBlock* _tmp116_;
	ValaBlock* _tmp117_;
	ValaBlock* _tmp118_;
	ValaSourceReference* _tmp119_;
	ValaSourceReference* _tmp120_;
	ValaLoop* _tmp121_;
	ValaLoop* _tmp122_;
	ValaBlock* parent_block = NULL;
	ValaCodeNode* _tmp123_;
	ValaCodeNode* _tmp124_;
	ValaBlock* _tmp125_;
	ValaBlock* _tmp126_;
	ValaBlock* _tmp127_;
	ValaBlock* _tmp128_;
	gboolean _tmp129_;
	gboolean _tmp130_;
	self = (ValaDoStatement*) base;
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
	_tmp4_ = vala_do_statement_get_condition (self);
	_tmp5_ = _tmp4_;
	if (vala_do_statement_always_true (self, _tmp5_)) {
		ValaLoop* loop = NULL;
		ValaBlock* _tmp6_;
		ValaBlock* _tmp7_;
		ValaSourceReference* _tmp8_;
		ValaSourceReference* _tmp9_;
		ValaLoop* _tmp10_;
		ValaBlock* parent_block = NULL;
		ValaCodeNode* _tmp11_;
		ValaCodeNode* _tmp12_;
		ValaBlock* _tmp13_;
		ValaBlock* _tmp14_;
		ValaLoop* _tmp15_;
		ValaLoop* _tmp16_;
		gboolean _tmp17_;
		gboolean _tmp18_;
		_tmp6_ = vala_do_statement_get_body (self);
		_tmp7_ = _tmp6_;
		_tmp8_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp9_ = _tmp8_;
		_tmp10_ = vala_loop_new (_tmp7_, _tmp9_);
		loop = _tmp10_;
		_tmp11_ = vala_code_node_get_parent_node ((ValaCodeNode*) self);
		_tmp12_ = _tmp11_;
		_tmp13_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp12_, VALA_TYPE_BLOCK, ValaBlock));
		parent_block = _tmp13_;
		_tmp14_ = parent_block;
		_tmp15_ = loop;
		vala_block_replace_statement (_tmp14_, (ValaStatement*) self, (ValaStatement*) _tmp15_);
		_tmp16_ = loop;
		if (!vala_code_node_check ((ValaCodeNode*) _tmp16_, context)) {
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		}
		_tmp17_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp18_ = _tmp17_;
		result = !_tmp18_;
		_vala_code_node_unref0 (parent_block);
		_vala_code_node_unref0 (loop);
		return result;
	}
	_tmp19_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp20_ = _tmp19_;
	_tmp21_ = vala_block_new (_tmp20_);
	block = _tmp21_;
	_tmp22_ = vala_code_context_get_analyzer (context);
	_tmp23_ = _tmp22_;
	_tmp24_ = _tmp23_->bool_type;
	_tmp25_ = vala_data_type_copy (_tmp24_);
	_tmp26_ = _tmp25_;
	_tmp27_ = vala_code_node_get_temp_name ();
	_tmp28_ = _tmp27_;
	_tmp29_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp30_ = _tmp29_;
	_tmp31_ = vala_boolean_literal_new (TRUE, _tmp30_);
	_tmp32_ = _tmp31_;
	_tmp33_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp34_ = _tmp33_;
	_tmp35_ = vala_local_variable_new (_tmp26_, _tmp28_, (ValaExpression*) _tmp32_, _tmp34_);
	_tmp36_ = _tmp35_;
	_vala_code_node_unref0 (_tmp32_);
	_g_free0 (_tmp28_);
	_vala_code_node_unref0 (_tmp26_);
	first_local = _tmp36_;
	_tmp37_ = block;
	_tmp38_ = first_local;
	_tmp39_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp40_ = _tmp39_;
	_tmp41_ = vala_declaration_statement_new ((ValaSymbol*) _tmp38_, _tmp40_);
	_tmp42_ = _tmp41_;
	vala_block_add_statement (_tmp37_, (ValaStatement*) _tmp42_);
	_vala_code_node_unref0 (_tmp42_);
	_tmp43_ = vala_do_statement_get_condition (self);
	_tmp44_ = _tmp43_;
	_tmp45_ = vala_do_statement_get_condition (self);
	_tmp46_ = _tmp45_;
	_tmp47_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp46_);
	_tmp48_ = _tmp47_;
	_tmp49_ = vala_unary_expression_new (VALA_UNARY_OPERATOR_LOGICAL_NEGATION, _tmp44_, _tmp48_);
	if_condition = _tmp49_;
	_tmp50_ = vala_do_statement_get_condition (self);
	_tmp51_ = _tmp50_;
	_tmp52_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp51_);
	_tmp53_ = _tmp52_;
	_tmp54_ = vala_block_new (_tmp53_);
	true_block = _tmp54_;
	_tmp55_ = true_block;
	_tmp56_ = vala_do_statement_get_condition (self);
	_tmp57_ = _tmp56_;
	_tmp58_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp57_);
	_tmp59_ = _tmp58_;
	_tmp60_ = vala_break_statement_new (_tmp59_);
	_tmp61_ = _tmp60_;
	vala_block_add_statement (_tmp55_, (ValaStatement*) _tmp61_);
	_vala_code_node_unref0 (_tmp61_);
	_tmp62_ = if_condition;
	_tmp63_ = true_block;
	_tmp64_ = vala_do_statement_get_condition (self);
	_tmp65_ = _tmp64_;
	_tmp66_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp65_);
	_tmp67_ = _tmp66_;
	_tmp68_ = vala_if_statement_new ((ValaExpression*) _tmp62_, _tmp63_, NULL, _tmp67_);
	if_stmt = _tmp68_;
	_tmp69_ = vala_do_statement_get_condition (self);
	_tmp70_ = _tmp69_;
	_tmp71_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp70_);
	_tmp72_ = _tmp71_;
	_tmp73_ = vala_block_new (_tmp72_);
	condition_block = _tmp73_;
	_tmp74_ = condition_block;
	_tmp75_ = if_stmt;
	vala_block_add_statement (_tmp74_, (ValaStatement*) _tmp75_);
	_tmp76_ = first_local;
	_tmp77_ = vala_symbol_get_name ((ValaSymbol*) _tmp76_);
	_tmp78_ = _tmp77_;
	_tmp79_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp80_ = _tmp79_;
	_tmp81_ = vala_member_access_new_simple (_tmp78_, _tmp80_);
	_tmp82_ = _tmp81_;
	_tmp83_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp84_ = _tmp83_;
	_tmp85_ = vala_unary_expression_new (VALA_UNARY_OPERATOR_LOGICAL_NEGATION, (ValaExpression*) _tmp82_, _tmp84_);
	_tmp86_ = _tmp85_;
	_tmp87_ = condition_block;
	_tmp88_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp89_ = _tmp88_;
	_tmp90_ = vala_if_statement_new ((ValaExpression*) _tmp86_, _tmp87_, NULL, _tmp89_);
	_tmp91_ = _tmp90_;
	_vala_code_node_unref0 (_tmp86_);
	_vala_code_node_unref0 (_tmp82_);
	first_if = _tmp91_;
	_tmp92_ = vala_do_statement_get_body (self);
	_tmp93_ = _tmp92_;
	_tmp94_ = first_if;
	vala_block_insert_statement (_tmp93_, 0, (ValaStatement*) _tmp94_);
	_tmp95_ = vala_do_statement_get_body (self);
	_tmp96_ = _tmp95_;
	_tmp97_ = first_local;
	_tmp98_ = vala_symbol_get_name ((ValaSymbol*) _tmp97_);
	_tmp99_ = _tmp98_;
	_tmp100_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp101_ = _tmp100_;
	_tmp102_ = vala_member_access_new_simple (_tmp99_, _tmp101_);
	_tmp103_ = _tmp102_;
	_tmp104_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp105_ = _tmp104_;
	_tmp106_ = vala_boolean_literal_new (FALSE, _tmp105_);
	_tmp107_ = _tmp106_;
	_tmp108_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp109_ = _tmp108_;
	_tmp110_ = vala_assignment_new ((ValaExpression*) _tmp103_, (ValaExpression*) _tmp107_, VALA_ASSIGNMENT_OPERATOR_SIMPLE, _tmp109_);
	_tmp111_ = _tmp110_;
	_tmp112_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp113_ = _tmp112_;
	_tmp114_ = vala_expression_statement_new ((ValaExpression*) _tmp111_, _tmp113_);
	_tmp115_ = _tmp114_;
	vala_block_insert_statement (_tmp96_, 1, (ValaStatement*) _tmp115_);
	_vala_code_node_unref0 (_tmp115_);
	_vala_code_node_unref0 (_tmp111_);
	_vala_code_node_unref0 (_tmp107_);
	_vala_code_node_unref0 (_tmp103_);
	_tmp116_ = block;
	_tmp117_ = vala_do_statement_get_body (self);
	_tmp118_ = _tmp117_;
	_tmp119_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp120_ = _tmp119_;
	_tmp121_ = vala_loop_new (_tmp118_, _tmp120_);
	_tmp122_ = _tmp121_;
	vala_block_add_statement (_tmp116_, (ValaStatement*) _tmp122_);
	_vala_code_node_unref0 (_tmp122_);
	_tmp123_ = vala_code_node_get_parent_node ((ValaCodeNode*) self);
	_tmp124_ = _tmp123_;
	_tmp125_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp124_, VALA_TYPE_BLOCK, ValaBlock));
	parent_block = _tmp125_;
	_tmp126_ = parent_block;
	_tmp127_ = block;
	vala_block_replace_statement (_tmp126_, (ValaStatement*) self, (ValaStatement*) _tmp127_);
	_tmp128_ = block;
	if (!vala_code_node_check ((ValaCodeNode*) _tmp128_, context)) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
	}
	_tmp129_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp130_ = _tmp129_;
	result = !_tmp130_;
	_vala_code_node_unref0 (parent_block);
	_vala_code_node_unref0 (first_if);
	_vala_code_node_unref0 (condition_block);
	_vala_code_node_unref0 (if_stmt);
	_vala_code_node_unref0 (true_block);
	_vala_code_node_unref0 (if_condition);
	_vala_code_node_unref0 (first_local);
	_vala_code_node_unref0 (block);
	return result;
}


ValaBlock*
vala_do_statement_get_body (ValaDoStatement* self)
{
	ValaBlock* result;
	ValaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_body;
	result = _tmp0_;
	return result;
}


void
vala_do_statement_set_body (ValaDoStatement* self,
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


ValaExpression*
vala_do_statement_get_condition (ValaDoStatement* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_condition;
	result = _tmp0_;
	return result;
}


void
vala_do_statement_set_condition (ValaDoStatement* self,
                                 ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_condition);
	self->priv->_condition = _tmp0_;
	_tmp1_ = self->priv->_condition;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}


static void
vala_do_statement_class_init (ValaDoStatementClass * klass)
{
	vala_do_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_do_statement_finalize;
	g_type_class_adjust_private_offset (klass, &ValaDoStatement_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_do_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_do_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_do_statement_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_do_statement_real_check;
}


static void
vala_do_statement_vala_statement_interface_init (ValaStatementIface * iface)
{
	vala_do_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void
vala_do_statement_instance_init (ValaDoStatement * self)
{
	self->priv = vala_do_statement_get_instance_private (self);
}


static void
vala_do_statement_finalize (ValaCodeNode * obj)
{
	ValaDoStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_DO_STATEMENT, ValaDoStatement);
	_vala_code_node_unref0 (self->priv->_condition);
	_vala_code_node_unref0 (self->priv->_body);
	VALA_CODE_NODE_CLASS (vala_do_statement_parent_class)->finalize (obj);
}


/**
 * Represents a do iteration statement in the source code.
 */
GType
vala_do_statement_get_type (void)
{
	static volatile gsize vala_do_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_do_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDoStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_do_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDoStatement), 0, (GInstanceInitFunc) vala_do_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_do_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_do_statement_type_id;
		vala_do_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaDoStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_do_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		ValaDoStatement_private_offset = g_type_add_instance_private (vala_do_statement_type_id, sizeof (ValaDoStatementPrivate));
		g_once_init_leave (&vala_do_statement_type_id__volatile, vala_do_statement_type_id);
	}
	return vala_do_statement_type_id__volatile;
}



