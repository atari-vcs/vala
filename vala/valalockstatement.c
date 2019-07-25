/* valalockstatement.c generated by valac, the Vala compiler
 * generated from valalockstatement.vala, do not modify */

/* valalockstatement.vala
 *
 * Copyright (C) 2009  Jiří Zárevúcky
 * Copyright (C) 2006-2010  Jürg Billeter
 * Copyright (C) 2006-2007  Raffaele Sandrini
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
 * Authors:
 * 	Raffaele Sandrini <raffaele@sandrini.ch>
 * 	Jiří Zárevúcky <zarevucky.jiri@gmail.com>
 */


#include <glib.h>
#include <glib-object.h>
#include "vala.h"

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaLockStatementPrivate {
	ValaExpression* _resource;
	ValaBlock* _body;
};


static gint ValaLockStatement_private_offset;
static gpointer vala_lock_statement_parent_class = NULL;
static ValaStatementIface * vala_lock_statement_vala_statement_parent_iface = NULL;

static void vala_lock_statement_real_accept (ValaCodeNode* base,
                                      ValaCodeVisitor* visitor);
static void vala_lock_statement_real_replace_expression (ValaCodeNode* base,
                                                  ValaExpression* old_node,
                                                  ValaExpression* new_node);
static gboolean vala_lock_statement_real_check (ValaCodeNode* base,
                                         ValaCodeContext* context);
static void vala_lock_statement_real_emit (ValaCodeNode* base,
                                    ValaCodeGenerator* codegen);
static void vala_lock_statement_finalize (ValaCodeNode * obj);


static inline gpointer
vala_lock_statement_get_instance_private (ValaLockStatement* self)
{
	return G_STRUCT_MEMBER_P (self, ValaLockStatement_private_offset);
}


ValaLockStatement*
vala_lock_statement_construct (GType object_type,
                               ValaExpression* resource,
                               ValaBlock* body,
                               ValaSourceReference* source_reference)
{
	ValaLockStatement* self = NULL;
	g_return_val_if_fail (resource != NULL, NULL);
	self = (ValaLockStatement*) vala_code_node_construct (object_type);
	vala_lock_statement_set_body (self, body);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_lock_statement_set_resource (self, resource);
	return self;
}


ValaLockStatement*
vala_lock_statement_new (ValaExpression* resource,
                         ValaBlock* body,
                         ValaSourceReference* source_reference)
{
	return vala_lock_statement_construct (VALA_TYPE_LOCK_STATEMENT, resource, body, source_reference);
}


