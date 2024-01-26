/* testcase.c generated by valac 0.56.3, the Vala compiler
 * generated from testcase.vala, do not modify */

/* testcase.vala
 *
 * Copyright (C) 2009 Julien Peeters
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
 * 	Julien Peeters <contact@julienpeeters.fr>
 */

#include <glib-object.h>
#include <glib.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>

#if !defined(VALA_EXTERN)
#if defined(_MSC_VER)
#define VALA_EXTERN __declspec(dllexport) extern
#elif __GNUC__ >= 4
#define VALA_EXTERN __attribute__((visibility("default"))) extern
#else
#define VALA_EXTERN extern
#endif
#endif

#define GEE_TYPE_TEST_CASE (gee_test_case_get_type ())
#define GEE_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_TEST_CASE, GeeTestCase))
#define GEE_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_TEST_CASE, GeeTestCaseClass))
#define GEE_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_TEST_CASE))
#define GEE_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_TEST_CASE))
#define GEE_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_TEST_CASE, GeeTestCaseClass))

typedef struct _GeeTestCase GeeTestCase;
typedef struct _GeeTestCaseClass GeeTestCaseClass;
typedef struct _GeeTestCasePrivate GeeTestCasePrivate;

#define GEE_TEST_CASE_TYPE_ADAPTOR (gee_test_case_adaptor_get_type ())
#define GEE_TEST_CASE_ADAPTOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TEST_CASE_TYPE_ADAPTOR, GeeTestCaseAdaptor))
#define GEE_TEST_CASE_ADAPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TEST_CASE_TYPE_ADAPTOR, GeeTestCaseAdaptorClass))
#define GEE_TEST_CASE_IS_ADAPTOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TEST_CASE_TYPE_ADAPTOR))
#define GEE_TEST_CASE_IS_ADAPTOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TEST_CASE_TYPE_ADAPTOR))
#define GEE_TEST_CASE_ADAPTOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TEST_CASE_TYPE_ADAPTOR, GeeTestCaseAdaptorClass))

typedef struct _GeeTestCaseAdaptor GeeTestCaseAdaptor;
typedef struct _GeeTestCaseAdaptorClass GeeTestCaseAdaptorClass;
enum  {
	GEE_TEST_CASE_0_PROPERTY,
	GEE_TEST_CASE_NUM_PROPERTIES
};
static GParamSpec* gee_test_case_properties[GEE_TEST_CASE_NUM_PROPERTIES];
typedef void (*GeeTestCaseTestMethod) (gpointer user_data);
#define _gee_test_case_adaptor_unref0(var) ((var == NULL) ? NULL : (var = (gee_test_case_adaptor_unref (var), NULL)))
typedef struct _GeeTestCaseAdaptorPrivate GeeTestCaseAdaptorPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
typedef struct _GeeTestCaseParamSpecAdaptor GeeTestCaseParamSpecAdaptor;

struct _GeeTestCase {
	GObject parent_instance;
	GeeTestCasePrivate * priv;
};

struct _GeeTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (GeeTestCase* self);
	void (*tear_down) (GeeTestCase* self);
};

struct _GeeTestCasePrivate {
	GTestSuite* suite;
	GeeTestCaseAdaptor** adaptors;
	gint adaptors_length1;
	gint _adaptors_size_;
};

struct _GeeTestCaseAdaptor {
	GTypeInstance parent_instance;
	volatile int ref_count;
	GeeTestCaseAdaptorPrivate * priv;
};

struct _GeeTestCaseAdaptorClass {
	GTypeClass parent_class;
	void (*finalize) (GeeTestCaseAdaptor *self);
};

struct _GeeTestCaseAdaptorPrivate {
	gchar* _name;
	GeeTestCaseTestMethod test;
	gpointer test_target;
	GDestroyNotify test_target_destroy_notify;
	GeeTestCase* test_case;
};

struct _GeeTestCaseParamSpecAdaptor {
	GParamSpec parent_instance;
};

static gint GeeTestCase_private_offset;
static gpointer gee_test_case_parent_class = NULL;
static gint GeeTestCaseAdaptor_private_offset;
static gpointer gee_test_case_adaptor_parent_class = NULL;

