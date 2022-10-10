/* hashmultimap.c generated by valac 0.52.0, the Vala compiler
 * generated from hashmultimap.vala, do not modify */

/* hashmultimap.vala
 *
 * Copyright (C) 2009  Ali Sabil
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
 * 	Ali Sabil <ali.sabil@gmail.com>
 */

#include "gee.h"
#include <glib-object.h>
#include <glib.h>

#define GEE_FUNCTIONS_TYPE_HASH_DATA_FUNC_CLOSURE (gee_functions_hash_data_func_closure_get_type ())
#define GEE_FUNCTIONS_HASH_DATA_FUNC_CLOSURE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_FUNCTIONS_TYPE_HASH_DATA_FUNC_CLOSURE, GeeFunctionsHashDataFuncClosure))
#define GEE_FUNCTIONS_HASH_DATA_FUNC_CLOSURE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_FUNCTIONS_TYPE_HASH_DATA_FUNC_CLOSURE, GeeFunctionsHashDataFuncClosureClass))
#define GEE_FUNCTIONS_IS_HASH_DATA_FUNC_CLOSURE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_FUNCTIONS_TYPE_HASH_DATA_FUNC_CLOSURE))
#define GEE_FUNCTIONS_IS_HASH_DATA_FUNC_CLOSURE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_FUNCTIONS_TYPE_HASH_DATA_FUNC_CLOSURE))
#define GEE_FUNCTIONS_HASH_DATA_FUNC_CLOSURE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_FUNCTIONS_TYPE_HASH_DATA_FUNC_CLOSURE, GeeFunctionsHashDataFuncClosureClass))

typedef struct _GeeFunctionsHashDataFuncClosure GeeFunctionsHashDataFuncClosure;
typedef struct _GeeFunctionsHashDataFuncClosureClass GeeFunctionsHashDataFuncClosureClass;

#define GEE_FUNCTIONS_TYPE_EQUAL_DATA_FUNC_CLOSURE (gee_functions_equal_data_func_closure_get_type ())
#define GEE_FUNCTIONS_EQUAL_DATA_FUNC_CLOSURE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_FUNCTIONS_TYPE_EQUAL_DATA_FUNC_CLOSURE, GeeFunctionsEqualDataFuncClosure))
#define GEE_FUNCTIONS_EQUAL_DATA_FUNC_CLOSURE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_FUNCTIONS_TYPE_EQUAL_DATA_FUNC_CLOSURE, GeeFunctionsEqualDataFuncClosureClass))
#define GEE_FUNCTIONS_IS_EQUAL_DATA_FUNC_CLOSURE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_FUNCTIONS_TYPE_EQUAL_DATA_FUNC_CLOSURE))
#define GEE_FUNCTIONS_IS_EQUAL_DATA_FUNC_CLOSURE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_FUNCTIONS_TYPE_EQUAL_DATA_FUNC_CLOSURE))
#define GEE_FUNCTIONS_EQUAL_DATA_FUNC_CLOSURE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_FUNCTIONS_TYPE_EQUAL_DATA_FUNC_CLOSURE, GeeFunctionsEqualDataFuncClosureClass))

typedef struct _GeeFunctionsEqualDataFuncClosure GeeFunctionsEqualDataFuncClosure;
typedef struct _GeeFunctionsEqualDataFuncClosureClass GeeFunctionsEqualDataFuncClosureClass;
enum  {
	GEE_HASH_MULTI_MAP_0_PROPERTY,
	GEE_HASH_MULTI_MAP_K_TYPE,
	GEE_HASH_MULTI_MAP_K_DUP_FUNC,
	GEE_HASH_MULTI_MAP_K_DESTROY_FUNC,
	GEE_HASH_MULTI_MAP_V_TYPE,
	GEE_HASH_MULTI_MAP_V_DUP_FUNC,
	GEE_HASH_MULTI_MAP_V_DESTROY_FUNC,
	GEE_HASH_MULTI_MAP_NUM_PROPERTIES
};
static GParamSpec* gee_hash_multi_map_properties[GEE_HASH_MULTI_MAP_NUM_PROPERTIES];
#define _gee_functions_hash_data_func_closure_unref0(var) ((var == NULL) ? NULL : (var = (gee_functions_hash_data_func_closure_unref (var), NULL)))
#define _gee_functions_equal_data_func_closure_unref0(var) ((var == NULL) ? NULL : (var = (gee_functions_equal_data_func_closure_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _GeeFunctionsHashDataFuncClosurePrivate GeeFunctionsHashDataFuncClosurePrivate;
typedef struct _GeeFunctionsEqualDataFuncClosurePrivate GeeFunctionsEqualDataFuncClosurePrivate;

