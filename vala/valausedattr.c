/* valausedattr.c generated by valac, the Vala compiler
 * generated from valausedattr.vala, do not modify */

/* valaunusedattr.vala
 *
 * Copyright (C) 2014-2015  Jürg Billeter
 * Copyright (C) 2014-2015  Luca Bruno
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
 * 	Luca Bruno <lucabru@src.gnome.org>
 */


#include <glib.h>
#include <glib-object.h>
#include "vala.h"
#include <stdlib.h>
#include <string.h>
#include <valagee.h>

#define _vala_map_unref0(var) ((var == NULL) ? NULL : (var = (vala_map_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_iterator_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterator_unref (var), NULL)))


static gpointer vala_used_attr_parent_class = NULL;

static void vala_used_attr_check_unused_attr (ValaUsedAttr* self,
                                       ValaSymbol* sym);
static void vala_used_attr_real_visit_namespace (ValaCodeVisitor* base,
                                          ValaNamespace* ns);
static void vala_used_attr_real_visit_class (ValaCodeVisitor* base,
                                      ValaClass* cl);
static void vala_used_attr_real_visit_struct (ValaCodeVisitor* base,
                                       ValaStruct* st);
static void vala_used_attr_real_visit_interface (ValaCodeVisitor* base,
                                          ValaInterface* iface);
static void vala_used_attr_real_visit_enum (ValaCodeVisitor* base,
                                     ValaEnum* en);
static void vala_used_attr_real_visit_error_domain (ValaCodeVisitor* base,
                                             ValaErrorDomain* ed);
static void vala_used_attr_real_visit_delegate (ValaCodeVisitor* base,
                                         ValaDelegate* cb);
static void vala_used_attr_real_visit_constant (ValaCodeVisitor* base,
                                         ValaConstant* c);
static void vala_used_attr_real_visit_field (ValaCodeVisitor* base,
                                      ValaField* f);
static void vala_used_attr_real_visit_method (ValaCodeVisitor* base,
                                       ValaMethod* m);
static void vala_used_attr_real_visit_creation_method (ValaCodeVisitor* base,
                                                ValaCreationMethod* m);
static void vala_used_attr_real_visit_formal_parameter (ValaCodeVisitor* base,
                                                 ValaParameter* p);
static void vala_used_attr_real_visit_property (ValaCodeVisitor* base,
                                         ValaProperty* prop);
static void vala_used_attr_real_visit_signal (ValaCodeVisitor* base,
                                       ValaSignal* sig);
static void vala_used_attr_finalize (ValaCodeVisitor * obj);

static const gchar* VALA_USED_ATTR_valac_default_attrs[178] = {"CCode", "type_signature", "default_value", "set_value_function", "type_id", "cprefix", "cheader_filename", "marshaller_type_name", "get_value_function", "cname", "destroy_function", "lvalue_access", "has_type_id", "instance_pos", "const_cname", "take_value_function", "copy_function", "free_function", "param_spec_function", "has_target", "has_typedef", "type_cname", "ref_function", "ref_function_void", "unref_function", "type", "has_construct_function", "returns_floating_reference", "gir_namespace", "gir_version", "construct_function", "lower_case_cprefix", "simple_generics", "sentinel", "scope", "has_destroy_function", "ordering", "type_check_function", "has_copy_function", "lower_case_csuffix", "ref_sink_function", "dup_function", "finish_function", "generic_type_pos", "array_length_type", "array_length", "array_length_cname", "array_length_cexpr", "array_null_terminated", "vfunc_name", "finish_vfunc_name", "finish_name", "free_function_address_of", "pos", "delegate_target", "delegate_target_cname", "array_length_pos", "delegate_target_pos", "destroy_notify_pos", "ctype", "has_new_function", "notify", "finish_instance", "use_inplace", "feature_test_macro", "default_value_on_error", "async_result_pos", "", "Immutable", "", "Compact", "", "NoWrapper", "", "NoThrow", "", "DestroysInstance", "", "Flags", "", "Experimental", "", "NoReturn", "", "NoArrayLength", "", "Assert", "", "ErrorBase", "", "GenericAccessors", "", "Diagnostics", "", "NoAccessorMethod", "", "ConcreteAccessor", "", "HasEmitter", "", "ReturnsModifiedPointer", "", "Deprecated", "since", "replacement", "", "Version", "since", "replacement", "deprecated", "deprecated_since", "experimental", "experimental_until", "", "Signal", "detailed", "run", "no_recurse", "action", "no_hooks", "", "Description", "nick", "blurb", "", "IntegerType", "rank", "min", "max", "signed", "width", "", "FloatingType", "rank", "decimal", "width", "", "BooleanType", "", "SimpleType", "", "PointerType", "", "Print", "", "PrintfFormat", "", "ScanfFormat", "", "FormatArg", "", "GtkChild", "name", "internal", "", "GtkTemplate", "ui", "", "GtkCallback", "name", "", "ModuleInit", "", "DBus", "name", "no_reply", "result", "use_string_marshalling", "value", "signature", "visible", "timeout", "", "GIR", "fullname", "name", "visible", ""};

