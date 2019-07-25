/* valagircomment.c generated by valac, the Vala compiler
 * generated from valagircomment.vala, do not modify */

/* valagircomment.vala
 *
 * Copyright (C) 2011  Florian Brosch
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
#include "vala.h"
#include <valagee.h>
#include <stdlib.h>
#include <string.h>

#define _vala_map_unref0(var) ((var == NULL) ? NULL : (var = (vala_map_unref (var), NULL)))
#define _vala_comment_unref0(var) ((var == NULL) ? NULL : (var = (vala_comment_unref (var), NULL)))

struct _ValaGirCommentPrivate {
	ValaHashMap* parameter_content;
	ValaComment* _return_content;
};


static gint ValaGirComment_private_offset;
static gpointer vala_gir_comment_parent_class = NULL;

G_GNUC_INTERNAL void vala_gir_comment_add_content_for_parameter (ValaGirComment* self,
                                                 const gchar* name,
                                                 ValaComment* comment);
static void vala_gir_comment_finalize (ValaComment * obj);


static inline gpointer
vala_gir_comment_get_instance_private (ValaGirComment* self)
{
	return G_STRUCT_MEMBER_P (self, ValaGirComment_private_offset);
}


ValaMapIterator*
vala_gir_comment_parameter_iterator (ValaGirComment* self)
{
	ValaMapIterator* result = NULL;
	ValaHashMap* _tmp0_;
	ValaMapIterator* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->parameter_content;
	_tmp1_ = vala_map_map_iterator ((ValaMap*) _tmp0_);
	result = _tmp1_;
	return result;
}


ValaGirComment*
vala_gir_comment_construct (GType object_type,
                            const gchar* comment,
                            ValaSourceReference* _source_reference)
{
	ValaGirComment* self = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (_source_reference != NULL, NULL);
	_tmp0_ = comment;
	if (_tmp0_ == NULL) {
		_tmp0_ = "";
	}
	self = (ValaGirComment*) vala_comment_construct (object_type, _tmp0_, _source_reference);
	return self;
}


ValaGirComment*
vala_gir_comment_new (const gchar* comment,
                      ValaSourceReference* _source_reference)
{
	return vala_gir_comment_construct (VALA_TYPE_GIR_COMMENT, comment, _source_reference);
}


G_GNUC_INTERNAL void
vala_gir_comment_add_content_for_parameter (ValaGirComment* self,
                                            const gchar* name,
                                            ValaComment* comment)
{
	ValaHashMap* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (name != NULL);
	g_return_if_fail (comment != NULL);
	_tmp0_ = self->priv->parameter_content;
	vala_map_set ((ValaMap*) _tmp0_, name, comment);
}


ValaComment*
vala_gir_comment_get_content_for_parameter (ValaGirComment* self,
                                            const gchar* name)
{
	ValaComment* result = NULL;
	ValaHashMap* _tmp0_;
	gpointer _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = self->priv->parameter_content;
	_tmp1_ = vala_map_get ((ValaMap*) _tmp0_, name);
	result = (ValaComment*) _tmp1_;
	return result;
}


ValaComment*
vala_gir_comment_get_return_content (ValaGirComment* self)
{
	ValaComment* result;
	ValaComment* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_return_content;
	result = _tmp0_;
	return result;
}


static gpointer
_vala_comment_ref0 (gpointer self)
{
	return self ? vala_comment_ref (self) : NULL;
}


void
vala_gir_comment_set_return_content (ValaGirComment* self,
                                     ValaComment* value)
{
	ValaComment* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_comment_ref0 (value);
	_vala_comment_unref0 (self->priv->_return_content);
	self->priv->_return_content = _tmp0_;
}


static void
vala_gir_comment_class_init (ValaGirCommentClass * klass)
{
	vala_gir_comment_parent_class = g_type_class_peek_parent (klass);
	((ValaCommentClass *) klass)->finalize = vala_gir_comment_finalize;
	g_type_class_adjust_private_offset (klass, &ValaGirComment_private_offset);
}


static void
vala_gir_comment_instance_init (ValaGirComment * self)
{
	GHashFunc _tmp0_;
	GEqualFunc _tmp1_;
	GEqualFunc _tmp2_;
	ValaHashMap* _tmp3_;
	self->priv = vala_gir_comment_get_instance_private (self);
	_tmp0_ = g_direct_hash;
	_tmp1_ = g_direct_equal;
	_tmp2_ = g_direct_equal;
	_tmp3_ = vala_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, VALA_TYPE_COMMENT, (GBoxedCopyFunc) vala_comment_ref, (GDestroyNotify) vala_comment_unref, _tmp0_, _tmp1_, _tmp2_);
	self->priv->parameter_content = _tmp3_;
}


static void
vala_gir_comment_finalize (ValaComment * obj)
{
	ValaGirComment * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_GIR_COMMENT, ValaGirComment);
	_vala_map_unref0 (self->priv->parameter_content);
	_vala_comment_unref0 (self->priv->_return_content);
	VALA_COMMENT_CLASS (vala_gir_comment_parent_class)->finalize (obj);
}


/**
 * A documentation comment used by valadoc
 */
GType
vala_gir_comment_get_type (void)
{
	static volatile gsize vala_gir_comment_type_id__volatile = 0;
	if (g_once_init_enter (&vala_gir_comment_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaGirCommentClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_gir_comment_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaGirComment), 0, (GInstanceInitFunc) vala_gir_comment_instance_init, NULL };
		GType vala_gir_comment_type_id;
		vala_gir_comment_type_id = g_type_register_static (VALA_TYPE_COMMENT, "ValaGirComment", &g_define_type_info, 0);
		ValaGirComment_private_offset = g_type_add_instance_private (vala_gir_comment_type_id, sizeof (ValaGirCommentPrivate));
		g_once_init_leave (&vala_gir_comment_type_id__volatile, vala_gir_comment_type_id);
	}
	return vala_gir_comment_type_id__volatile;
}



