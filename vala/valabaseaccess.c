/* valabaseaccess.c generated by valac, the Vala compiler
 * generated from valabaseaccess.vala, do not modify */

/* valabaseaccess.vala
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

#include "vala.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <valagee.h>
#include <glib-object.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

static gpointer vala_base_access_parent_class = NULL;

static void vala_base_access_real_accept (ValaCodeNode* base,
                                   ValaCodeVisitor* visitor);
static gchar* vala_base_access_real_to_string (ValaCodeNode* base);
static gboolean vala_base_access_real_is_pure (ValaExpression* base);
static gboolean vala_base_access_real_check (ValaCodeNode* base,
                                      ValaCodeContext* context);
static void vala_base_access_real_emit (ValaCodeNode* base,
                                 ValaCodeGenerator* codegen);
static GType vala_base_access_get_type_once (void);

/**
 * Creates a new base access expression.
 *
 * @param source reference to source code
 * @return       newly created base access expression
 */
ValaBaseAccess*
vala_base_access_construct (GType object_type,
                            ValaSourceReference* source)
{
	ValaBaseAccess* self = NULL;
	self = (ValaBaseAccess*) vala_expression_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}

ValaBaseAccess*
vala_base_access_new (ValaSourceReference* source)
{
	return vala_base_access_construct (VALA_TYPE_BASE_ACCESS, source);
}

