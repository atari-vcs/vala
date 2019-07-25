/* valaifstatement.c generated by valac, the Vala compiler
 * generated from valaifstatement.vala, do not modify */

/* valaifstatement.vala
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

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValaIfStatementPrivate {
	ValaExpression* _condition;
	ValaBlock* _true_statement;
	ValaBlock* _false_statement;
};


static gint ValaIfStatement_private_offset;
static gpointer vala_if_statement_parent_class = NULL;
static ValaStatementIface * vala_if_statement_vala_statement_parent_iface = NULL;

static void vala_if_statement_real_accept (ValaCodeNode* base,
                                    ValaCodeVisitor* visitor);
static void vala_if_statement_real_accept_children (ValaCodeNode* base,
                                             ValaCodeVisitor* visitor);
static void vala_if_statement_real_replace_expression (ValaCodeNode* base,
                                                ValaExpression* old_node,
                                                ValaExpression* new_node);
static gboolean vala_if_statement_real_check (ValaCodeNode* base,
                                       ValaCodeContext* context);
static void vala_if_statement_real_emit (ValaCodeNode* base,
                                  ValaCodeGenerator* codegen);
static void vala_if_statement_finalize (ValaCodeNode * obj);


static inline gpointer
vala_if_statement_get_instance_private (ValaIfStatement* self)
{
	return G_STRUCT_MEMBER_P (self, ValaIfStatement_private_offset);
}


/**
 * Creates a new if statement.
 *
 * @param cond       a boolean condition
 * @param true_stmt  statement to be evaluated if condition is true
 * @param false_stmt statement to be evaluated if condition is false
 * @return           newly created if statement
 */
ValaIfStatement*
vala_if_statement_construct (GType object_type,
                             ValaExpression* cond,
                             ValaBlock* true_stmt,
                             ValaBlock* false_stmt,
                             ValaSourceReference* source)
{
	ValaIfStatement* self = NULL;
	g_return_val_if_fail (cond != NULL, NULL);
	g_return_val_if_fail (true_stmt != NULL, NULL);
	self = (ValaIfStatement*) vala_code_node_construct (object_type);
	vala_if_statement_set_condition (self, cond);
	vala_if_statement_set_true_statement (self, true_stmt);
	vala_if_statement_set_false_statement (self, false_stmt);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}


ValaIfStatement*
vala_if_statement_new (ValaExpression* cond,
                       ValaBlock* true_stmt,
                       ValaBlock* false_stmt,
                       ValaSourceReference* source)
{
	return vala_if_statement_construct (VALA_TYPE_IF_STATEMENT, cond, true_stmt, false_stmt, source);
}