struct _GeeHashMultiMapPrivate {
	GType k_type;
	GBoxedCopyFunc k_dup_func;
	GDestroyNotify k_destroy_func;
	GType v_type;
	GBoxedCopyFunc v_dup_func;
	GDestroyNotify v_destroy_func;
	GeeFunctionsHashDataFuncClosure* _value_hash_func;
	GeeFunctionsEqualDataFuncClosure* _value_equal_func;
};

struct _GeeFunctionsHashDataFuncClosure {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GeeFunctionsHashDataFuncClosurePrivate * priv;
	GeeHashDataFunc func;
	gpointer func_target;
	GDestroyNotify func_target_destroy_notify;
};

struct _GeeFunctionsHashDataFuncClosureClass {
	GTypeClass parent_class;
	void (*finalize) (GeeFunctionsHashDataFuncClosure *self);
};

struct _GeeFunctionsEqualDataFuncClosure {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GeeFunctionsEqualDataFuncClosurePrivate * priv;
	GeeEqualDataFunc func;
	gpointer func_target;
	GDestroyNotify func_target_destroy_notify;
};

struct _GeeFunctionsEqualDataFuncClosureClass {
	GTypeClass parent_class;
	void (*finalize) (GeeFunctionsEqualDataFuncClosure *self);
};

static gint GeeHashMultiMap_private_offset;
static gpointer gee_hash_multi_map_parent_class = NULL;

 G_GNUC_INTERNAL gpointer gee_functions_hash_data_func_closure_ref (gpointer instance);
 G_GNUC_INTERNAL void gee_functions_hash_data_func_closure_unref (gpointer instance);
 G_GNUC_INTERNAL GParamSpec* gee_functions_param_spec_hash_data_func_closure (const gchar* name,
                                                             const gchar* nick,
                                                             const gchar* blurb,
                                                             GType object_type,
                                                             GParamFlags flags);
 G_GNUC_INTERNAL void gee_functions_value_set_hash_data_func_closure (GValue* value,
                                                     gpointer v_object) G_GNUC_UNUSED ;
 G_GNUC_INTERNAL void gee_functions_value_take_hash_data_func_closure (GValue* value,
                                                      gpointer v_object);
 G_GNUC_INTERNAL gpointer gee_functions_value_get_hash_data_func_closure (const GValue* value) G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GType gee_functions_hash_data_func_closure_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL gpointer gee_functions_equal_data_func_closure_ref (gpointer instance);
 G_GNUC_INTERNAL void gee_functions_equal_data_func_closure_unref (gpointer instance);
 G_GNUC_INTERNAL GParamSpec* gee_functions_param_spec_equal_data_func_closure (const gchar* name,
                                                              const gchar* nick,
                                                              const gchar* blurb,
                                                              GType object_type,
                                                              GParamFlags flags);
 G_GNUC_INTERNAL void gee_functions_value_set_equal_data_func_closure (GValue* value,
                                                      gpointer v_object) G_GNUC_UNUSED ;
 G_GNUC_INTERNAL void gee_functions_value_take_equal_data_func_closure (GValue* value,
                                                       gpointer v_object);
 G_GNUC_INTERNAL gpointer gee_functions_value_get_equal_data_func_closure (const GValue* value) G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GType gee_functions_equal_data_func_closure_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GeeFunctionsHashDataFuncClosure* gee_functions_hash_data_func_closure_new (GType g_type,
                                                                           GBoxedCopyFunc g_dup_func,
                                                                           GDestroyNotify g_destroy_func,
                                                                           GeeHashDataFunc func,
                                                                           gpointer func_target,
                                                                           GDestroyNotify func_target_destroy_notify);
 G_GNUC_INTERNAL GeeFunctionsHashDataFuncClosure* gee_functions_hash_data_func_closure_construct (GType object_type,
                                                                                 GType g_type,
                                                                                 GBoxedCopyFunc g_dup_func,
                                                                                 GDestroyNotify g_destroy_func,
                                                                                 GeeHashDataFunc func,
                                                                                 gpointer func_target,
                                                                                 GDestroyNotify func_target_destroy_notify);
 G_GNUC_INTERNAL GeeFunctionsEqualDataFuncClosure* gee_functions_equal_data_func_closure_new (GType g_type,
                                                                             GBoxedCopyFunc g_dup_func,
                                                                             GDestroyNotify g_destroy_func,
                                                                             GeeEqualDataFunc func,
                                                                             gpointer func_target,
                                                                             GDestroyNotify func_target_destroy_notify);
 G_GNUC_INTERNAL GeeFunctionsEqualDataFuncClosure* gee_functions_equal_data_func_closure_construct (GType object_type,
                                                                                   GType g_type,
                                                                                   GBoxedCopyFunc g_dup_func,
                                                                                   GDestroyNotify g_destroy_func,
                                                                                   GeeEqualDataFunc func,
                                                                                   gpointer func_target,
                                                                                   GDestroyNotify func_target_destroy_notify);
