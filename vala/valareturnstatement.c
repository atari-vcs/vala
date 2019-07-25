/* valareturnstatement.c generated by valac, the Vala compiler
 * generated from valareturnstatement.vala, do not modify */

/* valareturnstatement.vala
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
#include <stdlib.h>
#include <string.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValaReturnStatementPrivate {
	ValaExpression* _return_expression;
};


static gint ValaReturnStatement_private_offset;
static gpointer vala_return_statement_parent_class = NULL;
static ValaStatementIface * vala_return_statement_vala_statement_parent_iface = NULL;

static void vala_return_statement_real_accept (ValaCodeNode* base,
                                        ValaCodeVisitor* visitor);
static void vala_return_statement_real_accept_children (ValaCodeNode* base,
                                                 ValaCodeVisitor* visitor);
static void vala_return_statement_real_replace_expression (ValaCodeNode* base,
                                                    ValaExpression* old_node,
                                                    ValaExpression* new_node);
static gboolean vala_return_statement_real_check (ValaCodeNode* base,
                                           ValaCodeContext* context);
static void vala_return_statement_real_emit (ValaCodeNode* base,
                                      ValaCodeGenerator* codegen);
static void vala_return_statement_real_get_defined_variables (ValaCodeNode* base,
                                                       ValaCollection* collection);
static void vala_return_statement_real_get_used_variables (ValaCodeNode* base,
                                                    ValaCollection* collection);
static void vala_return_statement_finalize (ValaCodeNode * obj);


static inline gpointer
vala_return_statement_get_instance_private (ValaReturnStatement* self)
{
	return G_STRUCT_MEMBER_P (self, ValaReturnStatement_private_offset);
}


/**
 * Creates a new return statement.
 *
 * @param return_expression the return expression
 * @param source_reference  reference to source code
 * @return                  newly created return statement
 */
ValaReturnStatement*
vala_return_statement_construct (GType object_type,
                                 ValaExpression* return_expression,
                                 ValaSourceReference* source_reference)
{
	ValaReturnStatement* self = NULL;
	self = (ValaReturnStatement*) vala_code_node_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_return_statement_set_return_expression (self, return_expression);
	return self;
}


ValaReturnStatement*
vala_return_statement_new (ValaExpression* return_expression,
                           ValaSourceReference* source_reference)
{
	return vala_return_statement_construct (VALA_TYPE_RETURN_STATEMENT, return_expression, source_reference);
}


static void
vala_return_statement_real_accept (ValaCodeNode* base,
                                   ValaCodeVisitor* visitor)
{
	ValaReturnStatement * self;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_return_statement (visitor, self);
}


static void
vala_return_statement_real_accept_children (ValaCodeNode* base,
                                            ValaCodeVisitor* visitor)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		ValaExpression* _tmp4_;
		ValaExpression* _tmp5_;
		_tmp2_ = vala_return_statement_get_return_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_accept ((ValaCodeNode*) _tmp3_, visitor);
		_tmp4_ = vala_return_statement_get_return_expression (self);
		_tmp5_ = _tmp4_;
		vala_code_visitor_visit_end_full_expression (visitor, _tmp5_);
	}
}


static void
vala_return_statement_real_replace_expression (ValaCodeNode* base,
                                               ValaExpression* old_node,
                                               ValaExpression* new_node)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_return_statement_set_return_expression (self, new_node);
	}
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


