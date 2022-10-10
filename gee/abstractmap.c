/* abstractmap.c generated by valac 0.52.0, the Vala compiler
 * generated from abstractmap.vala, do not modify */

/* abstractmap.vala
 *
 * Copyright (C) 2007  Jürg Billeter
 * Copyright (C) 2009  Didier Villevalois
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
 * 	Tomaž Vajngerl <quikee@gmail.com>
 */

#include "gee.h"
#include <glib-object.h>
#include <glib.h>

enum  {
	GEE_ABSTRACT_MAP_0_PROPERTY,
	GEE_ABSTRACT_MAP_K_TYPE,
	GEE_ABSTRACT_MAP_K_DUP_FUNC,
	GEE_ABSTRACT_MAP_K_DESTROY_FUNC,
	GEE_ABSTRACT_MAP_V_TYPE,
	GEE_ABSTRACT_MAP_V_DUP_FUNC,
	GEE_ABSTRACT_MAP_V_DESTROY_FUNC,
	GEE_ABSTRACT_MAP_SIZE_PROPERTY,
	GEE_ABSTRACT_MAP_READ_ONLY_PROPERTY,
	GEE_ABSTRACT_MAP_KEYS_PROPERTY,
	GEE_ABSTRACT_MAP_VALUES_PROPERTY,
	GEE_ABSTRACT_MAP_ENTRIES_PROPERTY,
	GEE_ABSTRACT_MAP_READ_ONLY_VIEW_PROPERTY,
	GEE_ABSTRACT_MAP_NUM_PROPERTIES
};
static GParamSpec* gee_abstract_map_properties[GEE_ABSTRACT_MAP_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define GEE_TYPE_READ_ONLY_MAP (gee_read_only_map_get_type ())
#define GEE_READ_ONLY_MAP(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_MAP, GeeReadOnlyMap))
#define GEE_READ_ONLY_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_MAP, GeeReadOnlyMapClass))
#define GEE_IS_READ_ONLY_MAP(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_MAP))
#define GEE_IS_READ_ONLY_MAP_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_MAP))
#define GEE_READ_ONLY_MAP_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_MAP, GeeReadOnlyMapClass))

typedef struct _GeeReadOnlyMap GeeReadOnlyMap;
typedef struct _GeeReadOnlyMapClass GeeReadOnlyMapClass;

struct _GeeAbstractMapPrivate {
	GType k_type;
	GBoxedCopyFunc k_dup_func;
	GDestroyNotify k_destroy_func;
	GType v_type;
	GBoxedCopyFunc v_dup_func;
	GDestroyNotify v_destroy_func;
	GWeakRef _read_only_view;
};

static gint GeeAbstractMap_private_offset;
static gpointer gee_abstract_map_parent_class = NULL;
static GeeTraversableIface * gee_abstract_map_gee_traversable_parent_iface = NULL;
static GeeIterableIface * gee_abstract_map_gee_iterable_parent_iface = NULL;
static GeeMapIface * gee_abstract_map_gee_map_parent_iface = NULL;

 G_GNUC_INTERNAL void gee_abstract_map_reserved0 (GeeAbstractMap* self);
 G_GNUC_INTERNAL void gee_abstract_map_reserved1 (GeeAbstractMap* self);
 G_GNUC_INTERNAL void gee_abstract_map_reserved2 (GeeAbstractMap* self);
 G_GNUC_INTERNAL void gee_abstract_map_reserved3 (GeeAbstractMap* self);
 G_GNUC_INTERNAL void gee_abstract_map_reserved4 (GeeAbstractMap* self);
 G_GNUC_INTERNAL void gee_abstract_map_reserved5 (GeeAbstractMap* self);
 G_GNUC_INTERNAL void gee_abstract_map_reserved6 (GeeAbstractMap* self);
 G_GNUC_INTERNAL void gee_abstract_map_reserved7 (GeeAbstractMap* self);
 G_GNUC_INTERNAL void gee_abstract_map_reserved8 (GeeAbstractMap* self);
 G_GNUC_INTERNAL void gee_abstract_map_reserved9 (GeeAbstractMap* self);
static gboolean gee_abstract_map_real_has_key (GeeAbstractMap* self,
                                        gconstpointer key);
static gboolean gee_abstract_map_real_has (GeeAbstractMap* self,
                                    gconstpointer key,
                                    gconstpointer value);
static gpointer gee_abstract_map_real_get (GeeAbstractMap* self,
                                    gconstpointer key);
static void gee_abstract_map_real_set (GeeAbstractMap* self,
                                gconstpointer key,
                                gconstpointer value);
static gboolean gee_abstract_map_real_unset (GeeAbstractMap* self,
                                      gconstpointer key,
                                      gpointer* value);
static GeeMapIterator* gee_abstract_map_real_map_iterator (GeeAbstractMap* self);
static void gee_abstract_map_real_clear (GeeAbstractMap* self);
static GeeIterator* gee_abstract_map_real_iterator (GeeIterable* base);
static gboolean gee_abstract_map_real_foreach (GeeAbstractMap* self,
                                        GeeForallFunc f,
                                        gpointer f_target);
static GeeIterator* gee_abstract_map_real_stream (GeeAbstractMap* self,
                                           GType a_type,
                                           GBoxedCopyFunc a_dup_func,
                                           GDestroyNotify a_destroy_func,
                                           GeeStreamFunc f,
                                           gpointer f_target,
                                           GDestroyNotify f_target_destroy_notify);
static void gee_abstract_map_real_reserved0 (GeeAbstractMap* self);
static void gee_abstract_map_real_reserved1 (GeeAbstractMap* self);
static void gee_abstract_map_real_reserved2 (GeeAbstractMap* self);
static void gee_abstract_map_real_reserved3 (GeeAbstractMap* self);
static void gee_abstract_map_real_reserved4 (GeeAbstractMap* self);
static void gee_abstract_map_real_reserved5 (GeeAbstractMap* self);
static void gee_abstract_map_real_reserved6 (GeeAbstractMap* self);
static void gee_abstract_map_real_reserved7 (GeeAbstractMap* self);
static void gee_abstract_map_real_reserved8 (GeeAbstractMap* self);
static void gee_abstract_map_real_reserved9 (GeeAbstractMap* self);
 G_GNUC_INTERNAL GeeReadOnlyMap* gee_read_only_map_new (GType k_type,
                                       GBoxedCopyFunc k_dup_func,
                                       GDestroyNotify k_destroy_func,
                                       GType v_type,
                                       GBoxedCopyFunc v_dup_func,
                                       GDestroyNotify v_destroy_func,
                                       GeeMap* map);
 G_GNUC_INTERNAL GeeReadOnlyMap* gee_read_only_map_construct (GType object_type,
                                             GType k_type,
                                             GBoxedCopyFunc k_dup_func,
                                             GDestroyNotify k_destroy_func,
                                             GType v_type,
                                             GBoxedCopyFunc v_dup_func,
                                             GDestroyNotify v_destroy_func,
                                             GeeMap* map);
 G_GNUC_INTERNAL GType gee_read_only_map_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
static GObject * gee_abstract_map_constructor (GType type,
                                        guint n_construct_properties,
                                        GObjectConstructParam * construct_properties);
static void gee_abstract_map_finalize (GObject * obj);
static GType gee_abstract_map_get_type_once (void);
static void _vala_gee_abstract_map_get_property (GObject * object,
                                          guint property_id,
                                          GValue * value,
                                          GParamSpec * pspec);
static void _vala_gee_abstract_map_set_property (GObject * object,
                                          guint property_id,
                                          const GValue * value,
                                          GParamSpec * pspec);

static inline gpointer
gee_abstract_map_get_instance_private (GeeAbstractMap* self)
{
	return G_STRUCT_MEMBER_P (self, GeeAbstractMap_private_offset);
}

/**
 * {@inheritDoc}
 */
static gboolean
gee_abstract_map_real_has_key (GeeAbstractMap* self,
                               gconstpointer key)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_map_has_key'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
gee_abstract_map_has_key (GeeAbstractMap* self,
                          gconstpointer key)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->has_key) {
		return _klass_->has_key (self, key);
	}
	return FALSE;
}