static void
vala_lock_statement_real_accept (ValaCodeNode* base,
                                 ValaCodeVisitor* visitor)
{
	ValaLockStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	ValaBlock* _tmp2_;
	ValaBlock* _tmp3_;
	self = (ValaLockStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_lock_statement_get_resource (self);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
	_tmp2_ = vala_lock_statement_get_body (self);
	_tmp3_ = _tmp2_;
	if (_tmp3_ != NULL) {
		ValaBlock* _tmp4_;
		ValaBlock* _tmp5_;
		_tmp4_ = vala_lock_statement_get_body (self);
		_tmp5_ = _tmp4_;
		vala_code_node_accept ((ValaCodeNode*) _tmp5_, visitor);
	}
	vala_code_visitor_visit_lock_statement (visitor, self);
}


static void
vala_lock_statement_real_replace_expression (ValaCodeNode* base,
                                             ValaExpression* old_node,
                                             ValaExpression* new_node)
{
	ValaLockStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaLockStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_lock_statement_get_resource (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_lock_statement_set_resource (self, new_node);
	}
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean
vala_lock_statement_real_check (ValaCodeNode* base,
                                ValaCodeContext* context)
{
	ValaLockStatement * self;
	gboolean result = FALSE;
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	gboolean _tmp36_;
	gboolean _tmp37_;
	ValaExpression* _tmp40_;
	ValaExpression* _tmp41_;
	gboolean _tmp42_ = FALSE;
	ValaExpression* _tmp43_;
	ValaExpression* _tmp44_;
	ValaExpression* _tmp55_;
	ValaExpression* _tmp56_;
	ValaSymbol* _tmp57_;
	ValaSymbol* _tmp58_;
	ValaSymbol* _tmp59_;
	ValaSymbol* _tmp60_;
	ValaSemanticAnalyzer* _tmp61_;
	ValaSemanticAnalyzer* _tmp62_;
	ValaClass* _tmp63_;
	ValaClass* _tmp64_;
	ValaSemanticAnalyzer* _tmp71_;
	ValaSemanticAnalyzer* _tmp72_;
	ValaClass* _tmp73_;
	ValaClass* _tmp74_;
	gboolean _tmp75_;
	gboolean _tmp76_;
	ValaExpression* _tmp83_;
	ValaExpression* _tmp84_;
	ValaSymbol* _tmp85_;
	ValaSymbol* _tmp86_;
	gboolean _tmp87_;
	gboolean _tmp88_;
	self = (ValaLockStatement*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_lock_statement_get_body (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaBlock* fin_body = NULL;
		ValaSourceReference* _tmp2_;
		ValaSourceReference* _tmp3_;
		ValaBlock* _tmp4_;
		ValaBlock* _tmp5_;
		ValaExpression* _tmp6_;
		ValaExpression* _tmp7_;
		ValaSourceReference* _tmp8_;
		ValaSourceReference* _tmp9_;
		ValaUnlockStatement* _tmp10_;
		ValaUnlockStatement* _tmp11_;
		ValaBlock* block = NULL;
		ValaSourceReference* _tmp12_;
		ValaSourceReference* _tmp13_;
		ValaBlock* _tmp14_;
		ValaBlock* _tmp15_;
		ValaExpression* _tmp16_;
		ValaExpression* _tmp17_;
		ValaSourceReference* _tmp18_;
		ValaSourceReference* _tmp19_;
		ValaLockStatement* _tmp20_;
		ValaLockStatement* _tmp21_;
		ValaBlock* _tmp22_;
		ValaBlock* _tmp23_;
		ValaBlock* _tmp24_;
		ValaBlock* _tmp25_;
		ValaSourceReference* _tmp26_;
		ValaSourceReference* _tmp27_;
		ValaTryStatement* _tmp28_;
		ValaTryStatement* _tmp29_;
		ValaBlock* parent_block = NULL;
		ValaCodeNode* _tmp30_;
		ValaCodeNode* _tmp31_;
		ValaBlock* _tmp32_;
		ValaBlock* _tmp33_;
		ValaBlock* _tmp34_;
		ValaBlock* _tmp35_;
		_tmp2_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp3_ = _tmp2_;
		_tmp4_ = vala_block_new (_tmp3_);
		fin_body = _tmp4_;
		_tmp5_ = fin_body;
		_tmp6_ = vala_lock_statement_get_resource (self);
		_tmp7_ = _tmp6_;
		_tmp8_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp9_ = _tmp8_;
		_tmp10_ = vala_unlock_statement_new (_tmp7_, _tmp9_);
		_tmp11_ = _tmp10_;
		vala_block_add_statement (_tmp5_, (ValaStatement*) _tmp11_);
		_vala_code_node_unref0 (_tmp11_);
		_tmp12_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp13_ = _tmp12_;
		_tmp14_ = vala_block_new (_tmp13_);
		block = _tmp14_;
		_tmp15_ = block;
		_tmp16_ = vala_lock_statement_get_resource (self);
		_tmp17_ = _tmp16_;
		_tmp18_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp19_ = _tmp18_;
		_tmp20_ = vala_lock_statement_new (_tmp17_, NULL, _tmp19_);
		_tmp21_ = _tmp20_;
		vala_block_add_statement (_tmp15_, (ValaStatement*) _tmp21_);
		_vala_code_node_unref0 (_tmp21_);
		_tmp22_ = block;
		_tmp23_ = vala_lock_statement_get_body (self);
		_tmp24_ = _tmp23_;
		_tmp25_ = fin_body;
		_tmp26_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp27_ = _tmp26_;
		_tmp28_ = vala_try_statement_new (_tmp24_, _tmp25_, _tmp27_);
		_tmp29_ = _tmp28_;
		vala_block_add_statement (_tmp22_, (ValaStatement*) _tmp29_);
		_vala_code_node_unref0 (_tmp29_);
		_tmp30_ = vala_code_node_get_parent_node ((ValaCodeNode*) self);
		_tmp31_ = _tmp30_;
		_tmp32_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp31_, VALA_TYPE_BLOCK, ValaBlock));
		parent_block = _tmp32_;
		_tmp33_ = parent_block;
		_tmp34_ = block;
		vala_block_replace_statement (_tmp33_, (ValaStatement*) self, (ValaStatement*) _tmp34_);
		_tmp35_ = block;
		result = vala_code_node_check ((ValaCodeNode*) _tmp35_, context);
		_vala_code_node_unref0 (parent_block);
		_vala_code_node_unref0 (block);
		_vala_code_node_unref0 (fin_body);
		return result;
	}
	_tmp36_ = vala_code_node_get_checked ((ValaCodeNode*) self);
	_tmp37_ = _tmp36_;
	if (_tmp37_) {
		gboolean _tmp38_;
		gboolean _tmp39_;
		_tmp38_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp39_ = _tmp38_;
		result = !_tmp39_;
		return result;
	}
	vala_code_node_set_checked ((ValaCodeNode*) self, TRUE);
	_tmp40_ = vala_lock_statement_get_resource (self);
	_tmp41_ = _tmp40_;
	vala_code_node_check ((ValaCodeNode*) _tmp41_, context);
	_tmp43_ = vala_lock_statement_get_resource (self);
	_tmp44_ = _tmp43_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp44_, VALA_TYPE_MEMBER_ACCESS)) {
		ValaExpression* _tmp45_;
		ValaExpression* _tmp46_;
		ValaSymbol* _tmp47_;
		ValaSymbol* _tmp48_;
		_tmp45_ = vala_lock_statement_get_resource (self);
		_tmp46_ = _tmp45_;
		_tmp47_ = vala_expression_get_symbol_reference (_tmp46_);
		_tmp48_ = _tmp47_;
		_tmp42_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp48_, VALA_TYPE_LOCKABLE);
	} else {
		_tmp42_ = FALSE;
	}
	if (!_tmp42_) {
		ValaExpression* _tmp49_;
		ValaExpression* _tmp50_;
		ValaExpression* _tmp51_;
		ValaExpression* _tmp52_;
		ValaSourceReference* _tmp53_;
		ValaSourceReference* _tmp54_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp49_ = vala_lock_statement_get_resource (self);
		_tmp50_ = _tmp49_;
		vala_code_node_set_error ((ValaCodeNode*) _tmp50_, TRUE);
		_tmp51_ = vala_lock_statement_get_resource (self);
		_tmp52_ = _tmp51_;
		_tmp53_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp52_);
		_tmp54_ = _tmp53_;
		vala_report_error (_tmp54_, "Expression is either not a member access or does not denote a lockable" \
" member");
		result = FALSE;
		return result;
	}
	_tmp55_ = vala_lock_statement_get_resource (self);
	_tmp56_ = _tmp55_;
	_tmp57_ = vala_expression_get_symbol_reference (_tmp56_);
	_tmp58_ = _tmp57_;
	_tmp59_ = vala_symbol_get_parent_symbol (_tmp58_);
	_tmp60_ = _tmp59_;
	_tmp61_ = vala_code_context_get_analyzer (context);
	_tmp62_ = _tmp61_;
	_tmp63_ = vala_semantic_analyzer_get_current_class (_tmp62_);
	_tmp64_ = _tmp63_;
	if (_tmp60_ != G_TYPE_CHECK_INSTANCE_CAST (_tmp64_, VALA_TYPE_SYMBOL, ValaSymbol)) {
		ValaExpression* _tmp65_;
		ValaExpression* _tmp66_;
		ValaExpression* _tmp67_;
		ValaExpression* _tmp68_;
		ValaSourceReference* _tmp69_;
		ValaSourceReference* _tmp70_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp65_ = vala_lock_statement_get_resource (self);
		_tmp66_ = _tmp65_;
		vala_code_node_set_error ((ValaCodeNode*) _tmp66_, TRUE);
		_tmp67_ = vala_lock_statement_get_resource (self);
		_tmp68_ = _tmp67_;
		_tmp69_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp68_);
		_tmp70_ = _tmp69_;
		vala_report_error (_tmp70_, "Only members of the current class are lockable");
		result = FALSE;
		return result;
	}
	_tmp71_ = vala_code_context_get_analyzer (context);
	_tmp72_ = _tmp71_;
	_tmp73_ = vala_semantic_analyzer_get_current_class (_tmp72_);
	_tmp74_ = _tmp73_;
	_tmp75_ = vala_class_get_is_compact (_tmp74_);
	_tmp76_ = _tmp75_;
	if (_tmp76_) {
		ValaExpression* _tmp77_;
		ValaExpression* _tmp78_;
		ValaExpression* _tmp79_;
		ValaExpression* _tmp80_;
		ValaSourceReference* _tmp81_;
		ValaSourceReference* _tmp82_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp77_ = vala_lock_statement_get_resource (self);
		_tmp78_ = _tmp77_;
		vala_code_node_set_error ((ValaCodeNode*) _tmp78_, TRUE);
		_tmp79_ = vala_lock_statement_get_resource (self);
		_tmp80_ = _tmp79_;
		_tmp81_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp80_);
		_tmp82_ = _tmp81_;
		vala_report_error (_tmp82_, "Only members of the non-compact classes are lockable");
		result = FALSE;
		return result;
	}
	_tmp83_ = vala_lock_statement_get_resource (self);
	_tmp84_ = _tmp83_;
	_tmp85_ = vala_expression_get_symbol_reference (_tmp84_);
	_tmp86_ = _tmp85_;
	vala_lockable_set_lock_used (G_TYPE_CHECK_INSTANCE_CAST (_tmp86_, VALA_TYPE_LOCKABLE, ValaLockable), TRUE);
	_tmp87_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp88_ = _tmp87_;
	result = !_tmp88_;
	return result;
}