ValaUsedAttr*
vala_used_attr_construct (GType object_type)
{
	ValaUsedAttr* self = NULL;
	gchar* curattr = NULL;
	gchar* _tmp0_;
	self = (ValaUsedAttr*) vala_code_visitor_construct (object_type);
	_tmp0_ = g_strdup ("");
	curattr = _tmp0_;
	{
		const gchar** val_collection = NULL;
		gint val_collection_length1 = 0;
		gint _val_collection_size_ = 0;
		gint val_it = 0;
		val_collection = VALA_USED_ATTR_valac_default_attrs;
		val_collection_length1 = G_N_ELEMENTS (VALA_USED_ATTR_valac_default_attrs);
		for (val_it = 0; val_it < G_N_ELEMENTS (VALA_USED_ATTR_valac_default_attrs); val_it = val_it + 1) {
			const gchar* val = NULL;
			val = val_collection[val_it];
			{
				const gchar* _tmp1_;
				_tmp1_ = val;
				if (g_strcmp0 (_tmp1_, "") == 0) {
					gchar* _tmp2_;
					_tmp2_ = g_strdup ("");
					_g_free0 (curattr);
					curattr = _tmp2_;
				} else {
					const gchar* _tmp3_;
					_tmp3_ = curattr;
					if (g_strcmp0 (_tmp3_, "") == 0) {
						const gchar* _tmp4_;
						gchar* _tmp5_;
						const gchar* _tmp6_;
						_tmp4_ = val;
						_tmp5_ = g_strdup (_tmp4_);
						_g_free0 (curattr);
						curattr = _tmp5_;
						_tmp6_ = curattr;
						vala_used_attr_mark (self, _tmp6_, NULL);
					} else {
						const gchar* _tmp7_;
						const gchar* _tmp8_;
						_tmp7_ = curattr;
						_tmp8_ = val;
						vala_used_attr_mark (self, _tmp7_, _tmp8_);
					}
				}
			}
		}
	}
	_g_free0 (curattr);
	return self;
}


ValaUsedAttr*
vala_used_attr_new (void)
{
	return vala_used_attr_construct (VALA_TYPE_USED_ATTR);
}


/**
 * Mark the attribute or attribute argument as used by the compiler
 */
void
vala_used_attr_mark (ValaUsedAttr* self,
                     const gchar* attribute,
                     const gchar* argument)
{
	ValaSet* set = NULL;
	ValaMap* _tmp0_;
	gpointer _tmp1_;
	ValaSet* _tmp2_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (attribute != NULL);
	_tmp0_ = self->marked;
	_tmp1_ = vala_map_get (_tmp0_, attribute);
	set = (ValaSet*) _tmp1_;
	_tmp2_ = set;
	if (_tmp2_ == NULL) {
		GHashFunc _tmp3_;
		GEqualFunc _tmp4_;
		ValaHashSet* _tmp5_;
		ValaMap* _tmp6_;
		ValaSet* _tmp7_;
		_tmp3_ = g_str_hash;
		_tmp4_ = g_str_equal;
		_tmp5_ = vala_hash_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, _tmp3_, _tmp4_);
		_vala_iterable_unref0 (set);
		set = (ValaSet*) _tmp5_;
		_tmp6_ = self->marked;
		_tmp7_ = set;
		vala_map_set (_tmp6_, attribute, _tmp7_);
	}
	if (argument != NULL) {
		ValaSet* _tmp8_;
		_tmp8_ = set;
		vala_collection_add ((ValaCollection*) _tmp8_, argument);
	}
	_vala_iterable_unref0 (set);
}