VALA_EXTERN GType gee_test_case_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GeeTestCase, g_object_unref)
static gpointer gee_test_case_adaptor_ref (gpointer instance);
static void gee_test_case_adaptor_unref (gpointer instance);
static GParamSpec* gee_test_case_param_spec_adaptor (const gchar* name,
                                              const gchar* nick,
                                              const gchar* blurb,
                                              GType object_type,
                                              GParamFlags flags) G_GNUC_UNUSED ;
static void gee_test_case_value_set_adaptor (GValue* value,
                                      gpointer v_object) G_GNUC_UNUSED ;
static void gee_test_case_value_take_adaptor (GValue* value,
                                       gpointer v_object) G_GNUC_UNUSED ;
static gpointer gee_test_case_value_get_adaptor (const GValue* value) G_GNUC_UNUSED ;
static GType gee_test_case_adaptor_get_type (void) G_GNUC_CONST  G_GNUC_UNUSED ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GeeTestCaseAdaptor, gee_test_case_adaptor_unref)
VALA_EXTERN void gee_test_case_set_up (GeeTestCase* self);
VALA_EXTERN void gee_test_case_tear_down (GeeTestCase* self);
VALA_EXTERN GeeTestCase* gee_test_case_construct (GType object_type,
                                      const gchar* name);
VALA_EXTERN void gee_test_case_add_test (GeeTestCase* self,
                             const gchar* name,
                             GeeTestCaseTestMethod test,
                             gpointer test_target,
                             GDestroyNotify test_target_destroy_notify);
static GeeTestCaseAdaptor* gee_test_case_adaptor_new (const gchar* name,
                                               GeeTestCaseTestMethod test,
                                               gpointer test_target,
                                               GDestroyNotify test_target_destroy_notify,
                                               GeeTestCase* test_case);
static GeeTestCaseAdaptor* gee_test_case_adaptor_construct (GType object_type,
                                                     const gchar* name,
                                                     GeeTestCaseTestMethod test,
                                                     gpointer test_target,
                                                     GDestroyNotify test_target_destroy_notify,
                                                     GeeTestCase* test_case);
static void _vala_array_add1 (GeeTestCaseAdaptor** * array,
                       gint* length,
                       gint* size,
                       GeeTestCaseAdaptor* value);
static const gchar* gee_test_case_adaptor_get_name (GeeTestCaseAdaptor* self);
static void gee_test_case_adaptor_set_up (GeeTestCaseAdaptor* self,
                                   void* fixture);
static void _gee_test_case_adaptor_set_up_gtest_fixture_func (void* fixture,
                                                       gpointer self);
static void gee_test_case_adaptor_run (GeeTestCaseAdaptor* self,
                                void* fixture);
static void _gee_test_case_adaptor_run_gtest_fixture_func (void* fixture,
                                                    gpointer self);
static void gee_test_case_adaptor_tear_down (GeeTestCaseAdaptor* self,
                                      void* fixture);
static void _gee_test_case_adaptor_tear_down_gtest_fixture_func (void* fixture,
                                                          gpointer self);
static void gee_test_case_real_set_up (GeeTestCase* self);
static void gee_test_case_real_tear_down (GeeTestCase* self);
VALA_EXTERN GTestSuite* gee_test_case_get_suite (GeeTestCase* self);
static void gee_test_case_adaptor_set_name (GeeTestCaseAdaptor* self,
                                     const gchar* value);
static void gee_test_case_adaptor_finalize (GeeTestCaseAdaptor * obj);
static GType gee_test_case_adaptor_get_type_once (void);
static void gee_test_case_finalize (GObject * obj);
static GType gee_test_case_get_type_once (void);
static void _vala_array_destroy (gpointer array,
                          gssize array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gssize array_length,
                       GDestroyNotify destroy_func);

static inline gpointer
gee_test_case_get_instance_private (GeeTestCase* self)
{
	return G_STRUCT_MEMBER_P (self, GeeTestCase_private_offset);
}

