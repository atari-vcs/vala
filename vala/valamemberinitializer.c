/* valamemberinitializer.c generated by valac, the Vala compiler
 * generated from valamemberinitializer.vala, do not modify */

/* valamemberinitializer.vala
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
#include <stdlib.h>
#include <string.h>
#include <valagee.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

struct _ValaMemberInitializerPrivate {
	gchar* _name;
	ValaSymbol* _symbol_reference;
	ValaExpression* _initializer;
};


static gint ValaMemberInitializer_private_offset;
static gpointer vala_member_initializer_parent_class = NULL;

static void vala_member_initializer_real_accept (ValaCodeNode* base,
                                          ValaCodeVisitor* visitor);
static gboolean vala_member_initializer_real_check (ValaCodeNode* base,
                                             ValaCodeContext* context);
static void vala_member_initializer_real_emit (ValaCodeNode* base,
                                        ValaCodeGenerator* codegen);
static void vala_member_initializer_real_get_used_variables (ValaCodeNode* base,
                                                      ValaCollection* collection);
static void vala_member_initializer_real_replace_expression (ValaCodeNode* base,
                                                      ValaExpression* old_node,
                                                      ValaExpression* new_node);
static void vala_member_initializer_finalize (ValaCodeNode * obj);


static inline gpointer
vala_member_initializer_get_instance_private (ValaMemberInitializer* self)
{
	return G_STRUCT_MEMBER_P (self, ValaMemberInitializer_private_offset);
}


/**
 * Creates a new member initializer.
 *
 * @param name             member name
 * @param initializer      initializer expression
 * @param source_reference reference to source code
 * @return                 newly created member initializer
 */
ValaMemberInitializer*
vala_member_initializer_construct (GType object_type,
                                   const gchar* name,
                                   ValaExpression* initializer,
                                   ValaSourceReference* source_reference)
{
	ValaMemberInitializer* self = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (initializer != NULL, NULL);
	self = (ValaMemberInitializer*) vala_code_node_construct (object_type);
	vala_member_initializer_set_initializer (self, initializer);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source_reference);
	vala_member_initializer_set_name (self, name);
	return self;
}


ValaMemberInitializer*
vala_member_initializer_new (const gchar* name,
                             ValaExpression* initializer,
                             ValaSourceReference* source_reference)
{
	return vala_member_initializer_construct (VALA_TYPE_MEMBER_INITIALIZER, name, initializer, source_reference);
}


static void
vala_member_initializer_real_accept (ValaCodeNode* base,
                                     ValaCodeVisitor* visitor)
{
	ValaMemberInitializer * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaMemberInitializer*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_member_initializer_get_initializer (self);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, visitor);
}


static gboolean
vala_member_initializer_real_check (ValaCodeNode* base,
                                    ValaCodeContext* context)
{
	ValaMemberInitializer * self;
	gboolean result = FALSE;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaMemberInitializer*) base;
	g_return_val_if_fail (context != NULL, FALSE);
	_tmp0_ = vala_member_initializer_get_initializer (self);
	_tmp1_ = _tmp0_;
	result = vala_code_node_check ((ValaCodeNode*) _tmp1_, context);
	return result;
}


static void
vala_member_initializer_real_emit (ValaCodeNode* base,
                                   ValaCodeGenerator* codegen)
{
	ValaMemberInitializer * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaMemberInitializer*) base;
	g_return_if_fail (codegen != NULL);
	_tmp0_ = vala_member_initializer_get_initializer (self);
	_tmp1_ = _tmp0_;
	vala_code_node_emit ((ValaCodeNode*) _tmp1_, codegen);
}


static void
vala_member_initializer_real_get_used_variables (ValaCodeNode* base,
                                                 ValaCollection* collection)
{
	ValaMemberInitializer * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaMemberInitializer*) base;
	g_return_if_fail (collection != NULL);
	_tmp0_ = vala_member_initializer_get_initializer (self);
	_tmp1_ = _tmp0_;
	vala_code_node_get_used_variables ((ValaCodeNode*) _tmp1_, collection);
}


