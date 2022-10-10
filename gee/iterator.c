/* iterator.c generated by valac 0.52.0, the Vala compiler
 * generated from iterator.vala, do not modify */

/* iterator.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
 * Copyright (C) 2009  Didier Villevalois, Maciej Piechotka
 * Copyright (C) 2010-2011  Maciej Piechotka
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
 * 	Maciej Piechotka <uzytkownik2@gmail.com>
 * 	Didier 'Ptitjes Villevalois <ptitjes@free.fr>
 */

#include "gee.h"
#include <glib-object.h>
#include <glib.h>

#define GEE_TYPE_UNFOLD_ITERATOR (gee_unfold_iterator_get_type ())
#define GEE_UNFOLD_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIterator))
#define GEE_UNFOLD_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIteratorClass))
#define GEE_IS_UNFOLD_ITERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_UNFOLD_ITERATOR))
#define GEE_IS_UNFOLD_ITERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_UNFOLD_ITERATOR))
#define GEE_UNFOLD_ITERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_UNFOLD_ITERATOR, GeeUnfoldIteratorClass))

typedef struct _GeeUnfoldIterator GeeUnfoldIterator;
typedef struct _GeeUnfoldIteratorClass GeeUnfoldIteratorClass;
#define _gee_lazy_unref0(var) ((var == NULL) ? NULL : (var = (gee_lazy_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _Block11Data Block11Data;

struct _Block11Data {
	int _ref_count_;
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GeeIterator* current;
	GeeIterator* iters;
};

 G_GNUC_INTERNAL GeeUnfoldIterator* gee_unfold_iterator_new (GType g_type,
                                            GBoxedCopyFunc g_dup_func,
                                            GDestroyNotify g_destroy_func,
                                            GeeUnfoldFunc func,
                                            gpointer func_target,
                                            GDestroyNotify func_target_destroy_notify,
                                            GeeLazy* current);
 G_GNUC_INTERNAL GeeUnfoldIterator* gee_unfold_iterator_construct (GType object_type,
                                                  GType g_type,
                                                  GBoxedCopyFunc g_dup_func,
                                                  GDestroyNotify g_destroy_func,
                                                  GeeUnfoldFunc func,
                                                  gpointer func_target,
                                                  GDestroyNotify func_target_destroy_notify,
                                                  GeeLazy* current);
 G_GNUC_INTERNAL GType gee_unfold_iterator_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
static Block11Data* block11_data_ref (Block11Data* _data11_);
static void block11_data_unref (void * _userdata_);
static GeeLazy* __lambda7_ (Block11Data* _data11_);
static GeeLazy* ___lambda7__gee_unfold_func (gpointer self);
static GType gee_iterator_get_type_once (void);

/**
 * Advances to the next element in the iteration.
 *
 * @return ``true`` if the iterator has a next element
 */
gboolean
gee_iterator_next (GeeIterator* self)
{
	GeeIteratorIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_ITERATOR_GET_INTERFACE (self);
	if (_iface_->next) {
		return _iface_->next (self);
	}
	return FALSE;
}

/**
 * Checks whether there is a next element in the iteration.
 *
 * @return ``true`` if the iterator has a next element
 */
gboolean
gee_iterator_has_next (GeeIterator* self)
{
	GeeIteratorIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_ITERATOR_GET_INTERFACE (self);
	if (_iface_->has_next) {
		return _iface_->has_next (self);
	}
	return FALSE;
}

/**
 * Returns the current element in the iteration.
 *
 * @return the current element in the iteration
 */
gpointer
gee_iterator_get (GeeIterator* self)
{
	GeeIteratorIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_ITERATOR_GET_INTERFACE (self);
	if (_iface_->get) {
		return _iface_->get (self);
	}
	return NULL;
}

/**
 * Removes the current element in the iteration. The cursor is set in an
 * in-between state. Both {@link get} and {@link remove} will fail until
 * the next move of the cursor (calling {@link next}).
 */
void
gee_iterator_remove (GeeIterator* self)
{
	GeeIteratorIface* _iface_;
	g_return_if_fail (self != NULL);
	_iface_ = GEE_ITERATOR_GET_INTERFACE (self);
	if (_iface_->remove) {
		_iface_->remove (self);
	}
}