GeeTestCase*
gee_test_case_construct (GType object_type,
                         const gchar* name)
{
	GeeTestCase * self = NULL;
	GTestSuite* _tmp0_;
	g_return_val_if_fail (name != NULL, NULL);
	self = (GeeTestCase*) g_object_new (object_type, NULL);
	_tmp0_ = g_test_create_suite (name);
	self->priv->suite = _tmp0_;
	return self;
}

static gpointer
_gee_test_case_adaptor_ref0 (gpointer self)
{
	return self ? gee_test_case_adaptor_ref (self) : NULL;
}

static void
_vala_array_add1 (GeeTestCaseAdaptor** * array,
                  gint* length,
                  gint* size,
                  GeeTestCaseAdaptor* value)
{
	if ((*length) == (*size)) {
		*size = (*size) ? (2 * (*size)) : 4;
		*array = g_renew (GeeTestCaseAdaptor*, *array, (*size) + 1);
	}
	(*array)[(*length)++] = value;
	(*array)[*length] = NULL;
}

static void
_gee_test_case_adaptor_set_up_gtest_fixture_func (void* fixture,
                                                  gpointer self)
{
	gee_test_case_adaptor_set_up ((GeeTestCaseAdaptor*) self, fixture);
}

static void
_gee_test_case_adaptor_run_gtest_fixture_func (void* fixture,
                                               gpointer self)
{
	gee_test_case_adaptor_run ((GeeTestCaseAdaptor*) self, fixture);
}

static void
_gee_test_case_adaptor_tear_down_gtest_fixture_func (void* fixture,
                                                     gpointer self)
{
	gee_test_case_adaptor_tear_down ((GeeTestCaseAdaptor*) self, fixture);
}

void
gee_test_case_add_test (GeeTestCase* self,
                        const gchar* name,
                        GeeTestCaseTestMethod test,
                        gpointer test_target,
                        GDestroyNotify test_target_destroy_notify)
{
	GeeTestCaseAdaptor* adaptor = NULL;
	GeeTestCaseTestMethod _tmp0_;
	gpointer _tmp0__target;
	GDestroyNotify _tmp0__target_destroy_notify;
	GeeTestCaseAdaptor* _tmp1_;
	GeeTestCaseAdaptor* _tmp2_;
	GTestSuite* _tmp3_;
	const gchar* _tmp4_;
	const gchar* _tmp5_;
	GTestCase* _tmp6_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (name != NULL);
	_tmp0_ = test;
	_tmp0__target = test_target;
	_tmp0__target_destroy_notify = test_target_destroy_notify;
	test = NULL;
	test_target = NULL;
	test_target_destroy_notify = NULL;
	_tmp1_ = gee_test_case_adaptor_new (name, _tmp0_, _tmp0__target, _tmp0__target_destroy_notify, self);
	adaptor = _tmp1_;
	_tmp2_ = _gee_test_case_adaptor_ref0 (adaptor);
	_vala_array_add1 (&self->priv->adaptors, &self->priv->adaptors_length1, &self->priv->_adaptors_size_, _tmp2_);
	_tmp3_ = self->priv->suite;
	_tmp4_ = gee_test_case_adaptor_get_name (adaptor);
	_tmp5_ = _tmp4_;
	_tmp6_ = g_test_create_case (_tmp5_, (gsize) 0, adaptor, _gee_test_case_adaptor_set_up_gtest_fixture_func, _gee_test_case_adaptor_run_gtest_fixture_func, _gee_test_case_adaptor_tear_down_gtest_fixture_func);
	g_test_suite_add (_tmp3_, _tmp6_);
	_gee_test_case_adaptor_unref0 (adaptor);
	(test_target_destroy_notify == NULL) ? NULL : (test_target_destroy_notify (test_target), NULL);
	test = NULL;
	test_target = NULL;
	test_target_destroy_notify = NULL;
}

static void
gee_test_case_real_set_up (GeeTestCase* self)
{
}

void
gee_test_case_set_up (GeeTestCase* self)
{
	GeeTestCaseClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_TEST_CASE_GET_CLASS (self);
	if (_klass_->set_up) {
		_klass_->set_up (self);
	}
}

static void
gee_test_case_real_tear_down (GeeTestCase* self)
{
}

