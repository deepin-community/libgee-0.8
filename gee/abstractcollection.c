/* abstractcollection.c generated by valac 0.52.0, the Vala compiler
 * generated from abstractcollection.vala, do not modify */

/* abstractcollection.vala
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
 * 	Didier 'Ptitjes' Villevalois <ptitjes@free.fr>
 */

#include "gee.h"
#include <glib-object.h>
#include <glib.h>

enum  {
	GEE_ABSTRACT_COLLECTION_0_PROPERTY,
	GEE_ABSTRACT_COLLECTION_G_TYPE,
	GEE_ABSTRACT_COLLECTION_G_DUP_FUNC,
	GEE_ABSTRACT_COLLECTION_G_DESTROY_FUNC,
	GEE_ABSTRACT_COLLECTION_SIZE_PROPERTY,
	GEE_ABSTRACT_COLLECTION_READ_ONLY_PROPERTY,
	GEE_ABSTRACT_COLLECTION_READ_ONLY_VIEW_PROPERTY,
	GEE_ABSTRACT_COLLECTION_NUM_PROPERTIES
};
static GParamSpec* gee_abstract_collection_properties[GEE_ABSTRACT_COLLECTION_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define GEE_TYPE_READ_ONLY_COLLECTION (gee_read_only_collection_get_type ())
#define GEE_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollection))
#define GEE_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))
#define GEE_IS_READ_ONLY_COLLECTION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_IS_READ_ONLY_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_READ_ONLY_COLLECTION))
#define GEE_READ_ONLY_COLLECTION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_READ_ONLY_COLLECTION, GeeReadOnlyCollectionClass))

typedef struct _GeeReadOnlyCollection GeeReadOnlyCollection;
typedef struct _GeeReadOnlyCollectionClass GeeReadOnlyCollectionClass;

struct _GeeAbstractCollectionPrivate {
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GWeakRef _read_only_view;
};

static gint GeeAbstractCollection_private_offset;
static gpointer gee_abstract_collection_parent_class = NULL;
static GeeTraversableIface * gee_abstract_collection_gee_traversable_parent_iface = NULL;
static GeeIterableIface * gee_abstract_collection_gee_iterable_parent_iface = NULL;
static GeeCollectionIface * gee_abstract_collection_gee_collection_parent_iface = NULL;

 G_GNUC_INTERNAL void gee_abstract_collection_reserved0 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL void gee_abstract_collection_reserved1 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL void gee_abstract_collection_reserved2 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL void gee_abstract_collection_reserved3 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL void gee_abstract_collection_reserved4 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL void gee_abstract_collection_reserved5 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL void gee_abstract_collection_reserved6 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL void gee_abstract_collection_reserved7 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL void gee_abstract_collection_reserved8 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL void gee_abstract_collection_reserved9 (GeeAbstractCollection* self);
static gboolean gee_abstract_collection_real_contains (GeeAbstractCollection* self,
                                                gconstpointer item);
static gboolean gee_abstract_collection_real_add (GeeAbstractCollection* self,
                                           gconstpointer item);
static gboolean gee_abstract_collection_real_remove (GeeAbstractCollection* self,
                                              gconstpointer item);
static void gee_abstract_collection_real_clear (GeeAbstractCollection* self);
static GeeIterator* gee_abstract_collection_real_iterator (GeeAbstractCollection* self);
static gboolean gee_abstract_collection_real_foreach (GeeAbstractCollection* self,
                                               GeeForallFunc f,
                                               gpointer f_target);
static void gee_abstract_collection_real_reserved0 (GeeAbstractCollection* self);
static void gee_abstract_collection_real_reserved1 (GeeAbstractCollection* self);
static void gee_abstract_collection_real_reserved2 (GeeAbstractCollection* self);
static void gee_abstract_collection_real_reserved3 (GeeAbstractCollection* self);
static void gee_abstract_collection_real_reserved4 (GeeAbstractCollection* self);
static void gee_abstract_collection_real_reserved5 (GeeAbstractCollection* self);
static void gee_abstract_collection_real_reserved6 (GeeAbstractCollection* self);
static void gee_abstract_collection_real_reserved7 (GeeAbstractCollection* self);
static void gee_abstract_collection_real_reserved8 (GeeAbstractCollection* self);
static void gee_abstract_collection_real_reserved9 (GeeAbstractCollection* self);
 G_GNUC_INTERNAL GeeReadOnlyCollection* gee_read_only_collection_new (GType g_type,
                                                     GBoxedCopyFunc g_dup_func,
                                                     GDestroyNotify g_destroy_func,
                                                     GeeCollection* collection);
 G_GNUC_INTERNAL GeeReadOnlyCollection* gee_read_only_collection_construct (GType object_type,
                                                           GType g_type,
                                                           GBoxedCopyFunc g_dup_func,
                                                           GDestroyNotify g_destroy_func,
                                                           GeeCollection* collection);
 G_GNUC_INTERNAL GType gee_read_only_collection_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
static GObject * gee_abstract_collection_constructor (GType type,
                                               guint n_construct_properties,
                                               GObjectConstructParam * construct_properties);
static void gee_abstract_collection_finalize (GObject * obj);
static GType gee_abstract_collection_get_type_once (void);
static void _vala_gee_abstract_collection_get_property (GObject * object,
                                                 guint property_id,
                                                 GValue * value,
                                                 GParamSpec * pspec);
static void _vala_gee_abstract_collection_set_property (GObject * object,
                                                 guint property_id,
                                                 const GValue * value,
                                                 GParamSpec * pspec);

static inline gpointer
gee_abstract_collection_get_instance_private (GeeAbstractCollection* self)
{
	return G_STRUCT_MEMBER_P (self, GeeAbstractCollection_private_offset);
}

/**
 * {@inheritDoc}
 */
static gboolean
gee_abstract_collection_real_contains (GeeAbstractCollection* self,
                                       gconstpointer item)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_collection_contains'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
gee_abstract_collection_contains (GeeAbstractCollection* self,
                                  gconstpointer item)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->contains) {
		return _klass_->contains (self, item);
	}
	return FALSE;
}

