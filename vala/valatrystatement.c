/* valatrystatement.c generated by valac, the Vala compiler
 * generated from valatrystatement.vala, do not modify */

/* valatrystatement.vala
 *
 * Copyright (C) 2007-2010  Jürg Billeter
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

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

struct _ValaTryStatementPrivate {
	gboolean _after_try_block_reachable;
	ValaBlock* _body;
	ValaBlock* _finally_body;
	ValaList* catch_clauses;
};


static gint ValaTryStatement_private_offset;
static gpointer vala_try_statement_parent_class = NULL;
static ValaStatementIface * vala_try_statement_vala_statement_parent_iface = NULL;

static void vala_try_statement_real_accept (ValaCodeNode* base,
                                     ValaCodeVisitor* visitor);
static void vala_try_statement_real_accept_children (ValaCodeNode* base,
                                              ValaCodeVisitor* visitor);
static gboolean vala_try_statement_real_check (ValaCodeNode* base,
                                        ValaCodeContext* context);
static void vala_try_statement_real_emit (ValaCodeNode* base,
                                   ValaCodeGenerator* codegen);
static void vala_try_statement_finalize (ValaCodeNode * obj);


static inline gpointer
vala_try_statement_get_instance_private (ValaTryStatement* self)
{
	return G_STRUCT_MEMBER_P (self, ValaTryStatement_private_offset);
}


/**
 * Creates a new try statement.
 *
 * @param body             body of the try statement
 * @param finally_body     body of the optional finally clause
 * @param source_reference reference to source code
 * @return                 newly created try statement
 */
ValaTryStatement*
vala_try_statement_construct (GType object_type,
                              ValaBlock* body,
                              ValaBlock* finally_body,
                              ValaSourceReference* source_reference)
{
	ValaTryStatement* self = NULL;
	g_return_val_if_fail (body != NULL, NULL);
	self = (ValaTryStatement*) vala_code_node_construct (object_type);
	vala_try_statement_set_body (self, body);
	vala_try_statement_set_finally_body (self, finally_body);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}


ValaTryStatement*
vala_try_statement_new (ValaBlock* body,
                        ValaBlock* finally_body,
                        ValaSourceReference* source_reference)
{
	return vala_try_statement_construct (VALA_TYPE_TRY_STATEMENT, body, finally_body, source_reference);
}


/**
 * Appends the specified clause to the list of catch clauses.
 *
 * @param clause a catch clause
 */
void
vala_try_statement_add_catch_clause (ValaTryStatement* self,
                                     ValaCatchClause* clause)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (clause != NULL);
	vala_code_node_set_parent_node ((ValaCodeNode*) clause, (ValaCodeNode*) self);
	_tmp0_ = self->priv->catch_clauses;
	vala_collection_add ((ValaCollection*) _tmp0_, clause);
}


/**
 * Returns a copy of the list of catch clauses.
 *
 * @return list of catch clauses
 */
static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