static void
vala_member_initializer_real_replace_expression (ValaCodeNode* base,
                                                 ValaExpression* old_node,
                                                 ValaExpression* new_node)
{
	ValaMemberInitializer * self;
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	self = (ValaMemberInitializer*) base;
	g_return_if_fail (old_node != NULL);
	g_return_if_fail (new_node != NULL);
	_tmp0_ = vala_member_initializer_get_initializer (self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ == old_node) {
		vala_member_initializer_set_initializer (self, new_node);
	}
}


const gchar*
vala_member_initializer_get_name (ValaMemberInitializer* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void
vala_member_initializer_set_name (ValaMemberInitializer* self,
                                  const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
}


ValaExpression*
vala_member_initializer_get_initializer (ValaMemberInitializer* self)
{
	ValaExpression* result;
	ValaExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_initializer;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


void
vala_member_initializer_set_initializer (ValaMemberInitializer* self,
                                         ValaExpression* value)
{
	ValaExpression* _tmp0_;
	ValaExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_initializer);
	self->priv->_initializer = _tmp0_;
	_tmp1_ = self->priv->_initializer;
	vala_code_node_set_parent_node ((ValaCodeNode*) _tmp1_, (ValaCodeNode*) self);
}


ValaSymbol*
vala_member_initializer_get_symbol_reference (ValaMemberInitializer* self)
{
	ValaSymbol* result;
	ValaSymbol* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_symbol_reference;
	result = _tmp0_;
	return result;
}


void
vala_member_initializer_set_symbol_reference (ValaMemberInitializer* self,
                                              ValaSymbol* value)
{
	g_return_if_fail (self != NULL);
	self->priv->_symbol_reference = value;
}


static void
vala_member_initializer_class_init (ValaMemberInitializerClass * klass)
{
	vala_member_initializer_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_member_initializer_finalize;
	g_type_class_adjust_private_offset (klass, &ValaMemberInitializer_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_member_initializer_real_accept;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_member_initializer_real_check;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_member_initializer_real_emit;
	((ValaCodeNodeClass *) klass)->get_used_variables = (void (*) (ValaCodeNode*, ValaCollection*)) vala_member_initializer_real_get_used_variables;
	((ValaCodeNodeClass *) klass)->replace_expression = (void (*) (ValaCodeNode*, ValaExpression*, ValaExpression*)) vala_member_initializer_real_replace_expression;
}


static void
vala_member_initializer_instance_init (ValaMemberInitializer * self)
{
	self->priv = vala_member_initializer_get_instance_private (self);
}


static void
vala_member_initializer_finalize (ValaCodeNode * obj)
{
	ValaMemberInitializer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_MEMBER_INITIALIZER, ValaMemberInitializer);
	_g_free0 (self->priv->_name);
	_vala_code_node_unref0 (self->priv->_initializer);
	VALA_CODE_NODE_CLASS (vala_member_initializer_parent_class)->finalize (obj);
}


/**
 * Represents a member initializer, i.e. an element of an object initializer, in
 * the source code.
 */
GType
vala_member_initializer_get_type (void)
{
	static volatile gsize vala_member_initializer_type_id__volatile = 0;
	if (g_once_init_enter (&vala_member_initializer_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaMemberInitializerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_member_initializer_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaMemberInitializer), 0, (GInstanceInitFunc) vala_member_initializer_instance_init, NULL };
		GType vala_member_initializer_type_id;
		vala_member_initializer_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaMemberInitializer", &g_define_type_info, 0);
		ValaMemberInitializer_private_offset = g_type_add_instance_private (vala_member_initializer_type_id, sizeof (ValaMemberInitializerPrivate));
		g_once_init_leave (&vala_member_initializer_type_id__volatile, vala_member_initializer_type_id);
	}
	return vala_member_initializer_type_id__volatile;
}



