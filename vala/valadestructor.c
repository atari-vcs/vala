/* valadestructor.c generated by valac, the Vala compiler
 * generated from valadestructor.vala, do not modify */

/* valadestructor.vala
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

struct _ValaDestructorPrivate {
	ValaParameter* _this_parameter;
	ValaMemberBinding _binding;
};


static gint ValaDestructor_private_offset;
static gpointer vala_destructor_parent_class = NULL;

static void vala_destructor_real_accept (ValaCodeNode* base,
                                  ValaCodeVisitor* visitor);
static void vala_destructor_real_accept_children (ValaCodeNode* base,
                                           ValaCodeVisitor* visitor);
static gboolean vala_destructor_real_check (ValaCodeNode* base,
                                     ValaCodeContext* context);
static void vala_destructor_finalize (ValaCodeNode * obj);


static inline gpointer
vala_destructor_get_instance_private (ValaDestructor* self)
{
	return G_STRUCT_MEMBER_P (self, ValaDestructor_private_offset);
}


/**
 * Creates a new destructor.
 *
 * @param source_reference reference to source code
 * @return                 newly created destructor
 */
ValaDestructor*
vala_destructor_construct (GType object_type,
                           ValaSourceReference* source_reference)
{
	ValaDestructor* self = NULL;
	self = (ValaDestructor*) vala_subroutine_construct (object_type, NULL, source_reference, NULL);
	return self;
}


ValaDestructor*
vala_destructor_new (ValaSourceReference* source_reference)
{
	return vala_destructor_construct (VALA_TYPE_DESTRUCTOR, source_reference);
}