static GeeCollection* gee_hash_multi_map_real_create_value_storage (GeeAbstractMultiMap* base);
 G_GNUC_INTERNAL GeeHashSet* gee_hash_set_new_with_closures (GType g_type,
                                            GBoxedCopyFunc g_dup_func,
                                            GDestroyNotify g_destroy_func,
                                            GeeFunctionsHashDataFuncClosure* hash_func,
                                            GeeFunctionsEqualDataFuncClosure* equal_func);
 G_GNUC_INTERNAL GeeHashSet* gee_hash_set_construct_with_closures (GType object_type,
                                                  GType g_type,
                                                  GBoxedCopyFunc g_dup_func,
                                                  GDestroyNotify g_destroy_func,
                                                  GeeFunctionsHashDataFuncClosure* hash_func,
                                                  GeeFunctionsEqualDataFuncClosure* equal_func);
static GeeMultiSet* gee_hash_multi_map_real_create_multi_key_set (GeeAbstractMultiMap* base);
 G_GNUC_INTERNAL GeeFunctionsHashDataFuncClosure* gee_hash_map_get_key_hash_func_closure (GeeHashMap* self);
 G_GNUC_INTERNAL GeeFunctionsEqualDataFuncClosure* gee_hash_map_get_key_equal_func_closure (GeeHashMap* self);
 G_GNUC_INTERNAL GeeHashMultiSet* gee_hash_multi_set_new_with_closures (GType g_type,
                                                       GBoxedCopyFunc g_dup_func,
                                                       GDestroyNotify g_destroy_func,
                                                       GeeFunctionsHashDataFuncClosure* hash_func,
                                                       GeeFunctionsEqualDataFuncClosure* equal_func);
 G_GNUC_INTERNAL GeeHashMultiSet* gee_hash_multi_set_construct_with_closures (GType object_type,
                                                             GType g_type,
                                                             GBoxedCopyFunc g_dup_func,
                                                             GDestroyNotify g_destroy_func,
                                                             GeeFunctionsHashDataFuncClosure* hash_func,
                                                             GeeFunctionsEqualDataFuncClosure* equal_func);
static GeeEqualDataFunc gee_hash_multi_map_real_get_value_equal_func (GeeAbstractMultiMap* base,
                                                               gpointer* result_target,
                                                               GDestroyNotify* result_target_destroy_notify);
 G_GNUC_INTERNAL GeeEqualDataFunc gee_functions_equal_data_func_closure_clone_func (GeeFunctionsEqualDataFuncClosure* self,
                                                                   gpointer* result_target,
                                                                   GDestroyNotify* result_target_destroy_notify);
static void gee_hash_multi_map_set_value_hash_func (GeeHashMultiMap* self,
                                             GeeHashDataFunc value,
                                             gpointer value_target);
static void gee_hash_multi_map_set_value_equal_func (GeeHashMultiMap* self,
                                              GeeEqualDataFunc value,
                                              gpointer value_target);
static void gee_hash_multi_map_finalize (GObject * obj);
static GType gee_hash_multi_map_get_type_once (void);
static void _vala_gee_hash_multi_map_get_property (GObject * object,
                                            guint property_id,
                                            GValue * value,
                                            GParamSpec * pspec);
static void _vala_gee_hash_multi_map_set_property (GObject * object,
                                            guint property_id,
                                            const GValue * value,
                                            GParamSpec * pspec);

static inline gpointer
gee_hash_multi_map_get_instance_private (GeeHashMultiMap* self)
{
	return G_STRUCT_MEMBER_P (self, GeeHashMultiMap_private_offset);
}

/**
 * Constructs a new, empty hash multimap.
 *
 * If not provided, the functions parameters are requested to the
 * {@link Functions} function factory methods.
 *
 * @param key_hash_func an optional key hash function
 * @param key_equal_func an optional key equality testing function
 * @param value_hash_func an optional value hash function
 * @param value_equal_func an optional value equality testing function
 */