/**
 * {@inheritDoc}
 */
static gboolean
gee_abstract_map_real_has (GeeAbstractMap* self,
                           gconstpointer key,
                           gconstpointer value)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_map_has'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
gee_abstract_map_has (GeeAbstractMap* self,
                      gconstpointer key,
                      gconstpointer value)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->has) {
		return _klass_->has (self, key, value);
	}
	return FALSE;
}

/**
 * {@inheritDoc}
 */
static gpointer
gee_abstract_map_real_get (GeeAbstractMap* self,
                           gconstpointer key)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_map_get'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

gpointer
gee_abstract_map_get (GeeAbstractMap* self,
                      gconstpointer key)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->get) {
		return _klass_->get (self, key);
	}
	return NULL;
}

/**
 * {@inheritDoc}
 */
static void
gee_abstract_map_real_set (GeeAbstractMap* self,
                           gconstpointer key,
                           gconstpointer value)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_map_set'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}

void
gee_abstract_map_set (GeeAbstractMap* self,
                      gconstpointer key,
                      gconstpointer value)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->set) {
		_klass_->set (self, key, value);
	}
}

/**
 * {@inheritDoc}
 */
static gboolean
gee_abstract_map_real_unset (GeeAbstractMap* self,
                             gconstpointer key,
                             gpointer* value)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_map_unset'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
