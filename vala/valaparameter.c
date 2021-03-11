/* valaparameter.c generated by valac, the Vala compiler
 * generated from valaparameter.vala, do not modify */

/* valaparameter.vala
 *
 * Copyright (C) 2006-2012  Jürg Billeter
 * Copyright (C) 2006-2008  Raffaele Sandrini
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
 *	Raffaele Sandrini <raffaele@sandrini.ch>
 */

#include "vala.h"
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <valagee.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _vala_source_file_unref0(var) ((var == NULL) ? NULL : (var = (vala_source_file_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaParameterPrivate {
	ValaParameterDirection _direction;
	gboolean _ellipsis;
	gboolean _params_array;
	gboolean _captured;
	ValaParameter* _base_parameter;
};

static gint ValaParameter_private_offset;
static gpointer vala_parameter_parent_class = NULL;

static void vala_parameter_real_accept (ValaCodeNode* base,
                                 ValaCodeVisitor* visitor);
static void vala_parameter_real_accept_children (ValaCodeNode* base,
                                          ValaCodeVisitor* visitor);
static void vala_parameter_real_replace_type (ValaCodeNode* base,
                                       ValaDataType* old_type,
                                       ValaDataType* new_type);
static void vala_parameter_real_replace_expression (ValaCodeNode* base,
                                             ValaExpression* old_node,
                                             ValaExpression* new_node);
static gboolean vala_parameter_real_check (ValaCodeNode* base,
                                    ValaCodeContext* context);
static void vala_parameter_finalize (ValaCodeNode * obj);
static GType vala_parameter_get_type_once (void);

static inline gpointer
vala_parameter_get_instance_private (ValaParameter* self)
{
	return G_STRUCT_MEMBER_P (self, ValaParameter_private_offset);
}

ValaParameterDirection
vala_parameter_get_direction (ValaParameter* self)
{
	ValaParameterDirection result;
	ValaParameterDirection _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_direction;
	result = _tmp0_;
	return result;
}

void
vala_parameter_set_direction (ValaParameter* self,
                              ValaParameterDirection value)
{
	g_return_if_fail (self != NULL);
	self->priv->_direction = value;
}

gboolean
vala_parameter_get_ellipsis (ValaParameter* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_ellipsis;
	return result;
}

void
vala_parameter_set_ellipsis (ValaParameter* self,
                             gboolean value)
{
	g_return_if_fail (self != NULL);
	self->priv->_ellipsis = value;
}

gboolean
vala_parameter_get_params_array (ValaParameter* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_params_array;
	return result;
}

void
vala_parameter_set_params_array (ValaParameter* self,
                                 gboolean value)
{
	g_return_if_fail (self != NULL);
	self->priv->_params_array = value;
}

gboolean
vala_parameter_get_captured (ValaParameter* self)
{
	gboolean result;
	g_return_val_if_fail (self != NULL, FALSE);
	result = self->priv->_captured;
	return result;
}

void
vala_parameter_set_captured (ValaParameter* self,
                             gboolean value)
{
	g_return_if_fail (self != NULL);
	self->priv->_captured = value;
}

gboolean
vala_parameter_get_format_arg (ValaParameter* self)
{
	gboolean result;
	ValaAttribute* _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = vala_code_node_get_attribute ((ValaCodeNode*) self, "FormatArg");
	result = _tmp0_ != NULL;
	return result;
}

ValaParameter*
vala_parameter_get_base_parameter (ValaParameter* self)
{
	ValaParameter* result;
	ValaParameter* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_base_parameter;
	result = _tmp0_;
	return result;
}

static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}

void
vala_parameter_set_base_parameter (ValaParameter* self,
                                   ValaParameter* value)
{
	ValaParameter* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_base_parameter);
	self->priv->_base_parameter = _tmp0_;
}

/**
 * Creates a new formal parameter.
 *
 * @param name              parameter name
 * @param variable_type     parameter type
 * @param source_reference  reference to source code
 * @return                  newly created formal parameter
 */
ValaParameter*
vala_parameter_construct (GType object_type,
                          const gchar* name,
                          ValaDataType* variable_type,
                          ValaSourceReference* source_reference)
{
	ValaParameter* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaParameter*) vala_variable_construct (object_type, variable_type, name, NULL, source_reference, NULL);
	vala_symbol_set_access ((ValaSymbol*) self, VALA_SYMBOL_ACCESSIBILITY_PUBLIC);
	return self;
}

ValaParameter*
vala_parameter_new (const gchar* name,
                    ValaDataType* variable_type,
                    ValaSourceReference* source_reference)
{
	return vala_parameter_construct (VALA_TYPE_PARAMETER, name, variable_type, source_reference);
}

/**
 * Creates a new ellipsis parameter representing an indefinite number of
 * parameters.
 */
ValaParameter*
vala_parameter_construct_with_ellipsis (GType object_type,
                                        ValaSourceReference* source_reference)
{
	ValaParameter* self = NULL;
	self = (ValaParameter*) vala_variable_construct (object_type, NULL, NULL, NULL, source_reference, NULL);
	vala_parameter_set_ellipsis (self, TRUE);
	vala_symbol_set_access ((ValaSymbol*) self, VALA_SYMBOL_ACCESSIBILITY_PUBLIC);
	return self;
}

ValaParameter*
vala_parameter_new_with_ellipsis (ValaSourceReference* source_reference)
{
	return vala_parameter_construct_with_ellipsis (VALA_TYPE_PARAMETER, source_reference);
}