void
gee_test_case_tear_down (GeeTestCase* self)
{
	GeeTestCaseClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_TEST_CASE_GET_CLASS (self);
	if (_klass_->tear_down) {
		_klass_->tear_down (self);
	}
}

GTestSuite*
gee_test_case_get_suite (GeeTestCase* self)
{
	GTestSuite* _tmp0_;
	GTestSuite* result;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->suite;
	result = _tmp0_;
	return result;
}

static inline gpointer
gee_test_case_adaptor_get_instance_private (GeeTestCaseAdaptor* self)
{
	return G_STRUCT_MEMBER_P (self, GeeTestCaseAdaptor_private_offset);
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

static GeeTestCaseAdaptor*
gee_test_case_adaptor_construct (GType object_type,
                                 const gchar* name,
                                 GeeTestCaseTestMethod test,
                                 gpointer test_target,
                                 GDestroyNotify test_target_destroy_notify,
                                 GeeTestCase* test_case)
{
	GeeTestCaseAdaptor* self = NULL;
	GeeTestCaseTestMethod _tmp0_;
	gpointer _tmp0__target;
	GDestroyNotify _tmp0__target_destroy_notify;
	GeeTestCase* _tmp1_;
	g_return_val_if_fail (name != NULL, NULL);
	g_return_val_if_fail (test_case != NULL, NULL);
	self = (GeeTestCaseAdaptor*) g_type_create_instance (object_type);
	gee_test_case_adaptor_set_name (self, name);
	_tmp0_ = test;
	_tmp0__target = test_target;
	_tmp0__target_destroy_notify = test_target_destroy_notify;
	test = NULL;
	test_target = NULL;
	test_target_destroy_notify = NULL;
	(self->priv->test_target_destroy_notify == NULL) ? NULL : (self->priv->test_target_destroy_notify (self->priv->test_target), NULL);
	self->priv->test = NULL;
	self->priv->test_target = NULL;
	self->priv->test_target_destroy_notify = NULL;
	self->priv->test = _tmp0_;
	self->priv->test_target = _tmp0__target;
	self->priv->test_target_destroy_notify = _tmp0__target_destroy_notify;
	_tmp1_ = _g_object_ref0 (test_case);
	_g_object_unref0 (self->priv->test_case);
	self->priv->test_case = _tmp1_;
	(test_target_destroy_notify == NULL) ? NULL : (test_target_destroy_notify (test_target), NULL);
	test = NULL;
	test_target = NULL;
	test_target_destroy_notify = NULL;
	return self;
}

static GeeTestCaseAdaptor*
gee_test_case_adaptor_new (const gchar* name,
                           GeeTestCaseTestMethod test,
                           gpointer test_target,
                           GDestroyNotify test_target_destroy_notify,
                           GeeTestCase* test_case)
{
	return gee_test_case_adaptor_construct (GEE_TEST_CASE_TYPE_ADAPTOR, name, test, test_target, test_target_destroy_notify, test_case);
}

static void
gee_test_case_adaptor_set_up (GeeTestCaseAdaptor* self,
                              void* fixture)
{
	GeeTestCase* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->test_case;
	gee_test_case_set_up (_tmp0_);
}

static void
gee_test_case_adaptor_run (GeeTestCaseAdaptor* self,
                           void* fixture)
{
	GeeTestCaseTestMethod _tmp0_;
	gpointer _tmp0__target;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->test;
	_tmp0__target = self->priv->test_target;
	_tmp0_ (_tmp0__target);
}

static void
gee_test_case_adaptor_tear_down (GeeTestCaseAdaptor* self,
                                 void* fixture)
{
	GeeTestCase* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = self->priv->test_case;
	gee_test_case_tear_down (_tmp0_);
}

static const gchar*
gee_test_case_adaptor_get_name (GeeTestCaseAdaptor* self)
{
	const gchar* result;
	const gchar* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}

static void
gee_test_case_adaptor_set_name (GeeTestCaseAdaptor* self,
                                const gchar* value)
{
	gchar* _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp0_;
}

static void
gee_test_case_value_adaptor_init (GValue* value)
{
	value->data[0].v_pointer = NULL;
}

static void
gee_test_case_value_adaptor_free_value (GValue* value)
{
	if (value->data[0].v_pointer) {
		gee_test_case_adaptor_unref (value->data[0].v_pointer);
	}
}

static void
gee_test_case_value_adaptor_copy_value (const GValue* src_value,
                                        GValue* dest_value)
{
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = gee_test_case_adaptor_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}

static gpointer
gee_test_case_value_adaptor_peek_pointer (const GValue* value)
{
	return value->data[0].v_pointer;
}

static gchar*
gee_test_case_value_adaptor_collect_value (GValue* value,
                                           guint n_collect_values,
                                           GTypeCValue* collect_values,
                                           guint collect_flags)
{
	if (collect_values[0].v_pointer) {
		GeeTestCaseAdaptor * object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = gee_test_case_adaptor_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}

static gchar*
gee_test_case_value_adaptor_lcopy_value (const GValue* value,
                                         guint n_collect_values,
                                         GTypeCValue* collect_values,
                                         guint collect_flags)
{
	GeeTestCaseAdaptor ** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = gee_test_case_adaptor_ref (value->data[0].v_pointer);
	}
	return NULL;
}

static GParamSpec*
gee_test_case_param_spec_adaptor (const gchar* name,
                                  const gchar* nick,
                                  const gchar* blurb,
                                  GType object_type,
                                  GParamFlags flags)
{
	GeeTestCaseParamSpecAdaptor* spec;
	g_return_val_if_fail (g_type_is_a (object_type, GEE_TEST_CASE_TYPE_ADAPTOR), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}

static gpointer
gee_test_case_value_get_adaptor (const GValue* value)
{
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, GEE_TEST_CASE_TYPE_ADAPTOR), NULL);
	return value->data[0].v_pointer;
}