GeeHashMultiMap*
gee_hash_multi_map_construct (GType object_type,
                              GType k_type,
                              GBoxedCopyFunc k_dup_func,
                              GDestroyNotify k_destroy_func,
                              GType v_type,
                              GBoxedCopyFunc v_dup_func,
                              GDestroyNotify v_destroy_func,
                              GeeHashDataFunc key_hash_func,
                              gpointer key_hash_func_target,
                              GDestroyNotify key_hash_func_target_destroy_notify,
                              GeeEqualDataFunc key_equal_func,
                              gpointer key_equal_func_target,
                              GDestroyNotify key_equal_func_target_destroy_notify,
                              GeeHashDataFunc value_hash_func,
                              gpointer value_hash_func_target,
                              GDestroyNotify value_hash_func_target_destroy_notify,
                              GeeEqualDataFunc value_equal_func,
                              gpointer value_equal_func_target,
                              GDestroyNotify value_equal_func_target_destroy_notify)
{
	GeeHashMultiMap * self = NULL;
	GeeHashDataFunc _tmp0_;
	gpointer _tmp0__target;
	GDestroyNotify _tmp0__target_destroy_notify;
	GeeEqualDataFunc _tmp1_;
	gpointer _tmp1__target;
	GDestroyNotify _tmp1__target_destroy_notify;
	gpointer _tmp2_ = NULL;
	GDestroyNotify _tmp3_ = NULL;
	GeeEqualDataFunc _tmp4_;
	GeeHashMap* _tmp5_;
	GeeHashMap* _tmp6_;
	GeeHashDataFunc _tmp13_;
	gpointer _tmp13__target;
	GDestroyNotify _tmp13__target_destroy_notify;
	GeeFunctionsHashDataFuncClosure* _tmp14_;
	GeeEqualDataFunc _tmp15_;
	gpointer _tmp15__target;
	GDestroyNotify _tmp15__target_destroy_notify;
	GeeFunctionsEqualDataFuncClosure* _tmp16_;
	_tmp0_ = key_hash_func;
	_tmp0__target = key_hash_func_target;
	_tmp0__target_destroy_notify = key_hash_func_target_destroy_notify;
	key_hash_func = NULL;
	key_hash_func_target = NULL;
	key_hash_func_target_destroy_notify = NULL;
	_tmp1_ = key_equal_func;
	_tmp1__target = key_equal_func_target;
	_tmp1__target_destroy_notify = key_equal_func_target_destroy_notify;
	key_equal_func = NULL;
	key_equal_func_target = NULL;
	key_equal_func_target_destroy_notify = NULL;
	_tmp4_ = gee_functions_get_equal_func_for (GEE_TYPE_SET, &_tmp2_, &_tmp3_);
	_tmp5_ = gee_hash_map_new (k_type, (GBoxedCopyFunc) k_dup_func, (GDestroyNotify) k_destroy_func, GEE_TYPE_SET, (GBoxedCopyFunc) g_object_ref, (GDestroyNotify) g_object_unref, _tmp0_, _tmp0__target, _tmp0__target_destroy_notify, _tmp1_, _tmp1__target, _tmp1__target_destroy_notify, _tmp4_, _tmp2_, _tmp3_);
	_tmp6_ = _tmp5_;
	self = (GeeHashMultiMap*) gee_abstract_multi_map_construct (object_type, k_type, (GBoxedCopyFunc) k_dup_func, (GDestroyNotify) k_destroy_func, v_type, (GBoxedCopyFunc) v_dup_func, (GDestroyNotify) v_destroy_func, (GeeMap*) _tmp6_);
	self->priv->k_type = k_type;
	self->priv->k_dup_func = k_dup_func;
	self->priv->k_destroy_func = k_destroy_func;
	self->priv->v_type = v_type;
	self->priv->v_dup_func = v_dup_func;
	self->priv->v_destroy_func = v_destroy_func;
	_g_object_unref0 (_tmp6_);
	if (value_hash_func == NULL) {
		gpointer _tmp7_ = NULL;
		GDestroyNotify _tmp8_ = NULL;
		GeeHashDataFunc _tmp9_;
		_tmp9_ = gee_functions_get_hash_func_for (v_type, &_tmp7_, &_tmp8_);
		(value_hash_func_target_destroy_notify == NULL) ? NULL : (value_hash_func_target_destroy_notify (value_hash_func_target), NULL);
		value_hash_func = NULL;
		value_hash_func_target = NULL;
		value_hash_func_target_destroy_notify = NULL;
		value_hash_func = _tmp9_;
		value_hash_func_target = _tmp7_;
		value_hash_func_target_destroy_notify = _tmp8_;
	}
	if (value_equal_func == NULL) {
		gpointer _tmp10_ = NULL;
		GDestroyNotify _tmp11_ = NULL;
		GeeEqualDataFunc _tmp12_;
		_tmp12_ = gee_functions_get_equal_func_for (v_type, &_tmp10_, &_tmp11_);
		(value_equal_func_target_destroy_notify == NULL) ? NULL : (value_equal_func_target_destroy_notify (value_equal_func_target), NULL);
		value_equal_func = NULL;
		value_equal_func_target = NULL;
		value_equal_func_target_destroy_notify = NULL;
		value_equal_func = _tmp12_;
		value_equal_func_target = _tmp10_;
		value_equal_func_target_destroy_notify = _tmp11_;
	}
	_tmp13_ = value_hash_func;
	_tmp13__target = value_hash_func_target;
	_tmp13__target_destroy_notify = value_hash_func_target_destroy_notify;
	value_hash_func = NULL;
	value_hash_func_target = NULL;
	value_hash_func_target_destroy_notify = NULL;
	_tmp14_ = gee_functions_hash_data_func_closure_new (v_type, (GBoxedCopyFunc) v_dup_func, (GDestroyNotify) v_destroy_func, _tmp13_, _tmp13__target, _tmp13__target_destroy_notify);
	_gee_functions_hash_data_func_closure_unref0 (self->priv->_value_hash_func);
	self->priv->_value_hash_func = _tmp14_;
	_tmp15_ = value_equal_func;
	_tmp15__target = value_equal_func_target;
	_tmp15__target_destroy_notify = value_equal_func_target_destroy_notify;
	value_equal_func = NULL;
	value_equal_func_target = NULL;
	value_equal_func_target_destroy_notify = NULL;
	_tmp16_ = gee_functions_equal_data_func_closure_new (v_type, (GBoxedCopyFunc) v_dup_func, (GDestroyNotify) v_destroy_func, _tmp15_, _tmp15__target, _tmp15__target_destroy_notify);
	_gee_functions_equal_data_func_closure_unref0 (self->priv->_value_equal_func);
	self->priv->_value_equal_func = _tmp16_;
	(key_hash_func_target_destroy_notify == NULL) ? NULL : (key_hash_func_target_destroy_notify (key_hash_func_target), NULL);
	key_hash_func = NULL;
	key_hash_func_target = NULL;
	key_hash_func_target_destroy_notify = NULL;
	(key_equal_func_target_destroy_notify == NULL) ? NULL : (key_equal_func_target_destroy_notify (key_equal_func_target), NULL);
	key_equal_func = NULL;
	key_equal_func_target = NULL;
	key_equal_func_target_destroy_notify = NULL;
	(value_hash_func_target_destroy_notify == NULL) ? NULL : (value_hash_func_target_destroy_notify (value_hash_func_target), NULL);
	value_hash_func = NULL;
	value_hash_func_target = NULL;
	value_hash_func_target_destroy_notify = NULL;
	(value_equal_func_target_destroy_notify == NULL) ? NULL : (value_equal_func_target_destroy_notify (value_equal_func_target), NULL);
	value_equal_func = NULL;
	value_equal_func_target = NULL;
	value_equal_func_target_destroy_notify = NULL;
	return self;
}