static void
vala_parameter_real_accept (ValaCodeNode* base,
                            ValaCodeVisitor* visitor)
{
	ValaParameter * self;
	self = (ValaParameter*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_formal_parameter (visitor, self);
}

static void
vala_parameter_real_accept_children (ValaCodeNode* base,
                                     ValaCodeVisitor* visitor)
{
	ValaParameter * self;
	gboolean _tmp0_;
	self = (ValaParameter*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = self->priv->_ellipsis;
	if (!_tmp0_) {
		ValaDataType* _tmp1_;
		ValaDataType* _tmp2_;
		ValaExpression* _tmp3_;
		ValaExpression* _tmp4_;
		_tmp1_ = vala_variable_get_variable_type ((ValaVariable*) self);
		_tmp2_ = _tmp1_;
		vala_code_node_accept ((ValaCodeNode*) _tmp2_, visitor);
		_tmp3_ = vala_variable_get_initializer ((ValaVariable*) self);
		_tmp4_ = _tmp3_;
		if (_tmp4_ != NULL) {
			ValaExpression* _tmp5_;
			ValaExpression* _tmp6_;
			_tmp5_ = vala_variable_get_initializer ((ValaVariable*) self);
			_tmp6_ = _tmp5_;
			vala_code_node_accept ((ValaCodeNode*) _tmp6_, visitor);
		}
	}
}

static void
vala_parameter_real_replace_type (ValaCodeNode* base,
                                  ValaDataType* old_type,
                                  ValaDataType* new_type)
{
	ValaParameter * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	self = (ValaParameter*) base;
	g_return_if_fail (old_type != NULL);
	g_return_if_fail (new_type != NULL);
	_tmp0_ = vala_variable_get_variable_type ((ValaVariable*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_type) {
		vala_variable_set_variable_type ((ValaVariable*) self, new_type);
	}
}

static void
vala_parameter_real_replace_expression (ValaCodeNode* base,
                                        ValaExpression* old_node,
                                        ValaExpression* new_node)
{
	ValaParameter * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaParameter*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_variable_get_initializer ((ValaVariable*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_variable_set_initializer ((ValaVariable*) self, new_node);
	}
}

ValaParameter*
vala_parameter_copy (ValaParameter* self)
{
	gboolean _tmp0_;
	ValaParameter* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_ellipsis;
	if (!_tmp0_) {
		ValaParameter* _result_ = NULL;
		const gchar* _tmp1_;
		const gchar* _tmp2_;
		ValaDataType* _tmp3_;
		ValaDataType* _tmp4_;
		ValaDataType* _tmp5_;
		ValaDataType* _tmp6_;
		ValaSourceReference* _tmp7_;
		ValaSourceReference* _tmp8_;
		ValaParameter* _tmp9_;
		ValaParameter* _tmp10_;
		ValaParameter* _tmp11_;
		gboolean _tmp12_;
		ValaParameter* _tmp13_;
		ValaParameterDirection _tmp14_;
		ValaParameter* _tmp15_;
		ValaExpression* _tmp16_;
		ValaExpression* _tmp17_;
		GList* _tmp18_;
		_tmp1_ = vala_symbol_get_name ((ValaSymbol*) self);
		_tmp2_ = _tmp1_;
		_tmp3_ = vala_variable_get_variable_type ((ValaVariable*) self);
		_tmp4_ = _tmp3_;
		_tmp5_ = vala_data_type_copy (_tmp4_);
		_tmp6_ = _tmp5_;
		_tmp7_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp8_ = _tmp7_;
		_tmp9_ = vala_parameter_new (_tmp2_, _tmp6_, _tmp8_);
		_tmp10_ = _tmp9_;
		_vala_code_node_unref0 (_tmp6_);
		_result_ = _tmp10_;
		_tmp11_ = _result_;
		_tmp12_ = self->priv->_params_array;
		vala_parameter_set_params_array (_tmp11_, _tmp12_);
		_tmp13_ = _result_;
		_tmp14_ = self->priv->_direction;
		vala_parameter_set_direction (_tmp13_, _tmp14_);
		_tmp15_ = _result_;
		_tmp16_ = vala_variable_get_initializer ((ValaVariable*) self);
		_tmp17_ = _tmp16_;
		vala_variable_set_initializer ((ValaVariable*) _tmp15_, _tmp17_);
		_tmp18_ = ((ValaCodeNode*) self)->attributes;
		{
			GList* a_collection = NULL;
			GList* a_it = NULL;
			a_collection = _tmp18_;
			for (a_it = a_collection; a_it != NULL; a_it = a_it->next) {
				ValaAttribute* _tmp19_;
				ValaAttribute* a = NULL;
				_tmp19_ = _vala_code_node_ref0 ((ValaAttribute*) a_it->data);
				a = _tmp19_;
				{
					ValaParameter* _tmp20_;
					ValaAttribute* _tmp21_;
					ValaAttribute* _tmp22_;
					_tmp20_ = _result_;
					_tmp21_ = a;
					_tmp22_ = _vala_code_node_ref0 (_tmp21_);
					((ValaCodeNode*) _tmp20_)->attributes = g_list_append (((ValaCodeNode*) _tmp20_)->attributes, _tmp22_);
					_vala_code_node_unref0 (a);
				}
			}
		}
		result = _result_;
		return result;
	} else {
		ValaParameter* _tmp23_;
		_tmp23_ = vala_parameter_new_with_ellipsis (NULL);
		result = _tmp23_;
		return result;
	}
}

static gpointer
_vala_source_file_ref0 (gpointer self)
{
	return self ? vala_source_file_ref (self) : NULL;
}

static gboolean
vala_parameter_real_check (ValaCodeNode* base,
                           ValaCodeContext* context)
{
	ValaParameter * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaSourceFile* old_source_file = NULL;
	ValaSemanticAnalyzer* _tmp4_;
	ValaSemanticAnalyzer* _tmp5_;
	ValaSourceFile* _tmp6_;
	ValaSourceFile* _tmp7_;
	ValaSourceFile* _tmp8_;
	ValaSymbol* old_symbol = NULL;
	ValaSemanticAnalyzer* _tmp9_;
	ValaSemanticAnalyzer* _tmp10_;
	ValaSymbol* _tmp11_;
	ValaSymbol* _tmp12_;
	ValaSymbol* _tmp13_;
	ValaSourceReference* _tmp14_;
	ValaSourceReference* _tmp15_;
	ValaSemanticAnalyzer* _tmp22_;
	ValaSemanticAnalyzer* _tmp23_;
	ValaSymbol* _tmp24_;
	ValaSymbol* _tmp25_;
	ValaDataType* _tmp26_;
	ValaDataType* _tmp27_;
	gboolean _tmp34_;
	gboolean _tmp83_ = FALSE;
	ValaExpression* _tmp84_;
	ValaExpression* _tmp85_;
	gboolean _tmp152_;
	ValaMethod* m = NULL;
	ValaSymbol* _tmp195_;
	ValaSymbol* _tmp196_;
	ValaMethod* _tmp197_;
	ValaSemanticAnalyzer* _tmp227_;
	ValaSemanticAnalyzer* _tmp228_;
	ValaSourceFile* _tmp229_;
	ValaSemanticAnalyzer* _tmp230_;
	ValaSemanticAnalyzer* _tmp231_;
	ValaSymbol* _tmp232_;
	gboolean _tmp233_;
	gboolean _tmp234_;
	gboolean result = FALSE;
	self = (ValaParameter*) base;
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
	_tmp4_ = vala_code_context_get_analyzer (context);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_semantic_analyzer_get_current_source_file (_tmp5_);
	_tmp7_ = _tmp6_;
	_tmp8_ = _vala_source_file_ref0 (_tmp7_);
	old_source_file = _tmp8_;
	_tmp9_ = vala_code_context_get_analyzer (context);
	_tmp10_ = _tmp9_;
	_tmp11_ = vala_semantic_analyzer_get_current_symbol (_tmp10_);
	_tmp12_ = _tmp11_;
	_tmp13_ = _vala_code_node_ref0 (_tmp12_);
	old_symbol = _tmp13_;
	_tmp14_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp15_ = _tmp14_;
	if (_tmp15_ != NULL) {
		ValaSemanticAnalyzer* _tmp16_;
		ValaSemanticAnalyzer* _tmp17_;
		ValaSourceReference* _tmp18_;
		ValaSourceReference* _tmp19_;
		ValaSourceFile* _tmp20_;
		ValaSourceFile* _tmp21_;
		_tmp16_ = vala_code_context_get_analyzer (context);
		_tmp17_ = _tmp16_;
		_tmp18_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp19_ = _tmp18_;
		_tmp20_ = vala_source_reference_get_file (_tmp19_);
		_tmp21_ = _tmp20_;
		vala_semantic_analyzer_set_current_source_file (_tmp17_, _tmp21_);
	}
	_tmp22_ = vala_code_context_get_analyzer (context);
	_tmp23_ = _tmp22_;
	_tmp24_ = vala_symbol_get_parent_symbol ((ValaSymbol*) self);
	_tmp25_ = _tmp24_;
	vala_semantic_analyzer_set_current_symbol (_tmp23_, _tmp25_);
	_tmp26_ = vala_variable_get_variable_type ((ValaVariable*) self);
	_tmp27_ = _tmp26_;
	if (_tmp27_ != NULL) {
		ValaDataType* _tmp28_;
		ValaDataType* _tmp29_;
		ValaDataType* _tmp32_;
		ValaDataType* _tmp33_;
		_tmp28_ = vala_variable_get_variable_type ((ValaVariable*) self);
		_tmp29_ = _tmp28_;
		if (VALA_IS_VOID_TYPE (_tmp29_)) {
			ValaSourceReference* _tmp30_;
			ValaSourceReference* _tmp31_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			_tmp30_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp31_ = _tmp30_;
			vala_report_error (_tmp31_, "'void' not supported as parameter type");
			result = FALSE;
			_vala_code_node_unref0 (old_symbol);
			_vala_source_file_unref0 (old_source_file);
			return result;
		}
		_tmp32_ = vala_variable_get_variable_type ((ValaVariable*) self);
		_tmp33_ = _tmp32_;
		vala_code_node_check ((ValaCodeNode*) _tmp33_, context);
	}
	_tmp34_ = self->priv->_ellipsis;
	if (!_tmp34_) {
		ValaDataType* _tmp35_;
		ValaDataType* _tmp36_;
		gboolean _tmp37_ = FALSE;
		gboolean _tmp38_;
		gboolean _tmp43_ = FALSE;
		ValaExpression* _tmp52_;
		ValaExpression* _tmp53_;
		ValaArrayType* variable_array_type = NULL;
		ValaDataType* _tmp70_;
		ValaDataType* _tmp71_;
		gboolean _tmp72_ = FALSE;
		gboolean _tmp73_ = FALSE;
		ValaArrayType* _tmp74_;
		_tmp35_ = vala_variable_get_variable_type ((ValaVariable*) self);
		_tmp36_ = _tmp35_;
		vala_code_node_check ((ValaCodeNode*) _tmp36_, context);
		_tmp38_ = self->priv->_params_array;
		if (_tmp38_) {
			ValaDataType* _tmp39_;
			ValaDataType* _tmp40_;
			_tmp39_ = vala_variable_get_variable_type ((ValaVariable*) self);
			_tmp40_ = _tmp39_;
			_tmp37_ = !VALA_IS_ARRAY_TYPE (_tmp40_);
		} else {
			_tmp37_ = FALSE;
		}
		if (_tmp37_) {
			ValaSourceReference* _tmp41_;
			ValaSourceReference* _tmp42_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			_tmp41_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp42_ = _tmp41_;
			vala_report_error (_tmp42_, "parameter array expected");
			result = FALSE;
			_vala_code_node_unref0 (old_symbol);
			_vala_source_file_unref0 (old_source_file);
			return result;
		}
		if (vala_code_node_has_attribute_argument ((ValaCodeNode*) self, "CCode", "scope")) {
			ValaDataType* _tmp44_;
			ValaDataType* _tmp45_;
			_tmp44_ = vala_variable_get_variable_type ((ValaVariable*) self);
			_tmp45_ = _tmp44_;
			_tmp43_ = VALA_IS_DELEGATE_TYPE (_tmp45_);
		} else {
			_tmp43_ = FALSE;
		}
		if (_tmp43_) {
			ValaDelegateType* delegate_type = NULL;
			ValaDataType* _tmp46_;
			ValaDataType* _tmp47_;
			ValaDelegateType* _tmp48_;
			ValaDelegateType* _tmp49_;
			gchar* _tmp50_;
			gchar* _tmp51_;
			_tmp46_ = vala_variable_get_variable_type ((ValaVariable*) self);
			_tmp47_ = _tmp46_;
			_tmp48_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (_tmp47_, VALA_TYPE_DELEGATE_TYPE, ValaDelegateType));
			delegate_type = _tmp48_;
			_tmp49_ = delegate_type;
			_tmp50_ = vala_code_node_get_attribute_string ((ValaCodeNode*) self, "CCode", "scope", NULL);
			_tmp51_ = _tmp50_;
			vala_delegate_type_set_is_called_once (_tmp49_, g_strcmp0 (_tmp51_, "async") == 0);
			_g_free0 (_tmp51_);
			_vala_code_node_unref0 (delegate_type);
		}
		_tmp52_ = vala_variable_get_initializer ((ValaVariable*) self);
		_tmp53_ = _tmp52_;
		if (_tmp53_ != NULL) {
			ValaExpression* _tmp54_;
			ValaExpression* _tmp55_;
			ValaDataType* _tmp56_;
			ValaDataType* _tmp57_;
			ValaDataType* _tmp58_;
			ValaDataType* _tmp59_;
			ValaExpression* _tmp60_;
			ValaExpression* _tmp61_;
			ValaExpression* _tmp62_;
			ValaExpression* _tmp63_;
			ValaDataType* _tmp64_;
			ValaDataType* _tmp65_;
			_tmp54_ = vala_variable_get_initializer ((ValaVariable*) self);
			_tmp55_ = _tmp54_;
			_tmp56_ = vala_variable_get_variable_type ((ValaVariable*) self);
			_tmp57_ = _tmp56_;
			_tmp58_ = vala_data_type_copy (_tmp57_);
			_tmp59_ = _tmp58_;
			vala_expression_set_target_type (_tmp55_, _tmp59_);
			_vala_code_node_unref0 (_tmp59_);
			_tmp60_ = vala_variable_get_initializer ((ValaVariable*) self);
			_tmp61_ = _tmp60_;
			vala_code_node_check ((ValaCodeNode*) _tmp61_, context);
			_tmp62_ = vala_variable_get_initializer ((ValaVariable*) self);
			_tmp63_ = _tmp62_;
			_tmp64_ = vala_expression_get_value_type (_tmp63_);
			_tmp65_ = _tmp64_;
			if (_tmp65_ == NULL) {
				ValaExpression* _tmp66_;
				ValaExpression* _tmp67_;
				ValaInvalidType* _tmp68_;
				ValaInvalidType* _tmp69_;
				_tmp66_ = vala_variable_get_initializer ((ValaVariable*) self);
				_tmp67_ = _tmp66_;
				_tmp68_ = vala_invalid_type_new ();
				_tmp69_ = _tmp68_;
				vala_expression_set_value_type (_tmp67_, (ValaDataType*) _tmp69_);
				_vala_code_node_unref0 (_tmp69_);
			}
		}
		_tmp70_ = vala_variable_get_variable_type ((ValaVariable*) self);
		_tmp71_ = _tmp70_;
		variable_array_type = VALA_IS_ARRAY_TYPE (_tmp71_) ? ((ValaArrayType*) _tmp71_) : NULL;
		_tmp74_ = variable_array_type;
		if (_tmp74_ != NULL) {
			ValaArrayType* _tmp75_;
			gboolean _tmp76_;
			gboolean _tmp77_;
			_tmp75_ = variable_array_type;
			_tmp76_ = vala_array_type_get_inline_allocated (_tmp75_);
			_tmp77_ = _tmp76_;
			_tmp73_ = _tmp77_;
		} else {
			_tmp73_ = FALSE;
		}
		if (_tmp73_) {
			ValaArrayType* _tmp78_;
			gboolean _tmp79_;
			gboolean _tmp80_;
			_tmp78_ = variable_array_type;
			_tmp79_ = vala_array_type_get_fixed_length (_tmp78_);
			_tmp80_ = _tmp79_;
			_tmp72_ = !_tmp80_;
		} else {
			_tmp72_ = FALSE;
		}
		if (_tmp72_) {
			ValaSourceReference* _tmp81_;
			ValaSourceReference* _tmp82_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			_tmp81_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp82_ = _tmp81_;
			vala_report_error (_tmp82_, "Inline allocated array as parameter requires to have fixed length");
		}
	}
	_tmp84_ = vala_variable_get_initializer ((ValaVariable*) self);
	_tmp85_ = _tmp84_;
	if (_tmp85_ != NULL) {
		ValaExpression* _tmp86_;
		ValaExpression* _tmp87_;
		gboolean _tmp88_;
		gboolean _tmp89_;
		_tmp86_ = vala_variable_get_initializer ((ValaVariable*) self);
		_tmp87_ = _tmp86_;
		_tmp88_ = vala_code_node_get_error ((ValaCodeNode*) _tmp87_);
		_tmp89_ = _tmp88_;
		_tmp83_ = !_tmp89_;
	} else {
		_tmp83_ = FALSE;
	}
	if (_tmp83_) {
		gboolean _tmp90_ = FALSE;
		gboolean _tmp91_ = FALSE;
		ValaExpression* _tmp92_;
		ValaExpression* _tmp93_;
		_tmp92_ = vala_variable_get_initializer ((ValaVariable*) self);
		_tmp93_ = _tmp92_;
		if (VALA_IS_NULL_LITERAL (_tmp93_)) {
			ValaDataType* _tmp94_;
			ValaDataType* _tmp95_;
			gboolean _tmp96_;
			gboolean _tmp97_;
			_tmp94_ = vala_variable_get_variable_type ((ValaVariable*) self);
			_tmp95_ = _tmp94_;
			_tmp96_ = vala_data_type_get_nullable (_tmp95_);
			_tmp97_ = _tmp96_;
			_tmp91_ = !_tmp97_;
		} else {
			_tmp91_ = FALSE;
		}
		if (_tmp91_) {
			ValaParameterDirection _tmp98_;
			_tmp98_ = self->priv->_direction;
			_tmp90_ = _tmp98_ != VALA_PARAMETER_DIRECTION_OUT;
		} else {
			_tmp90_ = FALSE;
		}
		if (_tmp90_) {
			ValaSourceReference* _tmp99_;
			ValaSourceReference* _tmp100_;
			ValaDataType* _tmp101_;
			ValaDataType* _tmp102_;
			gchar* _tmp103_;
			gchar* _tmp104_;
			gchar* _tmp105_;
			gchar* _tmp106_;
			_tmp99_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp100_ = _tmp99_;
			_tmp101_ = vala_variable_get_variable_type ((ValaVariable*) self);
			_tmp102_ = _tmp101_;
			_tmp103_ = vala_code_node_to_string ((ValaCodeNode*) _tmp102_);
			_tmp104_ = _tmp103_;
			_tmp105_ = g_strdup_printf ("`null' incompatible with parameter type `%s'", _tmp104_);
			_tmp106_ = _tmp105_;
			vala_report_warning (_tmp100_, _tmp106_);
			_g_free0 (_tmp106_);
			_g_free0 (_tmp104_);
		} else {
			gboolean _tmp107_ = FALSE;
			ValaExpression* _tmp108_;
			ValaExpression* _tmp109_;
			_tmp108_ = vala_variable_get_initializer ((ValaVariable*) self);
			_tmp109_ = _tmp108_;
			if (!VALA_IS_NULL_LITERAL (_tmp109_)) {
				ValaParameterDirection _tmp110_;
				_tmp110_ = self->priv->_direction;
				_tmp107_ = _tmp110_ == VALA_PARAMETER_DIRECTION_OUT;
			} else {
				_tmp107_ = FALSE;
			}
			if (_tmp107_) {
				ValaSourceReference* _tmp111_;
				ValaSourceReference* _tmp112_;
				vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
				_tmp111_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
				_tmp112_ = _tmp111_;
				vala_report_error (_tmp112_, "only `null' is allowed as default value for out parameters");
			} else {
				gboolean _tmp113_ = FALSE;
				ValaParameterDirection _tmp114_;
				_tmp114_ = self->priv->_direction;
				if (_tmp114_ == VALA_PARAMETER_DIRECTION_IN) {
					ValaExpression* _tmp115_;
					ValaExpression* _tmp116_;
					ValaDataType* _tmp117_;
					ValaDataType* _tmp118_;
					ValaDataType* _tmp119_;
					ValaDataType* _tmp120_;
					_tmp115_ = vala_variable_get_initializer ((ValaVariable*) self);
					_tmp116_ = _tmp115_;
					_tmp117_ = vala_expression_get_value_type (_tmp116_);
					_tmp118_ = _tmp117_;
					_tmp119_ = vala_variable_get_variable_type ((ValaVariable*) self);
					_tmp120_ = _tmp119_;
					_tmp113_ = !vala_data_type_compatible (_tmp118_, _tmp120_);
				} else {
					_tmp113_ = FALSE;
				}
				if (_tmp113_) {
					ValaExpression* _tmp121_;
					ValaExpression* _tmp122_;
					ValaSourceReference* _tmp123_;
					ValaSourceReference* _tmp124_;
					ValaExpression* _tmp125_;
					ValaExpression* _tmp126_;
					ValaDataType* _tmp127_;
					ValaDataType* _tmp128_;
					gchar* _tmp129_;
					gchar* _tmp130_;
					ValaDataType* _tmp131_;
					ValaDataType* _tmp132_;
					gchar* _tmp133_;
					gchar* _tmp134_;
					gchar* _tmp135_;
					gchar* _tmp136_;
					vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
					_tmp121_ = vala_variable_get_initializer ((ValaVariable*) self);
					_tmp122_ = _tmp121_;
					_tmp123_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp122_);
					_tmp124_ = _tmp123_;
					_tmp125_ = vala_variable_get_initializer ((ValaVariable*) self);
					_tmp126_ = _tmp125_;
					_tmp127_ = vala_expression_get_value_type (_tmp126_);
					_tmp128_ = _tmp127_;
					_tmp129_ = vala_code_node_to_string ((ValaCodeNode*) _tmp128_);
					_tmp130_ = _tmp129_;
					_tmp131_ = vala_variable_get_variable_type ((ValaVariable*) self);
					_tmp132_ = _tmp131_;
					_tmp133_ = vala_code_node_to_string ((ValaCodeNode*) _tmp132_);
					_tmp134_ = _tmp133_;
					_tmp135_ = g_strdup_printf ("Cannot convert from `%s' to `%s'", _tmp130_, _tmp134_);
					_tmp136_ = _tmp135_;
					vala_report_error (_tmp124_, _tmp136_);
					_g_free0 (_tmp136_);
					_g_free0 (_tmp134_);
					_g_free0 (_tmp130_);
				} else {
					ValaParameterDirection _tmp137_;
					_tmp137_ = self->priv->_direction;
					if (_tmp137_ == VALA_PARAMETER_DIRECTION_REF) {
						ValaSourceReference* _tmp138_;
						ValaSourceReference* _tmp139_;
						vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
						_tmp138_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
						_tmp139_ = _tmp138_;
						vala_report_error (_tmp139_, "default value not allowed for ref parameter");
					} else {
						ValaExpression* _tmp140_;
						ValaExpression* _tmp141_;
						_tmp140_ = vala_variable_get_initializer ((ValaVariable*) self);
						_tmp141_ = _tmp140_;
						if (!vala_expression_is_accessible (_tmp141_, (ValaSymbol*) self)) {
							ValaExpression* _tmp142_;
							ValaExpression* _tmp143_;
							ValaSourceReference* _tmp144_;
							ValaSourceReference* _tmp145_;
							ValaSymbol* _tmp146_;
							ValaSymbol* _tmp147_;
							gchar* _tmp148_;
							gchar* _tmp149_;
							gchar* _tmp150_;
							gchar* _tmp151_;
							vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
							_tmp142_ = vala_variable_get_initializer ((ValaVariable*) self);
							_tmp143_ = _tmp142_;
							_tmp144_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp143_);
							_tmp145_ = _tmp144_;
							_tmp146_ = vala_symbol_get_parent_symbol ((ValaSymbol*) self);
							_tmp147_ = _tmp146_;
							_tmp148_ = vala_symbol_get_full_name (_tmp147_);
							_tmp149_ = _tmp148_;
							_tmp150_ = g_strdup_printf ("default value is less accessible than method `%s'", _tmp149_);
							_tmp151_ = _tmp150_;
							vala_report_error (_tmp145_, _tmp151_);
							_g_free0 (_tmp151_);
							_g_free0 (_tmp149_);
						}
					}
				}
			}
		}
	}
	_tmp152_ = self->priv->_ellipsis;
	if (!_tmp152_) {
		gboolean _tmp153_;
		gboolean _tmp154_;
		ValaSemanticAnalyzer* _tmp179_;
		ValaSemanticAnalyzer* _tmp180_;
		ValaDataType* _tmp181_;
		ValaDataType* _tmp182_;
		_tmp153_ = vala_symbol_get_external_package ((ValaSymbol*) self);
		_tmp154_ = _tmp153_;
		if (!_tmp154_) {
			ValaSemanticAnalyzer* _tmp155_;
			ValaSemanticAnalyzer* _tmp156_;
			ValaDataType* _tmp157_;
			ValaDataType* _tmp158_;
			gboolean _tmp159_ = FALSE;
			gboolean _tmp160_ = FALSE;
			ValaSymbol* _tmp161_;
			ValaSymbol* _tmp162_;
			_tmp155_ = vala_code_context_get_analyzer (context);
			_tmp156_ = _tmp155_;
			_tmp157_ = vala_variable_get_variable_type ((ValaVariable*) self);
			_tmp158_ = _tmp157_;
			vala_semantic_analyzer_check_type (_tmp156_, _tmp158_);
			_tmp161_ = vala_symbol_get_parent_symbol ((ValaSymbol*) self);
			_tmp162_ = _tmp161_;
			if (_tmp162_ == NULL) {
				_tmp160_ = TRUE;
			} else {
				ValaSymbol* _tmp163_;
				ValaSymbol* _tmp164_;
				gboolean _tmp165_;
				gboolean _tmp166_;
				_tmp163_ = vala_symbol_get_parent_symbol ((ValaSymbol*) self);
				_tmp164_ = _tmp163_;
				_tmp165_ = vala_symbol_get_external_package (_tmp164_);
				_tmp166_ = _tmp165_;
				_tmp160_ = !_tmp166_;
			}
			if (_tmp160_) {
				ValaDataType* _tmp167_;
				ValaDataType* _tmp168_;
				ValaTypeSymbol* _tmp169_;
				ValaTypeSymbol* _tmp170_;
				_tmp167_ = vala_variable_get_variable_type ((ValaVariable*) self);
				_tmp168_ = _tmp167_;
				_tmp169_ = vala_data_type_get_type_symbol (_tmp168_);
				_tmp170_ = _tmp169_;
				_tmp159_ = _tmp170_ != NULL;
			} else {
				_tmp159_ = FALSE;
			}
			if (_tmp159_) {
				ValaDataType* _tmp171_;
				ValaDataType* _tmp172_;
				ValaTypeSymbol* _tmp173_;
				ValaTypeSymbol* _tmp174_;
				ValaVersionAttribute* _tmp175_;
				ValaVersionAttribute* _tmp176_;
				ValaSourceReference* _tmp177_;
				ValaSourceReference* _tmp178_;
				_tmp171_ = vala_variable_get_variable_type ((ValaVariable*) self);
				_tmp172_ = _tmp171_;
				_tmp173_ = vala_data_type_get_type_symbol (_tmp172_);
				_tmp174_ = _tmp173_;
				_tmp175_ = vala_symbol_get_version ((ValaSymbol*) _tmp174_);
				_tmp176_ = _tmp175_;
				_tmp177_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
				_tmp178_ = _tmp177_;
				vala_version_attribute_check (_tmp176_, _tmp178_);
			}
		}
		_tmp179_ = vala_code_context_get_analyzer (context);
		_tmp180_ = _tmp179_;
		_tmp181_ = vala_variable_get_variable_type ((ValaVariable*) self);
		_tmp182_ = _tmp181_;
		if (!vala_semantic_analyzer_is_type_accessible (_tmp180_, (ValaSymbol*) self, _tmp182_)) {
			ValaSourceReference* _tmp183_;
			ValaSourceReference* _tmp184_;
			ValaDataType* _tmp185_;
			ValaDataType* _tmp186_;
			gchar* _tmp187_;
			gchar* _tmp188_;
			ValaSymbol* _tmp189_;
			ValaSymbol* _tmp190_;
			gchar* _tmp191_;
			gchar* _tmp192_;
			gchar* _tmp193_;
			gchar* _tmp194_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			_tmp183_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp184_ = _tmp183_;
			_tmp185_ = vala_variable_get_variable_type ((ValaVariable*) self);
			_tmp186_ = _tmp185_;
			_tmp187_ = vala_code_node_to_string ((ValaCodeNode*) _tmp186_);
			_tmp188_ = _tmp187_;
			_tmp189_ = vala_symbol_get_parent_symbol ((ValaSymbol*) self);
			_tmp190_ = _tmp189_;
			_tmp191_ = vala_symbol_get_full_name (_tmp190_);
			_tmp192_ = _tmp191_;
			_tmp193_ = g_strdup_printf ("parameter type `%s' is less accessible than method `%s'", _tmp188_, _tmp192_);
			_tmp194_ = _tmp193_;
			vala_report_error (_tmp184_, _tmp194_);
			_g_free0 (_tmp194_);
			_g_free0 (_tmp192_);
			_g_free0 (_tmp188_);
		}
	}
	_tmp195_ = vala_symbol_get_parent_symbol ((ValaSymbol*) self);
	_tmp196_ = _tmp195_;
	m = VALA_IS_METHOD (_tmp196_) ? ((ValaMethod*) _tmp196_) : NULL;
	_tmp197_ = m;
	if (_tmp197_ != NULL) {
		ValaMethod* base_method = NULL;
		gboolean _tmp198_ = FALSE;
		ValaMethod* _tmp199_;
		ValaMethod* _tmp200_;
		ValaMethod* _tmp201_;
		ValaMethod* _tmp220_;
		base_method = NULL;
		_tmp199_ = m;
		_tmp200_ = vala_method_get_base_method (_tmp199_);
		_tmp201_ = _tmp200_;
		if (_tmp201_ != NULL) {
			ValaMethod* _tmp202_;
			ValaMethod* _tmp203_;
			ValaMethod* _tmp204_;
			ValaMethod* _tmp205_;
			_tmp202_ = m;
			_tmp203_ = vala_method_get_base_method (_tmp202_);
			_tmp204_ = _tmp203_;
			_tmp205_ = m;
			_tmp198_ = _tmp204_ != _tmp205_;
		} else {
			_tmp198_ = FALSE;
		}
		if (_tmp198_) {
			ValaMethod* _tmp206_;
			ValaMethod* _tmp207_;
			ValaMethod* _tmp208_;
			_tmp206_ = m;
			_tmp207_ = vala_method_get_base_method (_tmp206_);
			_tmp208_ = _tmp207_;
			base_method = _tmp208_;
		} else {
			gboolean _tmp209_ = FALSE;
			ValaMethod* _tmp210_;
			ValaMethod* _tmp211_;
			ValaMethod* _tmp212_;
			_tmp210_ = m;
			_tmp211_ = vala_method_get_base_interface_method (_tmp210_);
			_tmp212_ = _tmp211_;
			if (_tmp212_ != NULL) {
				ValaMethod* _tmp213_;
				ValaMethod* _tmp214_;
				ValaMethod* _tmp215_;
				ValaMethod* _tmp216_;
				_tmp213_ = m;
				_tmp214_ = vala_method_get_base_interface_method (_tmp213_);
				_tmp215_ = _tmp214_;
				_tmp216_ = m;
				_tmp209_ = _tmp215_ != _tmp216_;
			} else {
				_tmp209_ = FALSE;
			}
			if (_tmp209_) {
				ValaMethod* _tmp217_;
				ValaMethod* _tmp218_;
				ValaMethod* _tmp219_;
				_tmp217_ = m;
				_tmp218_ = vala_method_get_base_interface_method (_tmp217_);
				_tmp219_ = _tmp218_;
				base_method = _tmp219_;
			}
		}
		_tmp220_ = base_method;
		if (_tmp220_ != NULL) {
			gint index = 0;
			ValaMethod* _tmp221_;
			ValaList* _tmp222_;
			_tmp221_ = m;
			_tmp222_ = vala_callable_get_parameters ((ValaCallable*) _tmp221_);
			index = vala_list_index_of (_tmp222_, self);
			if (index >= 0) {
				ValaMethod* _tmp223_;
				ValaList* _tmp224_;
				gpointer _tmp225_;
				ValaParameter* _tmp226_;
				_tmp223_ = base_method;
				_tmp224_ = vala_callable_get_parameters ((ValaCallable*) _tmp223_);
				_tmp225_ = vala_list_get (_tmp224_, index);
				_tmp226_ = (ValaParameter*) _tmp225_;
				vala_parameter_set_base_parameter (self, _tmp226_);
				_vala_code_node_unref0 (_tmp226_);
			}
		}
	}
	_tmp227_ = vala_code_context_get_analyzer (context);
	_tmp228_ = _tmp227_;
	_tmp229_ = old_source_file;
	vala_semantic_analyzer_set_current_source_file (_tmp228_, _tmp229_);
	_tmp230_ = vala_code_context_get_analyzer (context);
	_tmp231_ = _tmp230_;
	_tmp232_ = old_symbol;
	vala_semantic_analyzer_set_current_symbol (_tmp231_, _tmp232_);
	_tmp233_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp234_ = _tmp233_;
	result = !_tmp234_;
	_vala_code_node_unref0 (old_symbol);
	_vala_source_file_unref0 (old_source_file);
	return result;
}

static void
vala_parameter_class_init (ValaParameterClass * klass,
                           gpointer klass_data)
{
	vala_parameter_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_parameter_finalize;
	g_type_class_adjust_private_offset (klass, &ValaParameter_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_parameter_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_parameter_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_type = (void (*) (ValaCodeNode*, ValaDataType*, ValaDataType*)) vala_parameter_real_replace_type;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_parameter_real_replace_expression;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_parameter_real_check;
}

static void
vala_parameter_instance_init (ValaParameter * self,
                              gpointer klass)
{
	self->priv = vala_parameter_get_instance_private (self);
	self->priv->_direction = VALA_PARAMETER_DIRECTION_IN;
}

static void
vala_parameter_finalize (ValaCodeNode * obj)
{
	ValaParameter * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_PARAMETER, ValaParameter);
	_vala_code_node_unref0 (self->priv->_base_parameter);
	VALA_CODE_NODE_CLASS (vala_parameter_parent_class)->finalize (obj);
}

/**
 * Represents a formal parameter in method and callback signatures.
 */
static GType
vala_parameter_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaParameterClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_parameter_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaParameter), 0, (GInstanceInitFunc) vala_parameter_instance_init, NULL };
	GType vala_parameter_type_id;
	vala_parameter_type_id = g_type_register_static (VALA_TYPE_VARIABLE, "ValaParameter", &g_define_type_info, 0);
	ValaParameter_private_offset = g_type_add_instance_private (vala_parameter_type_id, sizeof (ValaParameterPrivate));
	return vala_parameter_type_id;
}

