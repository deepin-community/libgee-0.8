/* testtreeset.c generated by valac 0.52.0, the Vala compiler
 * generated from testtreeset.vala, do not modify */

/* testtreeset.vala
 *
 * Copyright (C) 2009  Didier Villevalois, Julien Peeters
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
 * 	Julien Peeters <contact@julienpeeters.fr>
 */

#include <glib-object.h>
#include <gee.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

#define GEE_TYPE_TEST_CASE (gee_test_case_get_type ())
#define GEE_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), GEE_TYPE_TEST_CASE, GeeTestCase))
#define GEE_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), GEE_TYPE_TEST_CASE, GeeTestCaseClass))
#define GEE_IS_TEST_CASE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GEE_TYPE_TEST_CASE))
#define GEE_IS_TEST_CASE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), GEE_TYPE_TEST_CASE))
#define GEE_TEST_CASE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), GEE_TYPE_TEST_CASE, GeeTestCaseClass))

typedef struct _GeeTestCase GeeTestCase;
typedef struct _GeeTestCaseClass GeeTestCaseClass;
typedef struct _GeeTestCasePrivate GeeTestCasePrivate;

#define TYPE_COLLECTION_TESTS (collection_tests_get_type ())
#define COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_COLLECTION_TESTS, CollectionTests))
#define COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_COLLECTION_TESTS, CollectionTestsClass))
#define IS_COLLECTION_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_COLLECTION_TESTS))
#define IS_COLLECTION_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_COLLECTION_TESTS))
#define COLLECTION_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_COLLECTION_TESTS, CollectionTestsClass))

typedef struct _CollectionTests CollectionTests;
typedef struct _CollectionTestsClass CollectionTestsClass;
typedef struct _CollectionTestsPrivate CollectionTestsPrivate;

#define TYPE_SET_TESTS (set_tests_get_type ())
#define SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SET_TESTS, SetTests))
#define SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SET_TESTS, SetTestsClass))
#define IS_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SET_TESTS))
#define IS_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SET_TESTS))
#define SET_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SET_TESTS, SetTestsClass))

typedef struct _SetTests SetTests;
typedef struct _SetTestsClass SetTestsClass;
typedef struct _SetTestsPrivate SetTestsPrivate;

#define TYPE_SORTED_SET_TESTS (sorted_set_tests_get_type ())
#define SORTED_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_SORTED_SET_TESTS, SortedSetTests))
#define SORTED_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_SORTED_SET_TESTS, SortedSetTestsClass))
#define IS_SORTED_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_SORTED_SET_TESTS))
#define IS_SORTED_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_SORTED_SET_TESTS))
#define SORTED_SET_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_SORTED_SET_TESTS, SortedSetTestsClass))

typedef struct _SortedSetTests SortedSetTests;
typedef struct _SortedSetTestsClass SortedSetTestsClass;
typedef struct _SortedSetTestsPrivate SortedSetTestsPrivate;

#define TYPE_BIDIR_SORTED_SET_TESTS (bidir_sorted_set_tests_get_type ())
#define BIDIR_SORTED_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_BIDIR_SORTED_SET_TESTS, BidirSortedSetTests))
#define BIDIR_SORTED_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_BIDIR_SORTED_SET_TESTS, BidirSortedSetTestsClass))
#define IS_BIDIR_SORTED_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_BIDIR_SORTED_SET_TESTS))
#define IS_BIDIR_SORTED_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_BIDIR_SORTED_SET_TESTS))
#define BIDIR_SORTED_SET_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_BIDIR_SORTED_SET_TESTS, BidirSortedSetTestsClass))

typedef struct _BidirSortedSetTests BidirSortedSetTests;
typedef struct _BidirSortedSetTestsClass BidirSortedSetTestsClass;
typedef struct _BidirSortedSetTestsPrivate BidirSortedSetTestsPrivate;

