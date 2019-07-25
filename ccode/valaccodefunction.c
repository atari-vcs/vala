/* valaccodefunction.c generated by valac, the Vala compiler
 * generated from valaccodefunction.vala, do not modify */

/* valaccodefunction.vala
 *
 * Copyright (C) 2006-2012  Jürg Billeter
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
#include "valaccode.h"
#include <stdlib.h>
#include <string.h>
#include <valagee.h>

#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _ValaCCodeFunctionPrivate {
	gchar* _name;
	gchar* _return_type;
	gboolean _is_declaration;
	ValaCCodeBlock* _block;
	ValaCCodeLineDirective* _current_line;
	ValaCCodeBlock* _current_block;
	ValaList* parameters;
	ValaList* statement_stack;
};


static gint ValaCCodeFunction_private_offset;
static gpointer vala_ccode_function_parent_class = NULL;

static void vala_ccode_function_real_write (ValaCCodeNode* base,
                                     ValaCCodeWriter* writer);
static void vala_ccode_function_finalize (ValaCCodeNode * obj);


static inline gpointer
vala_ccode_function_get_instance_private (ValaCCodeFunction* self)
{
	return G_STRUCT_MEMBER_P (self, ValaCCodeFunction_private_offset);
}


ValaCCodeFunction*
vala_ccode_function_construct (GType object_type,
                               const gchar* name,
                               const gchar* return_type)
{
	ValaCCodeFunction* self = NULL;
	ValaCCodeBlock* _tmp0_;
	ValaCCodeBlock* _tmp1_;
	ValaCCodeBlock* _tmp2_;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (return_type != NULL, NULL);
	self = (ValaCCodeFunction*) vala_ccode_node_construct (object_type);
	vala_ccode_function_set_name (self, name);
	vala_ccode_function_set_return_type (self, return_type);
	_tmp0_ = vala_ccode_block_new ();
	_tmp1_ = _tmp0_;
	vala_ccode_function_set_block (self, _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
	_tmp2_ = self->priv->_block;
	vala_ccode_function_set_current_block (self, _tmp2_);
	return self;
}


ValaCCodeFunction*
vala_ccode_function_new (const gchar* name,
                         const gchar* return_type)
{
	return vala_ccode_function_construct (VALA_TYPE_CCODE_FUNCTION, name, return_type);
}


/**
 * Appends the specified parameter to the list of function parameters.
 *
 * @param param a formal parameter
 */
void
vala_ccode_function_add_parameter (ValaCCodeFunction* self,
                                   ValaCCodeParameter* param)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (param != NULL);
	_tmp0_ = self->priv->parameters;
	vala_collection_add ((ValaCollection*) _tmp0_, param);
}


void
vala_ccode_function_insert_parameter (ValaCCodeFunction* self,
                                      gint position,
                                      ValaCCodeParameter* param)
{
	ValaList* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (param != NULL);
	_tmp0_ = self->priv->parameters;
	vala_list_insert (_tmp0_, position, param);
}


