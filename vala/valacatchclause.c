/* valacatchclause.c generated by valac, the Vala compiler
 * generated from valacatchclause.vala, do not modify */

/* valacatchclause.vala
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

#include "vala.h"
#include <stdlib.h>
#include <string.h>
#include <glib.h>
#include <valagee.h>
#include <glib-object.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaCatchClausePrivate {
	gchar* _variable_name;
	gchar* _clabel_name;
	ValaDataType* _data_type;
	ValaBlock* _body;
	ValaLocalVariable* _error_variable;
};

static gint ValaCatchClause_private_offset;
static gpointer vala_catch_clause_parent_class = NULL;

static void vala_catch_clause_real_accept (ValaCodeNode* base,
                                    ValaCodeVisitor* visitor);
static void vala_catch_clause_real_accept_children (ValaCodeNode* base,
                                             ValaCodeVisitor* visitor);
static void vala_catch_clause_real_replace_type (ValaCodeNode* base,
                                          ValaDataType* old_type,
                                          ValaDataType* new_type);
static gboolean vala_catch_clause_real_check (ValaCodeNode* base,
                                       ValaCodeContext* context);
static void vala_catch_clause_real_emit (ValaCodeNode* base,
                                  ValaCodeGenerator* codegen);
static void vala_catch_clause_real_get_defined_variables (ValaCodeNode* base,
                                                   ValaCollection* collection);
static void vala_catch_clause_finalize (ValaCodeNode * obj);
static GType vala_catch_clause_get_type_once (void);

static inline gpointer
vala_catch_clause_get_instance_private (ValaCatchClause* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCatchClause_private_offset);
}

ValaDataType*
vala_catch_clause_get_error_type (ValaCatchClause* self)
{
	ValaDataType* result;
	ValaDataType* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_data_type;
	result = _tmp0_;
	return result;
}

static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}

void
vala_catch_clause_set_error_type (ValaCatchClause* self,
                                  ValaDataType* value)
{
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_data_type);
	self->priv->_data_type = _tmp0_;
	_tmp1_ = self->priv->_data_type;
	if (_tmp1_ != NULL) {
		ValaDataType* _tmp2_;
		_tmp2_ = self->priv->_data_type;
		vala_code_node_set_parent_node ((ValaCodeNode*) _tmp2_, (ValaCodeNode*) self);
	}
}

const gchar*
vala_catch_clause_get_variable_name (ValaCatchClause* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_variable_name;
	result = _tmp0_;
	return result;
}

void
vala_catch_clause_set_variable_name (ValaCatchClause* self,
                                     const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_variable_name);
	self->priv->_variable_name = _tmp0_;
}

ValaBlock*
vala_catch_clause_get_body (ValaCatchClause* self)
{
	ValaBlock* result;
	ValaBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_body;
	result = _tmp0_;
	return result;
}

void
vala_catch_clause_set_body (ValaCatchClause* self,
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

ValaLocalVariable*
vala_catch_clause_get_error_variable (ValaCatchClause* self)
{
	ValaLocalVariable* result;
	ValaLocalVariable* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_error_variable;
	result = _tmp0_;
	return result;
}

void
vala_catch_clause_set_error_variable (ValaCatchClause* self,
                                      ValaLocalVariable* value)
{
	ValaLocalVariable* _tmp0_;
	ValaLocalVariable* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_error_variable);
	self->priv->_error_variable = _tmp0_;
	_tmp1_ = self->priv->_error_variable;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}

const gchar*
vala_catch_clause_get_clabel_name (ValaCatchClause* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_clabel_name;
	result = _tmp0_;
	return result;
}

void
vala_catch_clause_set_clabel_name (ValaCatchClause* self,
                                   const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_clabel_name);
	self->priv->_clabel_name = _tmp0_;
}

/**
 * Creates a new catch
 *
 * @param error_type       error type
 * @param variable_name    error variable name
 * @param body             error handler body
 * @param source_reference reference to source code
 * @return                 newly created catch clause
 */
