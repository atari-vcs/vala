/* errorcode.c generated by valac, the Vala compiler
 * generated from errorcode.vala, do not modify */

/* errorcode.vala
 *
 * Copyright (C) 2008-2011  Florian Brosch
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
#include <stdlib.h>
#include <string.h>
#include <vala.h>

enum  {
	VALADOC_API_ERROR_CODE_0_PROPERTY,
	VALADOC_API_ERROR_CODE_NODE_TYPE_PROPERTY,
	VALADOC_API_ERROR_CODE_NUM_PROPERTIES
};
static GParamSpec* valadoc_api_error_code_properties[VALADOC_API_ERROR_CODE_NUM_PROPERTIES];
#define _valadoc_api_source_comment_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_api_source_comment_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _valadoc_api_signature_builder_unref0(var) ((var == NULL) ? NULL : (var = (valadoc_api_signature_builder_unref (var), NULL)))

struct _ValadocApiErrorCodePrivate {
	ValadocApiSourceComment* source_comment;
	gchar* dbus_name;
	gchar* cname;
};


static gint ValadocApiErrorCode_private_offset;
static gpointer valadoc_api_error_code_parent_class = NULL;

static void valadoc_api_error_code_real_parse_comments (ValadocApiItem* base,
                                                 ValadocSettings* settings,
                                                 ValadocDocumentationParser* parser);
G_GNUC_INTERNAL void valadoc_api_node_set_documentation (ValadocApiNode* self,
                                         ValadocContentComment* value);
G_GNUC_INTERNAL void valadoc_api_item_parse_comments (ValadocApiItem* self,
                                      ValadocSettings* settings,
                                      ValadocDocumentationParser* parser);
static void valadoc_api_error_code_real_check_comments (ValadocApiItem* base,
                                                 ValadocSettings* settings,
                                                 ValadocDocumentationParser* parser);
G_GNUC_INTERNAL void valadoc_api_item_check_comments (ValadocApiItem* self,
                                      ValadocSettings* settings,
                                      ValadocDocumentationParser* parser);
static void valadoc_api_error_code_real_accept (ValadocApiNode* base,
                                         ValadocApiVisitor* visitor);
static ValadocContentInline* valadoc_api_error_code_real_build_signature (ValadocApiItem* base);
static void valadoc_api_error_code_finalize (GObject * obj);
static void _vala_valadoc_api_error_code_get_property (GObject * object,
                                                guint property_id,
                                                GValue * value,
                                                GParamSpec * pspec);


static inline gpointer
valadoc_api_error_code_get_instance_private (ValadocApiErrorCode* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocApiErrorCode_private_offset);
}


static gpointer
_valadoc_api_source_comment_ref0 (gpointer self)
{
	return self ? valadoc_api_source_comment_ref (self) : NULL;
}


ValadocApiErrorCode*
valadoc_api_error_code_construct (GType object_type,
                                  ValadocApiErrorDomain* parent,
                                  ValadocApiSourceFile* file,
                                  const gchar* name,
                                  ValadocApiSourceComment* comment,
                                  const gchar* cname,
                                  const gchar* dbus_name,
                                  ValaErrorCode* data)
{
	ValadocApiErrorCode * self = NULL;
	ValadocApiSymbolAccessibility _tmp0_;
	ValadocApiSymbolAccessibility _tmp1_;
	ValadocApiSourceComment* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	g_return_val_if_fail (parent != NULL, NULL);
	g_return_val_if_fail (file != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (data != NULL, NULL);
	_tmp0_ = valadoc_api_symbol_get_accessibility ((ValadocApiSymbol*) parent);
	_tmp1_ = _tmp0_;
	self = (ValadocApiErrorCode*) valadoc_api_symbol_construct (object_type, (ValadocApiNode*) parent, file, name, _tmp1_, (ValaSymbol*) data);
	_tmp2_ = _valadoc_api_source_comment_ref0 (comment);
	_valadoc_api_source_comment_unref0 (self->priv->source_comment);
	self->priv->source_comment = _tmp2_;
	_tmp3_ = g_strdup (dbus_name);
	_g_free0 (self->priv->dbus_name);
	self->priv->dbus_name = _tmp3_;
	_tmp4_ = g_strdup (cname);
	_g_free0 (self->priv->cname);
	self->priv->cname = _tmp4_;
	return self;
}


ValadocApiErrorCode*
valadoc_api_error_code_new (ValadocApiErrorDomain* parent,
                            ValadocApiSourceFile* file,
                            const gchar* name,
                            ValadocApiSourceComment* comment,
                            const gchar* cname,
                            const gchar* dbus_name,
                            ValaErrorCode* data)
{
	return valadoc_api_error_code_construct (VALADOC_API_TYPE_ERROR_CODE, parent, file, name, comment, cname, dbus_name, data);
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_error_code_real_parse_comments (ValadocApiItem* base,
                                            ValadocSettings* settings,
                                            ValadocDocumentationParser* parser)
{
	ValadocApiErrorCode * self;
	ValadocContentComment* _tmp0_;
	ValadocContentComment* _tmp1_;
	ValadocApiSourceComment* _tmp2_;
	self = (ValadocApiErrorCode*) base;
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
	VALADOC_API_ITEM_CLASS (valadoc_api_error_code_parent_class)->parse_comments ((ValadocApiItem*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol), settings, parser);
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_error_code_real_check_comments (ValadocApiItem* base,
                                            ValadocSettings* settings,
                                            ValadocDocumentationParser* parser)
{
	ValadocApiErrorCode * self;
	ValadocContentComment* _tmp0_;
	ValadocContentComment* _tmp1_;
	self = (ValadocApiErrorCode*) base;
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
	VALADOC_API_ITEM_CLASS (valadoc_api_error_code_parent_class)->check_comments ((ValadocApiItem*) G_TYPE_CHECK_INSTANCE_CAST (self, VALADOC_API_TYPE_SYMBOL, ValadocApiSymbol), settings, parser);
}


/**
 * Returns the name of this class as it is used in C.
 */