gint
vala_ccode_function_get_parameter_count (ValaCCodeFunction* self)
{
	gint result = 0;
	ValaList* _tmp0_;
	gint _tmp1_;
	gint _tmp2_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->parameters;
	_tmp1_ = vala_collection_get_size ((ValaCollection*) _tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}


ValaCCodeParameter*
vala_ccode_function_get_parameter (ValaCCodeFunction* self,
                                   gint position)
{
	ValaCCodeParameter* result = NULL;
	ValaList* _tmp0_;
	gpointer _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->parameters;
	_tmp1_ = vala_list_get (_tmp0_, position);
	result = (ValaCCodeParameter*) _tmp1_;
	return result;
}


/**
 * Returns a copy of this function.
 *
 * @return copied function
 */
static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


ValaCCodeFunction*
vala_ccode_function_copy (ValaCCodeFunction* self)
{
	ValaCCodeFunction* result = NULL;
	ValaCCodeFunction* func = NULL;
	const gchar* _tmp0_;
	const gchar* _tmp1_;
	ValaCCodeFunction* _tmp2_;
	ValaCCodeFunction* _tmp3_;
	ValaCCodeModifiers _tmp4_;
	ValaCCodeModifiers _tmp5_;
	ValaCCodeFunction* _tmp20_;
	gboolean _tmp21_;
	ValaCCodeFunction* _tmp22_;
	ValaCCodeBlock* _tmp23_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	_tmp1_ = self->priv->_return_type;
	_tmp2_ = vala_ccode_function_new (_tmp0_, _tmp1_);
	func = _tmp2_;
	_tmp3_ = func;
	_tmp4_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp5_ = _tmp4_;
	vala_ccode_node_set_modifiers ((ValaCCodeNode*) _tmp3_, _tmp5_);
	{
		ValaList* _param_list = NULL;
		ValaList* _tmp6_;
		ValaList* _tmp7_;
		gint _param_size = 0;
		ValaList* _tmp8_;
		gint _tmp9_;
		gint _tmp10_;
		gint _param_index = 0;
		_tmp6_ = self->priv->parameters;
		_tmp7_ = _vala_iterable_ref0 (_tmp6_);
		_param_list = _tmp7_;
		_tmp8_ = _param_list;
		_tmp9_ = vala_collection_get_size ((ValaCollection*) _tmp8_);
		_tmp10_ = _tmp9_;
		_param_size = _tmp10_;
		_param_index = -1;
		while (TRUE) {
			gint _tmp11_;
			gint _tmp12_;
			gint _tmp13_;
			ValaCCodeParameter* param = NULL;
			ValaList* _tmp14_;
			gint _tmp15_;
			gpointer _tmp16_;
			ValaCCodeFunction* _tmp17_;
			ValaList* _tmp18_;
			ValaCCodeParameter* _tmp19_;
			_tmp11_ = _param_index;
			_param_index = _tmp11_ + 1;
			_tmp12_ = _param_index;
			_tmp13_ = _param_size;
			if (!(_tmp12_ < _tmp13_)) {
				break;
			}
			_tmp14_ = _param_list;
			_tmp15_ = _param_index;
			_tmp16_ = vala_list_get (_tmp14_, _tmp15_);
			param = (ValaCCodeParameter*) _tmp16_;
			_tmp17_ = func;
			_tmp18_ = _tmp17_->priv->parameters;
			_tmp19_ = param;
			vala_collection_add ((ValaCollection*) _tmp18_, _tmp19_);
			_vala_ccode_node_unref0 (param);
		}
		_vala_iterable_unref0 (_param_list);
	}
	_tmp20_ = func;
	_tmp21_ = self->priv->_is_declaration;
	vala_ccode_function_set_is_declaration (_tmp20_, _tmp21_);
	_tmp22_ = func;
	_tmp23_ = self->priv->_block;
	vala_ccode_function_set_block (_tmp22_, _tmp23_);
	result = func;
	return result;
}


static void
vala_ccode_function_real_write (ValaCCodeNode* base,
                                ValaCCodeWriter* writer)
{
	ValaCCodeFunction * self;
	ValaCCodeLineDirective* _tmp0_;
	ValaCCodeLineDirective* _tmp1_;
	ValaCCodeModifiers _tmp2_;
	ValaCCodeModifiers _tmp3_;
	ValaCCodeModifiers _tmp4_;
	ValaCCodeModifiers _tmp5_;
	ValaCCodeModifiers _tmp6_;
	ValaCCodeModifiers _tmp7_;
	const gchar* _tmp8_;
	gboolean _tmp9_;
	const gchar* _tmp10_;
	gint _tmp11_ = 0;
	gboolean _tmp12_;
	gint param_pos_begin = 0;
	const gchar* _tmp14_;
	gboolean _tmp15_ = FALSE;
	ValaCCodeModifiers _tmp16_;
	ValaCCodeModifiers _tmp17_;
	gboolean has_args = FALSE;
	gint i = 0;
	gint format_arg_index = 0;
	gint args_index = 0;
	gint _tmp53_;
	gboolean _tmp54_;
	self = (ValaCCodeFunction*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = vala_ccode_node_get_line ((ValaCCodeNode*) self);
	_tmp1_ = _tmp0_;
	vala_ccode_writer_write_indent (writer, _tmp1_);
	_tmp2_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp3_ = _tmp2_;
	if ((_tmp3_ & VALA_CCODE_MODIFIERS_INTERNAL) == VALA_CCODE_MODIFIERS_INTERNAL) {
		vala_ccode_writer_write_string (writer, "G_GNUC_INTERNAL ");
	}
	_tmp4_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp5_ = _tmp4_;
	if ((_tmp5_ & VALA_CCODE_MODIFIERS_STATIC) == VALA_CCODE_MODIFIERS_STATIC) {
		vala_ccode_writer_write_string (writer, "static ");
	}
	_tmp6_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp7_ = _tmp6_;
	if ((_tmp7_ & VALA_CCODE_MODIFIERS_INLINE) == VALA_CCODE_MODIFIERS_INLINE) {
		vala_ccode_writer_write_string (writer, "inline ");
	}
	_tmp8_ = self->priv->_return_type;
	vala_ccode_writer_write_string (writer, _tmp8_);
	_tmp9_ = self->priv->_is_declaration;
	if (_tmp9_) {
		vala_ccode_writer_write_string (writer, " ");
	} else {
		vala_ccode_writer_write_newline (writer);
	}
	_tmp10_ = self->priv->_name;
	vala_ccode_writer_write_string (writer, _tmp10_);
	vala_ccode_writer_write_string (writer, " (");
	_tmp12_ = self->priv->_is_declaration;
	if (_tmp12_) {
		const gchar* _tmp13_;
		_tmp13_ = self->priv->_return_type;
		_tmp11_ = g_utf8_strlen (_tmp13_, (gssize) -1) + 1;
	} else {
		_tmp11_ = 0;
	}
	_tmp14_ = self->priv->_name;
	param_pos_begin = (_tmp11_ + g_utf8_strlen (_tmp14_, (gssize) -1)) + 2;
	_tmp16_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
	_tmp17_ = _tmp16_;
	if ((_tmp17_ & VALA_CCODE_MODIFIERS_PRINTF) == VALA_CCODE_MODIFIERS_PRINTF) {
		_tmp15_ = TRUE;
	} else {
		ValaCCodeModifiers _tmp18_;
		ValaCCodeModifiers _tmp19_;
		_tmp18_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp19_ = _tmp18_;
		_tmp15_ = (_tmp19_ & VALA_CCODE_MODIFIERS_SCANF) == VALA_CCODE_MODIFIERS_SCANF;
	}
	has_args = _tmp15_;
	i = 0;
	format_arg_index = -1;
	args_index = -1;
	{
		ValaList* _param_list = NULL;
		ValaList* _tmp20_;
		ValaList* _tmp21_;
		gint _param_size = 0;
		ValaList* _tmp22_;
		gint _tmp23_;
		gint _tmp24_;
		gint _param_index = 0;
		_tmp20_ = self->priv->parameters;
		_tmp21_ = _vala_iterable_ref0 (_tmp20_);
		_param_list = _tmp21_;
		_tmp22_ = _param_list;
		_tmp23_ = vala_collection_get_size ((ValaCollection*) _tmp22_);
		_tmp24_ = _tmp23_;
		_param_size = _tmp24_;
		_param_index = -1;
		while (TRUE) {
			gint _tmp25_;
			gint _tmp26_;
			gint _tmp27_;
			ValaCCodeParameter* param = NULL;
			ValaList* _tmp28_;
			gint _tmp29_;
			gpointer _tmp30_;
			gint _tmp31_;
			ValaCCodeParameter* _tmp33_;
			ValaCCodeParameter* _tmp34_;
			ValaCCodeModifiers _tmp35_;
			ValaCCodeModifiers _tmp36_;
			gboolean _tmp38_ = FALSE;
			gboolean _tmp39_;
			gint _tmp52_;
			_tmp25_ = _param_index;
			_param_index = _tmp25_ + 1;
			_tmp26_ = _param_index;
			_tmp27_ = _param_size;
			if (!(_tmp26_ < _tmp27_)) {
				break;
			}
			_tmp28_ = _param_list;
			_tmp29_ = _param_index;
			_tmp30_ = vala_list_get (_tmp28_, _tmp29_);
			param = (ValaCCodeParameter*) _tmp30_;
			_tmp31_ = i;
			if (_tmp31_ > 0) {
				gint _tmp32_;
				vala_ccode_writer_write_string (writer, ",");
				vala_ccode_writer_write_newline (writer);
				_tmp32_ = param_pos_begin;
				vala_ccode_writer_write_nspaces (writer, (guint) _tmp32_);
			}
			_tmp33_ = param;
			vala_ccode_node_write ((ValaCCodeNode*) _tmp33_, writer);
			_tmp34_ = param;
			_tmp35_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) _tmp34_);
			_tmp36_ = _tmp35_;
			if ((_tmp36_ & VALA_CCODE_MODIFIERS_FORMAT_ARG) == VALA_CCODE_MODIFIERS_FORMAT_ARG) {
				gint _tmp37_;
				_tmp37_ = i;
				format_arg_index = _tmp37_;
			}
			_tmp39_ = has_args;
			if (_tmp39_) {
				ValaCCodeParameter* _tmp40_;
				gboolean _tmp41_;
				gboolean _tmp42_;
				_tmp40_ = param;
				_tmp41_ = vala_ccode_parameter_get_ellipsis (_tmp40_);
				_tmp42_ = _tmp41_;
				_tmp38_ = _tmp42_;
			} else {
				_tmp38_ = FALSE;
			}
			if (_tmp38_) {
				gint _tmp43_;
				_tmp43_ = i;
				args_index = _tmp43_;
			} else {
				gboolean _tmp44_ = FALSE;
				gboolean _tmp45_ = FALSE;
				gboolean _tmp46_;
				_tmp46_ = has_args;
				if (_tmp46_) {
					ValaCCodeParameter* _tmp47_;
					const gchar* _tmp48_;
					const gchar* _tmp49_;
					_tmp47_ = param;
					_tmp48_ = vala_ccode_parameter_get_type_name (_tmp47_);
					_tmp49_ = _tmp48_;
					_tmp45_ = g_strcmp0 (_tmp49_, "va_list") == 0;
				} else {
					_tmp45_ = FALSE;
				}
				if (_tmp45_) {
					gint _tmp50_;
					_tmp50_ = format_arg_index;
					_tmp44_ = _tmp50_ < 0;
				} else {
					_tmp44_ = FALSE;
				}
				if (_tmp44_) {
					gint _tmp51_;
					_tmp51_ = i;
					format_arg_index = _tmp51_ - 1;
				}
			}
			_tmp52_ = i;
			i = _tmp52_ + 1;
			_vala_ccode_node_unref0 (param);
		}
		_vala_iterable_unref0 (_param_list);
	}
	_tmp53_ = i;
	if (_tmp53_ == 0) {
		vala_ccode_writer_write_string (writer, "void");
	}
	vala_ccode_writer_write_string (writer, ")");
	_tmp54_ = self->priv->_is_declaration;
	if (_tmp54_) {
		ValaCCodeModifiers _tmp55_;
		ValaCCodeModifiers _tmp56_;
		ValaCCodeModifiers _tmp57_;
		ValaCCodeModifiers _tmp58_;
		ValaCCodeModifiers _tmp81_;
		ValaCCodeModifiers _tmp82_;
		ValaCCodeModifiers _tmp83_;
		ValaCCodeModifiers _tmp84_;
		ValaCCodeModifiers _tmp85_;
		ValaCCodeModifiers _tmp86_;
		_tmp55_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp56_ = _tmp55_;
		if ((_tmp56_ & VALA_CCODE_MODIFIERS_DEPRECATED) == VALA_CCODE_MODIFIERS_DEPRECATED) {
			vala_ccode_writer_write_string (writer, " G_GNUC_DEPRECATED");
		}
		_tmp57_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp58_ = _tmp57_;
		if ((_tmp58_ & VALA_CCODE_MODIFIERS_PRINTF) == VALA_CCODE_MODIFIERS_PRINTF) {
			gint _tmp59_ = 0;
			gint _tmp60_;
			gint _tmp63_;
			gint _tmp64_;
			gchar* _tmp65_;
			gchar* _tmp66_;
			_tmp60_ = format_arg_index;
			if (_tmp60_ >= 0) {
				gint _tmp61_;
				_tmp61_ = format_arg_index;
				_tmp59_ = _tmp61_ + 1;
			} else {
				gint _tmp62_;
				_tmp62_ = args_index;
				_tmp59_ = _tmp62_;
			}
			format_arg_index = _tmp59_;
			_tmp63_ = format_arg_index;
			_tmp64_ = args_index;
			_tmp65_ = g_strdup_printf (" G_GNUC_PRINTF(%d,%d)", _tmp63_, _tmp64_ + 1);
			_tmp66_ = _tmp65_;
			vala_ccode_writer_write_string (writer, _tmp66_);
			_g_free0 (_tmp66_);
		} else {
			ValaCCodeModifiers _tmp67_;
			ValaCCodeModifiers _tmp68_;
			_tmp67_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
			_tmp68_ = _tmp67_;
			if ((_tmp68_ & VALA_CCODE_MODIFIERS_SCANF) == VALA_CCODE_MODIFIERS_SCANF) {
				gint _tmp69_ = 0;
				gint _tmp70_;
				gint _tmp73_;
				gint _tmp74_;
				gchar* _tmp75_;
				gchar* _tmp76_;
				_tmp70_ = format_arg_index;
				if (_tmp70_ >= 0) {
					gint _tmp71_;
					_tmp71_ = format_arg_index;
					_tmp69_ = _tmp71_ + 1;
				} else {
					gint _tmp72_;
					_tmp72_ = args_index;
					_tmp69_ = _tmp72_;
				}
				format_arg_index = _tmp69_;
				_tmp73_ = format_arg_index;
				_tmp74_ = args_index;
				_tmp75_ = g_strdup_printf (" G_GNUC_SCANF(%d,%d)", _tmp73_, _tmp74_ + 1);
				_tmp76_ = _tmp75_;
				vala_ccode_writer_write_string (writer, _tmp76_);
				_g_free0 (_tmp76_);
			} else {
				gint _tmp77_;
				_tmp77_ = format_arg_index;
				if (_tmp77_ >= 0) {
					gint _tmp78_;
					gchar* _tmp79_;
					gchar* _tmp80_;
					_tmp78_ = format_arg_index;
					_tmp79_ = g_strdup_printf (" G_GNUC_FORMAT(%d)", _tmp78_ + 1);
					_tmp80_ = _tmp79_;
					vala_ccode_writer_write_string (writer, _tmp80_);
					_g_free0 (_tmp80_);
				}
			}
		}
		_tmp81_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp82_ = _tmp81_;
		if ((_tmp82_ & VALA_CCODE_MODIFIERS_CONST) == VALA_CCODE_MODIFIERS_CONST) {
			vala_ccode_writer_write_string (writer, " G_GNUC_CONST");
		}
		_tmp83_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp84_ = _tmp83_;
		if ((_tmp84_ & VALA_CCODE_MODIFIERS_UNUSED) == VALA_CCODE_MODIFIERS_UNUSED) {
			vala_ccode_writer_write_string (writer, " G_GNUC_UNUSED");
		}
		_tmp85_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
		_tmp86_ = _tmp85_;
		if ((_tmp86_ & VALA_CCODE_MODIFIERS_CONSTRUCTOR) == VALA_CCODE_MODIFIERS_CONSTRUCTOR) {
			vala_ccode_writer_write_string (writer, " __attribute__((constructor))");
		} else {
			ValaCCodeModifiers _tmp87_;
			ValaCCodeModifiers _tmp88_;
			_tmp87_ = vala_ccode_node_get_modifiers ((ValaCCodeNode*) self);
			_tmp88_ = _tmp87_;
			if ((_tmp88_ & VALA_CCODE_MODIFIERS_DESTRUCTOR) == VALA_CCODE_MODIFIERS_DESTRUCTOR) {
				vala_ccode_writer_write_string (writer, " __attribute__((destructor))");
			}
		}
		vala_ccode_writer_write_string (writer, ";");
	} else {
		ValaCCodeBlock* _tmp89_;
		vala_ccode_writer_write_newline (writer);
		_tmp89_ = self->priv->_block;
		vala_ccode_node_write ((ValaCCodeNode*) _tmp89_, writer);
		vala_ccode_writer_write_newline (writer);
	}
	vala_ccode_writer_write_newline (writer);
}