/**
 * {@inheritDoc}
 */
static gboolean
gee_abstract_collection_real_add (GeeAbstractCollection* self,
                                  gconstpointer item)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_collection_add'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
gee_abstract_collection_add (GeeAbstractCollection* self,
                             gconstpointer item)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->add) {
		return _klass_->add (self, item);
	}
	return FALSE;
}

/**
 * {@inheritDoc}
 */
static gboolean
gee_abstract_collection_real_remove (GeeAbstractCollection* self,
                                     gconstpointer item)
{
	gboolean _tmp0_ = FALSE;
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_collection_remove'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return _tmp0_;
}

gboolean
gee_abstract_collection_remove (GeeAbstractCollection* self,
                                gconstpointer item)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->remove) {
		return _klass_->remove (self, item);
	}
	return FALSE;
}

/**
 * {@inheritDoc}
 */
static void
gee_abstract_collection_real_clear (GeeAbstractCollection* self)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_collection_clear'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return;
}

void
gee_abstract_collection_clear (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->clear) {
		_klass_->clear (self);
	}
}

/**
 * {@inheritDoc}
 */
static GeeIterator*
gee_abstract_collection_real_iterator (GeeAbstractCollection* self)
{
	g_critical ("Type `%s' does not implement abstract method `gee_abstract_collection_iterator'", g_type_name (G_TYPE_FROM_INSTANCE (self)));
	return NULL;
}

GeeIterator*
gee_abstract_collection_iterator (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->iterator) {
		return _klass_->iterator (self);
	}
	return NULL;
}

static gboolean
gee_abstract_collection_real_foreach (GeeAbstractCollection* self,
                                      GeeForallFunc f,
                                      gpointer f_target)
{
	GeeIterator* _tmp0_;
	GeeIterator* _tmp1_;
	gboolean _tmp2_;
	gboolean result = FALSE;
	_tmp0_ = gee_abstract_collection_iterator (self);
	_tmp1_ = _tmp0_;
	_tmp2_ = gee_traversable_foreach ((GeeTraversable*) _tmp1_, f, f_target);
	_g_object_unref0 (_tmp1_);
	result = _tmp2_;
	return result;
}

gboolean
gee_abstract_collection_foreach (GeeAbstractCollection* self,
                                 GeeForallFunc f,
                                 gpointer f_target)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->foreach) {
		return _klass_->foreach (self, f, f_target);
	}
	return FALSE;
}

static void
gee_abstract_collection_real_reserved0 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved0 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved0) {
		_klass_->reserved0 (self);
	}
}

static void
gee_abstract_collection_real_reserved1 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved1 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved1) {
		_klass_->reserved1 (self);
	}
}

static void
gee_abstract_collection_real_reserved2 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved2 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved2) {
		_klass_->reserved2 (self);
	}
}

static void
gee_abstract_collection_real_reserved3 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved3 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved3) {
		_klass_->reserved3 (self);
	}
}

static void
gee_abstract_collection_real_reserved4 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved4 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved4) {
		_klass_->reserved4 (self);
	}
}

static void
gee_abstract_collection_real_reserved5 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved5 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved5) {
		_klass_->reserved5 (self);
	}
}