#define TYPE_TREE_SET_TESTS (tree_set_tests_get_type ())
#define TREE_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TYPE_TREE_SET_TESTS, TreeSetTests))
#define TREE_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TYPE_TREE_SET_TESTS, TreeSetTestsClass))
#define IS_TREE_SET_TESTS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TYPE_TREE_SET_TESTS))
#define IS_TREE_SET_TESTS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TYPE_TREE_SET_TESTS))
#define TREE_SET_TESTS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TYPE_TREE_SET_TESTS, TreeSetTestsClass))

typedef struct _TreeSetTests TreeSetTests;
typedef struct _TreeSetTestsClass TreeSetTestsClass;
typedef struct _TreeSetTestsPrivate TreeSetTestsPrivate;
enum  {
	TREE_SET_TESTS_0_PROPERTY,
	TREE_SET_TESTS_NUM_PROPERTIES
};
static GParamSpec* tree_set_tests_properties[TREE_SET_TESTS_NUM_PROPERTIES];
typedef void (*GeeTestCaseTestMethod) (gpointer user_data);
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);
#define _vala_return_if_fail(expr, msg) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return; }
#define _vala_return_val_if_fail(expr, msg, val) if G_LIKELY (expr) ; else { g_return_if_fail_warning (G_LOG_DOMAIN, G_STRFUNC, msg); return val; }
#define _vala_warn_if_fail(expr, msg) if G_LIKELY (expr) ; else g_warn_message (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

struct _GeeTestCase {
	GObject parent_instance;
	GeeTestCasePrivate * priv;
};

struct _GeeTestCaseClass {
	GObjectClass parent_class;
	void (*set_up) (GeeTestCase* self);
	void (*tear_down) (GeeTestCase* self);
};

struct _CollectionTests {
	GeeTestCase parent_instance;
	CollectionTestsPrivate * priv;
	GeeCollection* test_collection;
};

struct _CollectionTestsClass {
	GeeTestCaseClass parent_class;
};

struct _SetTests {
	CollectionTests parent_instance;
	SetTestsPrivate * priv;
};

struct _SetTestsClass {
	CollectionTestsClass parent_class;
	void (*test_duplicates_are_ignored) (SetTests* self);
};

struct _SortedSetTests {
	SetTests parent_instance;
	SortedSetTestsPrivate * priv;
};

struct _SortedSetTestsClass {
	SetTestsClass parent_class;
};

struct _BidirSortedSetTests {
	SortedSetTests parent_instance;
	BidirSortedSetTestsPrivate * priv;
};

struct _BidirSortedSetTestsClass {
	SortedSetTestsClass parent_class;
};

struct _TreeSetTests {
	BidirSortedSetTests parent_instance;
	TreeSetTestsPrivate * priv;
};

struct _TreeSetTestsClass {
	BidirSortedSetTestsClass parent_class;
};

static gpointer tree_set_tests_parent_class = NULL;

GType gee_test_case_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GeeTestCase, g_object_unref)
GType collection_tests_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (CollectionTests, g_object_unref)
GType set_tests_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (SetTests, g_object_unref)
GType sorted_set_tests_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (SortedSetTests, g_object_unref)
GType bidir_sorted_set_tests_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (BidirSortedSetTests, g_object_unref)
GType tree_set_tests_get_type (void) G_GNUC_CONST ;
G_DEFINE_AUTOPTR_CLEANUP_FUNC (TreeSetTests, g_object_unref)
void gee_test_case_set_up (GeeTestCase* self);
void gee_test_case_tear_down (GeeTestCase* self);
TreeSetTests* tree_set_tests_new (void);
TreeSetTests* tree_set_tests_construct (GType object_type);
BidirSortedSetTests* bidir_sorted_set_tests_construct (GType object_type,
                                                       const gchar* name);
void gee_test_case_add_test (GeeTestCase* self,
                             const gchar* name,
                             GeeTestCaseTestMethod test,
                             gpointer test_target,
                             GDestroyNotify test_target_destroy_notify);
void tree_set_tests_test_add_remove (TreeSetTests* self);
static void _tree_set_tests_test_add_remove_gee_test_case_test_method (gpointer self);
static void tree_set_tests_real_set_up (GeeTestCase* base);
static void tree_set_tests_real_tear_down (GeeTestCase* base);
void collection_tests_test_remove_all (CollectionTests* self);
static GType tree_set_tests_get_type_once (void);
static void _vala_array_destroy (gpointer array,
                          gint array_length,
                          GDestroyNotify destroy_func);