GType
vala_parameter_get_type (void)
{
	static volatile gsize vala_parameter_type_id__volatile = 0;
	if (g_once_init_enter (&vala_parameter_type_id__volatile)) {
		GType vala_parameter_type_id;
		vala_parameter_type_id = vala_parameter_get_type_once ();
		g_once_init_leave (&vala_parameter_type_id__volatile, vala_parameter_type_id);
	}
	return vala_parameter_type_id__volatile;
}

static GType
vala_parameter_direction_get_type_once (void)
{
	static const GEnumValue values[] = {{VALA_PARAMETER_DIRECTION_IN, "VALA_PARAMETER_DIRECTION_IN", "in"}, {VALA_PARAMETER_DIRECTION_OUT, "VALA_PARAMETER_DIRECTION_OUT", "out"}, {VALA_PARAMETER_DIRECTION_REF, "VALA_PARAMETER_DIRECTION_REF", "ref"}, {0, NULL, NULL}};
	GType vala_parameter_direction_type_id;
	vala_parameter_direction_type_id = g_enum_register_static ("ValaParameterDirection", values);
	return vala_parameter_direction_type_id;
}

GType
vala_parameter_direction_get_type (void)
{
	static volatile gsize vala_parameter_direction_type_id__volatile = 0;
	if (g_once_init_enter (&vala_parameter_direction_type_id__volatile)) {
		GType vala_parameter_direction_type_id;
		vala_parameter_direction_type_id = vala_parameter_direction_get_type_once ();
		g_once_init_leave (&vala_parameter_direction_type_id__volatile, vala_parameter_direction_type_id);
	}
	return vala_parameter_direction_type_id__volatile;
}