gee_abstract_map_unset (GeeAbstractMap* self,
                        gconstpointer key,
                        gpointer* value)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->unset) {
		return _klass_->unset (self, key, value);
	}
	return FALSE;
}

/**
 * {@inheritDoc}
 */
static GeeMapIterator*
gee_abstract_map_real_map_iterator (GeeAbstractMap* self)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_map_map_iterator'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

GeeMapIterator*
gee_abstract_map_map_iterator (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->map_iterator) {
		return _klass_->map_iterator (self);
	}
	return NULL;
}

/**
 * {@inheritDoc}
 */
static void
gee_abstract_map_real_clear (GeeAbstractMap* self)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_map_clear'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}

void
gee_abstract_map_clear (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->clear) {
		_klass_->clear (self);
	}
}

/**
 * {@inheritDoc}
 */
static GeeIterator*
gee_abstract_map_real_iterator (GeeIterable* base)
{
	GeeAbstractMap * self;
	GeeSet* _tmp0_;
	GeeSet* _tmp1_;
	GeeSet* _tmp2_;
	GeeIterator* _tmp3_;
	GeeIterator* _tmp4_;
	GeeIterator* result = NULL;
	self = (GeeAbstractMap*) base;
	_tmp0_ = gee_map_get_entries ((GeeMap*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = _tmp1_;
	_tmp3_ = gee_iterable_iterator ((GeeIterable*) _tmp2_);
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp2_);
	result = _tmp4_;
	return result;
}

/**
 * {@inheritDoc}
 */
static gboolean
gee_abstract_map_real_foreach (GeeAbstractMap* self,
                               GeeForallFunc f,
                               gpointer f_target)
{
	GeeIterator* _tmp0_;
	GeeIterator* _tmp1_;
	gboolean _tmp2_;
	gboolean result = FALSE;
	_tmp0_ = gee_iterable_iterator ((GeeIterable*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = gee_traversable_foreach ((GeeTraversable*) _tmp1_, f, f_target);
	_g_object_unref0 (_tmp1_);
	result = _tmp2_;
	return result;
}

gboolean
gee_abstract_map_foreach (GeeAbstractMap* self,
                          GeeForallFunc f,
                          gpointer f_target)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->foreach) {
		return _klass_->foreach (self, f, f_target);
	}
	return FALSE;
}

/**
 * {@inheritDoc}
 */
static GeeIterator*
gee_abstract_map_real_stream (GeeAbstractMap* self,
                              GType a_type,
                              GBoxedCopyFunc a_dup_func,
                              GDestroyNotify a_destroy_func,
                              GeeStreamFunc f,
                              gpointer f_target,
                              GDestroyNotify f_target_destroy_notify)
{
	GeeIterator* _tmp0_;
	GeeIterator* _tmp1_;
	GeeStreamFunc _tmp2_;
	gpointer _tmp2__target;
	GDestroyNotify _tmp2__target_destroy_notify;
	GeeIterator* _tmp3_;
	GeeIterator* _tmp4_;
	GeeIterator* result = NULL;
	_tmp0_ = gee_iterable_iterator ((GeeIterable*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = f;
	_tmp2__target = f_target;
	_tmp2__target_destroy_notify = f_target_destroy_notify;
	f = NULL;
	f_target = NULL;
	f_target_destroy_notify = NULL;
	_tmp3_ = gee_traversable_stream ((GeeTraversable*) _tmp1_, a_type, (GBoxedCopyFunc) a_dup_func, (GDestroyNotify) a_destroy_func, _tmp2_, _tmp2__target, _tmp2__target_destroy_notify);
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp1_);
	result = _tmp4_;
	(f_target_destroy_notify == NULL) ? NULL : (f_target_destroy_notify (f_target), NULL);
	f = NULL;
	f_target = NULL;
	f_target_destroy_notify = NULL;
	return result;
}

GeeIterator*
gee_abstract_map_stream (GeeAbstractMap* self,
                         GType a_type,
                         GBoxedCopyFunc a_dup_func,
                         GDestroyNotify a_destroy_func,
                         GeeStreamFunc f,
                         gpointer f_target,
                         GDestroyNotify f_target_destroy_notify)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->stream) {
		return _klass_->stream (self, a_type, a_dup_func, a_destroy_func, f, f_target, f_target_destroy_notify);
	}
	return NULL;
}

