/* lightmapfuture.c generated by valac 0.52.0, the Vala compiler
 * generated from lightmapfuture.vala, do not modify */

/* lightmapfuture.vala
 *
 * Copyright (C) 2013  Maciej Piechotka
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

#include <glib-object.h>
#include "gee.h"
#include <glib.h>
#include <gio/gio.h>

#define GEE_TYPE_LIGHT_MAP_FUTURE (gee_light_map_future_get_type ())
#define GEE_LIGHT_MAP_FUTURE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_LIGHT_MAP_FUTURE, GeeLightMapFuture))
#define GEE_LIGHT_MAP_FUTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_LIGHT_MAP_FUTURE, GeeLightMapFutureClass))
#define GEE_IS_LIGHT_MAP_FUTURE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_LIGHT_MAP_FUTURE))
#define GEE_IS_LIGHT_MAP_FUTURE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_LIGHT_MAP_FUTURE))
#define GEE_LIGHT_MAP_FUTURE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_LIGHT_MAP_FUTURE, GeeLightMapFutureClass))

typedef struct _GeeLightMapFuture GeeLightMapFuture;
typedef struct _GeeLightMapFutureClass GeeLightMapFutureClass;
typedef struct _GeeLightMapFuturePrivate GeeLightMapFuturePrivate;
enum  {
	GEE_LIGHT_MAP_FUTURE_0_PROPERTY,
	GEE_LIGHT_MAP_FUTURE_A_TYPE,
	GEE_LIGHT_MAP_FUTURE_A_DUP_FUNC,
	GEE_LIGHT_MAP_FUTURE_A_DESTROY_FUNC,
	GEE_LIGHT_MAP_FUTURE_G_TYPE,
	GEE_LIGHT_MAP_FUTURE_G_DUP_FUNC,
	GEE_LIGHT_MAP_FUTURE_G_DESTROY_FUNC,
	GEE_LIGHT_MAP_FUTURE_READY_PROPERTY,
	GEE_LIGHT_MAP_FUTURE_EXCEPTION_PROPERTY,
	GEE_LIGHT_MAP_FUTURE_NUM_PROPERTIES
};
static GParamSpec* gee_light_map_future_properties[GEE_LIGHT_MAP_FUTURE_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _GeeLightMapFutureWaitAsyncData GeeLightMapFutureWaitAsyncData;

struct _GeeLightMapFuture {
	GObject parent_instance;
	GeeLightMapFuturePrivate * priv;
};

struct _GeeLightMapFutureClass {
	GObjectClass parent_class;
};

struct _GeeLightMapFuturePrivate {
	GType a_type;
	GBoxedCopyFunc a_dup_func;
	GDestroyNotify a_destroy_func;
	GType g_type;
	GBoxedCopyFunc g_dup_func;
	GDestroyNotify g_destroy_func;
	GeeFuture* _base;
	GeeFutureLightMapFunc _func;
	gpointer _func_target;
	GDestroyNotify _func_target_destroy_notify;
};

struct _GeeLightMapFutureWaitAsyncData {
	int _state_;
	GObject* _source_object_;
	GAsyncResult* _res_;
	GTask* _async_result;
	GeeLightMapFuture* self;
	gconstpointer result;
	gconstpointer arg;
	GeeFuture* _tmp0_;
	gconstpointer _tmp1_;
	GeeFutureLightMapFunc _tmp2_;
	gpointer _tmp2__target;
	gconstpointer _tmp3_;
	GError* _inner_error0_;
};

static gint GeeLightMapFuture_private_offset;
static gpointer gee_light_map_future_parent_class = NULL;
static GeeFutureIface * gee_light_map_future_gee_future_parent_iface = NULL;

 G_GNUC_INTERNAL GType gee_light_map_future_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
 G_GNUC_INTERNAL GeeLightMapFuture* gee_light_map_future_new (GType a_type,
                                             GBoxedCopyFunc a_dup_func,
                                             GDestroyNotify a_destroy_func,
                                             GType g_type,
                                             GBoxedCopyFunc g_dup_func,
                                             GDestroyNotify g_destroy_func,
                                             GeeFuture* base_future,
                                             GeeFutureLightMapFunc func,
                                             gpointer func_target,
                                             GDestroyNotify func_target_destroy_notify);
 G_GNUC_INTERNAL GeeLightMapFuture* gee_light_map_future_construct (GType object_type,
                                                   GType a_type,
                                                   GBoxedCopyFunc a_dup_func,
                                                   GDestroyNotify a_destroy_func,
                                                   GType g_type,
                                                   GBoxedCopyFunc g_dup_func,
                                                   GDestroyNotify g_destroy_func,
                                                   GeeFuture* base_future,
                                                   GeeFutureLightMapFunc func,
                                                   gpointer func_target,
                                                   GDestroyNotify func_target_destroy_notify);
static gconstpointer gee_light_map_future_real_wait (GeeFuture* base,
                                              GError** error);
static gboolean gee_light_map_future_real_wait_until (GeeFuture* base,
                                               gint64 end_time,
                                               gconstpointer* value,
                                               GError** error);
static void gee_light_map_future_real_wait_async_data_free (gpointer _data);
static void gee_light_map_future_real_wait_async (GeeFuture* base,
                                           GAsyncReadyCallback _callback_,
                                           gpointer _user_data_);
static gboolean gee_light_map_future_real_wait_async_co (GeeLightMapFutureWaitAsyncData* _data_);
static void gee_light_map_future_wait_async_ready (GObject* source_object,
                                            GAsyncResult* _res_,
                                            gpointer _user_data_);
static void gee_light_map_future_finalize (GObject * obj);
static GType gee_light_map_future_get_type_once (void);
static void _vala_gee_light_map_future_get_property (GObject * object,
                                              guint property_id,
                                              GValue * value,
                                              GParamSpec * pspec);
static void _vala_gee_light_map_future_set_property (GObject * object,
                                              guint property_id,
                                              const GValue * value,
                                              GParamSpec * pspec);

static inline gpointer
gee_light_map_future_get_instance_private (GeeLightMapFuture* self)
{
	return G_STRUCT_MEMBER_P (self, GeeLightMapFuture_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

 G_GNUC_INTERNAL GeeLightMapFuture*
gee_light_map_future_construct (GType object_type,
                                GType a_type,
                                GBoxedCopyFunc a_dup_func,
                                GDestroyNotify a_destroy_func,
                                GType g_type,
                                GBoxedCopyFunc g_dup_func,
                                GDestroyNotify g_destroy_func,
                                GeeFuture* base_future,
                                GeeFutureLightMapFunc func,
                                gpointer func_target,
                                GDestroyNotify func_target_destroy_notify)
{
	GeeLightMapFuture * self = NULL;
	GeeFuture* _tmp0_;
	GeeFutureLightMapFunc _tmp1_;
	gpointer _tmp1__target;
	GDestroyNotify _tmp1__target_destroy_notify;
	g_return_val_if_fail (base_future != NULL, NULL);
	self = (GeeLightMapFuture*) g_object_new (object_type, NULL);
	self->priv->a_type = a_type;
	self->priv->a_dup_func = a_dup_func;
	self->priv->a_destroy_func = a_destroy_func;
	self->priv->g_type = g_type;
	self->priv->g_dup_func = g_dup_func;
	self->priv->g_destroy_func = g_destroy_func;
	_tmp0_ = _g_object_ref0 (base_future);
	_g_object_unref0 (self->priv->_base);
	self->priv->_base = _tmp0_;
	_tmp1_ = func;
	_tmp1__target = func_target;
	_tmp1__target_destroy_notify = func_target_destroy_notify;
	func = NULL;
	func_target = NULL;
	func_target_destroy_notify = NULL;
	(self->priv->_func_target_destroy_notify == NULL) ? NULL : (self->priv->_func_target_destroy_notify (self->priv->_func_target), NULL);
	self->priv->_func = NULL;
	self->priv->_func_target = NULL;
	self->priv->_func_target_destroy_notify = NULL;
	self->priv->_func = _tmp1_;
	self->priv->_func_target = _tmp1__target;
	self->priv->_func_target_destroy_notify = _tmp1__target_destroy_notify;
	(func_target_destroy_notify == NULL) ? NULL : (func_target_destroy_notify (func_target), NULL);
	func = NULL;
	func_target = NULL;
	func_target_destroy_notify = NULL;
	return self;
}

 G_GNUC_INTERNAL GeeLightMapFuture*
gee_light_map_future_new (GType a_type,
                          GBoxedCopyFunc a_dup_func,
                          GDestroyNotify a_destroy_func,
                          GType g_type,
                          GBoxedCopyFunc g_dup_func,
                          GDestroyNotify g_destroy_func,
                          GeeFuture* base_future,
                          GeeFutureLightMapFunc func,
                          gpointer func_target,
                          GDestroyNotify func_target_destroy_notify)
{
	return gee_light_map_future_construct (GEE_TYPE_LIGHT_MAP_FUTURE, a_type, a_dup_func, a_destroy_func, g_type, g_dup_func, g_destroy_func, base_future, func, func_target, func_target_destroy_notify);
}

static gconstpointer
gee_light_map_future_real_wait (GeeFuture* base,
                                GError** error)
{
	GeeLightMapFuture * self;
	gconstpointer _tmp0_ = NULL;
	GeeFuture* _tmp1_;
	gconstpointer _tmp2_;
	GeeFutureLightMapFunc _tmp3_;
	gpointer _tmp3__target;
	gconstpointer _tmp4_;
	GError* _inner_error0_ = NULL;
	gconstpointer result = NULL;
	self = (GeeLightMapFuture*) base;
	_tmp1_ = self->priv->_base;
	_tmp2_ = gee_future_wait (_tmp1_, &_inner_error0_);
	_tmp0_ = _tmp2_;
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		if (_inner_error0_->domain == GEE_FUTURE_ERROR) {
			g_propagate_error (error, _inner_error0_);
			return NULL;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return NULL;
		}
	}
	_tmp3_ = self->priv->_func;
	_tmp3__target = self->priv->_func_target;
	_tmp4_ = _tmp3_ (_tmp0_, _tmp3__target);
	result = _tmp4_;
	return result;
}

static gboolean
gee_light_map_future_real_wait_until (GeeFuture* base,
                                      gint64 end_time,
                                      gconstpointer* value,
                                      GError** error)
{
	GeeLightMapFuture * self;
	gconstpointer _vala_value = NULL;
	gconstpointer arg = NULL;
	gboolean _result_ = FALSE;
	gboolean _tmp0_ = FALSE;
	GeeFuture* _tmp1_;
	gconstpointer _tmp2_ = NULL;
	gboolean _tmp3_;
	GError* _inner_error0_ = NULL;
	gboolean result = FALSE;
	self = (GeeLightMapFuture*) base;
	_vala_value = NULL;
	_tmp1_ = self->priv->_base;
	_tmp3_ = gee_future_wait_until (_tmp1_, end_time, &_tmp2_, &_inner_error0_);
	arg = _tmp2_;
	_tmp0_ = _tmp3_;
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
		if (_inner_error0_->domain == GEE_FUTURE_ERROR) {
			gboolean _tmp4_ = FALSE;
			g_propagate_error (error, _inner_error0_);
			return _tmp4_;
		} else {
			gboolean _tmp5_ = FALSE;
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
			g_clear_error (&_inner_error0_);
			return _tmp5_;
		}
	}
	_result_ = _tmp0_;
	if (_result_) {
		GeeFutureLightMapFunc _tmp6_;
		gpointer _tmp6__target;
		gconstpointer _tmp7_;
		_tmp6_ = self->priv->_func;
		_tmp6__target = self->priv->_func_target;
		_tmp7_ = _tmp6_ (arg, _tmp6__target);
		_vala_value = _tmp7_;
	}
	result = _result_;
	if (value) {
		*value = _vala_value;
	}
	return result;
}

static void
gee_light_map_future_real_wait_async_data_free (gpointer _data)
{
	GeeLightMapFutureWaitAsyncData* _data_;
	_data_ = _data;
	_g_object_unref0 (_data_->self);
	g_slice_free (GeeLightMapFutureWaitAsyncData, _data_);
}

static void
gee_light_map_future_real_wait_async (GeeFuture* base,
                                      GAsyncReadyCallback _callback_,
                                      gpointer _user_data_)
{
	GeeLightMapFuture * self;
	GeeLightMapFutureWaitAsyncData* _data_;
	GeeLightMapFuture* _tmp0_;
	self = (GeeLightMapFuture*) base;
	_data_ = g_slice_new0 (GeeLightMapFutureWaitAsyncData);
	_data_->_async_result = g_task_new (G_OBJECT (self), NULL, _callback_, _user_data_);
	g_task_set_task_data (_data_->_async_result, _data_, gee_light_map_future_real_wait_async_data_free);
	_tmp0_ = _g_object_ref0 (self);
	_data_->self = _tmp0_;
	gee_light_map_future_real_wait_async_co (_data_);
}

static gconstpointer
gee_light_map_future_wait_finish (GeeFuture* base,
                                  GAsyncResult* _res_,
                                  GError** error)
{
	gconstpointer result;
	GeeLightMapFutureWaitAsyncData* _data_;
	_data_ = g_task_propagate_pointer (G_TASK (_res_), error);
	if (NULL == _data_) {
		return NULL;
	}
	result = _data_->result;
	_data_->result = NULL;
	return result;
}

static void
gee_light_map_future_wait_async_ready (GObject* source_object,
                                       GAsyncResult* _res_,
                                       gpointer _user_data_)
{
	GeeLightMapFutureWaitAsyncData* _data_;
	_data_ = _user_data_;
	_data_->_source_object_ = source_object;
	_data_->_res_ = _res_;
	gee_light_map_future_real_wait_async_co (_data_);
}

static gboolean
gee_light_map_future_real_wait_async_co (GeeLightMapFutureWaitAsyncData* _data_)
{
	switch (_data_->_state_) {
		case 0:
		goto _state_0;
		case 1:
		goto _state_1;
		default:
		g_assert_not_reached ();
	}
	_state_0:
	_data_->_tmp0_ = _data_->self->priv->_base;
	_data_->_state_ = 1;
	gee_future_wait_async (_data_->_tmp0_, gee_light_map_future_wait_async_ready, _data_);
	return FALSE;
	_state_1:
	_data_->_tmp1_ = gee_future_wait_finish (_data_->_tmp0_, _data_->_res_, &_data_->_inner_error0_);
	_data_->arg = _data_->_tmp1_;
	if (G_UNLIKELY (_data_->_inner_error0_ != NULL)) {
		if (_data_->_inner_error0_->domain == GEE_FUTURE_ERROR) {
			g_task_return_error (_data_->_async_result, _data_->_inner_error0_);
			g_object_unref (_data_->_async_result);
			return FALSE;
		} else {
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _data_->_inner_error0_->message, g_quark_to_string (_data_->_inner_error0_->domain), _data_->_inner_error0_->code);
			g_clear_error (&_data_->_inner_error0_);
			g_object_unref (_data_->_async_result);
			return FALSE;
		}
	}
	_data_->_tmp2_ = _data_->self->priv->_func;
	_data_->_tmp2__target = _data_->self->priv->_func_target;
	_data_->_tmp3_ = _data_->_tmp2_ (_data_->arg, _data_->_tmp2__target);
	_data_->result = _data_->_tmp3_;
	g_task_return_pointer (_data_->_async_result, _data_, NULL);
	if (_data_->_state_ != 0) {
		while (!g_task_get_completed (_data_->_async_result)) {
			g_main_context_iteration (g_task_get_context (_data_->_async_result), TRUE);
		}
	}
	g_object_unref (_data_->_async_result);
	return FALSE;
}

static gboolean
gee_light_map_future_real_get_ready (GeeFuture* base)
{
	gboolean result;
	GeeLightMapFuture* self;
	GeeFuture* _tmp0_;
	gboolean _tmp1_;
	gboolean _tmp2_;
	self = (GeeLightMapFuture*) base;
	_tmp0_ = self->priv->_base;
	_tmp1_ = gee_future_get_ready (_tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}

static GError*
gee_light_map_future_real_get_exception (GeeFuture* base)
{
	GError* result;
	GeeLightMapFuture* self;
	GeeFuture* _tmp0_;
	GError* _tmp1_;
	GError* _tmp2_;
	self = (GeeLightMapFuture*) base;
	_tmp0_ = self->priv->_base;
	_tmp1_ = gee_future_get_exception (_tmp0_);
	_tmp2_ = _tmp1_;
	result = _tmp2_;
	return result;
}

static void
gee_light_map_future_class_init (GeeLightMapFutureClass * klass,
                                 gpointer klass_data)
{
	gee_light_map_future_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeLightMapFuture_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_light_map_future_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_light_map_future_set_property;
	G_OBJECT_CLASS (klass)->finalize = gee_light_map_future_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_LIGHT_MAP_FUTURE_A_TYPE, g_param_spec_gtype ("a-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_LIGHT_MAP_FUTURE_A_DUP_FUNC, g_param_spec_pointer ("a-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_LIGHT_MAP_FUTURE_A_DESTROY_FUNC, g_param_spec_pointer ("a-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_LIGHT_MAP_FUTURE_G_TYPE, g_param_spec_gtype ("g-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_LIGHT_MAP_FUTURE_G_DUP_FUNC, g_param_spec_pointer ("g-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_LIGHT_MAP_FUTURE_G_DESTROY_FUNC, g_param_spec_pointer ("g-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_LIGHT_MAP_FUTURE_READY_PROPERTY, gee_light_map_future_properties[GEE_LIGHT_MAP_FUTURE_READY_PROPERTY] = g_param_spec_boolean ("ready", "ready", "ready", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_LIGHT_MAP_FUTURE_EXCEPTION_PROPERTY, gee_light_map_future_properties[GEE_LIGHT_MAP_FUTURE_EXCEPTION_PROPERTY] = g_param_spec_pointer ("exception", "exception", "exception", G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static GType
gee_light_map_future_gee_future_get_g_type (GeeLightMapFuture* self)
{
	return self->priv->a_type;
}

static GBoxedCopyFunc
gee_light_map_future_gee_future_get_g_dup_func (GeeLightMapFuture* self)
{
	return self->priv->a_dup_func;
}

static GDestroyNotify
gee_light_map_future_gee_future_get_g_destroy_func (GeeLightMapFuture* self)
{
	return self->priv->a_destroy_func;
}

static void
gee_light_map_future_gee_future_interface_init (GeeFutureIface * iface,
                                                gpointer iface_data)
{
	gee_light_map_future_gee_future_parent_iface = g_type_interface_peek_parent (iface);
	iface->wait = (gconstpointer (*) (GeeFuture*, GError**)) gee_light_map_future_real_wait;
	iface->wait_until = (gboolean (*) (GeeFuture*, gint64, gconstpointer*, GError**)) gee_light_map_future_real_wait_until;
	iface->wait_async = (void (*) (GeeFuture*, GAsyncReadyCallback, gpointer)) gee_light_map_future_real_wait_async;
	iface->wait_finish = (gconstpointer (*) (GeeFuture*, GAsyncResult*, GError**)) gee_light_map_future_wait_finish;
	iface->get_g_type = (GType (*) (GeeFuture *)) gee_light_map_future_gee_future_get_g_type;
	iface->get_g_dup_func = (GBoxedCopyFunc (*) (GeeFuture *)) gee_light_map_future_gee_future_get_g_dup_func;
	iface->get_g_destroy_func = (GDestroyNotify (*) (GeeFuture *)) gee_light_map_future_gee_future_get_g_destroy_func;
	iface->get_ready = gee_light_map_future_real_get_ready;
	iface->get_exception = gee_light_map_future_real_get_exception;
}

static void
gee_light_map_future_instance_init (GeeLightMapFuture * self,
                                    gpointer klass)
{
	self->priv = gee_light_map_future_get_instance_private (self);
}

static void
gee_light_map_future_finalize (GObject * obj)
{
	GeeLightMapFuture * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_LIGHT_MAP_FUTURE, GeeLightMapFuture);
	_g_object_unref0 (self->priv->_base);
	(self->priv->_func_target_destroy_notify == NULL) ? NULL : (self->priv->_func_target_destroy_notify (self->priv->_func_target), NULL);
	self->priv->_func = NULL;
	self->priv->_func_target = NULL;
	self->priv->_func_target_destroy_notify = NULL;
	G_OBJECT_CLASS (gee_light_map_future_parent_class)->finalize (obj);
}

static GType
gee_light_map_future_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeLightMapFutureClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_light_map_future_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeLightMapFuture), 0, (GInstanceInitFunc) gee_light_map_future_instance_init, NULL };
	static const GInterfaceInfo gee_future_info = { (GInterfaceInitFunc) gee_light_map_future_gee_future_interface_init, (GInterfaceFinalizeFunc) NULL, NULL};
	GType gee_light_map_future_type_id;
	gee_light_map_future_type_id = g_type_register_static (G_TYPE_OBJECT, "GeeLightMapFuture", &g_define_type_info, 0);
	g_type_add_interface_static (gee_light_map_future_type_id, GEE_TYPE_FUTURE, &gee_future_info);
	GeeLightMapFuture_private_offset = g_type_add_instance_private (gee_light_map_future_type_id, sizeof (GeeLightMapFuturePrivate));
	return gee_light_map_future_type_id;
}

 G_GNUC_INTERNAL GType
gee_light_map_future_get_type (void)
{
	static volatile gsize gee_light_map_future_type_id__volatile = 0;
	if (g_once_init_enter (&gee_light_map_future_type_id__volatile)) {
		GType gee_light_map_future_type_id;
		gee_light_map_future_type_id = gee_light_map_future_get_type_once ();
		g_once_init_leave (&gee_light_map_future_type_id__volatile, gee_light_map_future_type_id);
	}
	return gee_light_map_future_type_id__volatile;
}

static void
_vala_gee_light_map_future_get_property (GObject * object,
                                         guint property_id,
                                         GValue * value,
                                         GParamSpec * pspec)
{
	GeeLightMapFuture * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_LIGHT_MAP_FUTURE, GeeLightMapFuture);
	switch (property_id) {
		case GEE_LIGHT_MAP_FUTURE_READY_PROPERTY:
		g_value_set_boolean (value, gee_future_get_ready ((GeeFuture*) self));
		break;
		case GEE_LIGHT_MAP_FUTURE_EXCEPTION_PROPERTY:
		g_value_set_pointer (value, gee_future_get_exception ((GeeFuture*) self));
		break;
		case GEE_LIGHT_MAP_FUTURE_A_TYPE:
		g_value_set_gtype (value, self->priv->a_type);
		break;
		case GEE_LIGHT_MAP_FUTURE_A_DUP_FUNC:
		g_value_set_pointer (value, self->priv->a_dup_func);
		break;
		case GEE_LIGHT_MAP_FUTURE_A_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->a_destroy_func);
		break;
		case GEE_LIGHT_MAP_FUTURE_G_TYPE:
		g_value_set_gtype (value, self->priv->g_type);
		break;
		case GEE_LIGHT_MAP_FUTURE_G_DUP_FUNC:
		g_value_set_pointer (value, self->priv->g_dup_func);
		break;
		case GEE_LIGHT_MAP_FUTURE_G_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->g_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_light_map_future_set_property (GObject * object,
                                         guint property_id,
                                         const GValue * value,
                                         GParamSpec * pspec)
{
	GeeLightMapFuture * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_TYPE_LIGHT_MAP_FUTURE, GeeLightMapFuture);
	switch (property_id) {
		case GEE_LIGHT_MAP_FUTURE_A_TYPE:
		self->priv->a_type = g_value_get_gtype (value);
		break;
		case GEE_LIGHT_MAP_FUTURE_A_DUP_FUNC:
		self->priv->a_dup_func = g_value_get_pointer (value);
		break;
		case GEE_LIGHT_MAP_FUTURE_A_DESTROY_FUNC:
		self->priv->a_destroy_func = g_value_get_pointer (value);
		break;
		case GEE_LIGHT_MAP_FUTURE_G_TYPE:
		self->priv->g_type = g_value_get_gtype (value);
		break;
		case GEE_LIGHT_MAP_FUTURE_G_DUP_FUNC:
		self->priv->g_dup_func = g_value_get_pointer (value);
		break;
		case GEE_LIGHT_MAP_FUTURE_G_DESTROY_FUNC:
		self->priv->g_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