GeeHashMultiMap*
gee_hash_multi_map_new (GType k_type,
                        GBoxedCopyFunc k_dup_func,
                        GDestroyNotify k_destroy_func,
                        GType v_type,
                        GBoxedCopyFunc v_dup_func,
                        GDestroyNotify v_destroy_func,
                        GeeHashDataFunc key_hash_func,
                        gpointer key_hash_func_target,
                        GDestroyNotify key_hash_func_target_destroy_notify,
                        GeeEqualDataFunc key_equal_func,
                        gpointer key_equal_func_target,
                        GDestroyNotify key_equal_func_target_destroy_notify,
                        GeeHashDataFunc value_hash_func,
                        gpointer value_hash_func_target,
                        GDestroyNotify value_hash_func_target_destroy_notify,
                        GeeEqualDataFunc value_equal_func,
                        gpointer value_equal_func_target,
                        GDestroyNotify value_equal_func_target_destroy_notify)
{
	return gee_hash_multi_map_construct (GEE_TYPE_HASH_MULTI_MAP, k_type, k_dup_func, k_destroy_func, v_type, v_dup_func, v_destroy_func, key_hash_func, key_hash_func_target, key_hash_func_target_destroy_notify, key_equal_func, key_equal_func_target, key_equal_func_target_destroy_notify, value_hash_func, value_hash_func_target, value_hash_func_target_destroy_notify, value_equal_func, value_equal_func_target, value_equal_func_target_destroy_notify);
}