static void
gee_abstract_collection_real_reserved6 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved6 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved6) {
		_klass_->reserved6 (self);
	}
}

static void
gee_abstract_collection_real_reserved7 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved7 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved7) {
		_klass_->reserved7 (self);
	}
}

static void
gee_abstract_collection_real_reserved8 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved8 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved8) {
		_klass_->reserved8 (self);
	}
}

static void
gee_abstract_collection_real_reserved9 (GeeAbstractCollection* self)
{
}

void
gee_abstract_collection_reserved9 (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->reserved9) {
		_klass_->reserved9 (self);
	}
}

GeeAbstractCollection*
gee_abstract_collection_construct (GType object_type,
                                   GType g_type,
                                   GBoxedCopyFunc g_dup_func,
                                   GDestroyNotify g_destroy_func)
{
	GeeAbstractCollection * self = NULL;
	self = (GeeAbstractCollection*) g_object_new (object_type, NULL);
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	return self;
}

gint
gee_abstract_collection_get_size (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, 0);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->get_size) {
		return _klass_->get_size (self);
	}
	return -1;
}

gboolean
gee_abstract_collection_get_read_only (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->get_read_only) {
		return _klass_->get_read_only (self);
	}
	return FALSE;
}

GeeCollection*
gee_abstract_collection_get_read_only_view (GeeAbstractCollection* self)
{
	GeeAbstractCollectionClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_ABSTRACT_COLLECTION_GET_CLASS (self);
	if (_klass_->get_read_only_view) {
		return _klass_->get_read_only_view (self);
	}
	return NULL;
}

static GeeCollection*
gee_abstract_collection_real_get_read_only_view (GeeAbstractCollection* base)
{
	GeeCollection* result;
	GeeAbstractCollection* self;
	GeeCollection* instance = NULL;
	GObject* _tmp0_;
	GeeCollection* _tmp1_;
	self = base;
	_tmp0_ = g_weak_ref_get (&self->priv->_read_only_view);
	instance = G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_COLLECTION, GeeCollection);
	_tmp1_ = instance;
	if (_tmp1_ == NULL) {
		GeeReadOnlyCollection* _tmp2_;
		GeeCollection* _tmp3_;
		_tmp2_ = gee_read_only_collection_new (self->priv->g_type, (GBoxedCopyFunc) self->priv->g_dup_func, (GDestroyNotify) self->priv->g_destroy_func, (GeeCollection*) self);
		_g_object_unref0 (instance);
		instance = (GeeCollection*) _tmp2_;
		_tmp3_ = instance;
		g_weak_ref_set (&self->priv->_read_only_view, (GObject*) _tmp3_);
	}
	result = instance;
	return result;
}

static GObject *
gee_abstract_collection_constructor (GType type,
                                     guint n_construct_properties,
                                     GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	GeeAbstractCollection * self;
	parent_class = G_OBJECT_CLASS (gee_abstract_collection_parent_class);
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollection);
	g_weak_ref_clear (&self->priv->_read_only_view);
	g_weak_ref_init (&self->priv->_read_only_view, NULL);
	return obj;
}