void
vala_ccode_function_add_statement (ValaCCodeFunction* self,
                                   ValaCCodeNode* stmt)
{
	ValaCCodeLineDirective* _tmp0_;
	ValaCCodeBlock* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (stmt != NULL);
	_tmp0_ = self->priv->_current_line;
	vala_ccode_node_set_line (stmt, _tmp0_);
	_tmp1_ = self->priv->_current_block;
	vala_ccode_block_add_statement (_tmp1_, stmt);
}


static gpointer
_vala_ccode_node_ref0 (gpointer self)
{
	return self ? vala_ccode_node_ref (self) : NULL;
}


void
vala_ccode_function_open_block (ValaCCodeFunction* self)
{
	ValaList* _tmp0_;
	ValaCCodeBlock* _tmp1_;
	ValaCCodeBlock* parent_block = NULL;
	ValaCCodeBlock* _tmp2_;
	ValaCCodeBlock* _tmp3_;
	ValaCCodeBlock* _tmp4_;
	ValaCCodeBlock* _tmp5_;
	ValaCCodeBlock* _tmp6_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->statement_stack;
	_tmp1_ = self->priv->_current_block;
	vala_collection_add ((ValaCollection*) _tmp0_, (ValaCCodeStatement*) _tmp1_);
	_tmp2_ = self->priv->_current_block;
	_tmp3_ = _vala_ccode_node_ref0 (_tmp2_);
	parent_block = _tmp3_;
	_tmp4_ = vala_ccode_block_new ();
	_tmp5_ = _tmp4_;
	vala_ccode_function_set_current_block (self, _tmp5_);
	_vala_ccode_node_unref0 (_tmp5_);
	_tmp6_ = self->priv->_current_block;
	vala_ccode_block_add_statement (parent_block, (ValaCCodeNode*) _tmp6_);
	_vala_ccode_node_unref0 (parent_block);
}