static gboolean
vala_return_statement_real_check (ValaCodeNode* base,
                                  ValaCodeContext* context)
{
	ValaReturnStatement * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaExpression* _tmp4_;
	ValaExpression* _tmp5_;
	gboolean _tmp14_ = FALSE;
	ValaExpression* _tmp15_;
	ValaExpression* _tmp16_;
	ValaSemanticAnalyzer* _tmp19_;
	ValaSemanticAnalyzer* _tmp20_;
	ValaDataType* _tmp21_;
	ValaDataType* _tmp22_;
	ValaExpression* _tmp25_;
	ValaExpression* _tmp26_;
	ValaSemanticAnalyzer* _tmp35_;
	ValaSemanticAnalyzer* _tmp36_;
	ValaDataType* _tmp37_;
	ValaDataType* _tmp38_;
	ValaExpression* _tmp41_;
	ValaExpression* _tmp42_;
	ValaDataType* _tmp43_;
	ValaDataType* _tmp44_;
	ValaExpression* _tmp47_;
	ValaExpression* _tmp48_;
	ValaDataType* _tmp49_;
	ValaDataType* _tmp50_;
	ValaSemanticAnalyzer* _tmp51_;
	ValaSemanticAnalyzer* _tmp52_;
	ValaDataType* _tmp53_;
	ValaDataType* _tmp54_;
	gboolean _tmp71_ = FALSE;
	ValaExpression* _tmp72_;
	ValaExpression* _tmp73_;
	ValaDataType* _tmp74_;
	ValaDataType* _tmp75_;
	ValaLocalVariable* local = NULL;
	ValaExpression* _tmp84_;
	ValaExpression* _tmp85_;
	ValaSymbol* _tmp86_;
	ValaSymbol* _tmp87_;
	ValaLocalVariable* _tmp88_;
	gboolean _tmp89_ = FALSE;
	gboolean _tmp90_ = FALSE;
	ValaLocalVariable* _tmp91_;
	gboolean _tmp103_ = FALSE;
	ValaExpression* _tmp104_;
	ValaExpression* _tmp105_;
	ValaExpression* _tmp122_;
	ValaExpression* _tmp123_;
	ValaList* _tmp124_;
	ValaList* _tmp125_;
	gboolean _tmp126_;
	gboolean _tmp127_;
	self = (ValaReturnStatement*) base;
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
	_tmp4_ = vala_return_statement_get_return_expression (self);
	_tmp5_ = _tmp4_;
	if (_tmp5_ != NULL) {
		ValaExpression* _tmp6_;
		ValaExpression* _tmp7_;
		ValaSemanticAnalyzer* _tmp8_;
		ValaSemanticAnalyzer* _tmp9_;
		ValaDataType* _tmp10_;
		ValaDataType* _tmp11_;
		ValaDataType* _tmp12_;
		ValaDataType* _tmp13_;
		_tmp6_ = vala_return_statement_get_return_expression (self);
		_tmp7_ = _tmp6_;
		_tmp8_ = vala_code_context_get_analyzer (context);
		_tmp9_ = _tmp8_;
		_tmp10_ = vala_semantic_analyzer_get_current_return_type (_tmp9_);
		_tmp11_ = _tmp10_;
		_tmp12_ = vala_data_type_copy (_tmp11_);
		_tmp13_ = _tmp12_;
		vala_expression_set_target_type (_tmp7_, _tmp13_);
		_vala_code_node_unref0 (_tmp13_);
	}
	_tmp15_ = vala_return_statement_get_return_expression (self);
	_tmp16_ = _tmp15_;
	if (_tmp16_ != NULL) {
		ValaExpression* _tmp17_;
		ValaExpression* _tmp18_;
		_tmp17_ = vala_return_statement_get_return_expression (self);
		_tmp18_ = _tmp17_;
		_tmp14_ = !vala_code_node_check ((ValaCodeNode*) _tmp18_, context);
	} else {
		_tmp14_ = FALSE;
	}
	if (_tmp14_) {
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	_tmp19_ = vala_code_context_get_analyzer (context);
	_tmp20_ = _tmp19_;
	_tmp21_ = vala_semantic_analyzer_get_current_return_type (_tmp20_);
	_tmp22_ = _tmp21_;
	if (_tmp22_ == NULL) {
		ValaSourceReference* _tmp23_;
		ValaSourceReference* _tmp24_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp23_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp24_ = _tmp23_;
		vala_report_error (_tmp24_, "Return not allowed in this context");
		result = FALSE;
		return result;
	}
	_tmp25_ = vala_return_statement_get_return_expression (self);
	_tmp26_ = _tmp25_;
	if (_tmp26_ == NULL) {
		ValaSemanticAnalyzer* _tmp27_;
		ValaSemanticAnalyzer* _tmp28_;
		ValaDataType* _tmp29_;
		ValaDataType* _tmp30_;
		gboolean _tmp33_;
		gboolean _tmp34_;
		_tmp27_ = vala_code_context_get_analyzer (context);
		_tmp28_ = _tmp27_;
		_tmp29_ = vala_semantic_analyzer_get_current_return_type (_tmp28_);
		_tmp30_ = _tmp29_;
		if (!G_TYPE_CHECK_INSTANCE_TYPE (_tmp30_, VALA_TYPE_VOID_TYPE)) {
			ValaSourceReference* _tmp31_;
			ValaSourceReference* _tmp32_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			_tmp31_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp32_ = _tmp31_;
			vala_report_error (_tmp32_, "Return without value in non-void function");
		}
		_tmp33_ = vala_code_node_get_error ((ValaCodeNode*) self);
		_tmp34_ = _tmp33_;
		result = !_tmp34_;
		return result;
	}
	_tmp35_ = vala_code_context_get_analyzer (context);
	_tmp36_ = _tmp35_;
	_tmp37_ = vala_semantic_analyzer_get_current_return_type (_tmp36_);
	_tmp38_ = _tmp37_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp38_, VALA_TYPE_VOID_TYPE)) {
		ValaSourceReference* _tmp39_;
		ValaSourceReference* _tmp40_;
		_tmp39_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp40_ = _tmp39_;
		vala_report_error (_tmp40_, "Return with value in void function");
		result = FALSE;
		return result;
	}
	_tmp41_ = vala_return_statement_get_return_expression (self);
	_tmp42_ = _tmp41_;
	_tmp43_ = vala_expression_get_value_type (_tmp42_);
	_tmp44_ = _tmp43_;
	if (_tmp44_ == NULL) {
		ValaSourceReference* _tmp45_;
		ValaSourceReference* _tmp46_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp45_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp46_ = _tmp45_;
		vala_report_error (_tmp46_, "Invalid expression in return value");
		result = FALSE;
		return result;
	}
	_tmp47_ = vala_return_statement_get_return_expression (self);
	_tmp48_ = _tmp47_;
	_tmp49_ = vala_expression_get_value_type (_tmp48_);
	_tmp50_ = _tmp49_;
	_tmp51_ = vala_code_context_get_analyzer (context);
	_tmp52_ = _tmp51_;
	_tmp53_ = vala_semantic_analyzer_get_current_return_type (_tmp52_);
	_tmp54_ = _tmp53_;
	if (!vala_data_type_compatible (_tmp50_, _tmp54_)) {
		ValaSourceReference* _tmp55_;
		ValaSourceReference* _tmp56_;
		ValaExpression* _tmp57_;
		ValaExpression* _tmp58_;
		ValaDataType* _tmp59_;
		ValaDataType* _tmp60_;
		gchar* _tmp61_;
		gchar* _tmp62_;
		ValaSemanticAnalyzer* _tmp63_;
		ValaSemanticAnalyzer* _tmp64_;
		ValaDataType* _tmp65_;
		ValaDataType* _tmp66_;
		gchar* _tmp67_;
		gchar* _tmp68_;
		gchar* _tmp69_;
		gchar* _tmp70_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp55_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp56_ = _tmp55_;
		_tmp57_ = vala_return_statement_get_return_expression (self);
		_tmp58_ = _tmp57_;
		_tmp59_ = vala_expression_get_value_type (_tmp58_);
		_tmp60_ = _tmp59_;
		_tmp61_ = vala_code_node_to_string ((ValaCodeNode*) _tmp60_);
		_tmp62_ = _tmp61_;
		_tmp63_ = vala_code_context_get_analyzer (context);
		_tmp64_ = _tmp63_;
		_tmp65_ = vala_semantic_analyzer_get_current_return_type (_tmp64_);
		_tmp66_ = _tmp65_;
		_tmp67_ = vala_code_node_to_string ((ValaCodeNode*) _tmp66_);
		_tmp68_ = _tmp67_;
		_tmp69_ = g_strdup_printf ("Return: Cannot convert from `%s' to `%s'", _tmp62_, _tmp68_);
		_tmp70_ = _tmp69_;
		vala_report_error (_tmp56_, _tmp70_);
		_g_free0 (_tmp70_);
		_g_free0 (_tmp68_);
		_g_free0 (_tmp62_);
		result = FALSE;
		return result;
	}
	_tmp72_ = vala_return_statement_get_return_expression (self);
	_tmp73_ = _tmp72_;
	_tmp74_ = vala_expression_get_value_type (_tmp73_);
	_tmp75_ = _tmp74_;
	if (vala_data_type_is_disposable (_tmp75_)) {
		ValaSemanticAnalyzer* _tmp76_;
		ValaSemanticAnalyzer* _tmp77_;
		ValaDataType* _tmp78_;
		ValaDataType* _tmp79_;
		gboolean _tmp80_;
		gboolean _tmp81_;
		_tmp76_ = vala_code_context_get_analyzer (context);
		_tmp77_ = _tmp76_;
		_tmp78_ = vala_semantic_analyzer_get_current_return_type (_tmp77_);
		_tmp79_ = _tmp78_;
		_tmp80_ = vala_data_type_get_value_owned (_tmp79_);
		_tmp81_ = _tmp80_;
		_tmp71_ = !_tmp81_;
	} else {
		_tmp71_ = FALSE;
	}
	if (_tmp71_) {
		ValaSourceReference* _tmp82_;
		ValaSourceReference* _tmp83_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp82_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp83_ = _tmp82_;
		vala_report_error (_tmp83_, "Return value transfers ownership but method return type hasn't been de" \
"clared to transfer ownership");
		result = FALSE;
		return result;
	}
	_tmp84_ = vala_return_statement_get_return_expression (self);
	_tmp85_ = _tmp84_;
	_tmp86_ = vala_expression_get_symbol_reference (_tmp85_);
	_tmp87_ = _tmp86_;
	_tmp88_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp87_, VALA_TYPE_LOCAL_VARIABLE) ? ((ValaLocalVariable*) _tmp87_) : NULL);
	local = _tmp88_;
	_tmp91_ = local;
	if (_tmp91_ != NULL) {
		ValaLocalVariable* _tmp92_;
		ValaDataType* _tmp93_;
		ValaDataType* _tmp94_;
		_tmp92_ = local;
		_tmp93_ = vala_variable_get_variable_type ((ValaVariable*) _tmp92_);
		_tmp94_ = _tmp93_;
		_tmp90_ = vala_data_type_is_disposable (_tmp94_);
	} else {
		_tmp90_ = FALSE;
	}
	if (_tmp90_) {
		ValaSemanticAnalyzer* _tmp95_;
		ValaSemanticAnalyzer* _tmp96_;
		ValaDataType* _tmp97_;
		ValaDataType* _tmp98_;
		gboolean _tmp99_;
		gboolean _tmp100_;
		_tmp95_ = vala_code_context_get_analyzer (context);
		_tmp96_ = _tmp95_;
		_tmp97_ = vala_semantic_analyzer_get_current_return_type (_tmp96_);
		_tmp98_ = _tmp97_;
		_tmp99_ = vala_data_type_get_value_owned (_tmp98_);
		_tmp100_ = _tmp99_;
		_tmp89_ = !_tmp100_;
	} else {
		_tmp89_ = FALSE;
	}
	if (_tmp89_) {
		ValaSourceReference* _tmp101_;
		ValaSourceReference* _tmp102_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp101_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp102_ = _tmp101_;
		vala_report_error (_tmp102_, "Local variable with strong reference used as return value and method r" \
"eturn type has not been declared to transfer ownership");
		result = FALSE;
		_vala_code_node_unref0 (local);
		return result;
	}
	_tmp104_ = vala_return_statement_get_return_expression (self);
	_tmp105_ = _tmp104_;
	if (G_TYPE_CHECK_INSTANCE_TYPE (_tmp105_, VALA_TYPE_NULL_LITERAL)) {
		ValaSemanticAnalyzer* _tmp106_;
		ValaSemanticAnalyzer* _tmp107_;
		ValaDataType* _tmp108_;
		ValaDataType* _tmp109_;
		gboolean _tmp110_;
		gboolean _tmp111_;
		_tmp106_ = vala_code_context_get_analyzer (context);
		_tmp107_ = _tmp106_;
		_tmp108_ = vala_semantic_analyzer_get_current_return_type (_tmp107_);
		_tmp109_ = _tmp108_;
		_tmp110_ = vala_data_type_get_nullable (_tmp109_);
		_tmp111_ = _tmp110_;
		_tmp103_ = !_tmp111_;
	} else {
		_tmp103_ = FALSE;
	}
	if (_tmp103_) {
		ValaSourceReference* _tmp112_;
		ValaSourceReference* _tmp113_;
		ValaSemanticAnalyzer* _tmp114_;
		ValaSemanticAnalyzer* _tmp115_;
		ValaDataType* _tmp116_;
		ValaDataType* _tmp117_;
		gchar* _tmp118_;
		gchar* _tmp119_;
		gchar* _tmp120_;
		gchar* _tmp121_;
		_tmp112_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp113_ = _tmp112_;
		_tmp114_ = vala_code_context_get_analyzer (context);
		_tmp115_ = _tmp114_;
		_tmp116_ = vala_semantic_analyzer_get_current_return_type (_tmp115_);
		_tmp117_ = _tmp116_;
		_tmp118_ = vala_code_node_to_string ((ValaCodeNode*) _tmp117_);
		_tmp119_ = _tmp118_;
		_tmp120_ = g_strdup_printf ("`null' incompatible with return type `%s'", _tmp119_);
		_tmp121_ = _tmp120_;
		vala_report_warning (_tmp113_, _tmp121_);
		_g_free0 (_tmp121_);
		_g_free0 (_tmp119_);
	}
	_tmp122_ = vala_return_statement_get_return_expression (self);
	_tmp123_ = _tmp122_;
	_tmp124_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp123_);
	_tmp125_ = _tmp124_;
	vala_code_node_add_error_types ((ValaCodeNode*) self, _tmp125_);
	_vala_iterable_unref0 (_tmp125_);
	_tmp126_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp127_ = _tmp126_;
	result = !_tmp127_;
	_vala_code_node_unref0 (local);
	return result;
}