static void
gee_abstract_map_real_reserved0 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved0 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved0) {
		_klass_->reserved0 (self);
	}
}

static void
gee_abstract_map_real_reserved1 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved1 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved1) {
		_klass_->reserved1 (self);
	}
}

static void
gee_abstract_map_real_reserved2 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved2 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved2) {
		_klass_->reserved2 (self);
	}
}

static void
gee_abstract_map_real_reserved3 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved3 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved3) {
		_klass_->reserved3 (self);
	}
}

static void
gee_abstract_map_real_reserved4 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved4 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved4) {
		_klass_->reserved4 (self);
	}
}

static void
gee_abstract_map_real_reserved5 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved5 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved5) {
		_klass_->reserved5 (self);
	}
}

static void
gee_abstract_map_real_reserved6 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved6 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved6) {
		_klass_->reserved6 (self);
	}
}

static void
gee_abstract_map_real_reserved7 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved7 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved7) {
		_klass_->reserved7 (self);
	}
}

static void
gee_abstract_map_real_reserved8 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved8 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved8) {
		_klass_->reserved8 (self);
	}
}

static void
gee_abstract_map_real_reserved9 (GeeAbstractMap* self)
{
}

void
gee_abstract_map_reserved9 (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->reserved9) {
		_klass_->reserved9 (self);
	}
}

GeeAbstractMap*
gee_abstract_map_construct (GType object_type,
                            GType k_type,
                            GBoxedCopyFunc k_dup_func,
                            GDestroyNotify k_destroy_func,
                            GType v_type,
                            GBoxedCopyFunc v_dup_func,
                            GDestroyNotify v_destroy_func)
{
	GeeAbstractMap * self = NULL;
	self = (GeeAbstractMap*) g_object_new (object_type, NULL);
	self->priv->k_type = k_type;
	self->priv->k_dup_func = k_dup_func;
	self->priv->k_destroy_func = k_destroy_func;
	self->priv->v_type = v_type;
	self->priv->v_dup_func = v_dup_func;
	self->priv->v_destroy_func = v_destroy_func;
	return self;
}

gint
gee_abstract_map_get_size (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, 0);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->get_size) {
		return _klass_->get_size (self);
	}
	return -1;
}

gboolean
gee_abstract_map_get_read_only (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->get_read_only) {
		return _klass_->get_read_only (self);
	}
	return FALSE;
}

GeeSet*
gee_abstract_map_get_keys (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->get_keys) {
		return _klass_->get_keys (self);
	}
	return NULL;
}

GeeCollection*
gee_abstract_map_get_values (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->get_values) {
		return _klass_->get_values (self);
	}
	return NULL;
}