void
vala_ccode_function_open_if (ValaCCodeFunction* self,
                             ValaCCodeExpression* condition)
{
	ValaList* _tmp0_;
	ValaCCodeBlock* _tmp1_;
	ValaCCodeBlock* parent_block = NULL;
	ValaCCodeBlock* _tmp2_;
	ValaCCodeBlock* _tmp3_;
	ValaCCodeBlock* _tmp4_;
	ValaCCodeBlock* _tmp5_;
	ValaCCodeIfStatement* cif = NULL;
	ValaCCodeBlock* _tmp6_;
	ValaCCodeIfStatement* _tmp7_;
	ValaCCodeLineDirective* _tmp8_;
	ValaList* _tmp9_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (condition != NULL);
	_tmp0_ = self->priv->statement_stack;
	_tmp1_ = self->priv->_current_block;
	vala_collection_add ((ValaCollection*) _tmp0_, (ValaCCodeStatement*) _tmp1_);
	_tmp2_ = self->priv->_current_block;
	_tmp3_ = _vala_ccode_node_ref0 (_tmp2_);
	parent_block = _tmp3_;
	_tmp4_ = vala_ccode_block_new ();
	_tmp5_ = _tmp4_;
	vala_ccode_function_set_current_block (self, _tmp5_);
	_vala_ccode_node_unref0 (_tmp5_);
	_tmp6_ = self->priv->_current_block;
	_tmp7_ = vala_ccode_if_statement_new (condition, (ValaCCodeStatement*) _tmp6_, NULL);
	cif = _tmp7_;
	_tmp8_ = self->priv->_current_line;
	vala_ccode_node_set_line ((ValaCCodeNode*) cif, _tmp8_);
	_tmp9_ = self->priv->statement_stack;
	vala_collection_add ((ValaCollection*) _tmp9_, (ValaCCodeStatement*) cif);
	vala_ccode_block_add_statement (parent_block, (ValaCCodeNode*) cif);
	_vala_ccode_node_unref0 (cif);
	_vala_ccode_node_unref0 (parent_block);
}


