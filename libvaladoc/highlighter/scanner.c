/* scanner.c generated by valac, the Vala compiler
 * generated from scanner.vala, do not modify */

/* scanner.vala
 *
 * Copyright (C) 2015       Florian Brosch
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
 * 	Florian Brosch <flo.brosch@gmail.com>
 */


#include <glib.h>
#include <glib-object.h>
#include "valadoc.h"






ValadocHighlighterCodeToken*
valadoc_highlighter_scanner_next (ValadocHighlighterScanner* self)
{
	g_return_val_if_fail (self != NULL, NULL);
	return VALADOC_HIGHLIGHTER_SCANNER_GET_INTERFACE (self)->next (self);
}


static void
valadoc_highlighter_scanner_default_init (ValadocHighlighterScannerIface * iface)
{
}


/**
 * Scanner interface used to highlight source code.
 */
GType
valadoc_highlighter_scanner_get_type (void)
{
	static volatile gsize valadoc_highlighter_scanner_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_highlighter_scanner_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocHighlighterScannerIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_highlighter_scanner_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
		GType valadoc_highlighter_scanner_type_id;
		valadoc_highlighter_scanner_type_id = g_type_register_static (G_TYPE_INTERFACE, "ValadocHighlighterScanner", &g_define_type_info, 0);
		g_type_interface_add_prerequisite (valadoc_highlighter_scanner_type_id, G_TYPE_OBJECT);
		g_once_init_leave (&valadoc_highlighter_scanner_type_id__volatile, valadoc_highlighter_scanner_type_id);
	}
	return valadoc_highlighter_scanner_type_id__volatile;
}