static void _vala_array_free (gpointer array,
                       gint array_length,
                       GDestroyNotify destroy_func);

static void
_tree_set_tests_test_add_remove_gee_test_case_test_method (gpointer self)
{
	tree_set_tests_test_add_remove ((TreeSetTests*) self);
}

TreeSetTests*
tree_set_tests_construct (GType object_type)
{
	TreeSetTests * self = NULL;
	self = (TreeSetTests*) bidir_sorted_set_tests_construct (object_type, "TreeSet");
	gee_test_case_add_test ((GeeTestCase*) self, "[TreeSet] add and remove", _tree_set_tests_test_add_remove_gee_test_case_test_method, g_object_ref (self), g_object_unref);
	return self;
}

TreeSetTests*
tree_set_tests_new (void)
{
	return tree_set_tests_construct (TYPE_TREE_SET_TESTS);
}

static void
tree_set_tests_real_set_up (GeeTestCase* base)
{
	TreeSetTests * self;
	GeeTreeSet* _tmp0_;
	self = (TreeSetTests*) base;
	_tmp0_ = gee_tree_set_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, (GDestroyNotify) g_free, NULL, NULL, NULL);
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = (GeeCollection*) _tmp0_;
}

static void
tree_set_tests_real_tear_down (GeeTestCase* base)
{
	TreeSetTests * self;
	self = (TreeSetTests*) base;
	_g_object_unref0 (((CollectionTests*) self)->test_collection);
	((CollectionTests*) self)->test_collection = NULL;
}

static gpointer
_g_object_ref0 (gpointer self)
{
	return self ? g_object_ref (self) : NULL;
}

