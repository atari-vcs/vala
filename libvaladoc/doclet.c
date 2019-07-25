/* doclet.c generated by valac, the Vala compiler
 * generated from doclet.vala, do not modify */

/* doclet.vala
 *
 * Copyright (C) 2008-2009 Florian Brosch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Brosch Florian <flo.brosch@gmail.com>
 */


#include <glib.h>
#include <glib-object.h>
#include "valadoc.h"






/**
 * Allows the doclet to inspect the given {@link Api.Tree}
 *
 * @param settings various configurations
 * @param tree the tree to inspect
 * @param reporter the reporter to use
 * @see Content.ContentVisitor
 * @see Api.Visitor
 */
void
valadoc_doclet_process (ValadocDoclet* self,
                        ValadocSettings* settings,
                        ValadocApiTree* tree,
                        ValadocErrorReporter* reporter)
{
	g_return_if_fail (self != NULL);
	VALADOC_DOCLET_GET_INTERFACE (self)->process (self, settings, tree, reporter);
}


static void
valadoc_doclet_default_init (ValadocDocletIface * iface)
{
}


/**
 * Provides a mechanism to inspect the API & documentation of programs and libraries
 */
GType
valadoc_doclet_get_type (void)
{
	static volatile gsize valadoc_doclet_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_doclet_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocDocletIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_doclet_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType valadoc_doclet_type_id;
		valadoc_doclet_type_id = g_type_register_static (G_TYPE_INTERFACE, "ValadocDoclet", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (valadoc_doclet_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&valadoc_doclet_type_id__volatile, valadoc_doclet_type_id);
	}
	return valadoc_doclet_type_id__volatile;
}