static void
vala_return_statement_real_emit (ValaCodeNode* base,
                                 ValaCodeGenerator* codegen)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		ValaExpression* _tmp4_;
		ValaExpression* _tmp5_;
		_tmp2_ = vala_return_statement_get_return_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_emit ((ValaCodeNode*) _tmp3_, codegen);
		_tmp4_ = vala_return_statement_get_return_expression (self);
		_tmp5_ = _tmp4_;
		vala_code_visitor_visit_end_full_expression ((ValaCodeVisitor*) codegen, _tmp5_);
	}
	vala_code_visitor_visit_return_statement ((ValaCodeVisitor*) codegen, self);
}


static void
vala_return_statement_real_get_defined_variables (ValaCodeNode* base,
                                                  ValaCollection* collection)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		_tmp2_ = vala_return_statement_get_return_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_get_defined_variables ((ValaCodeNode*) _tmp3_, collection);
	}
}


static void
vala_return_statement_real_get_used_variables (ValaCodeNode* base,
                                               ValaCollection* collection)
{
	ValaReturnStatement * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaReturnStatement*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_return_statement_get_return_expression (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		ValaExpression* _tmp3_;
		_tmp2_ = vala_return_statement_get_return_expression (self);
		_tmp3_ = _tmp2_;
		vala_code_node_get_used_variables ((ValaCodeNode*) _tmp3_, collection);
	}
}