GeeSet*
gee_abstract_map_get_entries (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->get_entries) {
		return _klass_->get_entries (self);
	}
	return NULL;
}

GeeMap*
gee_abstract_map_get_read_only_view (GeeAbstractMap* self)
{
	GeeAbstractMapClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_MAP_GET_CLASS (self);
	if (_klass_->get_read_only_view) {
		return _klass_->get_read_only_view (self);
	}
	return NULL;
}

static GeeMap*
gee_abstract_map_real_get_read_only_view (GeeAbstractMap* base)
{
	GeeMap* result;
	GeeAbstractMap* self;
	GeeMap* instance = NULL;
	GObject* _tmp0_;
	GeeMap* _tmp1_;
	self = base;
	_tmp0_ = g_weak_ref_get (&self->priv->_read_only_view);
	instance = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_MAP, GeeMap);
	_tmp1_ = instance;
	if (_tmp1_ == NULL) {
		GeeReadOnlyMap* _tmp2_;
		GeeMap* _tmp3_;
		_tmp2_ = gee_read_only_map_new (self->priv->k_type, (GBoxedCopyFunc) self->priv->k_dup_func, (GDestroyNotify) self->priv->k_destroy_func, self->priv->v_type, (GBoxedCopyFunc) self->priv->v_dup_func, (GDestroyNotify) self->priv->v_destroy_func, (GeeMap*) self);
		_g_object_unref0 (instance);
		instance = (GeeMap*) _tmp2_;
		_tmp3_ = instance;
		g_weak_ref_set (&self->priv->_read_only_view, (GObject*) _tmp3_);
	}
	result = instance;
	return result;
}

static GObject *
gee_abstract_map_constructor (GType type,
                              guint n_construct_properties,
                              GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GeeAbstractMap * self;
	parent_class = G_OBJECT_CLASS (gee_abstract_map_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_MAP, GeeAbstractMap);
	g_weak_ref_clear (&self->priv->_read_only_view);
	g_weak_ref_init (&self->priv->_read_only_view, NULL);
	return obj;
}