static void
gee_test_case_value_set_adaptor (GValue* value,
                                 gpointer v_object)
{
	GeeTestCaseAdaptor * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, GEE_TEST_CASE_TYPE_ADAPTOR));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, GEE_TEST_CASE_TYPE_ADAPTOR));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		gee_test_case_adaptor_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		gee_test_case_adaptor_unref (old);
	}
}

static void
gee_test_case_value_take_adaptor (GValue* value,
                                  gpointer v_object)
{
	GeeTestCaseAdaptor * old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, GEE_TEST_CASE_TYPE_ADAPTOR));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, GEE_TEST_CASE_TYPE_ADAPTOR));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		gee_test_case_adaptor_unref (old);
	}
}

static void
gee_test_case_adaptor_class_init (GeeTestCaseAdaptorClass * klass,
                                  gpointer klass_data)
{
	gee_test_case_adaptor_parent_class = g_type_class_peek_parent (klass);
	((GeeTestCaseAdaptorClass *) klass)->finalize = gee_test_case_adaptor_finalize;
	g_type_class_adjust_private_offset (klass, &GeeTestCaseAdaptor_private_offset);
}

static void
gee_test_case_adaptor_instance_init (GeeTestCaseAdaptor * self,
                                     gpointer klass)
{
	self->priv = gee_test_case_adaptor_get_instance_private (self);
	self->ref_count = 1;
}

static void
gee_test_case_adaptor_finalize (GeeTestCaseAdaptor * obj)
{
	GeeTestCaseAdaptor * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TEST_CASE_TYPE_ADAPTOR, GeeTestCaseAdaptor);
	g_signal_handlers_destroy (self);
	_g_free0 (self->priv->_name);
	(self->priv->test_target_destroy_notify == NULL) ? NULL : (self->priv->test_target_destroy_notify (self->priv->test_target), NULL);
	self->priv->test = NULL;
	self->priv->test_target = NULL;
	self->priv->test_target_destroy_notify = NULL;
	_g_object_unref0 (self->priv->test_case);
}

