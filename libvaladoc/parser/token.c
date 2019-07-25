/* token.c generated by valac, the Vala compiler
 * generated from token.vala, do not modify */

/* token.vala
 *
 * Copyright (C) 2008-2009 Florian Brosch, Didier Villevalois
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
	VALADOC_TOKEN_0_PROPERTY,
	VALADOC_TOKEN_IS_WORD_PROPERTY,
	VALADOC_TOKEN_IS_NUMBER_PROPERTY,
	VALADOC_TOKEN_WORD_PROPERTY,
	VALADOC_TOKEN_VALUE_PROPERTY,
	VALADOC_TOKEN_TOKEN_TYPE_PROPERTY,
	VALADOC_TOKEN_BEGIN_PROPERTY,
	VALADOC_TOKEN_END_PROPERTY,
	VALADOC_TOKEN_NUM_PROPERTIES
};
static GParamSpec* valadoc_token_properties[VALADOC_TOKEN_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _ValadocTokenPrivate {
	ValadocTokenType* _type;
	gchar* _word;
	ValaSourceLocation _begin;
	ValaSourceLocation _end;
	gchar* _value;
};


static gint ValadocToken_private_offset;
static gpointer valadoc_token_parent_class = NULL;

static void valadoc_token_finalize (GObject * obj);
static void _vala_valadoc_token_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec);


static inline gpointer
valadoc_token_get_instance_private (ValadocToken* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocToken_private_offset);
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


ValadocToken*
valadoc_token_construct_from_type (GType object_type,
                                   ValadocTokenType* type,
                                   ValaSourceLocation* begin,
                                   ValaSourceLocation* end,
                                   const gchar* val)
{
	ValadocToken * self = NULL;
	ValadocTokenType* _tmp0_;
	ValaSourceLocation _tmp1_;
	ValaSourceLocation _tmp2_;
	gchar* _tmp3_;
	g_return_val_if_fail (type != NULL, NULL);
	g_return_val_if_fail (begin != NULL, NULL);
	g_return_val_if_fail (end != NULL, NULL);
	self = (ValadocToken*) g_object_new (object_type, NULL);
	_tmp0_ = _g_object_ref0 (type);
	_g_object_unref0 (self->priv->_type);
	self->priv->_type = _tmp0_;
	_tmp1_ = *begin;
	self->priv->_begin = _tmp1_;
	_tmp2_ = *end;
	self->priv->_end = _tmp2_;
	_tmp3_ = g_strdup (val);
	_g_free0 (self->priv->_value);
	self->priv->_value = _tmp3_;
	return self;
}


ValadocToken*
valadoc_token_new_from_type (ValadocTokenType* type,
                             ValaSourceLocation* begin,
                             ValaSourceLocation* end,
                             const gchar* val)
{
	return valadoc_token_construct_from_type (VALADOC_TYPE_TOKEN, type, begin, end, val);
}


ValadocToken*
valadoc_token_construct_from_word (GType object_type,
                                   const gchar* word,
                                   ValaSourceLocation* begin,
                                   ValaSourceLocation* end)
{
	ValadocToken * self = NULL;
	gchar* _tmp0_;
	ValaSourceLocation _tmp1_;
	ValaSourceLocation _tmp2_;
	g_return_val_if_fail (word != NULL, NULL);
	g_return_val_if_fail (begin != NULL, NULL);
	g_return_val_if_fail (end != NULL, NULL);
	self = (ValadocToken*) g_object_new (object_type, NULL);
	_tmp0_ = g_strdup (word);
	_g_free0 (self->priv->_word);
	self->priv->_word = _tmp0_;
	_tmp1_ = *begin;
	self->priv->_begin = _tmp1_;
	_tmp2_ = *end;
	self->priv->_end = _tmp2_;
	return self;
}


ValadocToken*
valadoc_token_new_from_word (const gchar* word,
                             ValaSourceLocation* begin,
                             ValaSourceLocation* end)
{
	return valadoc_token_construct_from_word (VALADOC_TYPE_TOKEN, word, begin, end);
}


const gchar*
valadoc_token_to_string (ValadocToken* self)
{
	const gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp1_ = self->priv->_word;
	if (_tmp1_ == NULL) {
		ValadocTokenType* _tmp2_;
		const gchar* _tmp3_;
		_tmp2_ = self->priv->_type;
		_tmp3_ = valadoc_token_type_to_string (_tmp2_);
		_tmp0_ = _tmp3_;
	} else {
		const gchar* _tmp4_;
		_tmp4_ = self->priv->_word;
		_tmp0_ = _tmp4_;
	}
	result = _tmp0_;
	return result;
}


const gchar*
valadoc_token_to_pretty_string (ValadocToken* self)
{
	const gchar* result = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp1_ = self->priv->_word;
	if (_tmp1_ == NULL) {
		ValadocTokenType* _tmp2_;
		const gchar* _tmp3_;
		_tmp2_ = self->priv->_type;
		_tmp3_ = valadoc_token_type_to_pretty_string (_tmp2_);
		_tmp0_ = _tmp3_;
	} else {
		const gchar* _tmp4_;
		_tmp4_ = self->priv->_word;
		_tmp0_ = _tmp4_;
	}
	result = _tmp0_;
	return result;
}


gint
valadoc_token_to_int (ValadocToken* self)
{
	gint result = 0;
	gboolean _tmp0_;
	gboolean _tmp1_;
	const gchar* _tmp2_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = valadoc_token_get_is_number (self);
	_tmp1_ = _tmp0_;
	_vala_assert (_tmp1_, "is_number");
	_tmp2_ = self->priv->_word;
	result = atoi (_tmp2_);
	return result;
}


ValadocToken*
valadoc_token_construct (GType object_type)
{
	ValadocToken * self = NULL;
	self = (ValadocToken*) g_object_new (object_type, NULL);
	return self;
}


ValadocToken*
valadoc_token_new (void)
{
	return valadoc_token_construct (VALADOC_TYPE_TOKEN);
}


gboolean
valadoc_token_get_is_word (ValadocToken* self)
{
	gboolean result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_word;
	result = _tmp0_ != NULL;
	return result;
}


static gchar
string_get (const gchar* self,
            glong index)
{
	gchar result = '\0';
	gchar _tmp0_;
	g_return_val_if_fail (self != NULL, '\0');
	_tmp0_ = ((gchar*) self)[index];
	result = _tmp0_;
	return result;
}


gboolean
valadoc_token_get_is_number (ValadocToken* self)
{
	gboolean result;
	gboolean _tmp0_ = FALSE;
	const gchar* _tmp1_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp1_ = self->priv->_word;
	if (_tmp1_ == NULL) {
		_tmp0_ = TRUE;
	} else {
		const gchar* _tmp2_;
		gint _tmp3_;
		gint _tmp4_;
		_tmp2_ = self->priv->_word;
		_tmp3_ = strlen (_tmp2_);
		_tmp4_ = _tmp3_;
		_tmp0_ = _tmp4_ == 0;
	}
	if (_tmp0_) {
		result = FALSE;
		return result;
	} else {
		gboolean _tmp5_ = FALSE;
		const gchar* _tmp6_;
		_tmp6_ = self->priv->_word;
		if (string_get (_tmp6_, (glong) 0) == '0') {
			const gchar* _tmp7_;
			gint _tmp8_;
			gint _tmp9_;
			_tmp7_ = self->priv->_word;
			_tmp8_ = strlen (_tmp7_);
			_tmp9_ = _tmp8_;
			_tmp5_ = _tmp9_ > 1;
		} else {
			_tmp5_ = FALSE;
		}
		if (_tmp5_) {
			result = FALSE;
			return result;
		}
	}
	{
		gint i = 0;
		i = 0;
		{
			gboolean _tmp10_ = FALSE;
			_tmp10_ = TRUE;
			while (TRUE) {
				gint _tmp12_;
				const gchar* _tmp13_;
				gint _tmp14_;
				gint _tmp15_;
				gboolean _tmp16_ = FALSE;
				const gchar* _tmp17_;
				gint _tmp18_;
				if (!_tmp10_) {
					gint _tmp11_;
					_tmp11_ = i;
					i = _tmp11_ + 1;
				}
				_tmp10_ = FALSE;
				_tmp12_ = i;
				_tmp13_ = self->priv->_word;
				_tmp14_ = strlen (_tmp13_);
				_tmp15_ = _tmp14_;
				if (!(_tmp12_ < _tmp15_)) {
					break;
				}
				_tmp17_ = self->priv->_word;
				_tmp18_ = i;
				if (string_get (_tmp17_, (glong) _tmp18_) < '0') {
					_tmp16_ = TRUE;
				} else {
					const gchar* _tmp19_;
					gint _tmp20_;
					_tmp19_ = self->priv->_word;
					_tmp20_ = i;
					_tmp16_ = string_get (_tmp19_, (glong) _tmp20_) > '9';
				}
				if (_tmp16_) {
					result = FALSE;
					return result;
				}
			}
		}
	}
	result = TRUE;
	return result;
}


const gchar*
valadoc_token_get_word (ValadocToken* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_word;
	result = _tmp0_;
	return result;
}


const gchar*
valadoc_token_get_value (ValadocToken* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_value;
	result = _tmp0_;
	return result;
}


ValadocTokenType*
valadoc_token_get_token_type (ValadocToken* self)
{
	ValadocTokenType* result;
	ValadocTokenType* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_type;
	result = _tmp0_;
	return result;
}


void
valadoc_token_get_begin (ValadocToken* self,
                         ValaSourceLocation * result)
{
	ValaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_begin;
	*result = _tmp0_;
	return;
}


void
valadoc_token_get_end (ValadocToken* self,
                       ValaSourceLocation * result)
{
	ValaSourceLocation _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->_end;
	*result = _tmp0_;
	return;
}


static void
valadoc_token_class_init (ValadocTokenClass * klass)
{
	valadoc_token_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocToken_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_valadoc_token_get_property;
	G_OBJECT_CLASS (klass)->finalize = valadoc_token_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TOKEN_IS_WORD_PROPERTY, valadoc_token_properties[VALADOC_TOKEN_IS_WORD_PROPERTY] = g_param_spec_boolean ("is-word", "is-word", "is-word", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TOKEN_IS_NUMBER_PROPERTY, valadoc_token_properties[VALADOC_TOKEN_IS_NUMBER_PROPERTY] = g_param_spec_boolean ("is-number", "is-number", "is-number", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TOKEN_WORD_PROPERTY, valadoc_token_properties[VALADOC_TOKEN_WORD_PROPERTY] = g_param_spec_string ("word", "word", "word", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TOKEN_VALUE_PROPERTY, valadoc_token_properties[VALADOC_TOKEN_VALUE_PROPERTY] = g_param_spec_string ("value", "value", "value", NULL, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TOKEN_TOKEN_TYPE_PROPERTY, valadoc_token_properties[VALADOC_TOKEN_TOKEN_TYPE_PROPERTY] = g_param_spec_object ("token-type", "token-type", "token-type", VALADOC_TYPE_TOKEN_TYPE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TOKEN_BEGIN_PROPERTY, valadoc_token_properties[VALADOC_TOKEN_BEGIN_PROPERTY] = g_param_spec_boxed ("begin", "begin", "begin", VALA_TYPE_SOURCE_LOCATION, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALADOC_TOKEN_END_PROPERTY, valadoc_token_properties[VALADOC_TOKEN_END_PROPERTY] = g_param_spec_boxed ("end", "end", "end", VALA_TYPE_SOURCE_LOCATION, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}


static void
valadoc_token_instance_init (ValadocToken * self)
{
	self->priv = valadoc_token_get_instance_private (self);
	self->priv->_type = NULL;
	self->priv->_word = NULL;
}


static void
valadoc_token_finalize (GObject * obj)
{
	ValadocToken * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_TYPE_TOKEN, ValadocToken);
	_g_object_unref0 (self->priv->_type);
	_g_free0 (self->priv->_word);
	_g_free0 (self->priv->_value);
	G_OBJECT_CLASS (valadoc_token_parent_class)->finalize (obj);
}


GType
valadoc_token_get_type (void)
{
	static volatile gsize valadoc_token_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_token_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocTokenClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_token_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocToken), 0, (GInstanceInitFunc) valadoc_token_instance_init, NULL };
		GType valadoc_token_type_id;
		valadoc_token_type_id = g_type_register_static (G_TYPE_OBJECT, "ValadocToken", &g_define_type_info, 0);
		ValadocToken_private_offset = g_type_add_instance_private (valadoc_token_type_id, sizeof (ValadocTokenPrivate));
		g_once_init_leave (&valadoc_token_type_id__volatile, valadoc_token_type_id);
	}
	return valadoc_token_type_id__volatile;
}


static void
_vala_valadoc_token_get_property (GObject * object,
                                  guint property_id,
                                  GValue * value,
                                  GParamSpec * pspec)
{
	ValadocToken * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALADOC_TYPE_TOKEN, ValadocToken);
	switch (property_id) {
		case VALADOC_TOKEN_IS_WORD_PROPERTY:
		g_value_set_boolean (value, valadoc_token_get_is_word (self));
		break;
		case VALADOC_TOKEN_IS_NUMBER_PROPERTY:
		g_value_set_boolean (value, valadoc_token_get_is_number (self));
		break;
		case VALADOC_TOKEN_WORD_PROPERTY:
		g_value_set_string (value, valadoc_token_get_word (self));
		break;
		case VALADOC_TOKEN_VALUE_PROPERTY:
		g_value_set_string (value, valadoc_token_get_value (self));
		break;
		case VALADOC_TOKEN_TOKEN_TYPE_PROPERTY:
		g_value_set_object (value, valadoc_token_get_token_type (self));
		break;
		case VALADOC_TOKEN_BEGIN_PROPERTY:
		{
			ValaSourceLocation boxed;
			valadoc_token_get_begin (self, &boxed);
			g_value_set_boxed (value, &boxed);
		}
		break;
		case VALADOC_TOKEN_END_PROPERTY:
		{
			ValaSourceLocation boxed;
			valadoc_token_get_end (self, &boxed);
			g_value_set_boxed (value, &boxed);
		}
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