ValaList*
vala_try_statement_get_catch_clauses (ValaTryStatement* self)
{
	ValaList* result = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->catch_clauses;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static void
vala_try_statement_real_accept (ValaCodeNode* base,
                                ValaCodeVisitor* visitor)
{
	ValaTryStatement * self;
	self = (ValaTryStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_try_statement (visitor, self);
}


static void
vala_try_statement_real_accept_children (ValaCodeNode* base,
                                         ValaCodeVisitor* visitor)
{
	ValaTryStatement * self;
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	ValaBlock* _tmp14_;
	ValaBlock* _tmp15_;
	self = (ValaTryStatement*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_try_statement_get_body (self);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
	{
		ValaList* _clause_list = NULL;
		ValaList* _tmp2_;
		ValaList* _tmp3_;
		gint _clause_size = 0;
		ValaList* _tmp4_;
		gint _tmp5_;
		gint _tmp6_;
		gint _clause_index = 0;
		_tmp2_ = self->priv->catch_clauses;
		_tmp3_ = _vala_iterable_ref0 (_tmp2_);
		_clause_list = _tmp3_;
		_tmp4_ = _clause_list;
		_tmp5_ = vala_collection_get_size ((ValaCollection*) _tmp4_);
		_tmp6_ = _tmp5_;
		_clause_size = _tmp6_;
		_clause_index = -1;
		while (TRUE) {
			gint _tmp7_;
			gint _tmp8_;
			gint _tmp9_;
			ValaCatchClause* clause = NULL;
			ValaList* _tmp10_;
			gint _tmp11_;
			gpointer _tmp12_;
			ValaCatchClause* _tmp13_;
			_tmp7_ = _clause_index;
			_clause_index = _tmp7_ + 1;
			_tmp8_ = _clause_index;
			_tmp9_ = _clause_size;
			if (!(_tmp8_ < _tmp9_)) {
				break;
			}
			_tmp10_ = _clause_list;
			_tmp11_ = _clause_index;
			_tmp12_ = vala_list_get (_tmp10_, _tmp11_);
			clause = (ValaCatchClause*) _tmp12_;
			_tmp13_ = clause;
			vala_code_node_accept ((ValaCodeNode*) _tmp13_, visitor);
			_vala_code_node_unref0 (clause);
		}
		_vala_iterable_unref0 (_clause_list);
	}
	_tmp14_ = vala_try_statement_get_finally_body (self);
	_tmp15_ = _tmp14_;
	if (_tmp15_ != NULL) {
		ValaBlock* _tmp16_;
		ValaBlock* _tmp17_;
		_tmp16_ = vala_try_statement_get_finally_body (self);
		_tmp17_ = _tmp16_;
		vala_code_node_accept ((ValaCodeNode*) _tmp17_, visitor);
	}
}


static gboolean
vala_try_statement_real_check (ValaCodeNode* base,
                               ValaCodeContext* context)
{
	ValaTryStatement * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaProfile _tmp4_;
	ValaProfile _tmp5_;
	ValaBlock* _tmp8_;
	ValaBlock* _tmp9_;
	ValaArrayList* error_types = NULL;
	GEqualFunc _tmp10_;
	ValaArrayList* _tmp11_;
	ValaArrayList* handled_error_types = NULL;
	GEqualFunc _tmp26_;
	ValaArrayList* _tmp27_;
	ValaBlock* _tmp90_;
	ValaBlock* _tmp91_;
	ValaArrayList* _tmp108_;
	gboolean _tmp109_;
	gboolean _tmp110_;
	self = (ValaTryStatement*) base;
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
	_tmp4_ = vala_code_context_get_profile (context);
	_tmp5_ = _tmp4_;
	if (_tmp5_ == VALA_PROFILE_POSIX) {
		ValaSourceReference* _tmp6_;
		ValaSourceReference* _tmp7_;
		_tmp6_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp7_ = _tmp6_;
		vala_report_error (_tmp7_, "`try' is not supported in POSIX profile");
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	_tmp8_ = vala_try_statement_get_body (self);
	_tmp9_ = _tmp8_;
	vala_code_node_check ((ValaCodeNode*) _tmp9_, context);
	_tmp10_ = g_direct_equal;
	_tmp11_ = vala_array_list_new (VALA_TYPE_DATA_TYPE, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp10_);
	error_types = _tmp11_;
	{
		ValaList* _body_error_type_list = NULL;
		ValaBlock* _tmp12_;
		ValaBlock* _tmp13_;
		ValaList* _tmp14_;
		gint _body_error_type_size = 0;
		ValaList* _tmp15_;
		gint _tmp16_;
		gint _tmp17_;
		gint _body_error_type_index = 0;
		_tmp12_ = vala_try_statement_get_body (self);
		_tmp13_ = _tmp12_;
		_tmp14_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp13_);
		_body_error_type_list = _tmp14_;
		_tmp15_ = _body_error_type_list;
		_tmp16_ = vala_collection_get_size ((ValaCollection*) _tmp15_);
		_tmp17_ = _tmp16_;
		_body_error_type_size = _tmp17_;
		_body_error_type_index = -1;
		while (TRUE) {
			gint _tmp18_;
			gint _tmp19_;
			gint _tmp20_;
			ValaDataType* body_error_type = NULL;
			ValaList* _tmp21_;
			gint _tmp22_;
			gpointer _tmp23_;
			ValaArrayList* _tmp24_;
			ValaDataType* _tmp25_;
			_tmp18_ = _body_error_type_index;
			_body_error_type_index = _tmp18_ + 1;
			_tmp19_ = _body_error_type_index;
			_tmp20_ = _body_error_type_size;
			if (!(_tmp19_ < _tmp20_)) {
				break;
			}
			_tmp21_ = _body_error_type_list;
			_tmp22_ = _body_error_type_index;
			_tmp23_ = vala_list_get (_tmp21_, _tmp22_);
			body_error_type = (ValaDataType*) _tmp23_;
			_tmp24_ = error_types;
			_tmp25_ = body_error_type;
			vala_collection_add ((ValaCollection*) _tmp24_, _tmp25_);
			_vala_code_node_unref0 (body_error_type);
		}
		_vala_iterable_unref0 (_body_error_type_list);
	}
	_tmp26_ = g_direct_equal;
	_tmp27_ = vala_array_list_new (VALA_TYPE_DATA_TYPE, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp26_);
	handled_error_types = _tmp27_;
	{
		ValaList* _clause_list = NULL;
		ValaList* _tmp28_;
		ValaList* _tmp29_;
		gint _clause_size = 0;
		ValaList* _tmp30_;
		gint _tmp31_;
		gint _tmp32_;
		gint _clause_index = 0;
		_tmp28_ = self->priv->catch_clauses;
		_tmp29_ = _vala_iterable_ref0 (_tmp28_);
		_clause_list = _tmp29_;
		_tmp30_ = _clause_list;
		_tmp31_ = vala_collection_get_size ((ValaCollection*) _tmp30_);
		_tmp32_ = _tmp31_;
		_clause_size = _tmp32_;
		_clause_index = -1;
		while (TRUE) {
			gint _tmp33_;
			gint _tmp34_;
			gint _tmp35_;
			ValaCatchClause* clause = NULL;
			ValaList* _tmp36_;
			gint _tmp37_;
			gpointer _tmp38_;
			ValaArrayList* _tmp73_;
			ValaCatchClause* _tmp74_;
			_tmp33_ = _clause_index;
			_clause_index = _tmp33_ + 1;
			_tmp34_ = _clause_index;
			_tmp35_ = _clause_size;
			if (!(_tmp34_ < _tmp35_)) {
				break;
			}
			_tmp36_ = _clause_list;
			_tmp37_ = _clause_index;
			_tmp38_ = vala_list_get (_tmp36_, _tmp37_);
			clause = (ValaCatchClause*) _tmp38_;
			{
				ValaArrayList* _body_error_type_list = NULL;
				ValaArrayList* _tmp39_;
				ValaArrayList* _tmp40_;
				gint _body_error_type_size = 0;
				ValaArrayList* _tmp41_;
				gint _tmp42_;
				gint _tmp43_;
				gint _body_error_type_index = 0;
				_tmp39_ = error_types;
				_tmp40_ = _vala_iterable_ref0 (_tmp39_);
				_body_error_type_list = _tmp40_;
				_tmp41_ = _body_error_type_list;
				_tmp42_ = vala_collection_get_size ((ValaCollection*) _tmp41_);
				_tmp43_ = _tmp42_;
				_body_error_type_size = _tmp43_;
				_body_error_type_index = -1;
				while (TRUE) {
					gint _tmp44_;
					gint _tmp45_;
					gint _tmp46_;
					ValaDataType* body_error_type = NULL;
					ValaArrayList* _tmp47_;
					gint _tmp48_;
					gpointer _tmp49_;
					gboolean _tmp50_ = FALSE;
					ValaCatchClause* _tmp51_;
					ValaDataType* _tmp52_;
					ValaDataType* _tmp53_;
					_tmp44_ = _body_error_type_index;
					_body_error_type_index = _tmp44_ + 1;
					_tmp45_ = _body_error_type_index;
					_tmp46_ = _body_error_type_size;
					if (!(_tmp45_ < _tmp46_)) {
						break;
					}
					_tmp47_ = _body_error_type_list;
					_tmp48_ = _body_error_type_index;
					_tmp49_ = vala_list_get ((ValaList*) _tmp47_, _tmp48_);
					body_error_type = (ValaDataType*) _tmp49_;
					_tmp51_ = clause;
					_tmp52_ = vala_catch_clause_get_error_type (_tmp51_);
					_tmp53_ = _tmp52_;
					if (_tmp53_ == NULL) {
						_tmp50_ = TRUE;
					} else {
						ValaDataType* _tmp54_;
						ValaCatchClause* _tmp55_;
						ValaDataType* _tmp56_;
						ValaDataType* _tmp57_;
						_tmp54_ = body_error_type;
						_tmp55_ = clause;
						_tmp56_ = vala_catch_clause_get_error_type (_tmp55_);
						_tmp57_ = _tmp56_;
						_tmp50_ = vala_data_type_compatible (_tmp54_, _tmp57_);
					}
					if (_tmp50_) {
						ValaArrayList* _tmp58_;
						ValaDataType* _tmp59_;
						_tmp58_ = handled_error_types;
						_tmp59_ = body_error_type;
						vala_collection_add ((ValaCollection*) _tmp58_, _tmp59_);
					}
					_vala_code_node_unref0 (body_error_type);
				}
				_vala_iterable_unref0 (_body_error_type_list);
			}
			{
				ValaArrayList* _handled_error_type_list = NULL;
				ValaArrayList* _tmp60_;
				ValaArrayList* _tmp61_;
				gint _handled_error_type_size = 0;
				ValaArrayList* _tmp62_;
				gint _tmp63_;
				gint _tmp64_;
				gint _handled_error_type_index = 0;
				_tmp60_ = handled_error_types;
				_tmp61_ = _vala_iterable_ref0 (_tmp60_);
				_handled_error_type_list = _tmp61_;
				_tmp62_ = _handled_error_type_list;
				_tmp63_ = vala_collection_get_size ((ValaCollection*) _tmp62_);
				_tmp64_ = _tmp63_;
				_handled_error_type_size = _tmp64_;
				_handled_error_type_index = -1;
				while (TRUE) {
					gint _tmp65_;
					gint _tmp66_;
					gint _tmp67_;
					ValaDataType* handled_error_type = NULL;
					ValaArrayList* _tmp68_;
					gint _tmp69_;
					gpointer _tmp70_;
					ValaArrayList* _tmp71_;
					ValaDataType* _tmp72_;
					_tmp65_ = _handled_error_type_index;
					_handled_error_type_index = _tmp65_ + 1;
					_tmp66_ = _handled_error_type_index;
					_tmp67_ = _handled_error_type_size;
					if (!(_tmp66_ < _tmp67_)) {
						break;
					}
					_tmp68_ = _handled_error_type_list;
					_tmp69_ = _handled_error_type_index;
					_tmp70_ = vala_list_get ((ValaList*) _tmp68_, _tmp69_);
					handled_error_type = (ValaDataType*) _tmp70_;
					_tmp71_ = error_types;
					_tmp72_ = handled_error_type;
					vala_collection_remove ((ValaCollection*) _tmp71_, _tmp72_);
					_vala_code_node_unref0 (handled_error_type);
				}
				_vala_iterable_unref0 (_handled_error_type_list);
			}
			_tmp73_ = handled_error_types;
			vala_collection_clear ((ValaCollection*) _tmp73_);
			_tmp74_ = clause;
			vala_code_node_check ((ValaCodeNode*) _tmp74_, context);
			{
				ValaList* _body_error_type_list = NULL;
				ValaCatchClause* _tmp75_;
				ValaBlock* _tmp76_;
				ValaBlock* _tmp77_;
				ValaList* _tmp78_;
				gint _body_error_type_size = 0;
				ValaList* _tmp79_;
				gint _tmp80_;
				gint _tmp81_;
				gint _body_error_type_index = 0;
				_tmp75_ = clause;
				_tmp76_ = vala_catch_clause_get_body (_tmp75_);
				_tmp77_ = _tmp76_;
				_tmp78_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp77_);
				_body_error_type_list = _tmp78_;
				_tmp79_ = _body_error_type_list;
				_tmp80_ = vala_collection_get_size ((ValaCollection*) _tmp79_);
				_tmp81_ = _tmp80_;
				_body_error_type_size = _tmp81_;
				_body_error_type_index = -1;
				while (TRUE) {
					gint _tmp82_;
					gint _tmp83_;
					gint _tmp84_;
					ValaDataType* body_error_type = NULL;
					ValaList* _tmp85_;
					gint _tmp86_;
					gpointer _tmp87_;
					ValaArrayList* _tmp88_;
					ValaDataType* _tmp89_;
					_tmp82_ = _body_error_type_index;
					_body_error_type_index = _tmp82_ + 1;
					_tmp83_ = _body_error_type_index;
					_tmp84_ = _body_error_type_size;
					if (!(_tmp83_ < _tmp84_)) {
						break;
					}
					_tmp85_ = _body_error_type_list;
					_tmp86_ = _body_error_type_index;
					_tmp87_ = vala_list_get (_tmp85_, _tmp86_);
					body_error_type = (ValaDataType*) _tmp87_;
					_tmp88_ = error_types;
					_tmp89_ = body_error_type;
					vala_collection_add ((ValaCollection*) _tmp88_, _tmp89_);
					_vala_code_node_unref0 (body_error_type);
				}
				_vala_iterable_unref0 (_body_error_type_list);
			}
			_vala_code_node_unref0 (clause);
		}
		_vala_iterable_unref0 (_clause_list);
	}
	_tmp90_ = vala_try_statement_get_finally_body (self);
	_tmp91_ = _tmp90_;
	if (_tmp91_ != NULL) {
		ValaBlock* _tmp92_;
		ValaBlock* _tmp93_;
		_tmp92_ = vala_try_statement_get_finally_body (self);
		_tmp93_ = _tmp92_;
		vala_code_node_check ((ValaCodeNode*) _tmp93_, context);
		{
			ValaList* _body_error_type_list = NULL;
			ValaBlock* _tmp94_;
			ValaBlock* _tmp95_;
			ValaList* _tmp96_;
			gint _body_error_type_size = 0;
			ValaList* _tmp97_;
			gint _tmp98_;
			gint _tmp99_;
			gint _body_error_type_index = 0;
			_tmp94_ = vala_try_statement_get_finally_body (self);
			_tmp95_ = _tmp94_;
			_tmp96_ = vala_code_node_get_error_types ((ValaCodeNode*) _tmp95_);
			_body_error_type_list = _tmp96_;
			_tmp97_ = _body_error_type_list;
			_tmp98_ = vala_collection_get_size ((ValaCollection*) _tmp97_);
			_tmp99_ = _tmp98_;
			_body_error_type_size = _tmp99_;
			_body_error_type_index = -1;
			while (TRUE) {
				gint _tmp100_;
				gint _tmp101_;
				gint _tmp102_;
				ValaDataType* body_error_type = NULL;
				ValaList* _tmp103_;
				gint _tmp104_;
				gpointer _tmp105_;
				ValaArrayList* _tmp106_;
				ValaDataType* _tmp107_;
				_tmp100_ = _body_error_type_index;
				_body_error_type_index = _tmp100_ + 1;
				_tmp101_ = _body_error_type_index;
				_tmp102_ = _body_error_type_size;
				if (!(_tmp101_ < _tmp102_)) {
					break;
				}
				_tmp103_ = _body_error_type_list;
				_tmp104_ = _body_error_type_index;
				_tmp105_ = vala_list_get (_tmp103_, _tmp104_);
				body_error_type = (ValaDataType*) _tmp105_;
				_tmp106_ = error_types;
				_tmp107_ = body_error_type;
				vala_collection_add ((ValaCollection*) _tmp106_, _tmp107_);
				_vala_code_node_unref0 (body_error_type);
			}
			_vala_iterable_unref0 (_body_error_type_list);
		}
	}
	_tmp108_ = error_types;
	vala_code_node_add_error_types ((ValaCodeNode*) self, (ValaList*) _tmp108_);
	_tmp109_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp110_ = _tmp109_;
	result = !_tmp110_;
	_vala_iterable_unref0 (handled_error_types);
	_vala_iterable_unref0 (error_types);
	return result;
}


static void
vala_try_statement_real_emit (ValaCodeNode* base,
                              ValaCodeGenerator* codegen)
{
	ValaTryStatement * self;
	self = (ValaTryStatement*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_try_statement ((ValaCodeVisitor*) codegen, self);
}


ValaBlock*
vala_try_statement_get_body (ValaTryStatement* self)
{
	ValaBlock* result;
	ValaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_body;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


void
vala_try_statement_set_body (ValaTryStatement* self,
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


ValaBlock*
vala_try_statement_get_finally_body (ValaTryStatement* self)
{
	ValaBlock* result;
	ValaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_finally_body;
	result = _tmp0_;
	return result;
}


void
vala_try_statement_set_finally_body (ValaTryStatement* self,
                                     ValaBlock* value)
{
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_finally_body);
	self->priv->_finally_body = _tmp0_;
	_tmp1_ = self->priv->_finally_body;
	if (_tmp1_ != NULL) {
		ValaBlock* _tmp2_;
		_tmp2_ = self->priv->_finally_body;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
	}
}


gboolean
vala_try_statement_get_after_try_block_reachable (ValaTryStatement* self)
{
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_after_try_block_reachable;
	result = _tmp0_;
	return result;
}


void
vala_try_statement_set_after_try_block_reachable (ValaTryStatement* self,
                                                  gboolean value)
{
	g_return_if_fail (self != NULL);
	self->priv->_after_try_block_reachable = value;
}


static void
vala_try_statement_class_init (ValaTryStatementClass * klass)
{
	vala_try_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_try_statement_finalize;
	g_type_class_adjust_private_offset (klass, &ValaTryStatement_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_try_statement_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_try_statement_real_accept_children;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_try_statement_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_try_statement_real_emit;
}


static void
vala_try_statement_vala_statement_interface_init (ValaStatementIface * iface)
{
	vala_try_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void
vala_try_statement_instance_init (ValaTryStatement * self)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	self->priv = vala_try_statement_get_instance_private (self);
	self->priv->_after_try_block_reachable = TRUE;
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CATCH_CLAUSE, (GBoxedCopyFunc) vala_code_node_ref, (GDestroyNotify) vala_code_node_unref, _tmp0_);
	self->priv->catch_clauses = (ValaList*) _tmp1_;
}


static void
vala_try_statement_finalize (ValaCodeNode * obj)
{
	ValaTryStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_TRY_STATEMENT, ValaTryStatement);
	_vala_code_node_unref0 (self->priv->_body);
	_vala_code_node_unref0 (self->priv->_finally_body);
	_vala_iterable_unref0 (self->priv->catch_clauses);
	VALA_CODE_NODE_CLASS (vala_try_statement_parent_class)->finalize (obj);
}


/**
 * Represents a try statement in the source code.
 */
GType
vala_try_statement_get_type (void)
{
	static volatile gsize vala_try_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_try_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaTryStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_try_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaTryStatement), 0, (GInstanceInitFunc) vala_try_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_try_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_try_statement_type_id;
		vala_try_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaTryStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_try_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		ValaTryStatement_private_offset = g_type_add_instance_private (vala_try_statement_type_id, sizeof (ValaTryStatementPrivate));
		g_once_init_leave (&vala_try_statement_type_id__volatile, vala_try_statement_type_id);
	}
	return vala_try_statement_type_id__volatile;
}