/**
 * Traverse the code tree and warn about unused attributes.
 *
 * @param context a code context
 */
void
vala_used_attr_check_unused (ValaUsedAttr* self,
                             ValaCodeContext* context)
{
	ValaNamespace* _tmp0_;
	ValaNamespace* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (context != NULL);
	_tmp0_ = vala_code_context_get_root (context);
	_tmp1_ = _tmp0_;
	vala_code_node_accept ((ValaCodeNode*) _tmp1_, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_check_unused_attr (ValaUsedAttr* self,
                                  ValaSymbol* sym)
{
	gboolean _tmp0_;
	gboolean _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (sym != NULL);
	_tmp0_ = vala_symbol_get_used (sym);
	_tmp1_ = _tmp0_;
	if (_tmp1_) {
		GList* _tmp2_;
		_tmp2_ = ((ValaCodeNode*) sym)->attributes;
		{
			GList* attr_collection = NULL;
			GList* attr_it = NULL;
			attr_collection = _tmp2_;
			for (attr_it = attr_collection; attr_it != NULL; attr_it = attr_it->next) {
				ValaAttribute* attr = NULL;
				attr = (ValaAttribute*) attr_it->data;
				{
					ValaSet* set = NULL;
					ValaMap* _tmp3_;
					ValaAttribute* _tmp4_;
					const gchar* _tmp5_;
					const gchar* _tmp6_;
					gpointer _tmp7_;
					ValaSet* _tmp8_;
					_tmp3_ = self->marked;
					_tmp4_ = attr;
					_tmp5_ = vala_attribute_get_name (_tmp4_);
					_tmp6_ = _tmp5_;
					_tmp7_ = vala_map_get (_tmp3_, _tmp6_);
					set = (ValaSet*) _tmp7_;
					_tmp8_ = set;
					if (_tmp8_ == NULL) {
						ValaAttribute* _tmp9_;
						ValaSourceReference* _tmp10_;
						ValaSourceReference* _tmp11_;
						ValaAttribute* _tmp12_;
						const gchar* _tmp13_;
						const gchar* _tmp14_;
						gchar* _tmp15_;
						gchar* _tmp16_;
						_tmp9_ = attr;
						_tmp10_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp9_);
						_tmp11_ = _tmp10_;
						_tmp12_ = attr;
						_tmp13_ = vala_attribute_get_name (_tmp12_);
						_tmp14_ = _tmp13_;
						_tmp15_ = g_strdup_printf ("attribute `%s' never used", _tmp14_);
						_tmp16_ = _tmp15_;
						vala_report_warning (_tmp11_, _tmp16_);
						_g_free0 (_tmp16_);
					} else {
						{
							ValaIterator* _arg_it = NULL;
							ValaAttribute* _tmp17_;
							ValaMap* _tmp18_;
							ValaMap* _tmp19_;
							ValaSet* _tmp20_;
							ValaSet* _tmp21_;
							ValaIterator* _tmp22_;
							ValaIterator* _tmp23_;
							_tmp17_ = attr;
							_tmp18_ = vala_attribute_get_args (_tmp17_);
							_tmp19_ = _tmp18_;
							_tmp20_ = vala_map_get_keys (_tmp19_);
							_tmp21_ = _tmp20_;
							_tmp22_ = vala_iterable_iterator ((ValaIterable*) _tmp21_);
							_tmp23_ = _tmp22_;
							_vala_iterable_unref0 (_tmp21_);
							_arg_it = _tmp23_;
							while (TRUE) {
								ValaIterator* _tmp24_;
								gchar* arg = NULL;
								ValaIterator* _tmp25_;
								gpointer _tmp26_;
								ValaSet* _tmp27_;
								const gchar* _tmp28_;
								_tmp24_ = _arg_it;
								if (!vala_iterator_next (_tmp24_)) {
									break;
								}
								_tmp25_ = _arg_it;
								_tmp26_ = vala_iterator_get (_tmp25_);
								arg = (gchar*) _tmp26_;
								_tmp27_ = set;
								_tmp28_ = arg;
								if (!vala_collection_contains ((ValaCollection*) _tmp27_, _tmp28_)) {
									ValaAttribute* _tmp29_;
									ValaSourceReference* _tmp30_;
									ValaSourceReference* _tmp31_;
									const gchar* _tmp32_;
									gchar* _tmp33_;
									gchar* _tmp34_;
									_tmp29_ = attr;
									_tmp30_ = vala_code_node_get_source_reference ((ValaCodeNode*) _tmp29_);
									_tmp31_ = _tmp30_;
									_tmp32_ = arg;
									_tmp33_ = g_strdup_printf ("argument `%s' never used", _tmp32_);
									_tmp34_ = _tmp33_;
									vala_report_warning (_tmp31_, _tmp34_);
									_g_free0 (_tmp34_);
								}
								_g_free0 (arg);
							}
							_vala_iterator_unref0 (_arg_it);
						}
					}
					_vala_iterable_unref0 (set);
				}
			}
		}
	}
}


static void
vala_used_attr_real_visit_namespace (ValaCodeVisitor* base,
                                     ValaNamespace* ns)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (ns != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) ns);
	vala_code_node_accept_children ((ValaCodeNode*) ns, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_real_visit_class (ValaCodeVisitor* base,
                                 ValaClass* cl)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (cl != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) cl);
	vala_code_node_accept_children ((ValaCodeNode*) cl, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_real_visit_struct (ValaCodeVisitor* base,
                                  ValaStruct* st)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (st != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) st);
	vala_code_node_accept_children ((ValaCodeNode*) st, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_real_visit_interface (ValaCodeVisitor* base,
                                     ValaInterface* iface)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (iface != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) iface);
	vala_code_node_accept_children ((ValaCodeNode*) iface, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_real_visit_enum (ValaCodeVisitor* base,
                                ValaEnum* en)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (en != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) en);
	vala_code_node_accept_children ((ValaCodeNode*) en, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_real_visit_error_domain (ValaCodeVisitor* base,
                                        ValaErrorDomain* ed)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (ed != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) ed);
	vala_code_node_accept_children ((ValaCodeNode*) ed, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_real_visit_delegate (ValaCodeVisitor* base,
                                    ValaDelegate* cb)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (cb != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) cb);
	vala_code_node_accept_children ((ValaCodeNode*) cb, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_real_visit_constant (ValaCodeVisitor* base,
                                    ValaConstant* c)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (c != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) c);
}


