/* valaunresolvedtype.c generated by valac, the Vala compiler
 * generated from valaunresolvedtype.vala, do not modify */

/* valaunresolvedtype.vala
 *
 * Copyright (C) 2006-2008  Jürg Billeter, Raffaele Sandrini
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
 *	Raffaele Sandrini <raffaele@sandrini.ch>
 */


#include <glib.h>
#include <glib-object.h>
#include "vala.h"
#include <stdlib.h>
#include <string.h>
#include <valagee.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))

struct _ValaUnresolvedTypePrivate {
	ValaUnresolvedSymbol* _unresolved_symbol;
};


static gint ValaUnresolvedType_private_offset;
static gpointer vala_unresolved_type_parent_class = NULL;

static ValaDataType* vala_unresolved_type_real_copy (ValaDataType* base);
static gchar* vala_unresolved_type_real_to_qualified_string (ValaDataType* base,
                                                      ValaScope* scope);
static gboolean vala_unresolved_type_real_is_disposable (ValaDataType* base);
static void vala_unresolved_type_finalize (ValaCodeNode * obj);


static inline gpointer
vala_unresolved_type_get_instance_private (ValaUnresolvedType* self)
{
	return G_STRUCT_MEMBER_P (self, ValaUnresolvedType_private_offset);
}


ValaUnresolvedType*
vala_unresolved_type_construct (GType object_type)
{
	ValaUnresolvedType* self = NULL;
	self = (ValaUnresolvedType*) vala_data_type_construct (object_type);
	return self;
}


ValaUnresolvedType*
vala_unresolved_type_new (void)
{
	return vala_unresolved_type_construct (VALA_TYPE_UNRESOLVED_TYPE);
}


/**
 * Creates a new type reference.
 *
 * @param symbol    unresolved type symbol
 * @param source    reference to source code
 * @return          newly created type reference
 */
ValaUnresolvedType*
vala_unresolved_type_construct_from_symbol (GType object_type,
                                            ValaUnresolvedSymbol* symbol,
                                            ValaSourceReference* source)
{
	ValaUnresolvedType* self = NULL;
	g_return_val_if_fail (symbol != NULL, NULL);
	self = (ValaUnresolvedType*) vala_data_type_construct (object_type);
	vala_unresolved_type_set_unresolved_symbol (self, symbol);
	vala_code_node_set_source_reference ((ValaCodeNode*) self, source);
	return self;
}


ValaUnresolvedType*
vala_unresolved_type_new_from_symbol (ValaUnresolvedSymbol* symbol,
                                      ValaSourceReference* source)
{
	return vala_unresolved_type_construct_from_symbol (VALA_TYPE_UNRESOLVED_TYPE, symbol, source);
}


/**
 * Creates a new type reference from a code expression.
 *
 * @param expr   member access expression
 * @return       newly created type reference
 */
static gpointer
_vala_code_node_ref0 (gpointer self)
{
	return self ? vala_code_node_ref (self) : NULL;
}


