/* valabreakstatement.c generated by valac, the Vala compiler
 * generated from valabreakstatement.vala, do not modify */

/* valabreakstatement.vala
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



static gpointer vala_break_statement_parent_class = NULL;
static ValaStatementIface * vala_break_statement_vala_statement_parent_iface = NULL;

static void vala_break_statement_real_accept (ValaCodeNode* base,
                                       ValaCodeVisitor* visitor);
static void vala_break_statement_real_emit (ValaCodeNode* base,
                                     ValaCodeGenerator* codegen);


/**
 * Creates a new break statement.
 *
 * @param source reference to source code
 * @return       newly created break statement
 */
ValaBreakStatement*
vala_break_statement_construct (GType object_type,
                                ValaSourceReference* source)
{
	ValaBreakStatement* self = NULL;
	self = (ValaBreakStatement*) vala_code_node_construct (object_type);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}


ValaBreakStatement*
vala_break_statement_new (ValaSourceReference* source)
{
	return vala_break_statement_construct (VALA_TYPE_BREAK_STATEMENT, source);
}


static void
vala_break_statement_real_accept (ValaCodeNode* base,
                                  ValaCodeVisitor* visitor)
{
	ValaBreakStatement * self;
	self = (ValaBreakStatement*) base;
	g_return_if_fail (visitor != NULL);
	vala_code_visitor_visit_break_statement (visitor, self);
}


static void
vala_break_statement_real_emit (ValaCodeNode* base,
                                ValaCodeGenerator* codegen)
{
	ValaBreakStatement * self;
	self = (ValaBreakStatement*) base;
	g_return_if_fail (codegen != NULL);
	vala_code_visitor_visit_break_statement ((ValaCodeVisitor*) codegen, self);
}


static void
vala_break_statement_class_init (ValaBreakStatementClass * klass)
{
	vala_break_statement_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->accept = (void (*) (ValaCodeNode*, ValaCodeVisitor*)) vala_break_statement_real_accept;
	((ValaCodeNodeClass *) klass)->emit = (void (*) (ValaCodeNode*, ValaCodeGenerator*)) vala_break_statement_real_emit;
}


static void
vala_break_statement_vala_statement_interface_init (ValaStatementIface * iface)
{
	vala_break_statement_vala_statement_parent_iface = g_type_interface_peek_parent (iface);
}


static void
vala_break_statement_instance_init (ValaBreakStatement * self)
{
}


/**
 * Represents a break statement in the source code.
 */
GType
vala_break_statement_get_type (void)
{
	static volatile gsize vala_break_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_break_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaBreakStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_break_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaBreakStatement), 0, (GInstanceInitFunc) vala_break_statement_instance_init, NULL };
		static const GInterfaceInfo vala_statement_info = { (GInterfaceInitFunc) vala_break_statement_vala_statement_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
		GType vala_break_statement_type_id;
		vala_break_statement_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaBreakStatement", &g_define_type_info, 0);
		g_type_add_interface_static (vala_break_statement_type_id, VALA_TYPE_STATEMENT, &vala_statement_info);
		g_once_init_leave (&vala_break_statement_type_id__volatile, vala_break_statement_type_id);
	}
	return vala_break_statement_type_id__volatile;
}