static void
gee_abstract_map_class_init (GeeAbstractMapClass * klass,
                             gpointer klass_data)
{
	gee_abstract_map_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeAbstractMap_private_offset);
	((GeeAbstractMapClass *) klass)->has_key = (gboolean (*) (GeeAbstractMap*, gconstpointer)) gee_abstract_map_real_has_key;
	((GeeAbstractMapClass *) klass)->has = (gboolean (*) (GeeAbstractMap*, gconstpointer, gconstpointer)) gee_abstract_map_real_has;
	((GeeAbstractMapClass *) klass)->get = (gpointer (*) (GeeAbstractMap*, gconstpointer)) gee_abstract_map_real_get;
	((GeeAbstractMapClass *) klass)->set = (void (*) (GeeAbstractMap*, gconstpointer, gconstpointer)) gee_abstract_map_real_set;
	((GeeAbstractMapClass *) klass)->unset = (gboolean (*) (GeeAbstractMap*, gconstpointer, gpointer*)) gee_abstract_map_real_unset;
	((GeeAbstractMapClass *) klass)->map_iterator = (GeeMapIterator* (*) (GeeAbstractMap*)) gee_abstract_map_real_map_iterator;
	((GeeAbstractMapClass *) klass)->clear = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_clear;
	((GeeAbstractMapClass *) klass)->foreach = (gboolean (*) (GeeAbstractMap*, GeeForallFunc, gpointer)) gee_abstract_map_real_foreach;
	((GeeAbstractMapClass *) klass)->stream = (GeeIterator* (*) (GeeAbstractMap*, GType, GBoxedCopyFunc, GDestroyNotify, GeeStreamFunc, gpointer, GDestroyNotify)) gee_abstract_map_real_stream;
	((GeeAbstractMapClass *) klass)->reserved0 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved0;
	((GeeAbstractMapClass *) klass)->reserved1 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved1;
	((GeeAbstractMapClass *) klass)->reserved2 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved2;
	((GeeAbstractMapClass *) klass)->reserved3 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved3;
	((GeeAbstractMapClass *) klass)->reserved4 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved4;
	((GeeAbstractMapClass *) klass)->reserved5 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved5;
	((GeeAbstractMapClass *) klass)->reserved6 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved6;
	((GeeAbstractMapClass *) klass)->reserved7 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved7;
	((GeeAbstractMapClass *) klass)->reserved8 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved8;
	((GeeAbstractMapClass *) klass)->reserved9 = (void (*) (GeeAbstractMap*)) gee_abstract_map_real_reserved9;
	GEE_ABSTRACT_MAP_CLASS (klass)->get_read_only_view = gee_abstract_map_real_get_read_only_view;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_abstract_map_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_abstract_map_set_property;
	G_OBJECT_CLASS (klass)->constructor = gee_abstract_map_constructor;
	G_OBJECT_CLASS (klass)->finalize = gee_abstract_map_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_K_TYPE, g_param_spec_gtype ("k-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_K_DUP_FUNC, g_param_spec_pointer ("k-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_K_DESTROY_FUNC, g_param_spec_pointer ("k-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_V_TYPE, g_param_spec_gtype ("v-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_V_DUP_FUNC, g_param_spec_pointer ("v-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_V_DESTROY_FUNC, g_param_spec_pointer ("v-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_SIZE_PROPERTY, gee_abstract_map_properties[GEE_ABSTRACT_MAP_SIZE_PROPERTY] = g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_READ_ONLY_PROPERTY, gee_abstract_map_properties[GEE_ABSTRACT_MAP_READ_ONLY_PROPERTY] = g_param_spec_boolean ("read-only", "read-only", "read-only", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_KEYS_PROPERTY, gee_abstract_map_properties[GEE_ABSTRACT_MAP_KEYS_PROPERTY] = g_param_spec_object ("keys", "keys", "keys", GEE_TYPE_SET, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_VALUES_PROPERTY, gee_abstract_map_properties[GEE_ABSTRACT_MAP_VALUES_PROPERTY] = g_param_spec_object ("values", "values", "values", GEE_TYPE_COLLECTION, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_ENTRIES_PROPERTY, gee_abstract_map_properties[GEE_ABSTRACT_MAP_ENTRIES_PROPERTY] = g_param_spec_object ("entries", "entries", "entries", GEE_TYPE_SET, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_MAP_READ_ONLY_VIEW_PROPERTY, gee_abstract_map_properties[GEE_ABSTRACT_MAP_READ_ONLY_VIEW_PROPERTY] = g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_MAP, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static GType
gee_abstract_map_gee_traversable_get_g_type (GeeAbstractMap* self)
{
	return GEE_MAP_TYPE_ENTRY;
}

static GBoxedCopyFunc
gee_abstract_map_gee_traversable_get_g_dup_func (GeeAbstractMap* self)
{
	return g_object_ref;
}

static GDestroyNotify
gee_abstract_map_gee_traversable_get_g_destroy_func (GeeAbstractMap* self)
{
	return g_object_unref;
}

static void
gee_abstract_map_gee_traversable_interface_init (GeeTraversableIface * iface,
                                                 gpointer iface_data)
{
	gee_abstract_map_gee_traversable_parent_iface = g_type_interface_peek_parent (iface);
	iface->foreach = (gboolean (*) (GeeTraversable*, GeeForallFunc, gpointer)) gee_abstract_map_foreach;
	iface->stream = (GeeIterator* (*) (GeeTraversable*, GType, GBoxedCopyFunc, GDestroyNotify, GeeStreamFunc, gpointer, GDestroyNotify)) gee_abstract_map_stream;
	iface->get_g_type = (GType (*) (GeeTraversable *)) gee_abstract_map_gee_traversable_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeTraversable *)) gee_abstract_map_gee_traversable_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeTraversable *)) gee_abstract_map_gee_traversable_get_g_destroy_func;
}

static GType
gee_abstract_map_gee_iterable_get_g_type (GeeAbstractMap* self)
{
	return GEE_MAP_TYPE_ENTRY;
}

static GBoxedCopyFunc
gee_abstract_map_gee_iterable_get_g_dup_func (GeeAbstractMap* self)
{
	return g_object_ref;
}

static GDestroyNotify
gee_abstract_map_gee_iterable_get_g_destroy_func (GeeAbstractMap* self)
{
	return g_object_unref;
}

static void
gee_abstract_map_gee_iterable_interface_init (GeeIterableIface * iface,
                                              gpointer iface_data)
{
	gee_abstract_map_gee_iterable_parent_iface = g_type_interface_peek_parent (iface);
	iface->iterator = (GeeIterator* (*) (GeeIterable*)) gee_abstract_map_real_iterator;
	iface->get_g_type = (GType (*) (GeeIterable *)) gee_abstract_map_gee_iterable_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeIterable *)) gee_abstract_map_gee_iterable_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeIterable *)) gee_abstract_map_gee_iterable_get_g_destroy_func;
}