ValaUnresolvedType*
vala_unresolved_type_new_from_expression (ValaExpression* expr)
{
	ValaUnresolvedType* result = NULL;
	ValaUnresolvedSymbol* sym = NULL;
	ValaUnresolvedSymbol* _tmp0_;
	ValaUnresolvedSymbol* _tmp1_;
	g_return_val_if_fail (expr != NULL, NULL);
	_tmp0_ = vala_unresolved_symbol_new_from_expression (expr);
	sym = _tmp0_;
	_tmp1_ = sym;
	if (_tmp1_ != NULL) {
		ValaUnresolvedType* type_ref = NULL;
		ValaUnresolvedSymbol* _tmp2_;
		ValaSourceReference* _tmp3_;
		ValaSourceReference* _tmp4_;
		ValaUnresolvedType* _tmp5_;
		ValaUnresolvedType* _tmp6_;
		ValaMemberAccess* ma = NULL;
		ValaMemberAccess* _tmp7_;
		_tmp2_ = sym;
		_tmp3_ = vala_code_node_get_source_reference ((ValaCodeNode*) expr);
		_tmp4_ = _tmp3_;
		_tmp5_ = vala_unresolved_type_new_from_symbol (_tmp2_, _tmp4_);
		type_ref = _tmp5_;
		_tmp6_ = type_ref;
		vala_data_type_set_value_owned ((ValaDataType*) _tmp6_, TRUE);
		_tmp7_ = _vala_code_node_ref0 (G_TYPE_CHECK_INSTANCE_CAST (expr, VALA_TYPE_MEMBER_ACCESS, ValaMemberAccess));
		ma = _tmp7_;
		{
			ValaList* _arg_list = NULL;
			ValaMemberAccess* _tmp8_;
			ValaList* _tmp9_;
			gint _arg_size = 0;
			ValaList* _tmp10_;
			gint _tmp11_;
			gint _tmp12_;
			gint _arg_index = 0;
			_tmp8_ = ma;
			_tmp9_ = vala_member_access_get_type_arguments (_tmp8_);
			_arg_list = _tmp9_;
			_tmp10_ = _arg_list;
			_tmp11_ = vala_collection_get_size ((ValaCollection*) _tmp10_);
			_tmp12_ = _tmp11_;
			_arg_size = _tmp12_;
			_arg_index = -1;
			while (TRUE) {
				gint _tmp13_;
				gint _tmp14_;
				gint _tmp15_;
				ValaDataType* arg = NULL;
				ValaList* _tmp16_;
				gint _tmp17_;
				gpointer _tmp18_;
				ValaUnresolvedType* _tmp19_;
				ValaDataType* _tmp20_;
				_tmp13_ = _arg_index;
				_arg_index = _tmp13_ + 1;
				_tmp14_ = _arg_index;
				_tmp15_ = _arg_size;
				if (!(_tmp14_ < _tmp15_)) {
					break;
				}
				_tmp16_ = _arg_list;
				_tmp17_ = _arg_index;
				_tmp18_ = vala_list_get (_tmp16_, _tmp17_);
				arg = (ValaDataType*) _tmp18_;
				_tmp19_ = type_ref;
				_tmp20_ = arg;
				vala_data_type_add_type_argument ((ValaDataType*) _tmp19_, _tmp20_);
				_vala_code_node_unref0 (arg);
			}
			_vala_iterable_unref0 (_arg_list);
		}
		result = type_ref;
		_vala_code_node_unref0 (ma);
		_vala_code_node_unref0 (sym);
		return result;
	}
	result = NULL;
	_vala_code_node_unref0 (sym);
	return result;
}


static ValaDataType*
vala_unresolved_type_real_copy (ValaDataType* base)
{
	ValaUnresolvedType * self;
	ValaDataType* result = NULL;
	ValaUnresolvedType* _result_ = NULL;
	ValaUnresolvedType* _tmp0_;
	ValaUnresolvedType* _tmp1_;
	ValaSourceReference* _tmp2_;
	ValaSourceReference* _tmp3_;
	ValaUnresolvedType* _tmp4_;
	gboolean _tmp5_;
	gboolean _tmp6_;
	ValaUnresolvedType* _tmp7_;
	gboolean _tmp8_;
	gboolean _tmp9_;
	ValaUnresolvedType* _tmp10_;
	gboolean _tmp11_;
	gboolean _tmp12_;
	ValaUnresolvedType* _tmp13_;
	ValaUnresolvedSymbol* _tmp14_;
	ValaUnresolvedSymbol* _tmp15_;
	ValaUnresolvedSymbol* _tmp16_;
	self = (ValaUnresolvedType*) base;
	_tmp0_ = vala_unresolved_type_new ();
	_result_ = _tmp0_;
	_tmp1_ = _result_;
	_tmp2_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp3_ = _tmp2_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _tmp1_, _tmp3_);
	_tmp4_ = _result_;
	_tmp5_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp6_ = _tmp5_;
	vala_data_type_set_value_owned ((ValaDataType*) _tmp4_, _tmp6_);
	_tmp7_ = _result_;
	_tmp8_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp9_ = _tmp8_;
	vala_data_type_set_nullable ((ValaDataType*) _tmp7_, _tmp9_);
	_tmp10_ = _result_;
	_tmp11_ = vala_data_type_get_is_dynamic ((ValaDataType*) self);
	_tmp12_ = _tmp11_;
	vala_data_type_set_is_dynamic ((ValaDataType*) _tmp10_, _tmp12_);
	_tmp13_ = _result_;
	_tmp14_ = self->priv->_unresolved_symbol;
	_tmp15_ = vala_unresolved_symbol_copy (_tmp14_);
	_tmp16_ = _tmp15_;
	vala_unresolved_type_set_unresolved_symbol (_tmp13_, _tmp16_);
	_vala_code_node_unref0 (_tmp16_);
	{
		ValaList* _arg_list = NULL;
		ValaList* _tmp17_;
		gint _arg_size = 0;
		ValaList* _tmp18_;
		gint _tmp19_;
		gint _tmp20_;
		gint _arg_index = 0;
		_tmp17_ = vala_data_type_get_type_arguments ((ValaDataType*) self);
		_arg_list = _tmp17_;
		_tmp18_ = _arg_list;
		_tmp19_ = vala_collection_get_size ((ValaCollection*) _tmp18_);
		_tmp20_ = _tmp19_;
		_arg_size = _tmp20_;
		_arg_index = -1;
		while (TRUE) {
			gint _tmp21_;
			gint _tmp22_;
			gint _tmp23_;
			ValaDataType* arg = NULL;
			ValaList* _tmp24_;
			gint _tmp25_;
			gpointer _tmp26_;
			ValaUnresolvedType* _tmp27_;
			ValaDataType* _tmp28_;
			ValaDataType* _tmp29_;
			ValaDataType* _tmp30_;
			_tmp21_ = _arg_index;
			_arg_index = _tmp21_ + 1;
			_tmp22_ = _arg_index;
			_tmp23_ = _arg_size;
			if (!(_tmp22_ < _tmp23_)) {
				break;
			}
			_tmp24_ = _arg_list;
			_tmp25_ = _arg_index;
			_tmp26_ = vala_list_get (_tmp24_, _tmp25_);
			arg = (ValaDataType*) _tmp26_;
			_tmp27_ = _result_;
			_tmp28_ = arg;
			_tmp29_ = vala_data_type_copy (_tmp28_);
			_tmp30_ = _tmp29_;
			vala_data_type_add_type_argument ((ValaDataType*) _tmp27_, _tmp30_);
			_vala_code_node_unref0 (_tmp30_);
			_vala_code_node_unref0 (arg);
		}
		_vala_iterable_unref0 (_arg_list);
	}
	result = (ValaDataType*) _result_;
	return result;
}