void
vala_ccode_function_add_else (ValaCCodeFunction* self)
{
	ValaCCodeBlock* _tmp0_;
	ValaCCodeBlock* _tmp1_;
	ValaCCodeIfStatement* cif = NULL;
	ValaList* _tmp2_;
	ValaList* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	gpointer _tmp6_;
	ValaCCodeLineDirective* _tmp7_;
	ValaCCodeStatement* _tmp8_;
	ValaCCodeStatement* _tmp9_;
	ValaCCodeBlock* _tmp10_;
	g_return_if_fail (self != NULL);
	_tmp0_ = vala_ccode_block_new ();
	_tmp1_ = _tmp0_;
	vala_ccode_function_set_current_block (self, _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
	_tmp2_ = self->priv->statement_stack;
	_tmp3_ = self->priv->statement_stack;
	_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
	_tmp5_ = _tmp4_;
	_tmp6_ = vala_list_get (_tmp2_, _tmp5_ - 1);
	cif = G_TYPE_CHECK_INSTANCE_CAST ((ValaCCodeStatement*) _tmp6_, VALA_TYPE_CCODE_IF_STATEMENT, ValaCCodeIfStatement);
	_tmp7_ = self->priv->_current_line;
	vala_ccode_node_set_line ((ValaCCodeNode*) cif, _tmp7_);
	_tmp8_ = vala_ccode_if_statement_get_false_statement (cif);
	_tmp9_ = _tmp8_;
	_vala_assert (_tmp9_ == NULL, "cif.false_statement == null");
	_tmp10_ = self->priv->_current_block;
	vala_ccode_if_statement_set_false_statement (cif, (ValaCCodeStatement*) _tmp10_);
	_vala_ccode_node_unref0 (cif);
}


void
vala_ccode_function_else_if (ValaCCodeFunction* self,
                             ValaCCodeExpression* condition)
{
	ValaCCodeIfStatement* parent_if = NULL;
	ValaList* _tmp0_;
	ValaList* _tmp1_;
	gint _tmp2_;
	gint _tmp3_;
	gpointer _tmp4_;
	ValaCCodeStatement* _tmp5_;
	ValaCCodeStatement* _tmp6_;
	ValaCCodeBlock* _tmp7_;
	ValaCCodeBlock* _tmp8_;
	ValaCCodeIfStatement* cif = NULL;
	ValaCCodeBlock* _tmp9_;
	ValaCCodeIfStatement* _tmp10_;
	ValaCCodeLineDirective* _tmp11_;
	ValaList* _tmp12_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (condition != NULL);
	_tmp0_ = self->priv->statement_stack;
	_tmp1_ = self->priv->statement_stack;
	_tmp2_ = vala_collection_get_size ((ValaCollection*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = vala_list_remove_at (_tmp0_, _tmp3_ - 1);
	parent_if = G_TYPE_CHECK_INSTANCE_CAST ((ValaCCodeStatement*) _tmp4_, VALA_TYPE_CCODE_IF_STATEMENT, ValaCCodeIfStatement);
	_tmp5_ = vala_ccode_if_statement_get_false_statement (parent_if);
	_tmp6_ = _tmp5_;
	_vala_assert (_tmp6_ == NULL, "parent_if.false_statement == null");
	_tmp7_ = vala_ccode_block_new ();
	_tmp8_ = _tmp7_;
	vala_ccode_function_set_current_block (self, _tmp8_);
	_vala_ccode_node_unref0 (_tmp8_);
	_tmp9_ = self->priv->_current_block;
	_tmp10_ = vala_ccode_if_statement_new (condition, (ValaCCodeStatement*) _tmp9_, NULL);
	cif = _tmp10_;
	_tmp11_ = self->priv->_current_line;
	vala_ccode_node_set_line ((ValaCCodeNode*) cif, _tmp11_);
	vala_ccode_if_statement_set_false_statement (parent_if, (ValaCCodeStatement*) cif);
	_tmp12_ = self->priv->statement_stack;
	vala_collection_add ((ValaCollection*) _tmp12_, (ValaCCodeStatement*) cif);
	_vala_ccode_node_unref0 (cif);
	_vala_ccode_node_unref0 (parent_if);
}


void
vala_ccode_function_open_while (ValaCCodeFunction* self,
                                ValaCCodeExpression* condition)
{
	ValaList* _tmp0_;
	ValaCCodeBlock* _tmp1_;
	ValaCCodeBlock* parent_block = NULL;
	ValaCCodeBlock* _tmp2_;
	ValaCCodeBlock* _tmp3_;
	ValaCCodeBlock* _tmp4_;
	ValaCCodeBlock* _tmp5_;
	ValaCCodeWhileStatement* cwhile = NULL;
	ValaCCodeBlock* _tmp6_;
	ValaCCodeWhileStatement* _tmp7_;
	ValaCCodeLineDirective* _tmp8_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (condition != NULL);
	_tmp0_ = self->priv->statement_stack;
	_tmp1_ = self->priv->_current_block;
	vala_collection_add ((ValaCollection*) _tmp0_, (ValaCCodeStatement*) _tmp1_);
	_tmp2_ = self->priv->_current_block;
	_tmp3_ = _vala_ccode_node_ref0 (_tmp2_);
	parent_block = _tmp3_;
	_tmp4_ = vala_ccode_block_new ();
	_tmp5_ = _tmp4_;
	vala_ccode_function_set_current_block (self, _tmp5_);
	_vala_ccode_node_unref0 (_tmp5_);
	_tmp6_ = self->priv->_current_block;
	_tmp7_ = vala_ccode_while_statement_new (condition, (ValaCCodeStatement*) _tmp6_);
	cwhile = _tmp7_;
	_tmp8_ = self->priv->_current_line;
	vala_ccode_node_set_line ((ValaCCodeNode*) cwhile, _tmp8_);
	vala_ccode_block_add_statement (parent_block, (ValaCCodeNode*) cwhile);
	_vala_ccode_node_unref0 (cwhile);
	_vala_ccode_node_unref0 (parent_block);
}


void
vala_ccode_function_open_for (ValaCCodeFunction* self,
                              ValaCCodeExpression* initializer,
                              ValaCCodeExpression* condition,
                              ValaCCodeExpression* iterator)
{
	ValaList* _tmp0_;
	ValaCCodeBlock* _tmp1_;
	ValaCCodeBlock* parent_block = NULL;
	ValaCCodeBlock* _tmp2_;
	ValaCCodeBlock* _tmp3_;
	ValaCCodeBlock* _tmp4_;
	ValaCCodeBlock* _tmp5_;
	ValaCCodeForStatement* cfor = NULL;
	ValaCCodeBlock* _tmp6_;
	ValaCCodeForStatement* _tmp7_;
	ValaCCodeForStatement* _tmp8_;
	ValaCCodeLineDirective* _tmp9_;
	ValaCCodeBlock* _tmp12_;
	ValaCCodeForStatement* _tmp13_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (condition != NULL);
	_tmp0_ = self->priv->statement_stack;
	_tmp1_ = self->priv->_current_block;
	vala_collection_add ((ValaCollection*) _tmp0_, (ValaCCodeStatement*) _tmp1_);
	_tmp2_ = self->priv->_current_block;
	_tmp3_ = _vala_ccode_node_ref0 (_tmp2_);
	parent_block = _tmp3_;
	_tmp4_ = vala_ccode_block_new ();
	_tmp5_ = _tmp4_;
	vala_ccode_function_set_current_block (self, _tmp5_);
	_vala_ccode_node_unref0 (_tmp5_);
	_tmp6_ = self->priv->_current_block;
	_tmp7_ = vala_ccode_for_statement_new (condition, (ValaCCodeStatement*) _tmp6_);
	cfor = _tmp7_;
	_tmp8_ = cfor;
	_tmp9_ = self->priv->_current_line;
	vala_ccode_node_set_line ((ValaCCodeNode*) _tmp8_, _tmp9_);
	if (initializer != NULL) {
		ValaCCodeForStatement* _tmp10_;
		_tmp10_ = cfor;
		vala_ccode_for_statement_add_initializer (_tmp10_, initializer);
	}
	if (iterator != NULL) {
		ValaCCodeForStatement* _tmp11_;
		_tmp11_ = cfor;
		vala_ccode_for_statement_add_iterator (_tmp11_, iterator);
	}
	_tmp12_ = parent_block;
	_tmp13_ = cfor;
	vala_ccode_block_add_statement (_tmp12_, (ValaCCodeNode*) _tmp13_);
	_vala_ccode_node_unref0 (cfor);
	_vala_ccode_node_unref0 (parent_block);
}


void
vala_ccode_function_open_switch (ValaCCodeFunction* self,
                                 ValaCCodeExpression* expression)
{
	ValaList* _tmp0_;
	ValaCCodeBlock* _tmp1_;
	ValaCCodeBlock* parent_block = NULL;
	ValaCCodeBlock* _tmp2_;
	ValaCCodeBlock* _tmp3_;
	ValaCCodeSwitchStatement* cswitch = NULL;
	ValaCCodeSwitchStatement* _tmp4_;
	ValaCCodeLineDirective* _tmp5_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expression != NULL);
	_tmp0_ = self->priv->statement_stack;
	_tmp1_ = self->priv->_current_block;
	vala_collection_add ((ValaCollection*) _tmp0_, (ValaCCodeStatement*) _tmp1_);
	_tmp2_ = self->priv->_current_block;
	_tmp3_ = _vala_ccode_node_ref0 (_tmp2_);
	parent_block = _tmp3_;
	_tmp4_ = vala_ccode_switch_statement_new (expression);
	cswitch = _tmp4_;
	_tmp5_ = self->priv->_current_line;
	vala_ccode_node_set_line ((ValaCCodeNode*) cswitch, _tmp5_);
	vala_ccode_function_set_current_block (self, (ValaCCodeBlock*) cswitch);
	vala_ccode_block_add_statement (parent_block, (ValaCCodeNode*) cswitch);
	_vala_ccode_node_unref0 (cswitch);
	_vala_ccode_node_unref0 (parent_block);
}


void
vala_ccode_function_add_label (ValaCCodeFunction* self,
                               const gchar* label)
{
	ValaCCodeLabel* _tmp0_;
	ValaCCodeLabel* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (label != NULL);
	_tmp0_ = vala_ccode_label_new (label);
	_tmp1_ = _tmp0_;
	vala_ccode_function_add_statement (self, (ValaCCodeNode*) _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
}


void
vala_ccode_function_add_case (ValaCCodeFunction* self,
                              ValaCCodeExpression* expression)
{
	ValaCCodeCaseStatement* _tmp0_;
	ValaCCodeCaseStatement* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expression != NULL);
	_tmp0_ = vala_ccode_case_statement_new (expression);
	_tmp1_ = _tmp0_;
	vala_ccode_function_add_statement (self, (ValaCCodeNode*) _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
}


void
vala_ccode_function_add_default (ValaCCodeFunction* self)
{
	ValaCCodeLabel* _tmp0_;
	ValaCCodeLabel* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = vala_ccode_label_new ("default");
	_tmp1_ = _tmp0_;
	vala_ccode_function_add_statement (self, (ValaCCodeNode*) _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
}


void
vala_ccode_function_add_goto (ValaCCodeFunction* self,
                              const gchar* target)
{
	ValaCCodeGotoStatement* _tmp0_;
	ValaCCodeGotoStatement* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (target != NULL);
	_tmp0_ = vala_ccode_goto_statement_new (target);
	_tmp1_ = _tmp0_;
	vala_ccode_function_add_statement (self, (ValaCCodeNode*) _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
}


void
vala_ccode_function_add_expression (ValaCCodeFunction* self,
                                    ValaCCodeExpression* expression)
{
	ValaCCodeExpressionStatement* _tmp0_;
	ValaCCodeExpressionStatement* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expression != NULL);
	_tmp0_ = vala_ccode_expression_statement_new (expression);
	_tmp1_ = _tmp0_;
	vala_ccode_function_add_statement (self, (ValaCCodeNode*) _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
}


void
vala_ccode_function_add_assignment (ValaCCodeFunction* self,
                                    ValaCCodeExpression* left,
                                    ValaCCodeExpression* right)
{
	ValaCCodeAssignment* _tmp0_;
	ValaCCodeAssignment* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (left != NULL);
	g_return_if_fail (right != NULL);
	_tmp0_ = vala_ccode_assignment_new (left, right, VALA_CCODE_ASSIGNMENT_OPERATOR_SIMPLE);
	_tmp1_ = _tmp0_;
	vala_ccode_function_add_expression (self, (ValaCCodeExpression*) _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
}


void
vala_ccode_function_add_return (ValaCCodeFunction* self,
                                ValaCCodeExpression* expression)
{
	ValaCCodeReturnStatement* _tmp0_;
	ValaCCodeReturnStatement* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = vala_ccode_return_statement_new (expression);
	_tmp1_ = _tmp0_;
	vala_ccode_function_add_statement (self, (ValaCCodeNode*) _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
}


void
vala_ccode_function_add_break (ValaCCodeFunction* self)
{
	ValaCCodeBreakStatement* _tmp0_;
	ValaCCodeBreakStatement* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = vala_ccode_break_statement_new ();
	_tmp1_ = _tmp0_;
	vala_ccode_function_add_statement (self, (ValaCCodeNode*) _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
}


void
vala_ccode_function_add_continue (ValaCCodeFunction* self)
{
	ValaCCodeContinueStatement* _tmp0_;
	ValaCCodeContinueStatement* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = vala_ccode_continue_statement_new ();
	_tmp1_ = _tmp0_;
	vala_ccode_function_add_statement (self, (ValaCCodeNode*) _tmp1_);
	_vala_ccode_node_unref0 (_tmp1_);
}


void
vala_ccode_function_add_declaration (ValaCCodeFunction* self,
                                     const gchar* type_name,
                                     ValaCCodeDeclarator* declarator,
                                     ValaCCodeModifiers modifiers)
{
	ValaCCodeDeclaration* stmt = NULL;
	ValaCCodeDeclaration* _tmp0_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (type_name != NULL);
	g_return_if_fail (declarator != NULL);
	_tmp0_ = vala_ccode_declaration_new (type_name);
	stmt = _tmp0_;
	vala_ccode_declaration_add_declarator (stmt, declarator);
	vala_ccode_node_set_modifiers ((ValaCCodeNode*) stmt, modifiers);
	vala_ccode_function_add_statement (self, (ValaCCodeNode*) stmt);
	_vala_ccode_node_unref0 (stmt);
}


void
vala_ccode_function_close (ValaCCodeFunction* self)
{
	g_return_if_fail (self != NULL);
	{
		gboolean _tmp0_ = FALSE;
		_tmp0_ = TRUE;
		while (TRUE) {
			ValaCCodeStatement* top = NULL;
			ValaList* _tmp2_;
			ValaList* _tmp3_;
			gint _tmp4_;
			gint _tmp5_;
			gpointer _tmp6_;
			ValaCCodeStatement* _tmp7_;
			if (!_tmp0_) {
				ValaCCodeBlock* _tmp1_;
				_tmp1_ = self->priv->_current_block;
				if (!(_tmp1_ == NULL)) {
					break;
				}
			}
			_tmp0_ = FALSE;
			_tmp2_ = self->priv->statement_stack;
			_tmp3_ = self->priv->statement_stack;
			_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
			_tmp5_ = _tmp4_;
			_tmp6_ = vala_list_remove_at (_tmp2_, _tmp5_ - 1);
			top = (ValaCCodeStatement*) _tmp6_;
			_tmp7_ = top;
			vala_ccode_function_set_current_block (self, G_TYPE_CHECK_INSTANCE_TYPE (_tmp7_, VALA_TYPE_CCODE_BLOCK) ? ((ValaCCodeBlock*) _tmp7_) : NULL);
			_vala_ccode_node_unref0 (top);
		}
	}
}


const gchar*
vala_ccode_function_get_name (ValaCCodeFunction* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void
vala_ccode_function_set_name (ValaCCodeFunction* self,
                              const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
}


const gchar*
vala_ccode_function_get_return_type (ValaCCodeFunction* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_return_type;
	result = _tmp0_;
	return result;
}


void
vala_ccode_function_set_return_type (ValaCCodeFunction* self,
                                     const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_return_type);
	self->priv->_return_type = _tmp0_;
}


gboolean
vala_ccode_function_get_is_declaration (ValaCCodeFunction* self)
{
	gboolean result;
	gboolean _tmp0_;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_is_declaration;
	result = _tmp0_;
	return result;
}


void
vala_ccode_function_set_is_declaration (ValaCCodeFunction* self,
                                        gboolean value)
{
	g_return_if_fail (self != NULL);
	self->priv->_is_declaration = value;
}


ValaCCodeBlock*
vala_ccode_function_get_block (ValaCCodeFunction* self)
{
	ValaCCodeBlock* result;
	ValaCCodeBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_block;
	result = _tmp0_;
	return result;
}


void
vala_ccode_function_set_block (ValaCCodeFunction* self,
                               ValaCCodeBlock* value)
{
	ValaCCodeBlock* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_block);
	self->priv->_block = _tmp0_;
}


ValaCCodeLineDirective*
vala_ccode_function_get_current_line (ValaCCodeFunction* self)
{
	ValaCCodeLineDirective* result;
	ValaCCodeLineDirective* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_current_line;
	result = _tmp0_;
	return result;
}


void
vala_ccode_function_set_current_line (ValaCCodeFunction* self,
                                      ValaCCodeLineDirective* value)
{
	ValaCCodeLineDirective* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_current_line);
	self->priv->_current_line = _tmp0_;
}


ValaCCodeBlock*
vala_ccode_function_get_current_block (ValaCCodeFunction* self)
{
	ValaCCodeBlock* result;
	ValaCCodeBlock* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_current_block;
	result = _tmp0_;
	return result;
}


void
vala_ccode_function_set_current_block (ValaCCodeFunction* self,
                                       ValaCCodeBlock* value)
{
	ValaCCodeBlock* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_ccode_node_ref0 (value);
	_vala_ccode_node_unref0 (self->priv->_current_block);
	self->priv->_current_block = _tmp0_;
}


static void
vala_ccode_function_class_init (ValaCCodeFunctionClass * klass)
{
	vala_ccode_function_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_function_finalize;
	g_type_class_adjust_private_offset (klass, &ValaCCodeFunction_private_offset);
	((ValaCCodeNodeClass *) klass)->write = (void (*) (ValaCCodeNode*, ValaCCodeWriter*)) vala_ccode_function_real_write;
}


static void
vala_ccode_function_instance_init (ValaCCodeFunction * self)
{
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	GEqualFunc _tmp2_;
	ValaArrayList* _tmp3_;
	self->priv = vala_ccode_function_get_instance_private (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_PARAMETER, (GBoxedCopyFunc) vala_ccode_node_ref, (GDestroyNotify) vala_ccode_node_unref, _tmp0_);
	self->priv->parameters = (ValaList*) _tmp1_;
	_tmp2_ = g_direct_equal;
	_tmp3_ = vala_array_list_new (VALA_TYPE_CCODE_STATEMENT, (GBoxedCopyFunc) vala_ccode_node_ref, (GDestroyNotify) vala_ccode_node_unref, _tmp2_);
	self->priv->statement_stack = (ValaList*) _tmp3_;
}


static void
vala_ccode_function_finalize (ValaCCodeNode * obj)
{
	ValaCCodeFunction * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_FUNCTION, ValaCCodeFunction);
	_g_free0 (self->priv->_name);
	_g_free0 (self->priv->_return_type);
	_vala_ccode_node_unref0 (self->priv->_block);
	_vala_ccode_node_unref0 (self->priv->_current_line);
	_vala_ccode_node_unref0 (self->priv->_current_block);
	_vala_iterable_unref0 (self->priv->parameters);
	_vala_iterable_unref0 (self->priv->statement_stack);
	VALA_CCODE_NODE_CLASS (vala_ccode_function_parent_class)->finalize (obj);
}


/**
 * Represents a function declaration in the C code.
 */
GType
vala_ccode_function_get_type (void)
{
	static volatile gsize vala_ccode_function_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_function_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeFunctionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_function_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeFunction), 0, (GInstanceInitFunc) vala_ccode_function_instance_init, NULL };
		GType vala_ccode_function_type_id;
		vala_ccode_function_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeFunction", &g_define_type_info, 0);
		ValaCCodeFunction_private_offset = g_type_add_instance_private (vala_ccode_function_type_id, sizeof (ValaCCodeFunctionPrivate));
		g_once_init_leave (&vala_ccode_function_type_id__volatile, vala_ccode_function_type_id);
	}
	return vala_ccode_function_type_id__volatile;
}