static void
vala_if_statement_real_accept (ValaCodeNode* base,
                               ValaCodeVisitor* visitor)
{
	ValaIfStatement * self;
	self = (ValaIfStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_if_statement (visitor, self);
}


static void
vala_if_statement_real_accept_children (ValaCodeNode* base,
                                        ValaCodeVisitor* visitor)
{
	ValaIfStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	ValaExpression* _tmp2_;
	ValaExpression* _tmp3_;
	ValaBlock* _tmp4_;
	ValaBlock* _tmp5_;
	ValaBlock* _tmp6_;
	ValaBlock* _tmp7_;
	self = (ValaIfStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_if_statement_get_condition (self);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
	_tmp2_ = vala_if_statement_get_condition (self);
	_tmp3_ = _tmp2_;
	vala_code_visitor_visit_end_full_expression (visitor, _tmp3_);
	_tmp4_ = vala_if_statement_get_true_statement (self);
	_tmp5_ = _tmp4_;
	vala_code_node_accept ((ValaCodeNode*) _tmp5_, visitor);
	_tmp6_ = vala_if_statement_get_false_statement (self);
	_tmp7_ = _tmp6_;
	if (_tmp7_ != NULL) {
		ValaBlock* _tmp8_;
		ValaBlock* _tmp9_;
		_tmp8_ = vala_if_statement_get_false_statement (self);
		_tmp9_ = _tmp8_;
		vala_code_node_accept ((ValaCodeNode*) _tmp9_, visitor);
	}
}


static void
vala_if_statement_real_replace_expression (ValaCodeNode* base,
                                           ValaExpression* old_node,
                                           ValaExpression* new_node)
{
	ValaIfStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaIfStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_if_statement_get_condition (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_if_statement_set_condition (self, new_node);
	}
}


static gboolean
vala_if_statement_real_check (ValaCodeNode* base,
                              ValaCodeContext* context)
{
	ValaIfStatement * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	ValaSemanticAnalyzer* _tmp6_;
	ValaSemanticAnalyzer* _tmp7_;
	ValaDataType* _tmp8_;
	ValaDataType* _tmp9_;
	ValaDataType* _tmp10_;
	ValaExpression* _tmp11_;
	ValaExpression* _tmp12_;
	ValaBlock* _tmp13_;
	ValaBlock* _tmp14_;
	ValaBlock* _tmp15_;
	ValaBlock* _tmp16_;
	ValaExpression* _tmp19_;
	ValaExpression* _tmp20_;
	gboolean _tmp21_;
	gboolean _tmp22_;
	gboolean _tmp23_ = FALSE;
	ValaExpression* _tmp24_;
	ValaExpression* _tmp25_;
	ValaDataType* _tmp26_;
	ValaDataType* _tmp27_;
	ValaExpression* _tmp39_;
	ValaExpression* _tmp40_;
	ValaList* _tmp41_;
	ValaList* _tmp42_;
	ValaBlock* _tmp43_;
	ValaBlock* _tmp44_;
	ValaList* _tmp45_;
	ValaList* _tmp46_;
	ValaBlock* _tmp47_;
	ValaBlock* _tmp48_;
	gboolean _tmp53_;
	gboolean _tmp54_;
	self = (ValaIfStatement*) base;
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
	_tmp4_ = vala_if_statement_get_condition (self);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_code_context_get_analyzer (context);
	_tmp7_ = _tmp6_;
	_tmp8_ = _tmp7_->bool_type;
	_tmp9_ = vala_data_type_copy (_tmp8_);
	_tmp10_ = _tmp9_;
	vala_expression_set_target_type (_tmp5_, _tmp10_);
	_vala_code_node_unref0 (_tmp10_);
	_tmp11_ = vala_if_statement_get_condition (self);
	_tmp12_ = _tmp11_;
	vala_code_node_check ((ValaCodeNode*) _tmp12_, context);
	_tmp13_ = vala_if_statement_get_true_statement (self);
	_tmp14_ = _tmp13_;
	vala_code_node_check ((ValaCodeNode*) _tmp14_, context);
	_tmp15_ = vala_if_statement_get_false_statement (self);
	_tmp16_ = _tmp15_;
	if (_tmp16_ != NULL) {
		ValaBlock* _tmp17_;
		ValaBlock* _tmp18_;
		_tmp17_ = vala_if_statement_get_false_statement (self);
		_tmp18_ = _tmp17_;
		vala_code_node_check ((ValaCodeNode*) _tmp18_, context);
	}
	_tmp19_ = vala_if_statement_get_condition (self);
	_tmp20_ = _tmp19_;
	_tmp21_ = vala_code_node_get_error ((ValaCodeNode*) _tmp20_);
	_tmp22_ = _tmp21_;
	if (_tmp22_) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	_tmp24_ = vala_if_statement_get_condition (self);
	_tmp25_ = _tmp24_;
	_tmp26_ = vala_expression_get_value_type (_tmp25_);
	_tmp27_ = _tmp26_;
	if (_tmp27_ == NULL) {
		_tmp23_ = TRUE;
	} else {
		ValaExpression* _tmp28_;
		ValaExpression* _tmp29_;
		ValaDataType* _tmp30_;
		ValaDataType* _tmp31_;
		ValaSemanticAnalyzer* _tmp32_;
		ValaSemanticAnalyzer* _tmp33_;
		ValaDataType* _tmp34_;
		_tmp28_ = vala_if_statement_get_condition (self);
		_tmp29_ = _tmp28_;
		_tmp30_ = vala_expression_get_value_type (_tmp29_);
		_tmp31_ = _tmp30_;
		_tmp32_ = vala_code_context_get_analyzer (context);
		_tmp33_ = _tmp32_;
		_tmp34_ = _tmp33_->bool_type;
		_tmp23_ = !vala_data_type_compatible (_tmp31_, _tmp34_);
	}
	if (_tmp23_) {
		ValaExpression* _tmp35_;
		ValaExpression* _tmp36_;
		ValaSourceReference* _tmp37_;
		ValaSourceReference* _tmp38_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp35_ = vala_if_statement_get_condition (self);
		_tmp36_ = _tmp35_;
		_tmp37_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp36_);
		_tmp38_ = _tmp37_;
		vala_report_error (_tmp38_, "Condition must be boolean");
		result = FALSE;
		return result;
	}
	_tmp39_ = vala_if_statement_get_condition (self);
	_tmp40_ = _tmp39_;
	_tmp41_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp40_);
	_tmp42_ = _tmp41_;
	vala_code_node_add_error_types ((ValaCodeNode*) self, _tmp42_);
	_vala_iterable_unref0 (_tmp42_);
	_tmp43_ = vala_if_statement_get_true_statement (self);
	_tmp44_ = _tmp43_;
	_tmp45_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp44_);
	_tmp46_ = _tmp45_;
	vala_code_node_add_error_types ((ValaCodeNode*) self, _tmp46_);
	_vala_iterable_unref0 (_tmp46_);
	_tmp47_ = vala_if_statement_get_false_statement (self);
	_tmp48_ = _tmp47_;
	if (_tmp48_ != NULL) {
		ValaBlock* _tmp49_;
		ValaBlock* _tmp50_;
		ValaList* _tmp51_;
		ValaList* _tmp52_;
		_tmp49_ = vala_if_statement_get_false_statement (self);
		_tmp50_ = _tmp49_;
		_tmp51_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp50_);
		_tmp52_ = _tmp51_;
		vala_code_node_add_error_types ((ValaCodeNode*) self, _tmp52_);
		_vala_iterable_unref0 (_tmp52_);
	}
	_tmp53_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp54_ = _tmp53_;
	result = !_tmp54_;
	return result;
}