static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}


static gchar*
vala_unresolved_type_real_to_qualified_string (ValaDataType* base,
                                               ValaScope* scope)
{
	ValaUnresolvedType * self;
	gchar* result = NULL;
	gchar* s = NULL;
	ValaUnresolvedSymbol* _tmp0_;
	gchar* _tmp1_;
	ValaList* type_args = NULL;
	ValaList* _tmp2_;
	ValaList* _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	gboolean _tmp34_;
	gboolean _tmp35_;
	self = (ValaUnresolvedType*) base;
	_tmp0_ = self->priv->_unresolved_symbol;
	_tmp1_ = vala_code_node_to_string ((ValaCodeNode*) _tmp0_);
	s = _tmp1_;
	_tmp2_ = vala_data_type_get_type_arguments ((ValaDataType*) self);
	type_args = _tmp2_;
	_tmp3_ = type_args;
	_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
	_tmp5_ = _tmp4_;
	if (_tmp5_ > 0) {
		const gchar* _tmp6_;
		gchar* _tmp7_;
		gboolean first = FALSE;
		const gchar* _tmp32_;
		gchar* _tmp33_;
		_tmp6_ = s;
		_tmp7_ = g_strconcat (_tmp6_, "<", NULL);
		_g_free0 (s);
		s = _tmp7_;
		first = TRUE;
		{
			ValaList* _type_arg_list = NULL;
			ValaList* _tmp8_;
			ValaList* _tmp9_;
			gint _type_arg_size = 0;
			ValaList* _tmp10_;
			gint _tmp11_;
			gint _tmp12_;
			gint _type_arg_index = 0;
			_tmp8_ = type_args;
			_tmp9_ = _vala_iterable_ref0 (_tmp8_);
			_type_arg_list = _tmp9_;
			_tmp10_ = _type_arg_list;
			_tmp11_ = vala_collection_get_size ((ValaCollection*) _tmp10_);
			_tmp12_ = _tmp11_;
			_type_arg_size = _tmp12_;
			_type_arg_index = -1;
			while (TRUE) {
				gint _tmp13_;
				gint _tmp14_;
				gint _tmp15_;
				ValaDataType* type_arg = NULL;
				ValaList* _tmp16_;
				gint _tmp17_;
				gpointer _tmp18_;
				gboolean _tmp19_;
				ValaDataType* _tmp22_;
				gboolean _tmp23_;
				gboolean _tmp24_;
				const gchar* _tmp27_;
				ValaDataType* _tmp28_;
				gchar* _tmp29_;
				gchar* _tmp30_;
				gchar* _tmp31_;
				_tmp13_ = _type_arg_index;
				_type_arg_index = _tmp13_ + 1;
				_tmp14_ = _type_arg_index;
				_tmp15_ = _type_arg_size;
				if (!(_tmp14_ < _tmp15_)) {
					break;
				}
				_tmp16_ = _type_arg_list;
				_tmp17_ = _type_arg_index;
				_tmp18_ = vala_list_get (_tmp16_, _tmp17_);
				type_arg = (ValaDataType*) _tmp18_;
				_tmp19_ = first;
				if (!_tmp19_) {
					const gchar* _tmp20_;
					gchar* _tmp21_;
					_tmp20_ = s;
					_tmp21_ = g_strconcat (_tmp20_, ",", NULL);
					_g_free0 (s);
					s = _tmp21_;
				} else {
					first = FALSE;
				}
				_tmp22_ = type_arg;
				_tmp23_ = vala_data_type_get_value_owned (_tmp22_);
				_tmp24_ = _tmp23_;
				if (!_tmp24_) {
					const gchar* _tmp25_;
					gchar* _tmp26_;
					_tmp25_ = s;
					_tmp26_ = g_strconcat (_tmp25_, "weak ", NULL);
					_g_free0 (s);
					s = _tmp26_;
				}
				_tmp27_ = s;
				_tmp28_ = type_arg;
				_tmp29_ = vala_data_type_to_qualified_string (_tmp28_, scope);
				_tmp30_ = _tmp29_;
				_tmp31_ = g_strconcat (_tmp27_, _tmp30_, NULL);
				_g_free0 (s);
				s = _tmp31_;
				_g_free0 (_tmp30_);
				_vala_code_node_unref0 (type_arg);
			}
			_vala_iterable_unref0 (_type_arg_list);
		}
		_tmp32_ = s;
		_tmp33_ = g_strconcat (_tmp32_, ">", NULL);
		_g_free0 (s);
		s = _tmp33_;
	}
	_tmp34_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp35_ = _tmp34_;
	if (_tmp35_) {
		const gchar* _tmp36_;
		gchar* _tmp37_;
		_tmp36_ = s;
		_tmp37_ = g_strconcat (_tmp36_, "?", NULL);
		_g_free0 (s);
		s = _tmp37_;
	}
	result = s;
	_vala_iterable_unref0 (type_args);
	return result;
}