static void
vala_lock_statement_real_emit (ValaCodeNode* base,
                               ValaCodeGenerator* codegen)
{
	ValaLockStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaLockStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_lock_statement_get_resource (self);
	_tmp1_ = _tmp0_;
	vala_code_node_emit ((ValaCodeNode*) _tmp1_, codegen);
	vala_code_visitor_visit_lock_statement ((ValaCodeVisitor*) codegen, self);
}


ValaExpression*
vala_lock_statement_get_resource (ValaLockStatement* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_resource;
	result = _tmp0_;
	return result;
}


void
vala_lock_statement_set_resource (ValaLockStatement* self,
                                  ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_resource);
	self->priv->_resource = _tmp0_;
	_tmp1_ = self->priv->_resource;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}


ValaBlock*
vala_lock_statement_get_body (ValaLockStatement* self)
{
	ValaBlock* result;
	ValaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_body;
	result = _tmp0_;
	return result;
}


void
vala_lock_statement_set_body (ValaLockStatement* self,
                              ValaBlock* value)
{
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_body);
	self->priv->_body = _tmp0_;
	_tmp1_ = self->priv->_body;
	if (_tmp1_ != NULL) {
		ValaBlock* _tmp2_;
		_tmp2_ = self->priv->_body;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
	}
}