static gpointer
_gee_functions_hash_data_func_closure_ref0 (gpointer self)
{
	return self ? gee_functions_hash_data_func_closure_ref (self) : NULL;
}

static gpointer
_gee_functions_equal_data_func_closure_ref0 (gpointer self)
{
	return self ? gee_functions_equal_data_func_closure_ref (self) : NULL;
}

static GeeCollection*
gee_hash_multi_map_real_create_value_storage (GeeAbstractMultiMap* base)
{
	GeeHashMultiMap * self;
	GeeFunctionsHashDataFuncClosure* _tmp0_;
	GeeFunctionsHashDataFuncClosure* _tmp1_;
	GeeFunctionsEqualDataFuncClosure* _tmp2_;
	GeeFunctionsEqualDataFuncClosure* _tmp3_;
	GeeHashSet* _tmp4_;
	GeeCollection* result = NULL;
	self = (GeeHashMultiMap*) base;
	_tmp0_ = self->priv->_value_hash_func;
	_tmp1_ = _gee_functions_hash_data_func_closure_ref0 (_tmp0_);
	_tmp2_ = self->priv->_value_equal_func;
	_tmp3_ = _gee_functions_equal_data_func_closure_ref0 (_tmp2_);
	_tmp4_ = gee_hash_set_new_with_closures (self->priv->v_type, (GBoxedCopyFunc) self->priv->v_dup_func, (GDestroyNotify) self->priv->v_destroy_func, _tmp1_, _tmp3_);
	result = (GeeCollection*) _tmp4_;
	return result;
}

static GeeMultiSet*
gee_hash_multi_map_real_create_multi_key_set (GeeAbstractMultiMap* base)
{
	GeeHashMultiMap * self;
	GeeMap* _tmp0_;
	GeeFunctionsHashDataFuncClosure* _tmp1_;
	GeeMap* _tmp2_;
	GeeFunctionsEqualDataFuncClosure* _tmp3_;
	GeeHashMultiSet* _tmp4_;
	GeeMultiSet* result = NULL;
	self = (GeeHashMultiMap*) base;
	_tmp0_ = ((GeeAbstractMultiMap*) self)->_storage_map;
	_tmp1_ = gee_hash_map_get_key_hash_func_closure (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_HASH_MAP, GeeHashMap));
	_tmp2_ = ((GeeAbstractMultiMap*) self)->_storage_map;
	_tmp3_ = gee_hash_map_get_key_equal_func_closure (G_TYPE_CHECK_INSTANCE_CAST (_tmp2_, GEE_TYPE_HASH_MAP, GeeHashMap));
	_tmp4_ = gee_hash_multi_set_new_with_closures (self->priv->k_type, (GBoxedCopyFunc) self->priv->k_dup_func, (GDestroyNotify) self->priv->k_destroy_func, _tmp1_, _tmp3_);
	result = (GeeMultiSet*) _tmp4_;
	return result;
}

static GeeEqualDataFunc
gee_hash_multi_map_real_get_value_equal_func (GeeAbstractMultiMap* base,
                                              gpointer* result_target,
                                              GDestroyNotify* result_target_destroy_notify)
{
	GeeHashMultiMap * self;
	GeeFunctionsEqualDataFuncClosure* _tmp0_;
	gpointer _tmp1_ = NULL;
	GDestroyNotify _tmp2_ = NULL;
	GeeEqualDataFunc _tmp3_;
	GeeEqualDataFunc _tmp4_;
	gpointer _tmp4__target;
	GDestroyNotify _tmp4__target_destroy_notify;
	GeeEqualDataFunc result = NULL;
	self = (GeeHashMultiMap*) base;
	_tmp0_ = self->priv->_value_equal_func;
	_tmp3_ = gee_functions_equal_data_func_closure_clone_func (_tmp0_, &_tmp1_, &_tmp2_);
	_tmp4_ = _tmp3_;
	_tmp4__target = _tmp1_;
	_tmp4__target_destroy_notify = _tmp2_;
	*result_target = _tmp4__target;
	*result_target_destroy_notify = _tmp4__target_destroy_notify;
	result = _tmp4_;
	return result;
}

