/* set.c generated by valac 0.52.0, the Vala compiler
 * generated from set.vala, do not modify */

/* set.vala
 *
 * Copyright (C) 2007  Jürg Billeter
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

#include "gee.h"
#include <glib-object.h>
#include <glib.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

static GType gee_set_get_type_once (void);

/**
 * Returns an immutable empty set.
 *
 * @return an immutable empty set
 */
GeeSet*
gee_set_empty (GType g_type,
               GBoxedCopyFunc g_dup_func,
               GDestroyNotify g_destroy_func)
{
	GeeHashSet* _tmp0_;
	GeeHashSet* _tmp1_;
	GeeSet* _tmp2_;
	GeeSet* _tmp3_;
	GeeSet* _tmp4_;
	GeeSet* result = NULL;
	_tmp0_ = gee_hash_set_new (g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func, NULL, NULL, NULL, NULL, NULL, NULL);
	_tmp1_ = _tmp0_;
	_tmp2_ = gee_abstract_set_get_read_only_view ((GeeAbstractSet*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp1_);
	result = _tmp4_;
	return result;
}

GeeSet*
gee_set_get_read_only_view (GeeSet* self)
{
	GeeSetIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_SET_GET_INTERFACE (self);
	if (_iface_->get_read_only_view) {
		return _iface_->get_read_only_view (self);
	}
	return NULL;
}

static void
gee_set_default_init (GeeSetIface * iface,
                      gpointer iface_data)
{
	/**
	 * The read-only view of this set.
	 */
	g_object_interface_install_property (iface, g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_SET, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

/**
 * A collection without duplicate elements.
 */
static GType
gee_set_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeSetIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_set_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	GType gee_set_type_id;
	gee_set_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeSet", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (gee_set_type_id, GEE_TYPE_COLLECTION);
	return gee_set_type_id;
}

GType
gee_set_get_type (void)
{
	static volatile gsize gee_set_type_id__volatile = 0;
	if (g_once_init_enter (&gee_set_type_id__volatile)) {
		GType gee_set_type_id;
		gee_set_type_id = gee_set_get_type_once ();
		g_once_init_leave (&gee_set_type_id__volatile, gee_set_type_id);
	}
	return gee_set_type_id__volatile;
}