static GType
gee_abstract_map_gee_map_get_k_type (GeeAbstractMap* self)
{
	return self->priv->k_type;
}

static GBoxedCopyFunc
gee_abstract_map_gee_map_get_k_dup_func (GeeAbstractMap* self)
{
	return self->priv->k_dup_func;
}

static GDestroyNotify
gee_abstract_map_gee_map_get_k_destroy_func (GeeAbstractMap* self)
{
	return self->priv->k_destroy_func;
}

static GType
gee_abstract_map_gee_map_get_v_type (GeeAbstractMap* self)
{
	return self->priv->v_type;
}

static GBoxedCopyFunc
gee_abstract_map_gee_map_get_v_dup_func (GeeAbstractMap* self)
{
	return self->priv->v_dup_func;
}

static GDestroyNotify
gee_abstract_map_gee_map_get_v_destroy_func (GeeAbstractMap* self)
{
	return self->priv->v_destroy_func;
}

static void
gee_abstract_map_gee_map_interface_init (GeeMapIface * iface,
                                         gpointer iface_data)
{
	gee_abstract_map_gee_map_parent_iface = g_type_interface_peek_parent (iface);
	iface->has_key = (gboolean (*) (GeeMap*, gconstpointer)) gee_abstract_map_has_key;
	iface->has = (gboolean (*) (GeeMap*, gconstpointer, gconstpointer)) gee_abstract_map_has;
	iface->get = (gpointer (*) (GeeMap*, gconstpointer)) gee_abstract_map_get;
	iface->set = (void (*) (GeeMap*, gconstpointer, gconstpointer)) gee_abstract_map_set;
	iface->unset = (gboolean (*) (GeeMap*, gconstpointer, gpointer*)) gee_abstract_map_unset;
	iface->map_iterator = (GeeMapIterator* (*) (GeeMap*)) gee_abstract_map_map_iterator;
	iface->clear = (void (*) (GeeMap*)) gee_abstract_map_clear;
	iface->get_k_type = (GType (*) (GeeMap *)) gee_abstract_map_gee_map_get_k_type;
	iface->get_k_dup_func = (GBoxedCopyFunc (*) (GeeMap *)) gee_abstract_map_gee_map_get_k_dup_func;
	iface->get_k_destroy_func = (GDestroyNotify (*) (GeeMap *)) gee_abstract_map_gee_map_get_k_destroy_func;
	iface->get_v_type = (GType (*) (GeeMap *)) gee_abstract_map_gee_map_get_v_type;
	iface->get_v_dup_func = (GBoxedCopyFunc (*) (GeeMap *)) gee_abstract_map_gee_map_get_v_dup_func;
	iface->get_v_destroy_func = (GDestroyNotify (*) (GeeMap *)) gee_abstract_map_gee_map_get_v_destroy_func;
	iface->get_size = (gint (*) (GeeMap *)) gee_abstract_map_get_size;
	iface->get_read_only = (gboolean (*) (GeeMap *)) gee_abstract_map_get_read_only;
	iface->get_keys = (GeeSet* (*) (GeeMap *)) gee_abstract_map_get_keys;
	iface->get_values = (GeeCollection* (*) (GeeMap *)) gee_abstract_map_get_values;
	iface->get_entries = (GeeSet* (*) (GeeMap *)) gee_abstract_map_get_entries;
	iface->get_read_only_view = (GeeMap* (*) (GeeMap *)) gee_abstract_map_get_read_only_view;
}