GeeHashDataFunc
gee_hash_multi_map_get_key_hash_func (GeeHashMultiMap* self,
                                      gpointer* result_target)
{
	GeeHashDataFunc result;
	GeeMap* _tmp0_;
	GeeHashDataFunc _tmp1_ = NULL;
	gpointer _tmp1__target = NULL;
	GeeHashDataFunc _tmp2_;
	gpointer _tmp2__target;
	GeeHashDataFunc _tmp3_;
	gpointer _tmp3__target;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = ((GeeAbstractMultiMap*) self)->_storage_map;
	_tmp1_ = gee_hash_map_get_key_hash_func (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_HASH_MAP, GeeHashMap), &_tmp1__target);
	_tmp2_ = _tmp1_;
	_tmp2__target = _tmp1__target;
	_tmp3_ = _tmp2_;
	_tmp3__target = _tmp2__target;
	*result_target = _tmp3__target;
	result = _tmp3_;
	return result;
}

GeeEqualDataFunc
gee_hash_multi_map_get_key_equal_func (GeeHashMultiMap* self,
                                       gpointer* result_target)
{
	GeeEqualDataFunc result;
	GeeMap* _tmp0_;
	GeeEqualDataFunc _tmp1_ = NULL;
	gpointer _tmp1__target = NULL;
	GeeEqualDataFunc _tmp2_;
	gpointer _tmp2__target;
	GeeEqualDataFunc _tmp3_;
	gpointer _tmp3__target;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = ((GeeAbstractMultiMap*) self)->_storage_map;
	_tmp1_ = gee_hash_map_get_key_equal_func (G_TYPE_CHECK_INSTANCE_CAST (_tmp0_, GEE_TYPE_HASH_MAP, GeeHashMap), &_tmp1__target);
	_tmp2_ = _tmp1_;
	_tmp2__target = _tmp1__target;
	_tmp3_ = _tmp2_;
	_tmp3__target = _tmp2__target;
	*result_target = _tmp3__target;
	result = _tmp3_;
	return result;
}

GeeHashDataFunc
gee_hash_multi_map_get_value_hash_func (GeeHashMultiMap* self,
                                        gpointer* result_target)
{
	GeeHashDataFunc result;
	GeeFunctionsHashDataFuncClosure* _tmp0_;
	GeeHashDataFunc _tmp1_;
	gpointer _tmp1__target;
	GeeHashDataFunc _tmp2_;
	gpointer _tmp2__target;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_value_hash_func;
	_tmp1_ = _tmp0_->func;
	_tmp1__target = _tmp0_->func_target;
	_tmp2_ = _tmp1_;
	_tmp2__target = _tmp1__target;
	*result_target = _tmp2__target;
	result = _tmp2_;
	return result;
}

static void
gee_hash_multi_map_set_value_hash_func (GeeHashMultiMap* self,
                                        GeeHashDataFunc value,
                                        gpointer value_target)
{
	g_return_if_fail (self != NULL);
}

GeeEqualDataFunc
gee_hash_multi_map_get_value_equal_func (GeeHashMultiMap* self,
                                         gpointer* result_target)
{
	GeeEqualDataFunc result;
	GeeFunctionsEqualDataFuncClosure* _tmp0_;
	GeeEqualDataFunc _tmp1_;
	gpointer _tmp1__target;
	GeeEqualDataFunc _tmp2_;
	gpointer _tmp2__target;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_value_equal_func;
	_tmp1_ = _tmp0_->func;
	_tmp1__target = _tmp0_->func_target;
	_tmp2_ = _tmp1_;
	_tmp2__target = _tmp1__target;
	*result_target = _tmp2__target;
	result = _tmp2_;
	return result;
}

static void
gee_hash_multi_map_set_value_equal_func (GeeHashMultiMap* self,
                                         GeeEqualDataFunc value,
                                         gpointer value_target)
{
	g_return_if_fail (self != NULL);
}