static GType
gee_test_case_adaptor_get_type_once (void)
{
	static const GTypeValueTable g_define_type_value_table = { gee_test_case_value_adaptor_init, gee_test_case_value_adaptor_free_value, gee_test_case_value_adaptor_copy_value, gee_test_case_value_adaptor_peek_pointer, "p", gee_test_case_value_adaptor_collect_value, "p", gee_test_case_value_adaptor_lcopy_value };
	static const GTypeInfo g_define_type_info = { sizeof (GeeTestCaseAdaptorClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_test_case_adaptor_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeTestCaseAdaptor), 0, (GInstanceInitFunc) gee_test_case_adaptor_instance_init, &g_define_type_value_table };
	static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
	GType gee_test_case_adaptor_type_id;
	gee_test_case_adaptor_type_id = g_type_register_fundamental (g_type_fundamental_next (), "GeeTestCaseAdaptor", &g_define_type_info, &g_define_type_fundamental_info, 0);
	GeeTestCaseAdaptor_private_offset = g_type_add_instance_private (gee_test_case_adaptor_type_id, sizeof (GeeTestCaseAdaptorPrivate));
	return gee_test_case_adaptor_type_id;
}

static GType
gee_test_case_adaptor_get_type (void)
{
	static volatile gsize gee_test_case_adaptor_type_id__once = 0;
	if (g_once_init_enter (&gee_test_case_adaptor_type_id__once)) {
		GType gee_test_case_adaptor_type_id;
		gee_test_case_adaptor_type_id = gee_test_case_adaptor_get_type_once ();
		g_once_init_leave (&gee_test_case_adaptor_type_id__once, gee_test_case_adaptor_type_id);
	}
	return gee_test_case_adaptor_type_id__once;
}

static gpointer
gee_test_case_adaptor_ref (gpointer instance)
{
	GeeTestCaseAdaptor * self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}

static void
gee_test_case_adaptor_unref (gpointer instance)
{
	GeeTestCaseAdaptor * self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		GEE_TEST_CASE_ADAPTOR_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}

static void
gee_test_case_class_init (GeeTestCaseClass * klass,
                          gpointer klass_data)
{
	gee_test_case_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeTestCase_private_offset);
	((GeeTestCaseClass *) klass)->set_up = (void (*) (GeeTestCase*)) gee_test_case_real_set_up;
	((GeeTestCaseClass *) klass)->tear_down = (void (*) (GeeTestCase*)) gee_test_case_real_tear_down;
	G_OBJECT_CLASS (klass)->finalize = gee_test_case_finalize;
}

static void
gee_test_case_instance_init (GeeTestCase * self,
                             gpointer klass)
{
	GeeTestCaseAdaptor** _tmp0_;
	self->priv = gee_test_case_get_instance_private (self);
	_tmp0_ = g_new0 (GeeTestCaseAdaptor*, 0 + 1);
	self->priv->adaptors = _tmp0_;
	self->priv->adaptors_length1 = 0;
	self->priv->_adaptors_size_ = self->priv->adaptors_length1;
}

static void
gee_test_case_finalize (GObject * obj)
{
	GeeTestCase * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, GEE_TYPE_TEST_CASE, GeeTestCase);
	self->priv->adaptors = (_vala_array_free (self->priv->adaptors, self->priv->adaptors_length1, (GDestroyNotify) gee_test_case_adaptor_unref), NULL);
	G_OBJECT_CLASS (gee_test_case_parent_class)->finalize (obj);
}

static GType
gee_test_case_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeTestCaseClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_test_case_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeTestCase), 0, (GInstanceInitFunc) gee_test_case_instance_init, NULL };
	GType gee_test_case_type_id;
	gee_test_case_type_id = g_type_register_static (G_TYPE_OBJECT, "GeeTestCase", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	GeeTestCase_private_offset = g_type_add_instance_private (gee_test_case_type_id, sizeof (GeeTestCasePrivate));
	return gee_test_case_type_id;
}

GType
gee_test_case_get_type (void)
{
	static volatile gsize gee_test_case_type_id__once = 0;
	if (g_once_init_enter (&gee_test_case_type_id__once)) {
		GType gee_test_case_type_id;
		gee_test_case_type_id = gee_test_case_get_type_once ();
		g_once_init_leave (&gee_test_case_type_id__once, gee_test_case_type_id);
	}
	return gee_test_case_type_id__once;
}

static void
_vala_array_destroy (gpointer array,
                     gssize array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		gssize i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}

static void
_vala_array_free (gpointer array,
                  gssize array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}

