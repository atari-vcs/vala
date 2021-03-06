/* valainterfacetype.c generated by valac, the Vala compiler
 * generated from valainterfacetype.vala, do not modify */

/* valainterfacetype.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
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

#include "vala.h"
#include <glib.h>
#include <valagee.h>
#include <glib-object.h>

#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

static gpointer vala_interface_type_parent_class = NULL;

static ValaDataType* vala_interface_type_real_copy (ValaDataType* base);
static GType vala_interface_type_get_type_once (void);

ValaInterface*
vala_interface_type_get_interface_symbol (ValaInterfaceType* self)
{
	ValaInterface* result;
	ValaSymbol* _tmp0_;
	ValaSymbol* _tmp1_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = vala_data_type_get_symbol ((ValaDataType*) self);
	_tmp1_ = _tmp0_;
	result = G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, VALA_TYPE_INTERFACE, ValaInterface);
	return result;
}

ValaInterfaceType*
vala_interface_type_construct (GType object_type,
                               ValaInterface* interface_symbol)
{
	ValaInterfaceType* self = NULL;
	g_return_val_if_fail (interface_symbol != NULL, NULL);
	self = (ValaInterfaceType*) vala_reference_type_construct (object_type, (ValaSymbol*) interface_symbol);
	return self;
}

ValaInterfaceType*
vala_interface_type_new (ValaInterface* interface_symbol)
{
	return vala_interface_type_construct (VALA_TYPE_INTERFACE_TYPE, interface_symbol);
}

static gpointer
_vala_iterable_ref0 (gpointer self)
{
	return self ? vala_iterable_ref (self) : NULL;
}

static ValaDataType*
vala_interface_type_real_copy (ValaDataType* base)
{
	ValaInterfaceType * self;
	ValaInterfaceType* _result_ = NULL;
	ValaInterface* _tmp0_;
	ValaInterface* _tmp1_;
	ValaInterfaceType* _tmp2_;
	ValaInterfaceType* _tmp3_;
	ValaSourceReference* _tmp4_;
	ValaSourceReference* _tmp5_;
	ValaInterfaceType* _tmp6_;
	gboolean _tmp7_;
	gboolean _tmp8_;
	ValaInterfaceType* _tmp9_;
	gboolean _tmp10_;
	gboolean _tmp11_;
	ValaInterfaceType* _tmp12_;
	gboolean _tmp13_;
	gboolean _tmp14_;
	ValaInterfaceType* _tmp15_;
	gboolean _tmp16_;
	gboolean _tmp17_;
	ValaDataType* result = NULL;
	self = (ValaInterfaceType*) base;
	_tmp0_ = vala_interface_type_get_interface_symbol (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_interface_type_new (_tmp1_);
	_result_ = _tmp2_;
	_tmp3_ = _result_;
	_tmp4_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp5_ = _tmp4_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _tmp3_, _tmp5_);
	_tmp6_ = _result_;
	_tmp7_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp8_ = _tmp7_;
	vala_data_type_set_value_owned ((ValaDataType*) _tmp6_, _tmp8_);
	_tmp9_ = _result_;
	_tmp10_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp11_ = _tmp10_;
	vala_data_type_set_nullable ((ValaDataType*) _tmp9_, _tmp11_);
	_tmp12_ = _result_;
	_tmp13_ = vala_data_type_get_is_dynamic ((ValaDataType*) self);
	_tmp14_ = _tmp13_;
	vala_data_type_set_is_dynamic ((ValaDataType*) _tmp12_, _tmp14_);
	_tmp15_ = _result_;
	_tmp16_ = vala_data_type_get_floating_reference ((ValaDataType*) self);
	_tmp17_ = _tmp16_;
	vala_data_type_set_floating_reference ((ValaDataType*) _tmp15_, _tmp17_);
	{
		ValaList* _arg_list = NULL;
		ValaList* _tmp18_;
		ValaList* _tmp19_;
		gint _arg_size = 0;
		ValaList* _tmp20_;
		gint _tmp21_;
		gint _tmp22_;
		gint _arg_index = 0;
		_tmp18_ = vala_data_type_get_type_arguments ((ValaDataType*) self);
		_tmp19_ = _vala_iterable_ref0 (_tmp18_);
		_arg_list = _tmp19_;
		_tmp20_ = _arg_list;
		_tmp21_ = vala_collection_get_size ((ValaCollection*) _tmp20_);
		_tmp22_ = _tmp21_;
		_arg_size = _tmp22_;
		_arg_index = -1;
		while (TRUE) {
			gint _tmp23_;
			gint _tmp24_;
			ValaDataType* arg = NULL;
			ValaList* _tmp25_;
			gpointer _tmp26_;
			ValaInterfaceType* _tmp27_;
			ValaDataType* _tmp28_;
			ValaDataType* _tmp29_;
			ValaDataType* _tmp30_;
			_arg_index = _arg_index + 1;
			_tmp23_ = _arg_index;
			_tmp24_ = _arg_size;
			if (!(_tmp23_ < _tmp24_)) {
				break;
			}
			_tmp25_ = _arg_list;
			_tmp26_ = vala_list_get (_tmp25_, _arg_index);
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

static void
vala_interface_type_class_init (ValaInterfaceTypeClass * klass,
                                gpointer klass_data)
{
	vala_interface_type_parent_class = g_type_class_peek_parent (klass);
	((ValaDataTypeClass *) klass)->copy = (ValaDataType* (*) (ValaDataType*)) vala_interface_type_real_copy;
}

static void
vala_interface_type_instance_init (ValaInterfaceType * self,
                                   gpointer klass)
{
}

/**
 * An interface type.
 */
static GType
vala_interface_type_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (ValaInterfaceTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_interface_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaInterfaceType), 0, (GInstanceInitFunc) vala_interface_type_instance_init, NULL };
	GType vala_interface_type_type_id;
	vala_interface_type_type_id = g_type_register_static (VALA_TYPE_REFERENCE_TYPE, "ValaInterfaceType", &g_define_type_info, 0);
	return vala_interface_type_type_id;
}

GType
vala_interface_type_get_type (void)
{
	static volatile gsize vala_interface_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_interface_type_type_id__volatile)) {
		GType vala_interface_type_type_id;
		vala_interface_type_type_id = vala_interface_type_get_type_once ();
		g_once_init_leave (&vala_interface_type_type_id__volatile, vala_interface_type_type_id);
	}
	return vala_interface_type_type_id__volatile;
}