static void
vala_destructor_real_accept (ValaCodeNode* base,
                             ValaCodeVisitor* visitor)
{
	ValaDestructor * self;
	self = (ValaDestructor*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_destructor (visitor, self);
}


static void
vala_destructor_real_accept_children (ValaCodeNode* base,
                                      ValaCodeVisitor* visitor)
{
	ValaDestructor * self;
	ValaBlock* _tmp0_;
	ValaBlock* _tmp1_;
	self = (ValaDestructor*) base;
	g_return_if_fail (visitor != NULL);
	_tmp0_ = vala_subroutine_get_body ((ValaSubroutine*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValaBlock* _tmp2_;
		ValaBlock* _tmp3_;
		_tmp2_ = vala_subroutine_get_body ((ValaSubroutine*) self);
		_tmp3_ = _tmp2_;
		vala_code_node_accept ((ValaCodeNode*) _tmp3_, visitor);
	}
}


static gboolean
vala_destructor_real_check (ValaCodeNode* base,
                            ValaCodeContext* context)
{
	ValaDestructor * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	ValaSemanticAnalyzer* _tmp4_;
	ValaSemanticAnalyzer* _tmp5_;
	ValaSymbol* _tmp6_;
	ValaSymbol* _tmp7_;
	ValaScope* _tmp8_;
	ValaScope* _tmp9_;
	ValaSemanticAnalyzer* _tmp10_;
	ValaSemanticAnalyzer* _tmp11_;
	ValaBlock* _tmp12_;
	ValaBlock* _tmp13_;
	ValaSemanticAnalyzer* _tmp16_;
	ValaSemanticAnalyzer* _tmp17_;
	ValaSemanticAnalyzer* _tmp18_;
	ValaSemanticAnalyzer* _tmp19_;
	ValaSymbol* _tmp20_;
	ValaSymbol* _tmp21_;
	ValaSymbol* _tmp22_;
	ValaSymbol* _tmp23_;
	gboolean _tmp24_;
	gboolean _tmp25_;
	self = (ValaDestructor*) base;
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
	_tmp6_ = vala_semantic_analyzer_get_current_symbol (_tmp5_);
	_tmp7_ = _tmp6_;
	_tmp8_ = vala_symbol_get_scope (_tmp7_);
	_tmp9_ = _tmp8_;
	vala_symbol_set_owner ((ValaSymbol*) self, _tmp9_);
	_tmp10_ = vala_code_context_get_analyzer (context);
	_tmp11_ = _tmp10_;
	vala_semantic_analyzer_set_current_symbol (_tmp11_, (ValaSymbol*) self);
	_tmp12_ = vala_subroutine_get_body ((ValaSubroutine*) self);
	_tmp13_ = _tmp12_;
	if (_tmp13_ != NULL) {
		ValaBlock* _tmp14_;
		ValaBlock* _tmp15_;
		_tmp14_ = vala_subroutine_get_body ((ValaSubroutine*) self);
		_tmp15_ = _tmp14_;
		vala_code_node_check ((ValaCodeNode*) _tmp15_, context);
	}
	_tmp16_ = vala_code_context_get_analyzer (context);
	_tmp17_ = _tmp16_;
	_tmp18_ = vala_code_context_get_analyzer (context);
	_tmp19_ = _tmp18_;
	_tmp20_ = vala_semantic_analyzer_get_current_symbol (_tmp19_);
	_tmp21_ = _tmp20_;
	_tmp22_ = vala_symbol_get_parent_symbol (_tmp21_);
	_tmp23_ = _tmp22_;
	vala_semantic_analyzer_set_current_symbol (_tmp17_, _tmp23_);
	_tmp24_ = vala_code_node_get_error ((ValaCodeNode*) self);
	_tmp25_ = _tmp24_;
	result = !_tmp25_;
	return result;
}


ValaParameter*
vala_destructor_get_this_parameter (ValaDestructor* self)
{
	ValaParameter* result;
	ValaParameter* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_this_parameter;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


void
vala_destructor_set_this_parameter (ValaDestructor* self,
                                    ValaParameter* value)
{
	ValaParameter* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_this_parameter);
	self->priv->_this_parameter = _tmp0_;
}


ValaMemberBinding
vala_destructor_get_binding (ValaDestructor* self)
{
	ValaMemberBinding result;
	ValaMemberBinding _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_binding;
	result = _tmp0_;
	return result;
}


void
vala_destructor_set_binding (ValaDestructor* self,
                             ValaMemberBinding value)
{
	g_return_if_fail (self != NULL);
	self->priv->_binding = value;
}


static gboolean
vala_destructor_real_get_has_result (ValaSubroutine* base)
{
	gboolean result;
	ValaDestructor* self;
	self = (ValaDestructor*) base;
	result = FALSE;
	return result;
}


static void
vala_destructor_class_init (ValaDestructorClass * klass)
{
	vala_destructor_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_destructor_finalize;
	g_type_class_adjust_private_offset (klass, &ValaDestructor_private_offset);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_destructor_real_accept;
	((ValaCodeNodeClass *) klass)->accept_children = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_destructor_real_accept_children;
	((ValaCodeNodeClass *) klass)->check = (gboolean (*) (ValaCodeNode*, ValaCodeContext*)) vala_destructor_real_check;
	VALA_SUBROUTINE_CLASS (klass)->get_has_result = vala_destructor_real_get_has_result;
}


static void
vala_destructor_instance_init (ValaDestructor * self)
{
	self->priv = vala_destructor_get_instance_private (self);
	self->priv->_binding = VALA_MEMBER_BINDING_INSTANCE;
}


static void
vala_destructor_finalize (ValaCodeNode * obj)
{
	ValaDestructor * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_DESTRUCTOR, ValaDestructor);
	_vala_code_node_unref0 (self->priv->_this_parameter);
	VALA_CODE_NODE_CLASS (vala_destructor_parent_class)->finalize (obj);
}


/**
 * Represents a class or instance destructor.
 */
GType
vala_destructor_get_type (void)
{
	static volatile gsize vala_destructor_type_id__volatile = 0;
	if (g_once_init_enter (&vala_destructor_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaDestructorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_destructor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaDestructor), 0, (GInstanceInitFunc) vala_destructor_instance_init, NULL };
		GType vala_destructor_type_id;
		vala_destructor_type_id = g_type_register_static (VALA_TYPE_SUBROUTINE, "ValaDestructor", &g_define_type_info, 0);
		ValaDestructor_private_offset = g_type_add_instance_private (vala_destructor_type_id, sizeof (ValaDestructorPrivate));
		g_once_init_leave (&vala_destructor_type_id__volatile, vala_destructor_type_id);
	}
	return vala_destructor_type_id__volatile;
}



