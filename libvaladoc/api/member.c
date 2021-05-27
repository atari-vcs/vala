/* member.c generated by valac, the Vala compiler
 * generated from member.vala, do not modify */

/* member.vala
 *
 * Copyright (C) 2008-2009 Florian Brosch, Didier Villevalois
 * Copyright (C) 2011      Florian Brosch
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
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */


#include <glib.h>
#include <glib-object.h>
#include "valadoc.h"
#include <stdlib.h>
#include <string.h>
#include <vala.h>

enum  {
	VALADOC_API_MEMBER_0_PROPERTY,
	VALADOC_API_MEMBER_NUM_PROPERTIES
};
static GParamSpec* valadoc_api_member_properties[VALADOC_API_MEMBER_NUM_PROPERTIES];
#define _valadoc_api_source_comment_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_api_source_comment_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _ValadocApiMemberPrivate {
	ValadocApiSourceComment* source_comment;
};


static gint ValadocApiMember_private_offset;
static gpointer valadoc_api_member_parent_class = NULL;

static void valadoc_api_member_real_parse_comments (ValadocApiItem* base,
                                             ValadocSettings* settings,
                                             ValadocDocumentationParser* parser);
G_GNUC_INTERNAL void valadoc_api_node_set_documentation (ValadocApiNode* self,
                                         ValadocContentComment* value);
G_GNUC_INTERNAL void valadoc_api_item_parse_comments (ValadocApiItem* self,
                                      ValadocSettings* settings,
                                      ValadocDocumentationParser* parser);
static void valadoc_api_member_real_check_comments (ValadocApiItem* base,
                                             ValadocSettings* settings,
                                             ValadocDocumentationParser* parser);
G_GNUC_INTERNAL void valadoc_api_item_check_comments (ValadocApiItem* self,
                                      ValadocSettings* settings,
                                      ValadocDocumentationParser* parser);
static void valadoc_api_member_finalize (GObject * obj);


static inline gpointer
valadoc_api_member_get_instance_private (ValadocApiMember* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocApiMember_private_offset);
}


static gpointer
_valadoc_api_source_comment_ref0 (gpointer self)
{
	return self ? valadoc_api_source_comment_ref (self) : NULL;
}


ValadocApiMember*
valadoc_api_member_construct (GType object_type,
                              ValadocApiNode* parent,
                              ValadocApiSourceFile* file,
                              const gchar* name,
                              ValadocApiSymbolAccessibility accessibility,
                              ValadocApiSourceComment* comment,
                              ValaSymbol* data)
{
	ValadocApiMember * self = NULL;
	ValadocApiSourceComment* _tmp0_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	self = (ValadocApiMember*) valadoc_api_symbol_construct (object_type, parent, file, name, accessibility, data);
	_tmp0_ = _valadoc_api_source_comment_ref0 (comment);
	_valadoc_api_source_comment_unref0 (self->priv->source_comment);
	self->priv->source_comment = _tmp0_;
	return self;
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_member_real_parse_comments (ValadocApiItem* base,
                                        ValadocSettings* settings,
                                        ValadocDocumentationParser* parser)
{
	ValadocApiMember * self;
	ValadocContentComment* _tmp0_;
	ValadocContentComment* _tmp1_;
	ValadocApiSourceComment* _tmp2_;
	self = (ValadocApiMember*) base;
	g_return_if_fail (settings != NULL);
	g_return_if_fail (parser != NULL);
	_tmp0_ = valadoc_api_node_get_documentation ((ValadocApiNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		return;
	}
	_tmp2_ = self->priv->source_comment;
	if (_tmp2_ != NULL) {
		ValadocApiSourceComment* _tmp3_;
		ValadocContentComment* _tmp4_;
		ValadocContentComment* _tmp5_;
		_tmp3_ = self->priv->source_comment;
		_tmp4_ = valadoc_documentation_parser_parse (parser, (ValadocApiNode*) self, _tmp3_);
		_tmp5_ = _tmp4_;
		valadoc_api_node_set_documentation ((ValadocApiNode*) self, _tmp5_);
		_g_object_unref0 (_tmp5_);
	}
	VALADOC_API_ITEM_CLASS (valadoc_api_member_parent_class)->parse_comments ((ValadocApiItem*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol), settings, parser);
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_member_real_check_comments (ValadocApiItem* base,
                                        ValadocSettings* settings,
                                        ValadocDocumentationParser* parser)
{
	ValadocApiMember * self;
	ValadocContentComment* _tmp0_;
	ValadocContentComment* _tmp1_;
	self = (ValadocApiMember*) base;
	g_return_if_fail (settings != NULL);
	g_return_if_fail (parser != NULL);
	_tmp0_ = valadoc_api_node_get_documentation ((ValadocApiNode*) self);
	_tmp1_ = _tmp0_;
	if (_tmp1_ != NULL) {
		ValadocContentComment* _tmp2_;
		ValadocContentComment* _tmp3_;
		_tmp2_ = valadoc_api_node_get_documentation ((ValadocApiNode*) self);
		_tmp3_ = _tmp2_;
		valadoc_documentation_parser_check (parser, (ValadocApiNode*) self, _tmp3_);
	}
	VALADOC_API_ITEM_CLASS (valadoc_api_member_parent_class)->check_comments ((ValadocApiItem*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol), settings, parser);
}


static void
valadoc_api_member_class_init (ValadocApiMemberClass * klass)
{
	valadoc_api_member_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocApiMember_private_offset);
	((ValadocApiItemClass *) klass)->parse_comments = (void (*) (ValadocApiItem*, ValadocSettings*, ValadocDocumentationParser*)) valadoc_api_member_real_parse_comments;
	((ValadocApiItemClass *) klass)->check_comments = (void (*) (ValadocApiItem*, ValadocSettings*, ValadocDocumentationParser*)) valadoc_api_member_real_check_comments;
	G_OBJECT_CLASS (klass)->finalize = valadoc_api_member_finalize;
}


static void
valadoc_api_member_instance_init (ValadocApiMember * self)
{
	self->priv = valadoc_api_member_get_instance_private (self);
}


static void
valadoc_api_member_finalize (GObject * obj)
{
	ValadocApiMember * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_API_TYPE_MEMBER, ValadocApiMember);
	_valadoc_api_source_comment_unref0 (self->priv->source_comment);
	G_OBJECT_CLASS (valadoc_api_member_parent_class)->finalize (obj);
}


GType
valadoc_api_member_get_type (void)
{
	static volatile gsize valadoc_api_member_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_member_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocApiMemberClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_member_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiMember), 0, (GInstanceInitFunc) valadoc_api_member_instance_init, NULL };
		GType valadoc_api_member_type_id;
		valadoc_api_member_type_id = g_type_register_static (VALADOC_API_TYPE_SYMBOL, "ValadocApiMember", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
		ValadocApiMember_private_offset = g_type_add_instance_private (valadoc_api_member_type_id, sizeof (ValadocApiMemberPrivate));
		g_once_init_leave (&valadoc_api_member_type_id__volatile, valadoc_api_member_type_id);
	}
	return valadoc_api_member_type_id__volatile;
}