static void
gee_hash_multi_map_class_init (GeeHashMultiMapClass * klass,
                               gpointer klass_data)
{
	gee_hash_multi_map_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeHashMultiMap_private_offset);
	((GeeAbstractMultiMapClass *) klass)->create_value_storage = (GeeCollection* (*) (GeeAbstractMultiMap*)) gee_hash_multi_map_real_create_value_storage;
	((GeeAbstractMultiMapClass *) klass)->create_multi_key_set = (GeeMultiSet* (*) (GeeAbstractMultiMap*)) gee_hash_multi_map_real_create_multi_key_set;
	((GeeAbstractMultiMapClass *) klass)->get_value_equal_func = (GeeEqualDataFunc (*) (GeeAbstractMultiMap*, gpointer*, GDestroyNotify*)) gee_hash_multi_map_real_get_value_equal_func;
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_hash_multi_map_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_hash_multi_map_set_property;
	G_OBJECT_CLASS (klass)->finalize = gee_hash_multi_map_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_HASH_MULTI_MAP_K_TYPE, g_param_spec_gtype ("k-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_HASH_MULTI_MAP_K_DUP_FUNC, g_param_spec_pointer ("k-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_HASH_MULTI_MAP_K_DESTROY_FUNC, g_param_spec_pointer ("k-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_HASH_MULTI_MAP_V_TYPE, g_param_spec_gtype ("v-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_HASH_MULTI_MAP_V_DUP_FUNC, g_param_spec_pointer ("v-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_HASH_MULTI_MAP_V_DESTROY_FUNC, g_param_spec_pointer ("v-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
}

static void
gee_hash_multi_map_instance_init (GeeHashMultiMap * self,
                                  gpointer klass)
{
	self->priv = gee_hash_multi_map_get_instance_private (self);
}

static void
gee_hash_multi_map_finalize (GObject * obj)
{
	GeeHashMultiMap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_HASH_MULTI_MAP, GeeHashMultiMap);
	_gee_functions_hash_data_func_closure_unref0 (self->priv->_value_hash_func);
	_gee_functions_equal_data_func_closure_unref0 (self->priv->_value_equal_func);
	G_OBJECT_CLASS (gee_hash_multi_map_parent_class)->finalize (obj);
}

/**
 * Hash table implementation of the {@link MultiMap} interface.
 */
static GType
gee_hash_multi_map_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeHashMultiMapClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_hash_multi_map_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeHashMultiMap), 0, (GInstanceInitFunc) gee_hash_multi_map_instance_init, NULL };
	GType gee_hash_multi_map_type_id;
	gee_hash_multi_map_type_id = g_type_register_static (GEE_TYPE_ABSTRACT_MULTI_MAP, "GeeHashMultiMap", &g_define_type_info, 0);
	GeeHashMultiMap_private_offset = g_type_add_instance_private (gee_hash_multi_map_type_id, sizeof (GeeHashMultiMapPrivate));
	return gee_hash_multi_map_type_id;
}

GType
gee_hash_multi_map_get_type (void)
{
	static volatile gsize gee_hash_multi_map_type_id__volatile = 0;
	if (g_once_init_enter (&gee_hash_multi_map_type_id__volatile)) {
		GType gee_hash_multi_map_type_id;
		gee_hash_multi_map_type_id = gee_hash_multi_map_get_type_once ();
		g_once_init_leave (&gee_hash_multi_map_type_id__volatile, gee_hash_multi_map_type_id);
	}
	return gee_hash_multi_map_type_id__volatile;
}

static void
_vala_gee_hash_multi_map_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec)
{
	GeeHashMultiMap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_HASH_MULTI_MAP, GeeHashMultiMap);
	switch (property_id) {
		case GEE_HASH_MULTI_MAP_K_TYPE:
		g_value_set_gtype (value, self->priv->k_type);
		break;
		case GEE_HASH_MULTI_MAP_K_DUP_FUNC:
		g_value_set_pointer (value, self->priv->k_dup_func);
		break;
		case GEE_HASH_MULTI_MAP_K_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->k_destroy_func);
		break;
		case GEE_HASH_MULTI_MAP_V_TYPE:
		g_value_set_gtype (value, self->priv->v_type);
		break;
		case GEE_HASH_MULTI_MAP_V_DUP_FUNC:
		g_value_set_pointer (value, self->priv->v_dup_func);
		break;
		case GEE_HASH_MULTI_MAP_V_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->v_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_hash_multi_map_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec)
{
	GeeHashMultiMap * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_HASH_MULTI_MAP, GeeHashMultiMap);
	switch (property_id) {
		case GEE_HASH_MULTI_MAP_K_TYPE:
		self->priv->k_type = g_value_get_gtype (value);
		break;
		case GEE_HASH_MULTI_MAP_K_DUP_FUNC:
		self->priv->k_dup_func = g_value_get_pointer (value);
		break;
		case GEE_HASH_MULTI_MAP_K_DESTROY_FUNC:
		self->priv->k_destroy_func = g_value_get_pointer (value);
		break;
		case GEE_HASH_MULTI_MAP_V_TYPE:
		self->priv->v_type = g_value_get_gtype (value);
		break;
		case GEE_HASH_MULTI_MAP_V_DUP_FUNC:
		self->priv->v_dup_func = g_value_get_pointer (value);
		break;
		case GEE_HASH_MULTI_MAP_V_DESTROY_FUNC:
		self->priv->v_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