ValaExpression*
vala_return_statement_get_return_expression (ValaReturnStatement* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_return_expression;
	result = _tmp0_;
	return result;
}


void
vala_return_statement_set_return_expression (ValaReturnStatement* self,
                                             ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_return_expression);
	self->priv->_return_expression = _tmp0_;
	_tmp1_ = self->priv->_return_expression;
	if (_tmp1_ != NULL) {
		ValaExpression* _tmp2_;
		_tmp2_ = self->priv->_return_expression;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
	}
}


static void
vala_return_statement_class_init (ValaReturnStatementClass * klass)
{
	vala_return_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_return_statement_finalize;
	g_type_class_adjust_private_offset (klass, &ValaReturnStatement_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_return_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_return_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_return_statement_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_return_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_return_statement_real_emit;
	((ValaCodeNodeClass *) klass)->get_defined_variables = (void (*) (ValaCodeNode*, ValaCollection*)) vala_return_statement_real_get_defined_variables;
	((ValaCodeNodeClass *) klass)->get_used_variables = (void (*) (ValaCodeNode*, ValaCollection*)) vala_return_statement_real_get_used_variables;
}


static void
vala_return_statement_vala_statement_interface_init (ValaStatementIface * iface)
{
	vala_return_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void
vala_return_statement_instance_init (ValaReturnStatement * self)
{
	self->priv = vala_return_statement_get_instance_private (self);
}


static void
vala_return_statement_finalize (ValaCodeNode * obj)
{
	ValaReturnStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_RETURN_STATEMENT, ValaReturnStatement);
	_vala_code_node_unref0 (self->priv->_return_expression);
	VALA_CODE_NODE_CLASS (vala_return_statement_parent_class)->finalize (obj);
}


/**
 * Represents a return statement in the source code.
 */
GType
vala_return_statement_get_type (void)
{
	static volatile gsize vala_return_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_return_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaReturnStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_return_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaReturnStatement), 0, (GInstanceInitFunc) vala_return_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_return_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_return_statement_type_id;
		vala_return_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaReturnStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_return_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		ValaReturnStatement_private_offset = g_type_add_instance_private (vala_return_statement_type_id, sizeof (ValaReturnStatementPrivate));
		g_once_init_leave (&vala_return_statement_type_id__volatile, vala_return_statement_type_id);
	}
	return vala_return_statement_type_id__volatile;
}