static void
gee_abstract_collection_class_init (GeeAbstractCollectionClass * klass,
                                    gpointer klass_data)
{
	gee_abstract_collection_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeAbstractCollection_private_offset);
	((GeeAbstractCollectionClass *) klass)->contains = (gboolean (*) (GeeAbstractCollection*, gconstpointer)) gee_abstract_collection_real_contains;
	((GeeAbstractCollectionClass *) klass)->add = (gboolean (*) (GeeAbstractCollection*, gconstpointer)) gee_abstract_collection_real_add;
	((GeeAbstractCollectionClass *) klass)->remove = (gboolean (*) (GeeAbstractCollection*, gconstpointer)) gee_abstract_collection_real_remove;
	((GeeAbstractCollectionClass *) klass)->clear = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_clear;
	((GeeAbstractCollectionClass *) klass)->iterator = (GeeIterator* (*) (GeeAbstractCollection*)) gee_abstract_collection_real_iterator;
	((GeeAbstractCollectionClass *) klass)->foreach = (gboolean (*) (GeeAbstractCollection*, GeeForallFunc, gpointer)) gee_abstract_collection_real_foreach;
	((GeeAbstractCollectionClass *) klass)->reserved0 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved0;
	((GeeAbstractCollectionClass *) klass)->reserved1 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved1;
	((GeeAbstractCollectionClass *) klass)->reserved2 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved2;
	((GeeAbstractCollectionClass *) klass)->reserved3 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved3;
	((GeeAbstractCollectionClass *) klass)->reserved4 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved4;
	((GeeAbstractCollectionClass *) klass)->reserved5 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved5;
	((GeeAbstractCollectionClass *) klass)->reserved6 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved6;
	((GeeAbstractCollectionClass *) klass)->reserved7 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved7;
	((GeeAbstractCollectionClass *) klass)->reserved8 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved8;
	((GeeAbstractCollectionClass *) klass)->reserved9 = (void (*) (GeeAbstractCollection*)) gee_abstract_collection_real_reserved9;
	GEE_ABSTRACT_COLLECTION_CLASS (klass)->get_read_only_view = gee_abstract_collection_real_get_read_only_view;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_abstract_collection_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_abstract_collection_set_property;
	G_OBJECT_CLASS (klass)->constructor = gee_abstract_collection_constructor;
	G_OBJECT_CLASS (klass)->finalize = gee_abstract_collection_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_COLLECTION_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_COLLECTION_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_COLLECTION_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_COLLECTION_SIZE_PROPERTY, gee_abstract_collection_properties[GEE_ABSTRACT_COLLECTION_SIZE_PROPERTY] = g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_COLLECTION_READ_ONLY_PROPERTY, gee_abstract_collection_properties[GEE_ABSTRACT_COLLECTION_READ_ONLY_PROPERTY] = g_param_spec_boolean ("read-only", "read-only", "read-only", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * {@inheritDoc}
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_ABSTRACT_COLLECTION_READ_ONLY_VIEW_PROPERTY, gee_abstract_collection_properties[GEE_ABSTRACT_COLLECTION_READ_ONLY_VIEW_PROPERTY] = g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_COLLECTION, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static GType
gee_abstract_collection_gee_traversable_get_g_type (GeeAbstractCollection* self)
{
	return self->priv->g_type;
}

static GBoxedCopyFunc
gee_abstract_collection_gee_traversable_get_g_dup_func (GeeAbstractCollection* self)
{
	return self->priv->g_dup_func;
}

static GDestroyNotify
gee_abstract_collection_gee_traversable_get_g_destroy_func (GeeAbstractCollection* self)
{
	return self->priv->g_destroy_func;
}

static void
gee_abstract_collection_gee_traversable_interface_init (GeeTraversableIface * iface,
                                                        gpointer iface_data)
{
	gee_abstract_collection_gee_traversable_parent_iface = g_type_interface_peek_parent (iface);
	iface->foreach = (gboolean (*) (GeeTraversable*, GeeForallFunc, gpointer)) gee_abstract_collection_foreach;
	iface->get_g_type = (GType (*) (GeeTraversable *)) gee_abstract_collection_gee_traversable_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeTraversable *)) gee_abstract_collection_gee_traversable_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeTraversable *)) gee_abstract_collection_gee_traversable_get_g_destroy_func;
}

static GType
gee_abstract_collection_gee_iterable_get_g_type (GeeAbstractCollection* self)
{
	return self->priv->g_type;
}

static GBoxedCopyFunc
gee_abstract_collection_gee_iterable_get_g_dup_func (GeeAbstractCollection* self)
{
	return self->priv->g_dup_func;
}

static GDestroyNotify
gee_abstract_collection_gee_iterable_get_g_destroy_func (GeeAbstractCollection* self)
{
	return self->priv->g_destroy_func;
}

static void
gee_abstract_collection_gee_iterable_interface_init (GeeIterableIface * iface,
                                                     gpointer iface_data)
{
	gee_abstract_collection_gee_iterable_parent_iface = g_type_interface_peek_parent (iface);
	iface->iterator = (GeeIterator* (*) (GeeIterable*)) gee_abstract_collection_iterator;
	iface->get_g_type = (GType (*) (GeeIterable *)) gee_abstract_collection_gee_iterable_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeIterable *)) gee_abstract_collection_gee_iterable_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeIterable *)) gee_abstract_collection_gee_iterable_get_g_destroy_func;
}

static GType
gee_abstract_collection_gee_collection_get_g_type (GeeAbstractCollection* self)
{
	return self->priv->g_type;
}

static GBoxedCopyFunc
gee_abstract_collection_gee_collection_get_g_dup_func (GeeAbstractCollection* self)
{
	return self->priv->g_dup_func;
}

static GDestroyNotify
gee_abstract_collection_gee_collection_get_g_destroy_func (GeeAbstractCollection* self)
{
	return self->priv->g_destroy_func;
}

