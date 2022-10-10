/* bidirsortedset.c generated by valac 0.52.0, the Vala compiler
 * generated from bidirsortedset.vala, do not modify */

/* bidirsortedset.vala
 *
 * Copyright (C) 2012  Maciej Piechotka
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
 * 	Maciej Piechotka <uzytkownik2@gmail.com>
 */

#include "gee.h"
#include <glib-object.h>
#include <glib.h>

#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

static GType gee_bidir_sorted_set_get_type_once (void);

/**
 * Returns a {@link BidirIterator} that can be used for bi-directional
 * iteration over this sorted set.
 *
 * @return a {@link BidirIterator} over this sorted set
 */
GeeBidirIterator*
gee_bidir_sorted_set_bidir_iterator (GeeBidirSortedSet* self)
{
	GeeBidirSortedSetIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_BIDIR_SORTED_SET_GET_INTERFACE (self);
	if (_iface_->bidir_iterator) {
		return _iface_->bidir_iterator (self);
	}
	return NULL;
}

/**
 * Returns an immutable empty sorted set.
 *
 * @return an immutable empty sorted set
 */
GeeBidirSortedSet*
gee_bidir_sorted_set_empty (GType g_type,
                            GBoxedCopyFunc g_dup_func,
                            GDestroyNotify g_destroy_func)
{
	GeeTreeSet* _tmp0_;
	GeeTreeSet* _tmp1_;
	GeeBidirSortedSet* _tmp2_;
	GeeBidirSortedSet* _tmp3_;
	GeeBidirSortedSet* _tmp4_;
	GeeBidirSortedSet* result = NULL;
	_tmp0_ = gee_tree_set_new (g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func, NULL, NULL, NULL);
	_tmp1_ = _tmp0_;
	_tmp2_ = gee_abstract_bidir_sorted_set_get_read_only_view ((GeeAbstractBidirSortedSet*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp1_);
	result = _tmp4_;
	return result;
}

GeeBidirSortedSet*
gee_bidir_sorted_set_get_read_only_view (GeeBidirSortedSet* self)
{
	GeeBidirSortedSetIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_BIDIR_SORTED_SET_GET_INTERFACE (self);
	if (_iface_->get_read_only_view) {
		return _iface_->get_read_only_view (self);
	}
	return NULL;
}

static void
gee_bidir_sorted_set_default_init (GeeBidirSortedSetIface * iface,
                                   gpointer iface_data)
{
	/**
	 * The read-only view of this set.
	 */
	g_object_interface_install_property (iface, g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_BIDIR_SORTED_SET, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static GType
gee_bidir_sorted_set_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeBidirSortedSetIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_bidir_sorted_set_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	GType gee_bidir_sorted_set_type_id;
	gee_bidir_sorted_set_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeBidirSortedSet", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (gee_bidir_sorted_set_type_id, GEE_TYPE_SORTED_SET);
	return gee_bidir_sorted_set_type_id;
}

GType
gee_bidir_sorted_set_get_type (void)
{
	static volatile gsize gee_bidir_sorted_set_type_id__volatile = 0;
	if (g_once_init_enter (&gee_bidir_sorted_set_type_id__volatile)) {
		GType gee_bidir_sorted_set_type_id;
		gee_bidir_sorted_set_type_id = gee_bidir_sorted_set_get_type_once ();
		g_once_init_leave (&gee_bidir_sorted_set_type_id__volatile, gee_bidir_sorted_set_type_id);
	}
	return gee_bidir_sorted_set_type_id__volatile;
}