static void
vala_used_attr_real_visit_field (ValaCodeVisitor* base,
                                 ValaField* f)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (f != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) f);
}


static void
vala_used_attr_real_visit_method (ValaCodeVisitor* base,
                                  ValaMethod* m)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (m != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) m);
	vala_code_node_accept_children ((ValaCodeNode*) m, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_real_visit_creation_method (ValaCodeVisitor* base,
                                           ValaCreationMethod* m)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (m != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) m);
	vala_code_node_accept_children ((ValaCodeNode*) m, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_real_visit_formal_parameter (ValaCodeVisitor* base,
                                            ValaParameter* p)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (p != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) p);
}


static void
vala_used_attr_real_visit_property (ValaCodeVisitor* base,
                                    ValaProperty* prop)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (prop != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) prop);
}


static void
vala_used_attr_real_visit_signal (ValaCodeVisitor* base,
                                  ValaSignal* sig)
{
	ValaUsedAttr * self;
	self = (ValaUsedAttr*) base;
	g_return_if_fail (sig != NULL);
	vala_used_attr_check_unused_attr (self, (ValaSymbol*) sig);
	vala_code_node_accept_children ((ValaCodeNode*) sig, (ValaCodeVisitor*) self);
}


static void
vala_used_attr_class_init (ValaUsedAttrClass * klass)
{
	vala_used_attr_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeVisitorClass *) klass)->finalize = vala_used_attr_finalize;
	((ValaCodeVisitorClass *) klass)->visit_namespace = (void (*) (ValaCodeVisitor*, ValaNamespace*)) vala_used_attr_real_visit_namespace;
	((ValaCodeVisitorClass *) klass)->visit_class = (void (*) (ValaCodeVisitor*, ValaClass*)) vala_used_attr_real_visit_class;
	((ValaCodeVisitorClass *) klass)->visit_struct = (void (*) (ValaCodeVisitor*, ValaStruct*)) vala_used_attr_real_visit_struct;
	((ValaCodeVisitorClass *) klass)->visit_interface = (void (*) (ValaCodeVisitor*, ValaInterface*)) vala_used_attr_real_visit_interface;
	((ValaCodeVisitorClass *) klass)->visit_enum = (void (*) (ValaCodeVisitor*, ValaEnum*)) vala_used_attr_real_visit_enum;
	((ValaCodeVisitorClass *) klass)->visit_error_domain = (void (*) (ValaCodeVisitor*, ValaErrorDomain*)) vala_used_attr_real_visit_error_domain;
	((ValaCodeVisitorClass *) klass)->visit_delegate = (void (*) (ValaCodeVisitor*, ValaDelegate*)) vala_used_attr_real_visit_delegate;
	((ValaCodeVisitorClass *) klass)->visit_constant = (void (*) (ValaCodeVisitor*, ValaConstant*)) vala_used_attr_real_visit_constant;
	((ValaCodeVisitorClass *) klass)->visit_field = (void (*) (ValaCodeVisitor*, ValaField*)) vala_used_attr_real_visit_field;
	((ValaCodeVisitorClass *) klass)->visit_method = (void (*) (ValaCodeVisitor*, ValaMethod*)) vala_used_attr_real_visit_method;
	((ValaCodeVisitorClass *) klass)->visit_creation_method = (void (*) (ValaCodeVisitor*, ValaCreationMethod*)) vala_used_attr_real_visit_creation_method;
	((ValaCodeVisitorClass *) klass)->visit_formal_parameter = (void (*) (ValaCodeVisitor*, ValaParameter*)) vala_used_attr_real_visit_formal_parameter;
	((ValaCodeVisitorClass *) klass)->visit_property = (void (*) (ValaCodeVisitor*, ValaProperty*)) vala_used_attr_real_visit_property;
	((ValaCodeVisitorClass *) klass)->visit_signal = (void (*) (ValaCodeVisitor*, ValaSignal*)) vala_used_attr_real_visit_signal;
}