/**
 * Create iterator from unfolding function. The lazy value is
 * force-evaluated before progressing to next element.
 *
 * @param f Unfolding function
 * @param current If iterator is to be valid it contains the current value of it
 */
GeeIterator*
gee_iterator_unfold (GType a_type,
                     GBoxedCopyFunc a_dup_func,
                     GDestroyNotify a_destroy_func,
                     GeeUnfoldFunc f,
                     gpointer f_target,
                     GDestroyNotify f_target_destroy_notify,
                     GeeLazy* current)
{
	GeeUnfoldFunc _tmp0_;
	gpointer _tmp0__target;
	GDestroyNotify _tmp0__target_destroy_notify;
	GeeLazy* _tmp1_;
	GeeUnfoldIterator* _tmp2_;
	GeeIterator* result = NULL;
	_tmp0_ = f;
	_tmp0__target = f_target;
	_tmp0__target_destroy_notify = f_target_destroy_notify;
	f = NULL;
	f_target = NULL;
	f_target_destroy_notify = NULL;
	_tmp1_ = current;
	current = NULL;
	_tmp2_ = gee_unfold_iterator_new (a_type, (GBoxedCopyFunc) a_dup_func, (GDestroyNotify) a_destroy_func, _tmp0_, _tmp0__target, _tmp0__target_destroy_notify, _tmp1_);
	result = (GeeIterator*) _tmp2_;
	(f_target_destroy_notify == NULL) ? NULL : (f_target_destroy_notify (f_target), NULL);
	f = NULL;
	f_target = NULL;
	f_target_destroy_notify = NULL;
	_gee_lazy_unref0 (current);
	return result;
}

/**
 * Concatenate iterators.
 *
 * @param iters Iterators of iterators
 * @return Iterator containing values of each iterator
 */
static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static Block11Data*
block11_data_ref (Block11Data* _data11_)
{
	g_atomic_int_inc (&_data11_->_ref_count_);
	return _data11_;
}

static void
block11_data_unref (void * _userdata_)
{
	Block11Data* _data11_;
	_data11_ = (Block11Data*) _userdata_;
	if (g_atomic_int_dec_and_test (&_data11_->_ref_count_)) {
		GType g_type;
		GBoxedCopyFunc g_dup_func;
		GDestroyNotify g_destroy_func;
		g_type = _data11_->g_type;
		g_dup_func = _data11_->g_dup_func;
		g_destroy_func = _data11_->g_destroy_func;
		_g_object_unref0 (_data11_->current);
		_g_object_unref0 (_data11_->iters);
		g_slice_free (Block11Data, _data11_);
	}
}

static GeeLazy*
__lambda7_ (Block11Data* _data11_)
{
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GeeLazy* result = NULL;
	g_type = _data11_->g_type;
	g_dup_func = _data11_->g_dup_func;
	g_destroy_func = _data11_->g_destroy_func;
	while (TRUE) {
		GeeIterator* _tmp0_;
		_tmp0_ = _data11_->current;
		if (_tmp0_ == NULL) {
			if (gee_iterator_next (_data11_->iters)) {
				gpointer _tmp1_;
				_tmp1_ = gee_iterator_get (_data11_->iters);
				_g_object_unref0 (_data11_->current);
				_data11_->current = (GeeIterator*) _tmp1_;
			} else {
				result = NULL;
				return result;
			}
		} else {
			GeeIterator* _tmp2_;
			_tmp2_ = _data11_->current;
			if (gee_iterator_next (_tmp2_)) {
				GeeIterator* _tmp3_;
				gpointer _tmp4_;
				gpointer _tmp5_;
				GeeLazy* _tmp6_;
				GeeLazy* _tmp7_;
				_tmp3_ = _data11_->current;
				_tmp4_ = gee_iterator_get (_tmp3_);
				_tmp5_ = _tmp4_;
				_tmp6_ = gee_lazy_new_from_value (g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func, _tmp5_);
				_tmp7_ = _tmp6_;
				((_tmp5_ == NULL) || (g_destroy_func == NULL)) ? NULL : (_tmp5_ = (g_destroy_func (_tmp5_), NULL));
				result = _tmp7_;
				return result;
			} else {
				_g_object_unref0 (_data11_->current);
				_data11_->current = NULL;
			}
		}
	}
}