static gboolean
vala_unresolved_type_real_is_disposable (ValaDataType* base)
{
	ValaUnresolvedType * self;
	gboolean result = FALSE;
	gboolean _tmp0_;
	gboolean _tmp1_;
	self = (ValaUnresolvedType*) base;
	_tmp0_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	result = _tmp1_;
	return result;
}


ValaUnresolvedSymbol*
vala_unresolved_type_get_unresolved_symbol (ValaUnresolvedType* self)
{
	ValaUnresolvedSymbol* result;
	ValaUnresolvedSymbol* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_unresolved_symbol;
	result = _tmp0_;
	return result;
}


void
vala_unresolved_type_set_unresolved_symbol (ValaUnresolvedType* self,
                                            ValaUnresolvedSymbol* value)
{
	ValaUnresolvedSymbol* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = _vala_code_node_ref0 (value);
	_vala_code_node_unref0 (self->priv->_unresolved_symbol);
	self->priv->_unresolved_symbol = _tmp0_;
}


static void
vala_unresolved_type_class_init (ValaUnresolvedTypeClass * klass)
{
	vala_unresolved_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_unresolved_type_finalize;
	g_type_class_adjust_private_offset (klass, &ValaUnresolvedType_private_offset);
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) vala_unresolved_type_real_copy;
	((ValaDataTypeClass *) klass)->to_qualified_string = (gchar* (*) (ValaDataType*, ValaScope*)) vala_unresolved_type_real_to_qualified_string;
	((ValaDataTypeClass *) klass)->is_disposable = (gboolean (*) (ValaDataType*)) vala_unresolved_type_real_is_disposable;
}


static void
vala_unresolved_type_instance_init (ValaUnresolvedType * self)
{
	self->priv = vala_unresolved_type_get_instance_private (self);
}


static void
vala_unresolved_type_finalize (ValaCodeNode * obj)
{
	ValaUnresolvedType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_UNRESOLVED_TYPE, ValaUnresolvedType);
	_vala_code_node_unref0 (self->priv->_unresolved_symbol);
	VALA_CODE_NODE_CLASS (vala_unresolved_type_parent_class)->finalize (obj);
}


/**
 * An unresolved reference to a data type.
 */
GType
vala_unresolved_type_get_type (void)
{
	static volatile gsize vala_unresolved_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_unresolved_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaUnresolvedTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_unresolved_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaUnresolvedType), 0, (GInstanceInitFunc) vala_unresolved_type_instance_init, NULL };
		GType vala_unresolved_type_type_id;
		vala_unresolved_type_type_id = g_type_register_static (VALA_TYPE_DATA_TYPE, "ValaUnresolvedType", &g_define_type_info, 0);
		ValaUnresolvedType_private_offset = g_type_add_instance_private (vala_unresolved_type_type_id, sizeof (ValaUnresolvedTypePrivate));
		g_once_init_leave (&vala_unresolved_type_type_id__volatile, vala_unresolved_type_type_id);
	}
	return vala_unresolved_type_type_id__volatile;
}