void
tree_set_tests_test_add_remove (TreeSetTests* self)
{
	GeeTreeSet* test_set = NULL;
	GeeCollection* _tmp0_;
	GeeTreeSet* _tmp1_;
	GeeTreeSet* _tmp2_;
	gchar** to_add = NULL;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	gchar* _tmp10_;
	gchar* _tmp11_;
	gchar* _tmp12_;
	gchar* _tmp13_;
	gchar* _tmp14_;
	gchar* _tmp15_;
	gchar* _tmp16_;
	gchar* _tmp17_;
	gchar* _tmp18_;
	gchar** _tmp19_;
	gint to_add_length1;
	gint _to_add_size_;
	gchar** to_remove = NULL;
	gchar* _tmp20_;
	gchar* _tmp21_;
	gchar* _tmp22_;
	gchar* _tmp23_;
	gchar* _tmp24_;
	gchar* _tmp25_;
	gchar* _tmp26_;
	gchar* _tmp27_;
	gchar* _tmp28_;
	gchar* _tmp29_;
	gchar* _tmp30_;
	gchar* _tmp31_;
	gchar* _tmp32_;
	gchar* _tmp33_;
	gchar* _tmp34_;
	gchar* _tmp35_;
	gchar** _tmp36_;
	gint to_remove_length1;
	gint _to_remove_size_;
	gchar** _tmp37_;
	gint _tmp37__length1;
	gchar** _tmp45_;
	gint _tmp45__length1;
	gchar* _tmp53_;
	gchar* _tmp54_;
	gchar* _tmp55_;
	gchar* _tmp56_;
	gchar* _tmp57_;
	gchar* _tmp58_;
	gchar* _tmp59_;
	gchar* _tmp60_;
	gchar* _tmp61_;
	gchar* _tmp62_;
	gchar* _tmp63_;
	gchar* _tmp64_;
	gchar* _tmp65_;
	gchar* _tmp66_;
	gchar* _tmp67_;
	gchar* _tmp68_;
	gchar** _tmp69_;
	gchar* _tmp70_;
	gchar* _tmp71_;
	gchar* _tmp72_;
	gchar* _tmp73_;
	gchar* _tmp74_;
	gchar* _tmp75_;
	gchar* _tmp76_;
	gchar* _tmp77_;
	gchar* _tmp78_;
	gchar* _tmp79_;
	gchar* _tmp80_;
	gchar* _tmp81_;
	gchar* _tmp82_;
	gchar* _tmp83_;
	gchar* _tmp84_;
	gchar* _tmp85_;
	gchar** _tmp86_;
	gchar** _tmp87_;
	gint _tmp87__length1;
	gchar** _tmp95_;
	gint _tmp95__length1;
	g_return_if_fail (self != NULL);
	_tmp0_ = ((CollectionTests*) self)->test_collection;
	_tmp1_ = _g_object_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp0_, GEE_TYPE_TREE_SET) ? ((GeeTreeSet*) _tmp0_) : NULL);
	test_set = _tmp1_;
	_tmp2_ = test_set;
	_vala_assert (_tmp2_ != NULL, "test_set != null");
	collection_tests_test_remove_all ((CollectionTests*) G_TYPE_CHECK_INSTANCE_CAST (self, TYPE_BIDIR_SORTED_SET_TESTS, BidirSortedSetTests));
	_tmp3_ = g_strdup ("3");
	_tmp4_ = g_strdup ("10");
	_tmp5_ = g_strdup ("5");
	_tmp6_ = g_strdup ("6");
	_tmp7_ = g_strdup ("13");
	_tmp8_ = g_strdup ("8");
	_tmp9_ = g_strdup ("12");
	_tmp10_ = g_strdup ("11");
	_tmp11_ = g_strdup ("1");
	_tmp12_ = g_strdup ("0");
	_tmp13_ = g_strdup ("9");
	_tmp14_ = g_strdup ("2");
	_tmp15_ = g_strdup ("14");
	_tmp16_ = g_strdup ("7");
	_tmp17_ = g_strdup ("15");
	_tmp18_ = g_strdup ("4");
	_tmp19_ = g_new0 (gchar*, 16 + 1);
	_tmp19_[0] = _tmp3_;
	_tmp19_[1] = _tmp4_;
	_tmp19_[2] = _tmp5_;
	_tmp19_[3] = _tmp6_;
	_tmp19_[4] = _tmp7_;
	_tmp19_[5] = _tmp8_;
	_tmp19_[6] = _tmp9_;
	_tmp19_[7] = _tmp10_;
	_tmp19_[8] = _tmp11_;
	_tmp19_[9] = _tmp12_;
	_tmp19_[10] = _tmp13_;
	_tmp19_[11] = _tmp14_;
	_tmp19_[12] = _tmp15_;
	_tmp19_[13] = _tmp16_;
	_tmp19_[14] = _tmp17_;
	_tmp19_[15] = _tmp18_;
	to_add = _tmp19_;
	to_add_length1 = 16;
	_to_add_size_ = to_add_length1;
	_tmp20_ = g_strdup ("11");
	_tmp21_ = g_strdup ("13");
	_tmp22_ = g_strdup ("1");
	_tmp23_ = g_strdup ("12");
	_tmp24_ = g_strdup ("4");
	_tmp25_ = g_strdup ("0");
	_tmp26_ = g_strdup ("2");
	_tmp27_ = g_strdup ("5");
	_tmp28_ = g_strdup ("6");
	_tmp29_ = g_strdup ("3");
	_tmp30_ = g_strdup ("14");
	_tmp31_ = g_strdup ("10");
	_tmp32_ = g_strdup ("7");
	_tmp33_ = g_strdup ("15");
	_tmp34_ = g_strdup ("8");
	_tmp35_ = g_strdup ("9");
	_tmp36_ = g_new0 (gchar*, 16 + 1);
	_tmp36_[0] = _tmp20_;
	_tmp36_[1] = _tmp21_;
	_tmp36_[2] = _tmp22_;
	_tmp36_[3] = _tmp23_;
	_tmp36_[4] = _tmp24_;
	_tmp36_[5] = _tmp25_;
	_tmp36_[6] = _tmp26_;
	_tmp36_[7] = _tmp27_;
	_tmp36_[8] = _tmp28_;
	_tmp36_[9] = _tmp29_;
	_tmp36_[10] = _tmp30_;
	_tmp36_[11] = _tmp31_;
	_tmp36_[12] = _tmp32_;
	_tmp36_[13] = _tmp33_;
	_tmp36_[14] = _tmp34_;
	_tmp36_[15] = _tmp35_;
	to_remove = _tmp36_;
	to_remove_length1 = 16;
	_to_remove_size_ = to_remove_length1;
	_tmp37_ = to_add;
	_tmp37__length1 = to_add_length1;
	{
		gchar** s_collection = NULL;
		gint s_collection_length1 = 0;
		gint _s_collection_size_ = 0;
		gint s_it = 0;
		s_collection = _tmp37_;
		s_collection_length1 = _tmp37__length1;
		for (s_it = 0; s_it < s_collection_length1; s_it = s_it + 1) {
			gchar* _tmp38_;
			gchar* s = NULL;
			_tmp38_ = g_strdup (s_collection[s_it]);
			s = _tmp38_;
			{
				GeeTreeSet* _tmp39_;
				const gchar* _tmp40_;
				GeeTreeSet* _tmp41_;
				const gchar* _tmp42_;
				GeeTreeSet* _tmp43_;
				const gchar* _tmp44_;
				_tmp39_ = test_set;
				_tmp40_ = s;
				_vala_assert (!gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp39_, _tmp40_), "!test_set.contains (s)");
				_tmp41_ = test_set;
				_tmp42_ = s;
				_vala_assert (gee_abstract_collection_add ((GeeAbstractCollection*) _tmp41_, _tmp42_), "test_set.add (s)");
				_tmp43_ = test_set;
				_tmp44_ = s;
				_vala_assert (gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp43_, _tmp44_), "test_set.contains (s)");
				_g_free0 (s);
			}
		}
	}
	_tmp45_ = to_remove;
	_tmp45__length1 = to_remove_length1;
	{
		gchar** s_collection = NULL;
		gint s_collection_length1 = 0;
		gint _s_collection_size_ = 0;
		gint s_it = 0;
		s_collection = _tmp45_;
		s_collection_length1 = _tmp45__length1;
		for (s_it = 0; s_it < s_collection_length1; s_it = s_it + 1) {
			gchar* _tmp46_;
			gchar* s = NULL;
			_tmp46_ = g_strdup (s_collection[s_it]);
			s = _tmp46_;
			{
				GeeTreeSet* _tmp47_;
				const gchar* _tmp48_;
				GeeTreeSet* _tmp49_;
				const gchar* _tmp50_;
				GeeTreeSet* _tmp51_;
				const gchar* _tmp52_;
				_tmp47_ = test_set;
				_tmp48_ = s;
				_vala_assert (gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp47_, _tmp48_), "test_set.contains (s)");
				_tmp49_ = test_set;
				_tmp50_ = s;
				_vala_assert (gee_abstract_collection_remove ((GeeAbstractCollection*) _tmp49_, _tmp50_), "test_set.remove (s)");
				_tmp51_ = test_set;
				_tmp52_ = s;
				_vala_assert (!gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp51_, _tmp52_), "!test_set.contains (s)");
				_g_free0 (s);
			}
		}
	}
	_tmp53_ = g_strdup ("2");
	_tmp54_ = g_strdup ("9");
	_tmp55_ = g_strdup ("13");
	_tmp56_ = g_strdup ("7");
	_tmp57_ = g_strdup ("12");
	_tmp58_ = g_strdup ("14");
	_tmp59_ = g_strdup ("8");
	_tmp60_ = g_strdup ("1");
	_tmp61_ = g_strdup ("5");
	_tmp62_ = g_strdup ("6");
	_tmp63_ = g_strdup ("11");
	_tmp64_ = g_strdup ("15");
	_tmp65_ = g_strdup ("3");
	_tmp66_ = g_strdup ("10");
	_tmp67_ = g_strdup ("0");
	_tmp68_ = g_strdup ("4");
	_tmp69_ = g_new0 (gchar*, 16 + 1);
	_tmp69_[0] = _tmp53_;
	_tmp69_[1] = _tmp54_;
	_tmp69_[2] = _tmp55_;
	_tmp69_[3] = _tmp56_;
	_tmp69_[4] = _tmp57_;
	_tmp69_[5] = _tmp58_;
	_tmp69_[6] = _tmp59_;
	_tmp69_[7] = _tmp60_;
	_tmp69_[8] = _tmp61_;
	_tmp69_[9] = _tmp62_;
	_tmp69_[10] = _tmp63_;
	_tmp69_[11] = _tmp64_;
	_tmp69_[12] = _tmp65_;
	_tmp69_[13] = _tmp66_;
	_tmp69_[14] = _tmp67_;
	_tmp69_[15] = _tmp68_;
	to_add = (_vala_array_free (to_add, to_add_length1, (GDestroyNotify) g_free), NULL);
	to_add = _tmp69_;
	to_add_length1 = 16;
	_to_add_size_ = to_add_length1;
	_tmp70_ = g_strdup ("11");
	_tmp71_ = g_strdup ("10");
	_tmp72_ = g_strdup ("14");
	_tmp73_ = g_strdup ("6");
	_tmp74_ = g_strdup ("13");
	_tmp75_ = g_strdup ("4");
	_tmp76_ = g_strdup ("3");
	_tmp77_ = g_strdup ("15");
	_tmp78_ = g_strdup ("8");
	_tmp79_ = g_strdup ("5");
	_tmp80_ = g_strdup ("7");
	_tmp81_ = g_strdup ("0");
	_tmp82_ = g_strdup ("12");
	_tmp83_ = g_strdup ("2");
	_tmp84_ = g_strdup ("9");
	_tmp85_ = g_strdup ("1");
	_tmp86_ = g_new0 (gchar*, 16 + 1);
	_tmp86_[0] = _tmp70_;
	_tmp86_[1] = _tmp71_;
	_tmp86_[2] = _tmp72_;
	_tmp86_[3] = _tmp73_;
	_tmp86_[4] = _tmp74_;
	_tmp86_[5] = _tmp75_;
	_tmp86_[6] = _tmp76_;
	_tmp86_[7] = _tmp77_;
	_tmp86_[8] = _tmp78_;
	_tmp86_[9] = _tmp79_;
	_tmp86_[10] = _tmp80_;
	_tmp86_[11] = _tmp81_;
	_tmp86_[12] = _tmp82_;
	_tmp86_[13] = _tmp83_;
	_tmp86_[14] = _tmp84_;
	_tmp86_[15] = _tmp85_;
	to_remove = (_vala_array_free (to_remove, to_remove_length1, (GDestroyNotify) g_free), NULL);
	to_remove = _tmp86_;
	to_remove_length1 = 16;
	_to_remove_size_ = to_remove_length1;
	_tmp87_ = to_add;
	_tmp87__length1 = to_add_length1;
	{
		gchar** s_collection = NULL;
		gint s_collection_length1 = 0;
		gint _s_collection_size_ = 0;
		gint s_it = 0;
		s_collection = _tmp87_;
		s_collection_length1 = _tmp87__length1;
		for (s_it = 0; s_it < s_collection_length1; s_it = s_it + 1) {
			gchar* _tmp88_;
			gchar* s = NULL;
			_tmp88_ = g_strdup (s_collection[s_it]);
			s = _tmp88_;
			{
				GeeTreeSet* _tmp89_;
				const gchar* _tmp90_;
				GeeTreeSet* _tmp91_;
				const gchar* _tmp92_;
				GeeTreeSet* _tmp93_;
				const gchar* _tmp94_;
				_tmp89_ = test_set;
				_tmp90_ = s;
				_vala_assert (!gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp89_, _tmp90_), "!test_set.contains (s)");
				_tmp91_ = test_set;
				_tmp92_ = s;
				_vala_assert (gee_abstract_collection_add ((GeeAbstractCollection*) _tmp91_, _tmp92_), "test_set.add (s)");
				_tmp93_ = test_set;
				_tmp94_ = s;
				_vala_assert (gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp93_, _tmp94_), "test_set.contains (s)");
				_g_free0 (s);
			}
		}
	}
	_tmp95_ = to_remove;
	_tmp95__length1 = to_remove_length1;
	{
		gchar** s_collection = NULL;
		gint s_collection_length1 = 0;
		gint _s_collection_size_ = 0;
		gint s_it = 0;
		s_collection = _tmp95_;
		s_collection_length1 = _tmp95__length1;
		for (s_it = 0; s_it < s_collection_length1; s_it = s_it + 1) {
			gchar* _tmp96_;
			gchar* s = NULL;
			_tmp96_ = g_strdup (s_collection[s_it]);
			s = _tmp96_;
			{
				GeeTreeSet* _tmp97_;
				const gchar* _tmp98_;
				GeeTreeSet* _tmp99_;
				const gchar* _tmp100_;
				GeeTreeSet* _tmp101_;
				const gchar* _tmp102_;
				_tmp97_ = test_set;
				_tmp98_ = s;
				_vala_assert (gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp97_, _tmp98_), "test_set.contains (s)");
				_tmp99_ = test_set;
				_tmp100_ = s;
				_vala_assert (gee_abstract_collection_remove ((GeeAbstractCollection*) _tmp99_, _tmp100_), "test_set.remove (s)");
				_tmp101_ = test_set;
				_tmp102_ = s;
				_vala_assert (!gee_abstract_collection_contains ((GeeAbstractCollection*) _tmp101_, _tmp102_), "!test_set.contains (s)");
				_g_free0 (s);
			}
		}
	}
	to_remove = (_vala_array_free (to_remove, to_remove_length1, (GDestroyNotify) g_free), NULL);
	to_add = (_vala_array_free (to_add, to_add_length1, (GDestroyNotify) g_free), NULL);
	_g_object_unref0 (test_set);
}