static GeeLazy*
___lambda7__gee_unfold_func (gpointer self)
{
	GeeLazy* result;
	result = __lambda7_ (self);
	return result;
}

GeeIterator*
gee_iterator_concat (GType g_type,
                     GBoxedCopyFunc g_dup_func,
                     GDestroyNotify g_destroy_func,
                     GeeIterator* iters)
{
	Block11Data* _data11_;
	GeeIterator* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	GeeIterator* _tmp4_;
	GeeIterator* result = NULL;
	g_return_val_if_fail (iters != NULL, NULL);
	_data11_ = g_slice_new0 (Block11Data);
	_data11_->_ref_count_ = 1;
	_data11_->g_type = g_type;
	_data11_->g_dup_func = g_dup_func;
	_data11_->g_destroy_func = g_destroy_func;
	_tmp0_ = _g_object_ref0 (iters);
	_g_object_unref0 (_data11_->iters);
	_data11_->iters = _tmp0_;
	_data11_->current = NULL;
	_tmp1_ = gee_iterator_get_valid (_data11_->iters);
	_tmp2_ = _tmp1_;
	if (_tmp2_) {
		gpointer _tmp3_;
		_tmp3_ = gee_iterator_get (_data11_->iters);
		_g_object_unref0 (_data11_->current);
		_data11_->current = (GeeIterator*) _tmp3_;
	}
	_tmp4_ = gee_iterator_unfold (g_type, (GBoxedCopyFunc) g_dup_func, (GDestroyNotify) g_destroy_func, ___lambda7__gee_unfold_func, block11_data_ref (_data11_), block11_data_unref, NULL);
	result = _tmp4_;
	block11_data_unref (_data11_);
	_data11_ = NULL;
	return result;
}

gboolean
gee_iterator_get_valid (GeeIterator* self)
{
	GeeIteratorIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_ITERATOR_GET_INTERFACE (self);
	if (_iface_->get_valid) {
		return _iface_->get_valid (self);
	}
	return FALSE;
}

gboolean
gee_iterator_get_read_only (GeeIterator* self)
{
	GeeIteratorIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_ITERATOR_GET_INTERFACE (self);
	if (_iface_->get_read_only) {
		return _iface_->get_read_only (self);
	}
	return FALSE;
}

static void
gee_iterator_default_init (GeeIteratorIface * iface,
                           gpointer iface_data)
{
	/**
	 * Determines whether the call to {@link get} is legal. It is false at the
	 * beginning and after {@link remove} call and true otherwise.
	 */
	g_object_interface_install_property (iface, g_param_spec_boolean ("valid", "valid", "valid", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Determines whether the call to {@link remove} is legal assuming the
	 * iterator is valid. The value must not change in runtime hence the user
	 * of iterator may cache it.
	 */
	g_object_interface_install_property (iface, g_param_spec_boolean ("read-only", "read-only", "read-only", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

/**
 * An iterator over a collection.
 *
 * Gee's iterators are "on-track" iterators. They always point to an item
 * except before the first call to {@link next}, or, when an
 * item has been removed, until the next call to {@link next}.
 *
 * Please note that when the iterator is out of track, neither {@link get} nor
 * {@link remove} are defined and both might fail. After the next call to
 * {@link next}, they will be defined again.
 *
 * Please also note that, unless specified otherwise, iterators before iteration
 * started should behave as if after deletion of the first element. Whenever
 * documentation states about the iterator 'out of track', 'invalid' or
 * 'in-between elements' this refers to the same concept.
 */
static GType
gee_iterator_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeIteratorIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_iterator_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	GType gee_iterator_type_id;
	gee_iterator_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeIterator", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (gee_iterator_type_id, G_TYPE_OBJECT);
	g_type_interface_add_prerequisite (gee_iterator_type_id, GEE_TYPE_TRAVERSABLE);
	return gee_iterator_type_id;
}

GType
gee_iterator_get_type (void)
{
	static volatile gsize gee_iterator_type_id__volatile = 0;
	if (g_once_init_enter (&gee_iterator_type_id__volatile)) {
		GType gee_iterator_type_id;
		gee_iterator_type_id = gee_iterator_get_type_once ();
		g_once_init_leave (&gee_iterator_type_id__volatile, gee_iterator_type_id);
	}
	return gee_iterator_type_id__volatile;
}