static void
gee_abstract_collection_gee_collection_interface_init (GeeCollectionIface * iface,
                                                       gpointer iface_data)
{
	gee_abstract_collection_gee_collection_parent_iface = g_type_interface_peek_parent (iface);
	iface->contains = (gboolean (*) (GeeCollection*, gconstpointer)) gee_abstract_collection_contains;
	iface->add = (gboolean (*) (GeeCollection*, gconstpointer)) gee_abstract_collection_add;
	iface->remove = (gboolean (*) (GeeCollection*, gconstpointer)) gee_abstract_collection_remove;
	iface->clear = (void (*) (GeeCollection*)) gee_abstract_collection_clear;
	iface->get_g_type = (GType (*) (GeeCollection *)) gee_abstract_collection_gee_collection_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeCollection *)) gee_abstract_collection_gee_collection_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeCollection *)) gee_abstract_collection_gee_collection_get_g_destroy_func;
	iface->get_size = (gint (*) (GeeCollection *)) gee_abstract_collection_get_size;
	iface->get_read_only = (gboolean (*) (GeeCollection *)) gee_abstract_collection_get_read_only;
	iface->get_read_only_view = (GeeCollection* (*) (GeeCollection *)) gee_abstract_collection_get_read_only_view;
}

static void
gee_abstract_collection_instance_init (GeeAbstractCollection * self,
                                       gpointer klass)
{
	self->priv = gee_abstract_collection_get_instance_private (self);
}

static void
gee_abstract_collection_finalize (GObject * obj)
{
	GeeAbstractCollection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollection);
	g_weak_ref_clear (&self->priv->_read_only_view);
	G_OBJECT_CLASS (gee_abstract_collection_parent_class)->finalize (obj);
}

/**
 * Skeletal implementation of the {@link Collection} interface.
 *
 * Contains common code shared by all collection implementations.
 *
 * @see AbstractList
 * @see AbstractSet
 * @see AbstractMultiSet
 */
static GType
gee_abstract_collection_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeAbstractCollectionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_abstract_collection_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeAbstractCollection), 0, (GInstanceInitFunc) gee_abstract_collection_instance_init, NULL };
	static const GInterfaceInfo gee_traversable_info = { (GInterfaceInitFunc) gee_abstract_collection_gee_traversable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo gee_iterable_info = { (GInterfaceInitFunc) gee_abstract_collection_gee_iterable_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	static const GInterfaceInfo gee_collection_info = { (GInterfaceInitFunc) gee_abstract_collection_gee_collection_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType gee_abstract_collection_type_id;
	gee_abstract_collection_type_id = g_type_register_static (G_TYPE_OBJECT, "GeeAbstractCollection", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	g_type_add_interface_static (gee_abstract_collection_type_id, GEE_TYPE_TRAVERSABLE, &gee_traversable_info);
	g_type_add_interface_static (gee_abstract_collection_type_id, GEE_TYPE_ITERABLE, &gee_iterable_info);
	g_type_add_interface_static (gee_abstract_collection_type_id, GEE_TYPE_COLLECTION, &gee_collection_info);
	GeeAbstractCollection_private_offset = g_type_add_instance_private (gee_abstract_collection_type_id, sizeof (GeeAbstractCollectionPrivate));
	return gee_abstract_collection_type_id;
}

GType
gee_abstract_collection_get_type (void)
{
	static volatile gsize gee_abstract_collection_type_id__volatile = 0;
	if (g_once_init_enter (&gee_abstract_collection_type_id__volatile)) {
		GType gee_abstract_collection_type_id;
		gee_abstract_collection_type_id = gee_abstract_collection_get_type_once ();
		g_once_init_leave (&gee_abstract_collection_type_id__volatile, gee_abstract_collection_type_id);
	}
	return gee_abstract_collection_type_id__volatile;
}

static void
_vala_gee_abstract_collection_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec)
{
	GeeAbstractCollection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollection);
	switch (property_id) {
		case GEE_ABSTRACT_COLLECTION_READ_ONLY_VIEW_PROPERTY:
		g_value_take_object (value, gee_abstract_collection_get_read_only_view (self));
		break;
		case GEE_ABSTRACT_COLLECTION_G_TYPE:
		g_value_set_gtype (value, self->priv->g_type);
		break;
		case GEE_ABSTRACT_COLLECTION_G_DUP_FUNC:
		g_value_set_pointer (value, self->priv->g_dup_func);
		break;
		case GEE_ABSTRACT_COLLECTION_G_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->g_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_abstract_collection_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec)
{
	GeeAbstractCollection * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_ABSTRACT_COLLECTION, GeeAbstractCollection);
	switch (property_id) {
		case GEE_ABSTRACT_COLLECTION_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_ABSTRACT_COLLECTION_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_ABSTRACT_COLLECTION_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