static void
tree_set_tests_class_init (TreeSetTestsClass * klass,
                           gpointer klass_data)
{
	tree_set_tests_parent_class = g_type_class_peek_parent (klass);
	((GeeTestCaseClass *) klass)->set_up = (void (*) (GeeTestCase*)) tree_set_tests_real_set_up;
	((GeeTestCaseClass *) klass)->tear_down = (void (*) (GeeTestCase*)) tree_set_tests_real_tear_down;
}

static void
tree_set_tests_instance_init (TreeSetTests * self,
                              gpointer klass)
{
}

static GType
tree_set_tests_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (TreeSetTestsClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) tree_set_tests_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TreeSetTests), 0, (GInstanceInitFunc) tree_set_tests_instance_init, NULL };
	GType tree_set_tests_type_id;
	tree_set_tests_type_id = g_type_register_static (TYPE_BIDIR_SORTED_SET_TESTS, "TreeSetTests", &g_define_type_info, 0);
	return tree_set_tests_type_id;
}

GType
tree_set_tests_get_type (void)
{
	static volatile gsize tree_set_tests_type_id__volatile = 0;
	if (g_once_init_enter (&tree_set_tests_type_id__volatile)) {
		GType tree_set_tests_type_id;
		tree_set_tests_type_id = tree_set_tests_get_type_once ();
		g_once_init_leave (&tree_set_tests_type_id__volatile, tree_set_tests_type_id);
	}
	return tree_set_tests_type_id__volatile;
}

static void
_vala_array_destroy (gpointer array,
                     gint array_length,
                     GDestroyNotify destroy_func)
{
	if ((array != NULL) && (destroy_func != NULL)) {
		gint i;
		for (i = 0; i < array_length; i = i + 1) {
			if (((gpointer*) array)[i] != NULL) {
				destroy_func (((gpointer*) array)[i]);
			}
		}
	}
}

static void
_vala_array_free (gpointer array,
                  gint array_length,
                  GDestroyNotify destroy_func)
{
	_vala_array_destroy (array, array_length, destroy_func);
	g_free (array);
}