static void
vala_used_attr_instance_init (ValaUsedAttr * self)
{
	GHashFunc _tmp0_;
	GEqualFunc _tmp1_;
	GEqualFunc _tmp2_;
	ValaHashMap* _tmp3_;
	_tmp0_ = g_str_hash;
	_tmp1_ = g_str_equal;
	_tmp2_ = g_direct_equal;
	_tmp3_ = vala_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, VALA_TYPE_SET, (GBoxedCopyFunc) vala_iterable_ref, (GDestroyNotify) vala_iterable_unref, _tmp0_, _tmp1_, _tmp2_);
	self->marked = (ValaMap*) _tmp3_;
}


static void
vala_used_attr_finalize (ValaCodeVisitor * obj)
{
	ValaUsedAttr * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_USED_ATTR, ValaUsedAttr);
	_vala_map_unref0 (self->marked);
	VALA_CODE_VISITOR_CLASS (vala_used_attr_parent_class)->finalize (obj);
}


/**
 * Code visitor to warn about unused attributes
 */
GType
vala_used_attr_get_type (void)
{
	static volatile gsize vala_used_attr_type_id__volatile = 0;
	if (g_once_init_enter (&vala_used_attr_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaUsedAttrClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_used_attr_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaUsedAttr), 0, (GInstanceInitFunc) vala_used_attr_instance_init, NULL };
		GType vala_used_attr_type_id;
		vala_used_attr_type_id = g_type_register_static (VALA_TYPE_CODE_VISITOR, "ValaUsedAttr", &g_define_type_info, 0);
		g_once_init_leave (&vala_used_attr_type_id__volatile, vala_used_attr_type_id);
	}
	return vala_used_attr_type_id__volatile;
}



