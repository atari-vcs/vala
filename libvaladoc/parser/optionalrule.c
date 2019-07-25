/* optionalrule.c generated by valac, the Vala compiler
 * generated from optionalrule.vala, do not modify */

/* optionalrule.vala
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


#define VALADOC_TYPE_OPTIONAL_RULE (valadoc_optional_rule_get_type ())
#define VALADOC_OPTIONAL_RULE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALADOC_TYPE_OPTIONAL_RULE, ValadocOptionalRule))
#define VALADOC_OPTIONAL_RULE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALADOC_TYPE_OPTIONAL_RULE, ValadocOptionalRuleClass))
#define VALADOC_IS_OPTIONAL_RULE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALADOC_TYPE_OPTIONAL_RULE))
#define VALADOC_IS_OPTIONAL_RULE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALADOC_TYPE_OPTIONAL_RULE))
#define VALADOC_OPTIONAL_RULE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALADOC_TYPE_OPTIONAL_RULE, ValadocOptionalRuleClass))

typedef struct _ValadocOptionalRule ValadocOptionalRule;
typedef struct _ValadocOptionalRuleClass ValadocOptionalRuleClass;
typedef struct _ValadocOptionalRulePrivate ValadocOptionalRulePrivate;
enum  {
	VALADOC_OPTIONAL_RULE_0_PROPERTY,
	VALADOC_OPTIONAL_RULE_NUM_PROPERTIES
};
static GParamSpec* valadoc_optional_rule_properties[VALADOC_OPTIONAL_RULE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define VALADOC_OPTIONAL_RULE_TYPE_STATE (valadoc_optional_rule_state_get_type ())
#define VALADOC_OPTIONAL_RULE_STATE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALADOC_OPTIONAL_RULE_TYPE_STATE, ValadocOptionalRuleState))
#define VALADOC_OPTIONAL_RULE_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALADOC_OPTIONAL_RULE_TYPE_STATE, ValadocOptionalRuleStateClass))
#define VALADOC_OPTIONAL_RULE_IS_STATE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALADOC_OPTIONAL_RULE_TYPE_STATE))
#define VALADOC_OPTIONAL_RULE_IS_STATE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALADOC_OPTIONAL_RULE_TYPE_STATE))
#define VALADOC_OPTIONAL_RULE_STATE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALADOC_OPTIONAL_RULE_TYPE_STATE, ValadocOptionalRuleStateClass))

typedef struct _ValadocOptionalRuleState ValadocOptionalRuleState;
typedef struct _ValadocOptionalRuleStateClass ValadocOptionalRuleStateClass;
typedef struct _ValadocOptionalRuleStatePrivate ValadocOptionalRuleStatePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
enum  {
	VALADOC_OPTIONAL_RULE_STATE_0_PROPERTY,
	VALADOC_OPTIONAL_RULE_STATE_NUM_PROPERTIES
};
static GParamSpec* valadoc_optional_rule_state_properties[VALADOC_OPTIONAL_RULE_STATE_NUM_PROPERTIES];

struct _ValadocOptionalRule {
	ValadocRule parent_instance;
	ValadocOptionalRulePrivate * priv;
};

struct _ValadocOptionalRuleClass {
	ValadocRuleClass parent_class;
};

struct _ValadocOptionalRulePrivate {
	GObject* _scheme;
};

struct _ValadocOptionalRuleState {
	GObject parent_instance;
	gboolean started;
	ValadocOptionalRuleStatePrivate * priv;
};

struct _ValadocOptionalRuleStateClass {
	GObjectClass parent_class;
};


static gint ValadocOptionalRule_private_offset;
static gpointer valadoc_optional_rule_parent_class = NULL;
static gpointer valadoc_optional_rule_state_parent_class = NULL;

G_GNUC_INTERNAL GType valadoc_optional_rule_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
G_GNUC_INTERNAL ValadocOptionalRule* valadoc_optional_rule_new (GObject* scheme);
G_GNUC_INTERNAL ValadocOptionalRule* valadoc_optional_rule_construct (GType object_type,
                                                      GObject* scheme);
static gboolean valadoc_optional_rule_real_is_optional (ValadocRule* base);
static gboolean valadoc_optional_rule_real_starts_with_token (ValadocRule* base,
                                                       ValadocToken* token);
static gboolean valadoc_optional_rule_real_accept_token (ValadocRule* base,
                                                  ValadocToken* token,
                                                  ValadocParserCallback* parser,
                                                  ValadocRuleForward forward,
                                                  GError** error);
static GType valadoc_optional_rule_state_get_type (void) G_GNUC_CONST G_GNUC_UNUSED;
static ValadocOptionalRuleState* valadoc_optional_rule_state_new (void);
static ValadocOptionalRuleState* valadoc_optional_rule_state_construct (GType object_type);
static gboolean valadoc_optional_rule_real_would_accept_token (ValadocRule* base,
                                                        ValadocToken* token,
                                                        GObject* state);
static gboolean valadoc_optional_rule_real_would_reduce (ValadocRule* base,
                                                  ValadocToken* token,
                                                  GObject* state);
static gchar* valadoc_optional_rule_real_to_string (ValadocRule* base,
                                             GObject* rule_state);
static void valadoc_optional_rule_state_finalize (GObject * obj);
static void valadoc_optional_rule_finalize (GObject * obj);


static inline gpointer
valadoc_optional_rule_get_instance_private (ValadocOptionalRule* self)
{
	return G_STRUCT_MEMBER_P (self, ValadocOptionalRule_private_offset);
}


static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}


G_GNUC_INTERNAL ValadocOptionalRule*
valadoc_optional_rule_construct (GType object_type,
                                 GObject* scheme)
{
	ValadocOptionalRule * self = NULL;
	GObject* _tmp0_;
	g_return_val_if_fail (scheme != NULL, NULL);
	self = (ValadocOptionalRule*) valadoc_rule_construct (object_type);
	_tmp0_ = _g_object_ref0 (scheme);
	_g_object_unref0 (self->priv->_scheme);
	self->priv->_scheme = _tmp0_;
	return self;
}


G_GNUC_INTERNAL ValadocOptionalRule*
valadoc_optional_rule_new (GObject* scheme)
{
	return valadoc_optional_rule_construct (VALADOC_TYPE_OPTIONAL_RULE, scheme);
}


static gboolean
valadoc_optional_rule_real_is_optional (ValadocRule* base)
{
	ValadocOptionalRule * self;
	gboolean result = FALSE;
	self = (ValadocOptionalRule*) base;
	result = TRUE;
	return result;
}


static gboolean
valadoc_optional_rule_real_starts_with_token (ValadocRule* base,
                                              ValadocToken* token)
{
	ValadocOptionalRule * self;
	gboolean result = FALSE;
	GObject* _tmp0_;
	self = (ValadocOptionalRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	_tmp0_ = self->priv->_scheme;
	result = valadoc_rule_has_start_token ((ValadocRule*) self, _tmp0_, token);
	return result;
}


static gboolean
valadoc_optional_rule_real_accept_token (ValadocRule* base,
                                         ValadocToken* token,
                                         ValadocParserCallback* parser,
                                         ValadocRuleForward forward,
                                         GError** error)
{
	ValadocOptionalRule * self;
	gboolean result = FALSE;
	ValadocOptionalRuleState* state = NULL;
	GObject* _tmp0_;
	ValadocOptionalRuleState* _tmp1_;
	ValadocOptionalRuleState* _tmp2_;
	ValadocOptionalRuleState* _tmp5_;
	gboolean _tmp6_;
	GError * _inner_error_ = NULL;
	self = (ValadocOptionalRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	g_return_val_if_fail (parser != NULL, FALSE);
	_tmp0_ = valadoc_parser_callback_get_rule_state (parser);
	_tmp1_ = G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, VALADOC_OPTIONAL_RULE_TYPE_STATE) ? ((ValadocOptionalRuleState*) _tmp0_) : NULL;
	if (_tmp1_ == NULL) {
		_g_object_unref0 (_tmp0_);
	}
	state = _tmp1_;
	_tmp2_ = state;
	if (_tmp2_ == NULL) {
		ValadocOptionalRuleState* _tmp3_;
		ValadocOptionalRuleState* _tmp4_;
		_tmp3_ = valadoc_optional_rule_state_new ();
		_g_object_unref0 (state);
		state = _tmp3_;
		_tmp4_ = state;
		valadoc_parser_callback_set_rule_state (parser, (GObject*) _tmp4_);
	}
	_tmp5_ = state;
	_tmp6_ = _tmp5_->started;
	if (!_tmp6_) {
		ValadocOptionalRuleState* _tmp9_;
		gboolean handled = FALSE;
		gboolean _tmp10_ = FALSE;
		GObject* _tmp11_;
		gboolean _tmp12_ = FALSE;
		gboolean _tmp13_;
		valadoc_rule_do_start ((ValadocRule*) self, parser, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == VALADOC_PARSER_ERROR) {
				gboolean _tmp7_ = FALSE;
				g_propagate_error (error, _inner_error_);
				_g_object_unref0 (state);
				return _tmp7_;
			} else {
				gboolean _tmp8_ = FALSE;
				_g_object_unref0 (state);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return _tmp8_;
			}
		}
		_tmp9_ = state;
		_tmp9_->started = TRUE;
		_tmp11_ = self->priv->_scheme;
		_tmp13_ = valadoc_rule_try_to_apply ((ValadocRule*) self, _tmp11_, token, parser, &_tmp12_, &_inner_error_);
		handled = _tmp12_;
		_tmp10_ = _tmp13_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == VALADOC_PARSER_ERROR) {
				gboolean _tmp14_ = FALSE;
				g_propagate_error (error, _inner_error_);
				_g_object_unref0 (state);
				return _tmp14_;
			} else {
				gboolean _tmp15_ = FALSE;
				_g_object_unref0 (state);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return _tmp15_;
			}
		}
		if (_tmp10_) {
			result = handled;
			_g_object_unref0 (state);
			return result;
		} else {
			valadoc_rule_do_skip ((ValadocRule*) self, parser, &_inner_error_);
			if (G_UNLIKELY (_inner_error_ != NULL)) {
				if (_inner_error_->domain == VALADOC_PARSER_ERROR) {
					gboolean _tmp16_ = FALSE;
					g_propagate_error (error, _inner_error_);
					_g_object_unref0 (state);
					return _tmp16_;
				} else {
					gboolean _tmp17_ = FALSE;
					_g_object_unref0 (state);
					g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
					g_clear_error (&_inner_error_);
					return _tmp17_;
				}
			}
			result = FALSE;
			_g_object_unref0 (state);
			return result;
		}
	} else {
		valadoc_rule_do_reduce ((ValadocRule*) self, parser, &_inner_error_);
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == VALADOC_PARSER_ERROR) {
				gboolean _tmp18_ = FALSE;
				g_propagate_error (error, _inner_error_);
				_g_object_unref0 (state);
				return _tmp18_;
			} else {
				gboolean _tmp19_ = FALSE;
				_g_object_unref0 (state);
				g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return _tmp19_;
			}
		}
		result = FALSE;
		_g_object_unref0 (state);
		return result;
	}
	_g_object_unref0 (state);
}


static gboolean
valadoc_optional_rule_real_would_accept_token (ValadocRule* base,
                                               ValadocToken* token,
                                               GObject* state)
{
	ValadocOptionalRule * self;
	gboolean result = FALSE;
	self = (ValadocOptionalRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	result = FALSE;
	return result;
}


static gboolean
valadoc_optional_rule_real_would_reduce (ValadocRule* base,
                                         ValadocToken* token,
                                         GObject* state)
{
	ValadocOptionalRule * self;
	gboolean result = FALSE;
	self = (ValadocOptionalRule*) base;
	g_return_val_if_fail (token != NULL, FALSE);
	result = TRUE;
	return result;
}


static gchar*
bool_to_string (gboolean self)
{
	gchar* result = NULL;
	if (self) {
		gchar* _tmp0_;
		_tmp0_ = g_strdup ("true");
		result = _tmp0_;
		return result;
	} else {
		gchar* _tmp1_;
		_tmp1_ = g_strdup ("false");
		result = _tmp1_;
		return result;
	}
}


static gchar*
valadoc_optional_rule_real_to_string (ValadocRule* base,
                                      GObject* rule_state)
{
	ValadocOptionalRule * self;
	gchar* result = NULL;
	ValadocOptionalRuleState* state = NULL;
	ValadocOptionalRuleState* _tmp0_;
	ValadocOptionalRuleState* _tmp1_;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	ValadocOptionalRuleState* _tmp8_;
	gboolean _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	self = (ValadocOptionalRule*) base;
	_tmp0_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (rule_state, VALADOC_OPTIONAL_RULE_TYPE_STATE) ? ((ValadocOptionalRuleState*) rule_state) : NULL);
	state = _tmp0_;
	_tmp1_ = state;
	if (_tmp1_ == NULL) {
		ValadocOptionalRuleState* _tmp2_;
		_tmp2_ = valadoc_optional_rule_state_new ();
		_g_object_unref0 (state);
		state = _tmp2_;
	}
	_tmp4_ = valadoc_rule_get_name ((ValadocRule*) self);
	_tmp5_ = _tmp4_;
	if (_tmp5_ != NULL) {
		const gchar* _tmp6_;
		const gchar* _tmp7_;
		_tmp6_ = valadoc_rule_get_name ((ValadocRule*) self);
		_tmp7_ = _tmp6_;
		_tmp3_ = _tmp7_;
	} else {
		_tmp3_ = " ";
	}
	_tmp8_ = state;
	_tmp9_ = _tmp8_->started;
	_tmp10_ = bool_to_string (_tmp9_);
	_tmp11_ = _tmp10_;
	_tmp12_ = g_strdup_printf ("%-15s%-15s(started=%s)", _tmp3_, "[option]", _tmp11_);
	_tmp13_ = _tmp12_;
	_g_free0 (_tmp11_);
	result = _tmp13_;
	_g_object_unref0 (state);
	return result;
}


static ValadocOptionalRuleState*
valadoc_optional_rule_state_construct (GType object_type)
{
	ValadocOptionalRuleState * self = NULL;
	self = (ValadocOptionalRuleState*) g_object_new (object_type, NULL);
	return self;
}


static ValadocOptionalRuleState*
valadoc_optional_rule_state_new (void)
{
	return valadoc_optional_rule_state_construct (VALADOC_OPTIONAL_RULE_TYPE_STATE);
}


static void
valadoc_optional_rule_state_class_init (ValadocOptionalRuleStateClass * klass)
{
	valadoc_optional_rule_state_parent_class = g_type_class_peek_parent (klass);
	G_OBJECT_CLASS (klass)->finalize = valadoc_optional_rule_state_finalize;
}


static void
valadoc_optional_rule_state_instance_init (ValadocOptionalRuleState * self)
{
	self->started = FALSE;
}


static void
valadoc_optional_rule_state_finalize (GObject * obj)
{
	ValadocOptionalRuleState * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_OPTIONAL_RULE_TYPE_STATE, ValadocOptionalRuleState);
	G_OBJECT_CLASS (valadoc_optional_rule_state_parent_class)->finalize (obj);
}


static GType
valadoc_optional_rule_state_get_type (void)
{
	static volatile gsize valadoc_optional_rule_state_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_optional_rule_state_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocOptionalRuleStateClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_optional_rule_state_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocOptionalRuleState), 0, (GInstanceInitFunc) valadoc_optional_rule_state_instance_init, NULL };
		GType valadoc_optional_rule_state_type_id;
		valadoc_optional_rule_state_type_id = g_type_register_static (G_TYPE_OBJECT, "ValadocOptionalRuleState", &g_define_type_info, 0);
		g_once_init_leave (&valadoc_optional_rule_state_type_id__volatile, valadoc_optional_rule_state_type_id);
	}
	return valadoc_optional_rule_state_type_id__volatile;
}


static void
valadoc_optional_rule_class_init (ValadocOptionalRuleClass * klass)
{
	valadoc_optional_rule_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &ValadocOptionalRule_private_offset);
	((ValadocRuleClass *) klass)->is_optional = (gboolean (*) (ValadocRule*)) valadoc_optional_rule_real_is_optional;
	((ValadocRuleClass *) klass)->starts_with_token = (gboolean (*) (ValadocRule*, ValadocToken*)) valadoc_optional_rule_real_starts_with_token;
	((ValadocRuleClass *) klass)->accept_token = (gboolean (*) (ValadocRule*, ValadocToken*, ValadocParserCallback*, ValadocRuleForward, GError**)) valadoc_optional_rule_real_accept_token;
	((ValadocRuleClass *) klass)->would_accept_token = (gboolean (*) (ValadocRule*, ValadocToken*, GObject*)) valadoc_optional_rule_real_would_accept_token;
	((ValadocRuleClass *) klass)->would_reduce = (gboolean (*) (ValadocRule*, ValadocToken*, GObject*)) valadoc_optional_rule_real_would_reduce;
	((ValadocRuleClass *) klass)->to_string = (gchar* (*) (ValadocRule*, GObject*)) valadoc_optional_rule_real_to_string;
	G_OBJECT_CLASS (klass)->finalize = valadoc_optional_rule_finalize;
}


static void
valadoc_optional_rule_instance_init (ValadocOptionalRule * self)
{
	self->priv = valadoc_optional_rule_get_instance_private (self);
}


static void
valadoc_optional_rule_finalize (GObject * obj)
{
	ValadocOptionalRule * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALADOC_TYPE_OPTIONAL_RULE, ValadocOptionalRule);
	_g_object_unref0 (self->priv->_scheme);
	G_OBJECT_CLASS (valadoc_optional_rule_parent_class)->finalize (obj);
}


G_GNUC_INTERNAL GType
valadoc_optional_rule_get_type (void)
{
	static volatile gsize valadoc_optional_rule_type_id__volatile = 0;
	if (g_once_init_enter (&valadoc_optional_rule_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValadocOptionalRuleClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) valadoc_optional_rule_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValadocOptionalRule), 0, (GInstanceInitFunc) valadoc_optional_rule_instance_init, NULL };
		GType valadoc_optional_rule_type_id;
		valadoc_optional_rule_type_id = g_type_register_static (VALADOC_TYPE_RULE, "ValadocOptionalRule", &g_define_type_info, 0);
		ValadocOptionalRule_private_offset = g_type_add_instance_private (valadoc_optional_rule_type_id, sizeof (ValadocOptionalRulePrivate));
		g_once_init_leave (&valadoc_optional_rule_type_id__volatile, valadoc_optional_rule_type_id);
	}
	return valadoc_optional_rule_type_id__volatile;
}