static void
vala_base_access_real_accept (ValaCodeNode* base,
                              ValaCodeVisitor* visitor)
{
	ValaBaseAccess * self;
	self = (ValaBaseAccess*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_base_access (visitor, self);
	vala_code_visitor_visit_expression (visitor, (ValaExpression*) self);
}

static gchar*
vala_base_access_real_to_string (ValaCodeNode* base)
{
	ValaBaseAccess * self;
	gchar* _tmp0_;
	gchar* result = NULL;
	self = (ValaBaseAccess*) base;
	_tmp0_ = g_strdup ("base");
	result = _tmp0_;
	return result;
}

static gboolean
vala_base_access_real_is_pure (ValaExpression* base)
{
	ValaBaseAccess * self;
	gboolean result = FALSE;
	self = (ValaBaseAccess*) base;
	result = TRUE;
	return result;
}

static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

static gboolean
vala_base_access_real_check (ValaCodeNode* base,
                             ValaCodeContext* context)
{
	ValaBaseAccess * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaSemanticAnalyzer* _tmp4_;
	ValaSemanticAnalyzer* _tmp5_;
	ValaSemanticAnalyzer* _tmp8_;
	ValaSemanticAnalyzer* _tmp9_;
	ValaClass* _tmp10_;
	ValaClass* _tmp11_;
	ValaDataType* _tmp124_;
	ValaDataType* _tmp125_;
	ValaTypeSymbol* _tmp126_;
	ValaTypeSymbol* _tmp127_;
	gboolean _tmp128_;
	gboolean _tmp129_;
	gboolean result = FALSE;
	self = (ValaBaseAccess*) base;
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
	if (!vala_semantic_analyzer_is_in_instance_method (_tmp5_)) {
		ValaSourceReference* _tmp6_;
		ValaSourceReference* _tmp7_;
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		_tmp6_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp7_ = _tmp6_;
		vala_report_error (_tmp7_, "Base access invalid outside of instance methods");
		result = FALSE;
		return result;
	}
	_tmp8_ = vala_code_context_get_analyzer (context);
	_tmp9_ = _tmp8_;
	_tmp10_ = vala_semantic_analyzer_get_current_class (_tmp9_);
	_tmp11_ = _tmp10_;
	if (_tmp11_ == NULL) {
		ValaSemanticAnalyzer* _tmp12_;
		ValaSemanticAnalyzer* _tmp13_;
		ValaStruct* _tmp14_;
		ValaStruct* _tmp15_;
		ValaSemanticAnalyzer* _tmp26_;
		ValaSemanticAnalyzer* _tmp27_;
		ValaStruct* _tmp28_;
		ValaStruct* _tmp29_;
		ValaDataType* _tmp30_;
		ValaDataType* _tmp31_;
		_tmp12_ = vala_code_context_get_analyzer (context);
		_tmp13_ = _tmp12_;
		_tmp14_ = vala_semantic_analyzer_get_current_struct (_tmp13_);
		_tmp15_ = _tmp14_;
		if (_tmp15_ == NULL) {
			ValaSourceReference* _tmp16_;
			ValaSourceReference* _tmp17_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			_tmp16_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp17_ = _tmp16_;
			vala_report_error (_tmp17_, "Base access invalid outside of class and struct");
			result = FALSE;
			return result;
		} else {
			ValaSemanticAnalyzer* _tmp18_;
			ValaSemanticAnalyzer* _tmp19_;
			ValaStruct* _tmp20_;
			ValaStruct* _tmp21_;
			ValaDataType* _tmp22_;
			ValaDataType* _tmp23_;
			_tmp18_ = vala_code_context_get_analyzer (context);
			_tmp19_ = _tmp18_;
			_tmp20_ = vala_semantic_analyzer_get_current_struct (_tmp19_);
			_tmp21_ = _tmp20_;
			_tmp22_ = vala_struct_get_base_type (_tmp21_);
			_tmp23_ = _tmp22_;
			if (_tmp23_ == NULL) {
				ValaSourceReference* _tmp24_;
				ValaSourceReference* _tmp25_;
				vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
				_tmp24_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
				_tmp25_ = _tmp24_;
				vala_report_error (_tmp25_, "Base access invalid without base type");
				result = FALSE;
				return result;
			}
		}
		_tmp26_ = vala_code_context_get_analyzer (context);
		_tmp27_ = _tmp26_;
		_tmp28_ = vala_semantic_analyzer_get_current_struct (_tmp27_);
		_tmp29_ = _tmp28_;
		_tmp30_ = vala_struct_get_base_type (_tmp29_);
		_tmp31_ = _tmp30_;
		vala_expression_set_value_type ((ValaExpression*) self, _tmp31_);
	} else {
		ValaSemanticAnalyzer* _tmp32_;
		ValaSemanticAnalyzer* _tmp33_;
		ValaClass* _tmp34_;
		ValaClass* _tmp35_;
		ValaClass* _tmp36_;
		ValaClass* _tmp37_;
		_tmp32_ = vala_code_context_get_analyzer (context);
		_tmp33_ = _tmp32_;
		_tmp34_ = vala_semantic_analyzer_get_current_class (_tmp33_);
		_tmp35_ = _tmp34_;
		_tmp36_ = vala_class_get_base_class (_tmp35_);
		_tmp37_ = _tmp36_;
		if (_tmp37_ == NULL) {
			ValaSourceReference* _tmp38_;
			ValaSourceReference* _tmp39_;
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
			_tmp38_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp39_ = _tmp38_;
			vala_report_error (_tmp39_, "Base access invalid without base class");
			result = FALSE;
			return result;
		} else {
			gboolean _tmp40_ = FALSE;
			gboolean _tmp41_ = FALSE;
			gboolean _tmp42_ = FALSE;
			ValaSemanticAnalyzer* _tmp43_;
			ValaSemanticAnalyzer* _tmp44_;
			ValaClass* _tmp45_;
			ValaClass* _tmp46_;
			gboolean _tmp47_;
			gboolean _tmp48_;
			_tmp43_ = vala_code_context_get_analyzer (context);
			_tmp44_ = _tmp43_;
			_tmp45_ = vala_semantic_analyzer_get_current_class (_tmp44_);
			_tmp46_ = _tmp45_;
			_tmp47_ = vala_class_get_is_compact (_tmp46_);
			_tmp48_ = _tmp47_;
			if (_tmp48_) {
				ValaSemanticAnalyzer* _tmp49_;
				ValaSemanticAnalyzer* _tmp50_;
				ValaMethod* _tmp51_;
				ValaMethod* _tmp52_;
				_tmp49_ = vala_code_context_get_analyzer (context);
				_tmp50_ = _tmp49_;
				_tmp51_ = vala_semantic_analyzer_get_current_method (_tmp50_);
				_tmp52_ = _tmp51_;
				_tmp42_ = _tmp52_ != NULL;
			} else {
				_tmp42_ = FALSE;
			}
			if (_tmp42_) {
				ValaSemanticAnalyzer* _tmp53_;
				ValaSemanticAnalyzer* _tmp54_;
				ValaMethod* _tmp55_;
				ValaMethod* _tmp56_;
				_tmp53_ = vala_code_context_get_analyzer (context);
				_tmp54_ = _tmp53_;
				_tmp55_ = vala_semantic_analyzer_get_current_method (_tmp54_);
				_tmp56_ = _tmp55_;
				_tmp41_ = !VALA_IS_CREATION_METHOD (_tmp56_);
			} else {
				_tmp41_ = FALSE;
			}
			if (_tmp41_) {
				gboolean _tmp57_ = FALSE;
				ValaSemanticAnalyzer* _tmp58_;
				ValaSemanticAnalyzer* _tmp59_;
				ValaMethod* _tmp60_;
				ValaMethod* _tmp61_;
				gboolean _tmp62_;
				gboolean _tmp63_;
				_tmp58_ = vala_code_context_get_analyzer (context);
				_tmp59_ = _tmp58_;
				_tmp60_ = vala_semantic_analyzer_get_current_method (_tmp59_);
				_tmp61_ = _tmp60_;
				_tmp62_ = vala_method_get_overrides (_tmp61_);
				_tmp63_ = _tmp62_;
				if (_tmp63_) {
					_tmp57_ = TRUE;
				} else {
					ValaSemanticAnalyzer* _tmp64_;
					ValaSemanticAnalyzer* _tmp65_;
					ValaMethod* _tmp66_;
					ValaMethod* _tmp67_;
					gboolean _tmp68_;
					gboolean _tmp69_;
					_tmp64_ = vala_code_context_get_analyzer (context);
					_tmp65_ = _tmp64_;
					_tmp66_ = vala_semantic_analyzer_get_current_method (_tmp65_);
					_tmp67_ = _tmp66_;
					_tmp68_ = vala_method_get_is_virtual (_tmp67_);
					_tmp69_ = _tmp68_;
					_tmp57_ = _tmp69_;
				}
				_tmp40_ = _tmp57_;
			} else {
				_tmp40_ = FALSE;
			}
			if (_tmp40_) {
				ValaSourceReference* _tmp70_;
				ValaSourceReference* _tmp71_;
				vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
				_tmp70_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
				_tmp71_ = _tmp70_;
				vala_report_error (_tmp71_, "Base access invalid in virtual overridden method of compact class");
				result = FALSE;
				return result;
			} else {
				gboolean _tmp72_ = FALSE;
				gboolean _tmp73_ = FALSE;
				ValaSemanticAnalyzer* _tmp74_;
				ValaSemanticAnalyzer* _tmp75_;
				ValaClass* _tmp76_;
				ValaClass* _tmp77_;
				gboolean _tmp78_;
				gboolean _tmp79_;
				_tmp74_ = vala_code_context_get_analyzer (context);
				_tmp75_ = _tmp74_;
				_tmp76_ = vala_semantic_analyzer_get_current_class (_tmp75_);
				_tmp77_ = _tmp76_;
				_tmp78_ = vala_class_get_is_compact (_tmp77_);
				_tmp79_ = _tmp78_;
				if (_tmp79_) {
					ValaSemanticAnalyzer* _tmp80_;
					ValaSemanticAnalyzer* _tmp81_;
					ValaPropertyAccessor* _tmp82_;
					ValaPropertyAccessor* _tmp83_;
					_tmp80_ = vala_code_context_get_analyzer (context);
					_tmp81_ = _tmp80_;
					_tmp82_ = vala_semantic_analyzer_get_current_property_accessor (_tmp81_);
					_tmp83_ = _tmp82_;
					_tmp73_ = _tmp83_ != NULL;
				} else {
					_tmp73_ = FALSE;
				}
				if (_tmp73_) {
					gboolean _tmp84_ = FALSE;
					ValaSemanticAnalyzer* _tmp85_;
					ValaSemanticAnalyzer* _tmp86_;
					ValaPropertyAccessor* _tmp87_;
					ValaPropertyAccessor* _tmp88_;
					ValaProperty* _tmp89_;
					ValaProperty* _tmp90_;
					gboolean _tmp91_;
					gboolean _tmp92_;
					_tmp85_ = vala_code_context_get_analyzer (context);
					_tmp86_ = _tmp85_;
					_tmp87_ = vala_semantic_analyzer_get_current_property_accessor (_tmp86_);
					_tmp88_ = _tmp87_;
					_tmp89_ = vala_property_accessor_get_prop (_tmp88_);
					_tmp90_ = _tmp89_;
					_tmp91_ = vala_property_get_overrides (_tmp90_);
					_tmp92_ = _tmp91_;
					if (_tmp92_) {
						_tmp84_ = TRUE;
					} else {
						ValaSemanticAnalyzer* _tmp93_;
						ValaSemanticAnalyzer* _tmp94_;
						ValaPropertyAccessor* _tmp95_;
						ValaPropertyAccessor* _tmp96_;
						ValaProperty* _tmp97_;
						ValaProperty* _tmp98_;
						gboolean _tmp99_;
						gboolean _tmp100_;
						_tmp93_ = vala_code_context_get_analyzer (context);
						_tmp94_ = _tmp93_;
						_tmp95_ = vala_semantic_analyzer_get_current_property_accessor (_tmp94_);
						_tmp96_ = _tmp95_;
						_tmp97_ = vala_property_accessor_get_prop (_tmp96_);
						_tmp98_ = _tmp97_;
						_tmp99_ = vala_property_get_is_virtual (_tmp98_);
						_tmp100_ = _tmp99_;
						_tmp84_ = _tmp100_;
					}
					_tmp72_ = _tmp84_;
				} else {
					_tmp72_ = FALSE;
				}
				if (_tmp72_) {
					ValaSourceReference* _tmp101_;
					ValaSourceReference* _tmp102_;
					vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
					_tmp101_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
					_tmp102_ = _tmp101_;
					vala_report_error (_tmp102_, "Base access invalid in virtual overridden property of compact class");
					result = FALSE;
					return result;
				} else {
					{
						ValaList* _base_type_list = NULL;
						ValaSemanticAnalyzer* _tmp103_;
						ValaSemanticAnalyzer* _tmp104_;
						ValaClass* _tmp105_;
						ValaClass* _tmp106_;
						ValaList* _tmp107_;
						ValaList* _tmp108_;
						gint _base_type_size = 0;
						ValaList* _tmp109_;
						gint _tmp110_;
						gint _tmp111_;
						gint _base_type_index = 0;
						_tmp103_ = vala_code_context_get_analyzer (context);
						_tmp104_ = _tmp103_;
						_tmp105_ = vala_semantic_analyzer_get_current_class (_tmp104_);
						_tmp106_ = _tmp105_;
						_tmp107_ = vala_class_get_base_types (_tmp106_);
						_tmp108_ = _vala_iterable_ref0 (_tmp107_);
						_base_type_list = _tmp108_;
						_tmp109_ = _base_type_list;
						_tmp110_ = vala_collection_get_size ((ValaCollection*) _tmp109_);
						_tmp111_ = _tmp110_;
						_base_type_size = _tmp111_;
						_base_type_index = -1;
						while (TRUE) {
							gint _tmp112_;
							gint _tmp113_;
							ValaDataType* base_type = NULL;
							ValaList* _tmp114_;
							gpointer _tmp115_;
							ValaDataType* _tmp116_;
							ValaTypeSymbol* _tmp117_;
							ValaTypeSymbol* _tmp118_;
							_base_type_index = _base_type_index + 1;
							_tmp112_ = _base_type_index;
							_tmp113_ = _base_type_size;
							if (!(_tmp112_ < _tmp113_)) {
								break;
							}
							_tmp114_ = _base_type_list;
							_tmp115_ = vala_list_get (_tmp114_, _base_type_index);
							base_type = (ValaDataType*) _tmp115_;
							_tmp116_ = base_type;
							_tmp117_ = vala_data_type_get_type_symbol (_tmp116_);
							_tmp118_ = _tmp117_;
							if (VALA_IS_CLASS (_tmp118_)) {
								ValaDataType* _tmp119_;
								ValaDataType* _tmp120_;
								ValaDataType* _tmp121_;
								ValaDataType* _tmp122_;
								ValaDataType* _tmp123_;
								_tmp119_ = base_type;
								_tmp120_ = vala_data_type_copy (_tmp119_);
								_tmp121_ = _tmp120_;
								vala_expression_set_value_type ((ValaExpression*) self, _tmp121_);
								_vala_code_node_unref0 (_tmp121_);
								_tmp122_ = vala_expression_get_value_type ((ValaExpression*) self);
								_tmp123_ = _tmp122_;
								vala_data_type_set_value_owned (_tmp123_, FALSE);
							}
							_vala_code_node_unref0 (base_type);
						}
						_vala_iterable_unref0 (_base_type_list);
					}
				}
			}
		}
	}
	_tmp124_ = vala_expression_get_value_type ((ValaExpression*) self);
	_tmp125_ = _tmp124_;
	_tmp126_ = vala_data_type_get_type_symbol (_tmp125_);
	_tmp127_ = _tmp126_;
	vala_expression_set_symbol_reference ((ValaExpression*) self, (ValaSymbol*) _tmp127_);
	_tmp128_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp129_ = _tmp128_;
	result = !_tmp129_;
	return result;
}

static void
vala_base_access_real_emit (ValaCodeNode* base,
                            ValaCodeGenerator* codegen)
{
	ValaBaseAccess * self;
	self = (ValaBaseAccess*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_base_access ((ValaCodeVisitor*) codegen, self);
	vala_code_visitor_visit_expression ((ValaCodeVisitor*) codegen, (ValaExpression*) self);
}

static void
vala_base_access_class_init (ValaBaseAccessClass * klass,
                             gpointer klass_data)
{
	vala_base_access_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_base_access_real_accept;
	((ValaCodeNodeClass *) klass)->to_string = (gchar* (*) (ValaCodeNode*)) vala_base_access_real_to_string;
	((ValaExpressionClass *) klass)->is_pure = (gboolean (*) (ValaExpression*)) vala_base_access_real_is_pure;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_base_access_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_base_access_real_emit;
}

static void
vala_base_access_instance_init (ValaBaseAccess * self,
                                gpointer klass)
{
}

/**
 * Represents an access to base type member in the source code.
 */
static GType
vala_base_access_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaBaseAccessClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_base_access_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaBaseAccess), 0, (GInstanceInitFunc) vala_base_access_instance_init, NULL };
	GType vala_base_access_type_id;
	vala_base_access_type_id = g_type_register_static (VALA_TYPE_EXPRESSION, "ValaBaseAccess", &g_define_type_info, 0);
	return vala_base_access_type_id;
}

GType
vala_base_access_get_type (void)
{
	static volatile gsize vala_base_access_type_id__volatile = 0;
	if (g_once_init_enter (&vala_base_access_type_id__volatile)) {
		GType vala_base_access_type_id;
		vala_base_access_type_id = vala_base_access_get_type_once ();
		g_once_init_leave (&vala_base_access_type_id__volatile, vala_base_access_type_id);
	}
	return vala_base_access_type_id__volatile;
}