gchar*
valadoc_api_error_code_get_cname (ValadocApiErrorCode* self)
{
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->cname;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * Returns the dbus-name.
 */
gchar*
valadoc_api_error_code_get_dbus_name (ValadocApiErrorCode* self)
{
	gchar* result = NULL;
	const gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->dbus_name;
	_tmp1_ = g_strdup (_tmp0_);
	result = _tmp1_;
	return result;
}


/**
 * {@inheritDoc}
 */
static void
valadoc_api_error_code_real_accept (ValadocApiNode* base,
                                    ValadocApiVisitor* visitor)
{
	ValadocApiErrorCode * self;
	self = (ValadocApiErrorCode*) base;
	g_return_if_fail (visitor != NULL);
	valadoc_api_visitor_visit_error_code (visitor, self);
}


/**
 * {@inheritDoc}
 */
static ValadocContentInline*
valadoc_api_error_code_real_build_signature (ValadocApiItem* base)
{
	ValadocApiErrorCode * self;
	ValadocContentInline* result = NULL;
	ValadocApiSignatureBuilder* _tmp0_;
	ValadocApiSignatureBuilder* _tmp1_;
	ValadocApiSignatureBuilder* _tmp2_;
	ValadocContentRun* _tmp3_;
	ValadocContentInline* _tmp4_;
	self = (ValadocApiErrorCode*) base;
	_tmp0_ = valadoc_api_signature_builder_new ();
	_tmp1_ = _tmp0_;
	_tmp2_ = valadoc_api_signature_builder_append_symbol (_tmp1_, (ValadocApiNode*) self, TRUE);
	_tmp3_ = valadoc_api_signature_builder_get (_tmp2_);
	_tmp4_ = (ValadocContentInline*) _tmp3_;
	_valadoc_api_signature_builder_unref0 (_tmp1_);
	result = _tmp4_;
	return result;
}


static ValadocApiNodeType
valadoc_api_error_code_real_get_node_type (ValadocApiNode* base)
{
	ValadocApiNodeType result;
	ValadocApiErrorCode* self;
	self = (ValadocApiErrorCode*) base;
	result = VALADOC_API_NODE_TYPE_ERROR_CODE;
	return result;
}


static void
valadoc_api_error_code_class_init (ValadocApiErrorCodeClass * klass)
{
	valadoc_api_error_code_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocApiErrorCode_private_offset);
	((ValadocApiItemClass *) klass)->parse_comments = (void (*) (ValadocApiItem*, ValadocSettings*, ValadocDocumentationParser*)) valadoc_api_error_code_real_parse_comments;
	((ValadocApiItemClass *) klass)->check_comments = (void (*) (ValadocApiItem*, ValadocSettings*, ValadocDocumentationParser*)) valadoc_api_error_code_real_check_comments;
	((ValadocApiNodeClass *) klass)->accept = (void (*) (ValadocApiNode*, ValadocApiVisitor*)) valadoc_api_error_code_real_accept;
	((ValadocApiItemClass *) klass)->build_signature = (ValadocContentInline* (*) (ValadocApiItem*)) valadoc_api_error_code_real_build_signature;
	VALADOC_API_NODE_CLASS (klass)->get_node_type = valadoc_api_error_code_real_get_node_type;
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_api_error_code_get_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_api_error_code_finalize;
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_API_ERROR_CODE_NODE_TYPE_PROPERTY, valadoc_api_error_code_properties[VALADOC_API_ERROR_CODE_NODE_TYPE_PROPERTY] = g_param_spec_enum ("node-type", "node-type", "node-type", VALADOC_API_TYPE_NODE_TYPE, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}


static void
valadoc_api_error_code_instance_init (ValadocApiErrorCode * self)
{
	self->priv = valadoc_api_error_code_get_instance_private (self);
}


static void
valadoc_api_error_code_finalize (GObject * obj)
{
	ValadocApiErrorCode * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_API_TYPE_ERROR_CODE, ValadocApiErrorCode);
	_valadoc_api_source_comment_unref0 (self->priv->source_comment);
	_g_free0 (self->priv->dbus_name);
	_g_free0 (self->priv->cname);
	G_OBJECT_CLASS (valadoc_api_error_code_parent_class)->finalize (obj);
}