static void
gee_abstract_map_instance_init (GeeAbstractMap * self,
                                gpointer klass)
{
	self->priv = gee_abstract_map_get_instance_private (self);
}

static void
gee_abstract_map_finalize (GObject * obj)
{
	GeeAbstractMap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_MAP, GeeAbstractMap);
	g_weak_ref_clear (&self->priv->_read_only_view);
	G_OBJECT_CLASS (gee_abstract_map_parent_class)->finalize (obj);
}

/**
 * Skeletal implementation of the {@link Map} interface.
 *
 * Contains common code shared by all map implementations.
 *
 * @see HashMap
 * @see TreeMap
 */
static GType
gee_abstract_map_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeAbstractMapClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_abstract_map_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeAbstractMap), 0, (GInstanceInitFunc) gee_abstract_map_instance_init, NULL };
	static const GInterfaceInfo gee_traversable_info = { (GInterfaceInitFunc) gee_abstract_map_gee_traversable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo gee_iterable_info = { (GInterfaceInitFunc) gee_abstract_map_gee_iterable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo gee_map_info = { (GInterfaceInitFunc) gee_abstract_map_gee_map_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType gee_abstract_map_type_id;
	gee_abstract_map_type_id = g_type_register_static (G_TYPE_OBJECT, "GeeAbstractMap", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	g_type_add_interface_static (gee_abstract_map_type_id, GEE_TYPE_TRAVERSABLE, &gee_traversable_info);
	g_type_add_interface_static (gee_abstract_map_type_id, GEE_TYPE_ITERABLE, &gee_iterable_info);
	g_type_add_interface_static (gee_abstract_map_type_id, GEE_TYPE_MAP, &gee_map_info);
	GeeAbstractMap_private_offset = g_type_add_instance_private (gee_abstract_map_type_id, sizeof (GeeAbstractMapPrivate));
	return gee_abstract_map_type_id;
}

GType
gee_abstract_map_get_type (void)
{
	static volatile gsize gee_abstract_map_type_id__volatile = 0;
	if (g_once_init_enter (&gee_abstract_map_type_id__volatile)) {
		GType gee_abstract_map_type_id;
		gee_abstract_map_type_id = gee_abstract_map_get_type_once ();
		g_once_init_leave (&gee_abstract_map_type_id__volatile, gee_abstract_map_type_id);
	}
	return gee_abstract_map_type_id__volatile;
}

static void
_vala_gee_abstract_map_get_property (GObject * object,
                                     guint property_id,
                                     GValue * value,
                                     GParamSpec * pspec)
{
	GeeAbstractMap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_MAP, GeeAbstractMap);
	switch (property_id) {
		case GEE_ABSTRACT_MAP_READ_ONLY_VIEW_PROPERTY:
		g_value_take_object (value, gee_abstract_map_get_read_only_view (self));
		break;
		case GEE_ABSTRACT_MAP_K_TYPE:
		g_value_set_gtype (value, self->priv->k_type);
		break;
		case GEE_ABSTRACT_MAP_K_DUP_FUNC:
		g_value_set_pointer (value, self->priv->k_dup_func);
		break;
		case GEE_ABSTRACT_MAP_K_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->k_destroy_func);
		break;
		case GEE_ABSTRACT_MAP_V_TYPE:
		g_value_set_gtype (value, self->priv->v_type);
		break;
		case GEE_ABSTRACT_MAP_V_DUP_FUNC:
		g_value_set_pointer (value, self->priv->v_dup_func);
		break;
		case GEE_ABSTRACT_MAP_V_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->v_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_abstract_map_set_property (GObject * object,
                                     guint property_id,
                                     const GValue * value,
                                     GParamSpec * pspec)
{
	GeeAbstractMap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_MAP, GeeAbstractMap);
	switch (property_id) {
		case GEE_ABSTRACT_MAP_K_TYPE:
		self->priv->k_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_MAP_K_DUP_FUNC:
		self->priv->k_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_MAP_K_DESTROY_FUNC:
		self->priv->k_destroy_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_MAP_V_TYPE:
		self->priv->v_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_MAP_V_DUP_FUNC:
		self->priv->v_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_MAP_V_DESTROY_FUNC:
		self->priv->v_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