ValaCatchClause*
vala_catch_clause_construct (GType object_type,
                             ValaDataType* error_type,
                             const gchar* variable_name,
                             ValaBlock* body,
                             ValaSourceReference* source_reference)
{
	ValaCatchClause* self = NULL;
	g_return_val_if_fail (body != NULL, NULL);
	self = (ValaCatchClause*) vala_code_node_construct (object_type);
	vala_catch_clause_set_error_type (self, error_type);
	vala_catch_clause_set_variable_name (self, variable_name);
	vala_catch_clause_set_body (self, body);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	return self;
}

ValaCatchClause*
vala_catch_clause_new (ValaDataType* error_type,
                       const gchar* variable_name,
                       ValaBlock* body,
                       ValaSourceReference* source_reference)
{
	return vala_catch_clause_construct (VALA_TYPE_CATCH_CLAUSE, error_type, variable_name, body, source_reference);
}

static void
vala_catch_clause_real_accept (ValaCodeNode* base,
                               ValaCodeVisitor* visitor)
{
	ValaCatchClause * self;
	self = (ValaCatchClause*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_catch_clause (visitor, self);
}

static void
vala_catch_clause_real_accept_children (ValaCodeNode* base,
                                        ValaCodeVisitor* visitor)
{
	ValaCatchClause * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	ValaBlock* _tmp4_;
	ValaBlock* _tmp5_;
	self = (ValaCatchClause*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_catch_clause_get_error_type (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaDataType* _tmp2_;
		ValaDataType* _tmp3_;
		_tmp2_ = vala_catch_clause_get_error_type (self);
		_tmp3_ = _tmp2_;
		vala_code_node_accept ((ValaCodeNode*) _tmp3_, visitor);
	}
	_tmp4_ = vala_catch_clause_get_body (self);
	_tmp5_ = _tmp4_;
	vala_code_node_accept ((ValaCodeNode*) _tmp5_, visitor);
}

static void
vala_catch_clause_real_replace_type (ValaCodeNode* base,
                                     ValaDataType* old_type,
                                     ValaDataType* new_type)
{
	ValaCatchClause * self;
	ValaDataType* _tmp0_;
	ValaDataType* _tmp1_;
	self = (ValaCatchClause*) base;
	g_return_if_fail (old_type != NULL);
	g_return_if_fail (new_type != NULL);
	_tmp0_ = vala_catch_clause_get_error_type (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_type) {
		vala_catch_clause_set_error_type (self, new_type);
	}
}

static gboolean
vala_catch_clause_real_check (ValaCodeNode* base,
                              ValaCodeContext* context)
{
	ValaCatchClause * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaProfile _tmp4_;
	ValaProfile _tmp5_;
	ValaDataType* _tmp8_;
	ValaDataType* _tmp9_;
	ValaDataType* _tmp47_;
	ValaDataType* _tmp48_;
	ValaBlock* _tmp49_;
	ValaBlock* _tmp50_;
	gboolean _tmp51_;
	gboolean _tmp52_;
	gboolean result = FALSE;
	self = (ValaCatchClause*) base;
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
		vala_report_error (_tmp7_, "`catch' is not supported in POSIX profile");
		vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		result = FALSE;
		return result;
	}
	_tmp8_ = vala_catch_clause_get_error_type (self);
	_tmp9_ = _tmp8_;
	if (_tmp9_ != NULL) {
		ValaDataType* _tmp10_;
		ValaDataType* _tmp11_;
		const gchar* _tmp20_;
		_tmp10_ = vala_catch_clause_get_error_type (self);
		_tmp11_ = _tmp10_;
		if (!VALA_IS_ERROR_TYPE (_tmp11_)) {
			ValaSourceReference* _tmp12_;
			ValaSourceReference* _tmp13_;
			ValaDataType* _tmp14_;
			ValaDataType* _tmp15_;
			gchar* _tmp16_;
			gchar* _tmp17_;
			gchar* _tmp18_;
			gchar* _tmp19_;
			_tmp12_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp13_ = _tmp12_;
			_tmp14_ = vala_catch_clause_get_error_type (self);
			_tmp15_ = _tmp14_;
			_tmp16_ = vala_code_node_to_string ((ValaCodeNode*) _tmp15_);
			_tmp17_ = _tmp16_;
			_tmp18_ = g_strdup_printf ("clause must catch a valid error type, found `%s' instead", _tmp17_);
			_tmp19_ = _tmp18_;
			vala_report_error (_tmp13_, _tmp19_);
			_g_free0 (_tmp19_);
			_g_free0 (_tmp17_);
			vala_code_node_set_error ((ValaCodeNode*) self, TRUE);
		}
		_tmp20_ = self->priv->_variable_name;
		if (_tmp20_ != NULL) {
			ValaDataType* _tmp21_;
			ValaDataType* _tmp22_;
			ValaDataType* _tmp23_;
			ValaDataType* _tmp24_;
			const gchar* _tmp25_;
			ValaSourceReference* _tmp26_;
			ValaSourceReference* _tmp27_;
			ValaLocalVariable* _tmp28_;
			ValaLocalVariable* _tmp29_;
			ValaBlock* _tmp30_;
			ValaBlock* _tmp31_;
			ValaScope* _tmp32_;
			ValaScope* _tmp33_;
			const gchar* _tmp34_;
			ValaLocalVariable* _tmp35_;
			ValaLocalVariable* _tmp36_;
			ValaBlock* _tmp37_;
			ValaBlock* _tmp38_;
			ValaLocalVariable* _tmp39_;
			ValaLocalVariable* _tmp40_;
			ValaLocalVariable* _tmp41_;
			ValaLocalVariable* _tmp42_;
			_tmp21_ = vala_catch_clause_get_error_type (self);
			_tmp22_ = _tmp21_;
			_tmp23_ = vala_data_type_copy (_tmp22_);
			_tmp24_ = _tmp23_;
			_tmp25_ = self->priv->_variable_name;
			_tmp26_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
			_tmp27_ = _tmp26_;
			_tmp28_ = vala_local_variable_new (_tmp24_, _tmp25_, NULL, _tmp27_);
			_tmp29_ = _tmp28_;
			vala_catch_clause_set_error_variable (self, _tmp29_);
			_vala_code_node_unref0 (_tmp29_);
			_vala_code_node_unref0 (_tmp24_);
			_tmp30_ = vala_catch_clause_get_body (self);
			_tmp31_ = _tmp30_;
			_tmp32_ = vala_symbol_get_scope ((ValaSymbol*) _tmp31_);
			_tmp33_ = _tmp32_;
			_tmp34_ = self->priv->_variable_name;
			_tmp35_ = vala_catch_clause_get_error_variable (self);
			_tmp36_ = _tmp35_;
			vala_scope_add (_tmp33_, _tmp34_, (ValaSymbol*) _tmp36_);
			_tmp37_ = vala_catch_clause_get_body (self);
			_tmp38_ = _tmp37_;
			_tmp39_ = vala_catch_clause_get_error_variable (self);
			_tmp40_ = _tmp39_;
			vala_block_add_local_variable (_tmp38_, _tmp40_);
			_tmp41_ = vala_catch_clause_get_error_variable (self);
			_tmp42_ = _tmp41_;
			vala_code_node_set_checked ((ValaCodeNode*) _tmp42_, TRUE);
		}
	} else {
		ValaSourceReference* _tmp43_;
		ValaSourceReference* _tmp44_;
		ValaErrorType* _tmp45_;
		ValaErrorType* _tmp46_;
		_tmp43_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
		_tmp44_ = _tmp43_;
		_tmp45_ = vala_error_type_new (NULL, NULL, _tmp44_);
		_tmp46_ = _tmp45_;
		vala_catch_clause_set_error_type (self, (ValaDataType*) _tmp46_);
		_vala_code_node_unref0 (_tmp46_);
	}
	_tmp47_ = vala_catch_clause_get_error_type (self);
	_tmp48_ = _tmp47_;
	vala_code_node_check ((ValaCodeNode*) _tmp48_, context);
	_tmp49_ = vala_catch_clause_get_body (self);
	_tmp50_ = _tmp49_;
	vala_code_node_check ((ValaCodeNode*) _tmp50_, context);
	_tmp51_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp52_ = _tmp51_;
	result = !_tmp52_;
	return result;
}

static void
vala_catch_clause_real_emit (ValaCodeNode* base,
                             ValaCodeGenerator* codegen)
{
	ValaCatchClause * self;
	ValaLocalVariable* _tmp0_;
	ValaLocalVariable* _tmp1_;
	self = (ValaCatchClause*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_catch_clause_get_error_variable (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaLocalVariable* _tmp2_;
		ValaLocalVariable* _tmp3_;
		_tmp2_ = vala_catch_clause_get_error_variable (self);
		_tmp3_ = _tmp2_;
		vala_symbol_set_active ((ValaSymbol*) _tmp3_, TRUE);
	}
	vala_code_visitor_visit_catch_clause ((ValaCodeVisitor*) codegen, self);
}

static void
vala_catch_clause_real_get_defined_variables (ValaCodeNode* base,
                                              ValaCollection* collection)
{
	ValaCatchClause * self;
	ValaLocalVariable* _tmp0_;
	ValaLocalVariable* _tmp1_;
	self = (ValaCatchClause*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_catch_clause_get_error_variable (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaLocalVariable* _tmp2_;
		ValaLocalVariable* _tmp3_;
		_tmp2_ = vala_catch_clause_get_error_variable (self);
		_tmp3_ = _tmp2_;
		vala_collection_add (collection, (ValaVariable*) _tmp3_);
	}
}

static void
vala_catch_clause_class_init (ValaCatchClauseClass * klass,
                              gpointer klass_data)
{
	vala_catch_clause_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_catch_clause_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCatchClause_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_catch_clause_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_catch_clause_real_accept_children;
	((ValaCodeNodeClass *) klass)->replace_type = (void (*) (ValaCodeNode*, ValaDataType*, ValaDataType*)) vala_catch_clause_real_replace_type;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_catch_clause_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_catch_clause_real_emit;
	((ValaCodeNodeClass *) klass)->get_defined_variables = (void (*) (ValaCodeNode*, ValaCollection*)) vala_catch_clause_real_get_defined_variables;
}

static void
vala_catch_clause_instance_init (ValaCatchClause * self,
                                 gpointer klass)
{
	self->priv = vala_catch_clause_get_instance_private (self);
}

static void
vala_catch_clause_finalize (ValaCodeNode * obj)
{
	ValaCatchClause * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CATCH_CLAUSE, ValaCatchClause);
	_g_free0 (self->priv->_variable_name);
	_g_free0 (self->priv->_clabel_name);
	_vala_code_node_unref0 (self->priv->_data_type);
	_vala_code_node_unref0 (self->priv->_body);
	_vala_code_node_unref0 (self->priv->_error_variable);
	VALA_CODE_NODE_CLASS (vala_catch_clause_parent_class)->finalize (obj);
}

/**
 * Represents a catch clause in a try statement in the source code.
 */
static GType
vala_catch_clause_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaCatchClauseClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_catch_clause_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCatchClause), 0, (GInstanceInitFunc) vala_catch_clause_instance_init, NULL };
	GType vala_catch_clause_type_id;
	vala_catch_clause_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaCatchClause", &g_define_type_info, 0);
	ValaCatchClause_private_offset = g_type_add_instance_private (vala_catch_clause_type_id, sizeof (ValaCatchClausePrivate));
	return vala_catch_clause_type_id;
}

GType
vala_catch_clause_get_type (void)
{
	static volatile gsize vala_catch_clause_type_id__volatile = 0;
	if (g_once_init_enter (&vala_catch_clause_type_id__volatile)) {
		GType vala_catch_clause_type_id;
		vala_catch_clause_type_id = vala_catch_clause_get_type_once ();
		g_once_init_leave (&vala_catch_clause_type_id__volatile, vala_catch_clause_type_id);
	}
	return vala_catch_clause_type_id__volatile;
}

