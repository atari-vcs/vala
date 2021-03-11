/* valarealliteral.c generated by valac, the Vala compiler
 * generated from valarealliteral.vala, do not modify */

/* valarealliteral.vala
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

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaRealLiteralPrivate {
	gchar* _value;
};

static gint ValaRealLiteral_private_offset;
static gpointer vala_real_literal_parent_class = NULL;

static void vala_real_literal_real_accept (ValaCodeNode* base,
                                    ValaCodeVisitor* visitor);
static gboolean vala_real_literal_real_is_pure (ValaExpression* base);
static gchar* vala_real_literal_real_to_string (ValaCodeNode* base);
static gboolean vala_real_literal_real_check (ValaCodeNode* base,
                                       ValaCodeContext* context);
static void vala_real_literal_real_emit (ValaCodeNode* base,
                                  ValaCodeGenerator* codegen);
static void vala_real_literal_finalize (ValaCodeNode * obj);
static GType vala_real_literal_get_type_once (void);

static inline gpointer
vala_real_literal_get_instance_private (ValaRealLiteral* self)
{
	return G_STRUCT_MEMBER_P (self, ValaRealLiteral_private_offset);
}

const gchar*
vala_real_literal_get_value (ValaRealLiteral* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_value;
	result = _tmp0_;
	return result;
}

void
vala_real_literal_set_value (ValaRealLiteral* self,
                             const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_value);
	self->priv->_value = _tmp0_;
}

/**
 * Creates a new real literal.
 *
 * @param r      literal value
 * @param source reference to source code
 * @return       newly created real literal
 */
ValaRealLiteral*
vala_real_literal_construct (GType object_type,
                             const gchar* r,
                             ValaSourceReference* source)
{
	ValaRealLiteral* self = NULL;
	g_return_val_if_fail (r != NULL, NULL);
	self = (ValaRealLiteral*) vala_literal_construct (object_type);
	vala_real_literal_set_value (self, r);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}

ValaRealLiteral*
vala_real_literal_new (const gchar* r,
                       ValaSourceReference* source)
{
	return vala_real_literal_construct (VALA_TYPE_REAL_LITERAL, r, source);
}