static void
vala_if_statement_real_emit (ValaCodeNode* base,
                             ValaCodeGenerator* codegen)
{
	ValaIfStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	ValaExpression* _tmp2_;
	ValaExpression* _tmp3_;
	self = (ValaIfStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_if_statement_get_condition (self);
	_tmp1_ = _tmp0_;
	vala_code_node_emit ((ValaCodeNode*) _tmp1_, codegen);
	_tmp2_ = vala_if_statement_get_condition (self);
	_tmp3_ = _tmp2_;
	vala_code_visitor_visit_end_full_expression ((ValaCodeVisitor*) codegen, _tmp3_);
	vala_code_visitor_visit_if_statement ((ValaCodeVisitor*) codegen, self);
}


ValaExpression*
vala_if_statement_get_condition (ValaIfStatement* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_condition;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


void
vala_if_statement_set_condition (ValaIfStatement* self,
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


ValaBlock*
vala_if_statement_get_true_statement (ValaIfStatement* self)
{
	ValaBlock* result;
	ValaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_true_statement;
	result = _tmp0_;
	return result;
}


void
vala_if_statement_set_true_statement (ValaIfStatement* self,
                                      ValaBlock* value)
{
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_true_statement);
	self->priv->_true_statement = _tmp0_;
	_tmp1_ = self->priv->_true_statement;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}


ValaBlock*
vala_if_statement_get_false_statement (ValaIfStatement* self)
{
	ValaBlock* result;
	ValaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_false_statement;
	result = _tmp0_;
	return result;
}


void
vala_if_statement_set_false_statement (ValaIfStatement* self,
                                       ValaBlock* value)
{
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_false_statement);
	self->priv->_false_statement = _tmp0_;
	_tmp1_ = self->priv->_false_statement;
	if (_tmp1_ != NULL) {
		ValaBlock* _tmp2_;
		_tmp2_ = self->priv->_false_statement;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
	}
}


static void
vala_if_statement_class_init (ValaIfStatementClass * klass)
{
	vala_if_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_if_statement_finalize;
	g_type_class_adjust_private_offset (klass, &ValaIfStatement_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_if_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_if_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_if_statement_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_if_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_if_statement_real_emit;
}


static void
vala_if_statement_vala_statement_interface_init (ValaStatementIface * iface)
{
	vala_if_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void
vala_if_statement_instance_init (ValaIfStatement * self)
{
	self->priv = vala_if_statement_get_instance_private (self);
}


static void
vala_if_statement_finalize (ValaCodeNode * obj)
{
	ValaIfStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_IF_STATEMENT, ValaIfStatement);
	_vala_code_node_unref0 (self->priv->_condition);
	_vala_code_node_unref0 (self->priv->_true_statement);
	_vala_code_node_unref0 (self->priv->_false_statement);
	VALA_CODE_NODE_CLASS (vala_if_statement_parent_class)->finalize (obj);
}


/**
 * Represents an if selection statement in the source code.
 */
GType
vala_if_statement_get_type (void)
{
	static volatile gsize vala_if_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_if_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaIfStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_if_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaIfStatement), 0, (GInstanceInitFunc) vala_if_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_if_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_if_statement_type_id;
		vala_if_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaIfStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_if_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		ValaIfStatement_private_offset = g_type_add_instance_private (vala_if_statement_type_id, sizeof (ValaIfStatementPrivate));
		g_once_init_leave (&vala_if_statement_type_id__volatile, vala_if_statement_type_id);
	}
	return vala_if_statement_type_id__volatile;
}