/**
 * Represents an errordomain member in the source code.
 */
GType
valadoc_api_error_code_get_type (void)
{
	static volatile gsize valadoc_api_error_code_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_api_error_code_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocApiErrorCodeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_api_error_code_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocApiErrorCode), 0, (GInstanceInitFunc) valadoc_api_error_code_instance_init, NULL };
		GType valadoc_api_error_code_type_id;
		valadoc_api_error_code_type_id = g_type_register_static (VALADOC_API_TYPE_SYMBOL, "ValadocApiErrorCode", &g_define_type_info, 0);
		ValadocApiErrorCode_private_offset = g_type_add_instance_private (valadoc_api_error_code_type_id, sizeof (ValadocApiErrorCodePrivate));
		g_once_init_leave (&valadoc_api_error_code_type_id__volatile, valadoc_api_error_code_type_id);
	}
	return valadoc_api_error_code_type_id__volatile;
}


static void
_vala_valadoc_api_error_code_get_property (GObject * object,
                                           guint property_id,
                                           GValue * value,
                                           GParamSpec * pspec)
{
	ValadocApiErrorCode * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_API_TYPE_ERROR_CODE, ValadocApiErrorCode);
	switch (property_id) {
		case VALADOC_API_ERROR_CODE_NODE_TYPE_PROPERTY:
		g_value_set_enum (value, valadoc_api_node_get_node_type ((ValadocApiNode*) self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