static void
vala_lock_statement_class_init (ValaLockStatementClass * klass)
{
	vala_lock_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_lock_statement_finalize;
	g_type_class_adjust_private_offset (klass, &ValaLockStatement_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_lock_statement_real_accept;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_lock_statement_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_lock_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_lock_statement_real_emit;
}


static void
vala_lock_statement_vala_statement_interface_init (ValaStatementIface * iface)
{
	vala_lock_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void
vala_lock_statement_instance_init (ValaLockStatement * self)
{
	self->priv = vala_lock_statement_get_instance_private (self);
}


static void
vala_lock_statement_finalize (ValaCodeNode * obj)
{
	ValaLockStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_LOCK_STATEMENT, ValaLockStatement);
	_vala_code_node_unref0 (self->priv->_resource);
	_vala_code_node_unref0 (self->priv->_body);
	VALA_CODE_NODE_CLASS (vala_lock_statement_parent_class)->finalize (obj);
}


/**
 * Represents a lock statement e.g. {{{ lock (a); }}} or {{{ lock (a) { f(a); } }}}.
 *
 * If the statement is empty, the mutex remains locked until a corresponding UnlockStatement
 * occurs. Otherwise it's translated into a try/finally statement which unlocks the mutex
 * after the block is finished.
 */
GType
vala_lock_statement_get_type (void)
{
	static volatile gsize vala_lock_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_lock_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaLockStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_lock_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaLockStatement), 0, (GInstanceInitFunc) vala_lock_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_lock_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_lock_statement_type_id;
		vala_lock_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaLockStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_lock_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		ValaLockStatement_private_offset = g_type_add_instance_private (vala_lock_statement_type_id, sizeof (ValaLockStatementPrivate));
		g_once_init_leave (&vala_lock_statement_type_id__volatile, vala_lock_statement_type_id);
	}
	return vala_lock_statement_type_id__volatile;
}