static void
vala_real_literal_real_accept (ValaCodeNode* base,
                               ValaCodeVisitor* visitor)
{
	ValaRealLiteral * self;
	self = (ValaRealLiteral*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_real_literal (visitor, self);
	vala_code_visitor_visit_expression (visitor, (ValaExpression*) self);
}

/**
 * Returns the type name of the value this literal represents.
 *
 * @return the name of literal type
 */
gchar*
vala_real_literal_get_type_name (ValaRealLiteral* self)
{
	gboolean _tmp0_ = FALSE;
	const gchar* _tmp1_;
	gchar* _tmp4_;
	gchar* result = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp1_ = self->priv->_value;
	if (g_str_has_suffix (_tmp1_, "f")) {
		_tmp0_ = TRUE;
	} else {
		const gchar* _tmp2_;
		_tmp2_ = self->priv->_value;
		_tmp0_ = g_str_has_suffix (_tmp2_, "F");
	}
	if (_tmp0_) {
		gchar* _tmp3_;
		_tmp3_ = g_strdup ("float");
		result = _tmp3_;
		return result;
	}
	_tmp4_ = g_strdup ("double");
	result = _tmp4_;
	return result;
}

static gboolean
vala_real_literal_real_is_pure (ValaExpression* base)
{
	ValaRealLiteral * self;
	gboolean result = FALSE;
	self = (ValaRealLiteral*) base;
	result = TRUE;
	return result;
}

static gchar*
vala_real_literal_real_to_string (ValaCodeNode* base)
{
	ValaRealLiteral * self;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* result = NULL;
	self = (ValaRealLiteral*) base;
	_tmp0_ = self->priv->_value;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}

static gboolean
vala_real_literal_real_check (ValaCodeNode* base,
                              ValaCodeContext* context)
{
	ValaRealLiteral * self;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaStruct* st = NULL;
	ValaNamespace* _tmp4_;
	ValaNamespace* _tmp5_;
	ValaScope* _tmp6_;
	ValaScope* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	ValaSymbol* _tmp10_;
	ValaStruct* _tmp11_;
	ValaStruct* _tmp12_;
	ValaStruct* _tmp13_;
	ValaFloatingType* _tmp14_;
	ValaFloatingType* _tmp15_;
	gboolean _tmp16_;
	gboolean _tmp17_;
	gboolean result = FALSE;
	self = (ValaRealLiteral*) base;
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
	_tmp4_ = vala_code_context_get_root (context);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_symbol_get_scope ((ValaSymbol*) _tmp5_);
	_tmp7_ = _tmp6_;
	_tmp8_ = vala_real_literal_get_type_name (self);
	_tmp9_ = _tmp8_;
	_tmp10_ = vala_scope_lookup (_tmp7_, _tmp9_);
	_tmp11_ = G_TYPE_CHECK_INSTANCE_CAST (_tmp10_, VALA_TYPE_STRUCT, ValaStruct);
	_g_free0 (_tmp9_);
	st = _tmp11_;
	_tmp12_ = st;
	vala_code_node_check ((ValaCodeNode*) _tmp12_, context);
	_tmp13_ = st;
	_tmp14_ = vala_floating_type_new (_tmp13_);
	_tmp15_ = _tmp14_;
	vala_expression_set_value_type ((ValaExpression*) self, (ValaDataType*) _tmp15_);
	_vala_code_node_unref0 (_tmp15_);
	_tmp16_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp17_ = _tmp16_;
	result = !_tmp17_;
	_vala_code_node_unref0 (st);
	return result;
}

static void
vala_real_literal_real_emit (ValaCodeNode* base,
                             ValaCodeGenerator* codegen)
{
	ValaRealLiteral * self;
	self = (ValaRealLiteral*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_real_literal ((ValaCodeVisitor*) codegen, self);
	vala_code_visitor_visit_expression ((ValaCodeVisitor*) codegen, (ValaExpression*) self);
}

static void
vala_real_literal_class_init (ValaRealLiteralClass * klass,
                              gpointer klass_data)
{
	vala_real_literal_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_real_literal_finalize;
	g_type_class_adjust_private_offset (klass, &ValaRealLiteral_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_real_literal_real_accept;
	((ValaExpressionClass *) klass)->is_pure = (gboolean (*) (ValaExpression*)) vala_real_literal_real_is_pure;
	((ValaCodeNodeClass *) klass)->to_string = (gchar* (*) (ValaCodeNode*)) vala_real_literal_real_to_string;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_real_literal_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_real_literal_real_emit;
}

static void
vala_real_literal_instance_init (ValaRealLiteral * self,
                                 gpointer klass)
{
	self->priv = vala_real_literal_get_instance_private (self);
}

static void
vala_real_literal_finalize (ValaCodeNode * obj)
{
	ValaRealLiteral * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_REAL_LITERAL, ValaRealLiteral);
	_g_free0 (self->priv->_value);
	VALA_CODE_NODE_CLASS (vala_real_literal_parent_class)->finalize (obj);
}

/**
 * Represents a real literal in the source code.
 */
static GType
vala_real_literal_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaRealLiteralClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_real_literal_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaRealLiteral), 0, (GInstanceInitFunc) vala_real_literal_instance_init, NULL };
	GType vala_real_literal_type_id;
	vala_real_literal_type_id = g_type_register_static (VALA_TYPE_LITERAL, "ValaRealLiteral", &g_define_type_info, 0);
	ValaRealLiteral_private_offset = g_type_add_instance_private (vala_real_literal_type_id, sizeof (ValaRealLiteralPrivate));
	return vala_real_literal_type_id;
}

GType
vala_real_literal_get_type (void)
{
	static volatile gsize vala_real_literal_type_id__volatile = 0;
	if (g_once_init_enter (&vala_real_literal_type_id__volatile)) {
		GType vala_real_literal_type_id;
		vala_real_literal_type_id = vala_real_literal_get_type_once ();
		g_once_init_leave (&vala_real_literal_type_id__volatile, vala_real_literal_type_id);
	}
	return vala_real_literal_type_id__volatile;
}

