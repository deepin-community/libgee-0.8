/* map.c generated by valac 0.56.3, the Vala compiler
 * generated from map.vala, do not modify */

/* map.vala
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
enum  {
	GEE_MAP_ENTRY_0_PROPERTY,
	GEE_MAP_ENTRY_K_TYPE,
	GEE_MAP_ENTRY_K_DUP_FUNC,
	GEE_MAP_ENTRY_K_DESTROY_FUNC,
	GEE_MAP_ENTRY_V_TYPE,
	GEE_MAP_ENTRY_V_DUP_FUNC,
	GEE_MAP_ENTRY_V_DESTROY_FUNC,
	GEE_MAP_ENTRY_KEY_PROPERTY,
	GEE_MAP_ENTRY_VALUE_PROPERTY,
	GEE_MAP_ENTRY_READ_ONLY_PROPERTY,
	GEE_MAP_ENTRY_NUM_PROPERTIES
};
static GParamSpec* gee_map_entry_properties[GEE_MAP_ENTRY_NUM_PROPERTIES];

struct _GeeMapEntryPrivate {
	GType k_type;
	GBoxedCopyFunc k_dup_func;
	GDestroyNotify k_destroy_func;
	GType v_type;
	GBoxedCopyFunc v_dup_func;
	GDestroyNotify v_destroy_func;
};

static gint GeeMapEntry_private_offset;
static gpointer gee_map_entry_parent_class = NULL;

static void gee_map_real_set_all (GeeMap* self,
                           GeeMap* map);
static gboolean gee_map_real_unset_all (GeeMap* self,
                                 GeeMap* map);
static gboolean gee_map_real_has_all (GeeMap* self,
                               GeeMap* map);
static GType gee_map_entry_get_type_once (void);
static void _vala_gee_map_entry_get_property (GObject * object,
                                       guint property_id,
                                       GValue * value,
                                       GParamSpec * pspec);
static void _vala_gee_map_entry_set_property (GObject * object,
                                       guint property_id,
                                       const GValue * value,
                                       GParamSpec * pspec);
static GType gee_map_get_type_once (void);

/**
 * Determines whether this map has the specified key.
 *
 * @param key the key to locate in the map
 *
 * @return    ``true`` if key is found, ``false`` otherwise
 */
gboolean
gee_map_has_key (GeeMap* self,
                 gconstpointer key)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->has_key) {
		return _iface_->has_key (self, key);
	}
	return FALSE;
}

/**
 * Determines whether this map contains the specified key.
 *
 * @param key the key to locate in the map
 *
 * @return    ``true`` if key is found, ``false`` otherwise
 */
gboolean
gee_map_contains (GeeMap* self,
                  gconstpointer key)
{
	gboolean result;
	result = gee_map_has_key (self, key);
	return result;
}

/**
 * Determines whether this map has the specified key/value entry.
 *
 * @param key the key to locate in the map
 * @param value the corresponding value
 *
 * @return    ``true`` if key is found, ``false`` otherwise
 */
gboolean
gee_map_has (GeeMap* self,
             gconstpointer key,
             gconstpointer value)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->has) {
		return _iface_->has (self, key, value);
	}
	return FALSE;
}

/**
 * Returns the value of the specified key in this map.
 *
 * @param key the key whose value is to be retrieved
 *
 * @return    the value associated with the key, or ``null`` if the key
 *            couldn't be found
 */
gpointer
gee_map_get (GeeMap* self,
             gconstpointer key)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->get) {
		return _iface_->get (self, key);
	}
	return NULL;
}

/**
 * Inserts a new key and value into this map.
 *
 * @param key   the key to insert
 * @param value the value to associate with the key
 */
void
gee_map_set (GeeMap* self,
             gconstpointer key,
             gconstpointer value)
{
	GeeMapIface* _iface_;
	g_return_if_fail (self != NULL);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->set) {
		_iface_->set (self, key, value);
	}
}

/**
 * Removes the specified key from this map.
 *
 * @param key   the key to remove from the map
 * @param value the receiver variable for the removed value
 *
 * @return    ``true`` if the map has been changed, ``false`` otherwise
 */
gboolean
gee_map_unset (GeeMap* self,
               gconstpointer key,
               gpointer* value)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->unset) {
		return _iface_->unset (self, key, value);
	}
	return FALSE;
}

/**
 * Removes the specified key from this map.
 *
 * @param key   the key to remove from the map
 * @param value the receiver variable for the removed value
 *
 * @return    ``true`` if the map has been changed, ``false`` otherwise
 */
gboolean
gee_map_remove (GeeMap* self,
                gconstpointer key,
                gpointer* value)
{
	gpointer _vala_value = NULL;
	gpointer _tmp0_ = NULL;
	gboolean _tmp1_;
	gboolean result;
	_tmp1_ = gee_map_unset (self, key, &_tmp0_);
	((_vala_value == NULL) || (GEE_MAP_GET_INTERFACE (self)->get_v_destroy_func (self) == NULL)) ? NULL : (_vala_value = (GEE_MAP_GET_INTERFACE (self)->get_v_destroy_func (self) (_vala_value), NULL));
	_vala_value = _tmp0_;
	result = _tmp1_;
	if (value) {
		*value = _vala_value;
	} else {
		((_vala_value == NULL) || (GEE_MAP_GET_INTERFACE (self)->get_v_destroy_func (self) == NULL)) ? NULL : (_vala_value = (GEE_MAP_GET_INTERFACE (self)->get_v_destroy_func (self) (_vala_value), NULL));
	}
	return result;
}

/**
 * Removes all items from this collection. Must not be called on
 * read-only collections.
 */
void
gee_map_clear (GeeMap* self)
{
	GeeMapIface* _iface_;
	g_return_if_fail (self != NULL);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->clear) {
		_iface_->clear (self);
	}
}

/**
 * Returns an iterator for this map.
 *
 * @return a map iterator
 */
GeeMapIterator*
gee_map_map_iterator (GeeMap* self)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->map_iterator) {
		return _iface_->map_iterator (self);
	}
	return NULL;
}

/**
 * Inserts all items that are contained in the input map to this map.
 *
 * @param map the map which items are inserted to this map
 */
static void
gee_map_real_set_all (GeeMap* self,
                      GeeMap* map)
{
	g_return_if_fail (map != NULL);
	{
		GeeIterator* _entry_it = NULL;
		GeeSet* _tmp0_;
		GeeSet* _tmp1_;
		GeeSet* _tmp2_;
		GeeIterator* _tmp3_;
		GeeIterator* _tmp4_;
		_tmp0_ = gee_map_get_entries (map);
		_tmp1_ = _tmp0_;
		_tmp2_ = _tmp1_;
		_tmp3_ = gee_iterable_iterator ((GeeIterable*) _tmp2_);
		_tmp4_ = _tmp3_;
		_g_object_unref0 (_tmp2_);
		_entry_it = _tmp4_;
		while (TRUE) {
			GeeIterator* _tmp5_;
			GeeMapEntry* entry = NULL;
			GeeIterator* _tmp6_;
			gpointer _tmp7_;
			GeeMapEntry* _tmp8_;
			gconstpointer _tmp9_;
			gconstpointer _tmp10_;
			GeeMapEntry* _tmp11_;
			gconstpointer _tmp12_;
			gconstpointer _tmp13_;
			_tmp5_ = _entry_it;
			if (!gee_iterator_next (_tmp5_)) {
				break;
			}
			_tmp6_ = _entry_it;
			_tmp7_ = gee_iterator_get (_tmp6_);
			entry = (GeeMapEntry*) _tmp7_;
			_tmp8_ = entry;
			_tmp9_ = gee_map_entry_get_key (_tmp8_);
			_tmp10_ = _tmp9_;
			_tmp11_ = entry;
			_tmp12_ = gee_map_entry_get_value (_tmp11_);
			_tmp13_ = _tmp12_;
			gee_map_set (self, _tmp10_, _tmp13_);
			_g_object_unref0 (entry);
		}
		_g_object_unref0 (_entry_it);
	}
}

void
gee_map_set_all (GeeMap* self,
                 GeeMap* map)
{
	GeeMapIface* _iface_;
	g_return_if_fail (self != NULL);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->set_all) {
		_iface_->set_all (self, map);
	}
}

/**
 * Removes all items from this map that are common to the input map
 * and this map.
 *
 * @param map the map which common items are deleted from this map
 */
static gboolean
gee_map_real_unset_all (GeeMap* self,
                        GeeMap* map)
{
	gboolean changed = FALSE;
	gboolean result;
	g_return_val_if_fail (map != NULL, FALSE);
	changed = FALSE;
	{
		GeeIterator* _key_it = NULL;
		GeeSet* _tmp0_;
		GeeSet* _tmp1_;
		GeeSet* _tmp2_;
		GeeIterator* _tmp3_;
		GeeIterator* _tmp4_;
		_tmp0_ = gee_map_get_keys (map);
		_tmp1_ = _tmp0_;
		_tmp2_ = _tmp1_;
		_tmp3_ = gee_iterable_iterator ((GeeIterable*) _tmp2_);
		_tmp4_ = _tmp3_;
		_g_object_unref0 (_tmp2_);
		_key_it = _tmp4_;
		while (TRUE) {
			GeeIterator* _tmp5_;
			gpointer key = NULL;
			GeeIterator* _tmp6_;
			gpointer _tmp7_;
			gconstpointer _tmp8_;
			_tmp5_ = _key_it;
			if (!gee_iterator_next (_tmp5_)) {
				break;
			}
			_tmp6_ = _key_it;
			_tmp7_ = gee_iterator_get (_tmp6_);
			key = _tmp7_;
			_tmp8_ = key;
			changed = changed | gee_map_unset (self, _tmp8_, NULL);
			((key == NULL) || (GEE_MAP_GET_INTERFACE (self)->get_k_destroy_func (self) == NULL)) ? NULL : (key = (GEE_MAP_GET_INTERFACE (self)->get_k_destroy_func (self) (key), NULL));
		}
		_g_object_unref0 (_key_it);
	}
	result = changed;
	return result;
}

gboolean
gee_map_unset_all (GeeMap* self,
                   GeeMap* map)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->unset_all) {
		return _iface_->unset_all (self, map);
	}
	return FALSE;
}

/**
 * Removes all items from this map that are common to the input map
 * and this map.
 *
 * @param map the map which common items are deleted from this map
 */
gboolean
gee_map_remove_all (GeeMap* self,
                    GeeMap* map)
{
	gboolean result;
	g_return_val_if_fail (map != NULL, FALSE);
	result = gee_map_unset_all (self, map);
	return result;
}

/**
 * Returns ``true`` if this map contains all the same items as the input
 * map.
 *
 * @param map the map which items will be compared with this map
 */
static gboolean
gee_map_real_has_all (GeeMap* self,
                      GeeMap* map)
{
	gboolean result;
	g_return_val_if_fail (map != NULL, FALSE);
	{
		GeeIterator* _entry_it = NULL;
		GeeSet* _tmp0_;
		GeeSet* _tmp1_;
		GeeSet* _tmp2_;
		GeeIterator* _tmp3_;
		GeeIterator* _tmp4_;
		_tmp0_ = gee_map_get_entries (map);
		_tmp1_ = _tmp0_;
		_tmp2_ = _tmp1_;
		_tmp3_ = gee_iterable_iterator ((GeeIterable*) _tmp2_);
		_tmp4_ = _tmp3_;
		_g_object_unref0 (_tmp2_);
		_entry_it = _tmp4_;
		while (TRUE) {
			GeeIterator* _tmp5_;
			GeeMapEntry* entry = NULL;
			GeeIterator* _tmp6_;
			gpointer _tmp7_;
			GeeMapEntry* _tmp8_;
			gconstpointer _tmp9_;
			gconstpointer _tmp10_;
			GeeMapEntry* _tmp11_;
			gconstpointer _tmp12_;
			gconstpointer _tmp13_;
			_tmp5_ = _entry_it;
			if (!gee_iterator_next (_tmp5_)) {
				break;
			}
			_tmp6_ = _entry_it;
			_tmp7_ = gee_iterator_get (_tmp6_);
			entry = (GeeMapEntry*) _tmp7_;
			_tmp8_ = entry;
			_tmp9_ = gee_map_entry_get_key (_tmp8_);
			_tmp10_ = _tmp9_;
			_tmp11_ = entry;
			_tmp12_ = gee_map_entry_get_value (_tmp11_);
			_tmp13_ = _tmp12_;
			if (!gee_map_has (self, _tmp10_, _tmp13_)) {
				result = FALSE;
				_g_object_unref0 (entry);
				_g_object_unref0 (_entry_it);
				return result;
			}
			_g_object_unref0 (entry);
		}
		_g_object_unref0 (_entry_it);
	}
	result = TRUE;
	return result;
}

gboolean
gee_map_has_all (GeeMap* self,
                 GeeMap* map)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->has_all) {
		return _iface_->has_all (self, map);
	}
	return FALSE;
}

/**
 * Returns ``true`` if this map contains all the same items as the input
 * map.
 *
 * @param map the map which items will be compared with this map
 */
gboolean
gee_map_contains_all (GeeMap* self,
                      GeeMap* map)
{
	gboolean result;
	g_return_val_if_fail (map != NULL, FALSE);
	result = gee_map_has_all (self, map);
	return result;
}

/**
 * Returns an immutable empty map.
 *
 * @return an immutable empty map
 */
GeeMap*
gee_map_empty (GType k_type,
               GBoxedCopyFunc k_dup_func,
               GDestroyNotify k_destroy_func,
               GType v_type,
               GBoxedCopyFunc v_dup_func,
               GDestroyNotify v_destroy_func)
{
	GeeHashMap* _tmp0_;
	GeeHashMap* _tmp1_;
	GeeMap* _tmp2_;
	GeeMap* _tmp3_;
	GeeMap* _tmp4_;
	GeeMap* result;
	_tmp0_ = gee_hash_map_new (k_type, (GBoxedCopyFunc) k_dup_func, (GDestroyNotify) k_destroy_func, v_type, (GBoxedCopyFunc) v_dup_func, (GDestroyNotify) v_destroy_func, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	_tmp1_ = _tmp0_;
	_tmp2_ = gee_abstract_map_get_read_only_view ((GeeAbstractMap*) _tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = _tmp3_;
	_g_object_unref0 (_tmp1_);
	result = _tmp4_;
	return result;
}

gint
gee_map_get_size (GeeMap* self)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, 0);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->get_size) {
		return _iface_->get_size (self);
	}
	return -1;
}

gboolean
gee_map_get_is_empty (GeeMap* self)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->get_is_empty) {
		return _iface_->get_is_empty (self);
	}
	return FALSE;
}

static gboolean
gee_map_real_get_is_empty (GeeMap* base)
{
	gboolean result;
	GeeMap* self;
	gint _tmp0_;
	gint _tmp1_;
	self = base;
	_tmp0_ = gee_map_get_size (self);
	_tmp1_ = _tmp0_;
	result = _tmp1_ == 0;
	return result;
}

gboolean
gee_map_get_read_only (GeeMap* self)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, FALSE);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->get_read_only) {
		return _iface_->get_read_only (self);
	}
	return FALSE;
}

GeeSet*
gee_map_get_keys (GeeMap* self)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->get_keys) {
		return _iface_->get_keys (self);
	}
	return NULL;
}

GeeCollection*
gee_map_get_values (GeeMap* self)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->get_values) {
		return _iface_->get_values (self);
	}
	return NULL;
}

GeeSet*
gee_map_get_entries (GeeMap* self)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->get_entries) {
		return _iface_->get_entries (self);
	}
	return NULL;
}

GeeMap*
gee_map_get_read_only_view (GeeMap* self)
{
	GeeMapIface* _iface_;
	g_return_val_if_fail (self != NULL, NULL);
	_iface_ = GEE_MAP_GET_INTERFACE (self);
	if (_iface_->get_read_only_view) {
		return _iface_->get_read_only_view (self);
	}
	return NULL;
}

GType
gee_map_get_key_type (GeeMap* self)
{
	GType result;
	g_return_val_if_fail (self != NULL, 0UL);
	result = GEE_MAP_GET_INTERFACE (self)->get_k_type (self);
	return result;
}

GType
gee_map_get_value_type (GeeMap* self)
{
	GType result;
	g_return_val_if_fail (self != NULL, 0UL);
	result = GEE_MAP_GET_INTERFACE (self)->get_v_type (self);
	return result;
}

static inline gpointer
gee_map_entry_get_instance_private (GeeMapEntry* self)
{
	return G_STRUCT_MEMBER_P (self, GeeMapEntry_private_offset);
}

GeeMapEntry*
gee_map_entry_construct (GType object_type,
                         GType k_type,
                         GBoxedCopyFunc k_dup_func,
                         GDestroyNotify k_destroy_func,
                         GType v_type,
                         GBoxedCopyFunc v_dup_func,
                         GDestroyNotify v_destroy_func)
{
	GeeMapEntry * self = NULL;
	self = (GeeMapEntry*) g_object_new (object_type, "k-type", k_type, "k-dup-func", k_dup_func, "k-destroy-func", k_destroy_func, "v-type", v_type, "v-dup-func", v_dup_func, "v-destroy-func", v_destroy_func, NULL);
	self->priv->k_type = k_type;
	self->priv->k_dup_func = k_dup_func;
	self->priv->k_destroy_func = k_destroy_func;
	self->priv->v_type = v_type;
	self->priv->v_dup_func = v_dup_func;
	self->priv->v_destroy_func = v_destroy_func;
	return self;
}

gconstpointer
gee_map_entry_get_key (GeeMapEntry* self)
{
	GeeMapEntryClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_MAP_ENTRY_GET_CLASS (self);
	if (_klass_->get_key) {
		return _klass_->get_key (self);
	}
	return NULL;
}

gconstpointer
gee_map_entry_get_value (GeeMapEntry* self)
{
	GeeMapEntryClass* _klass_;
	g_return_val_if_fail (self != NULL, NULL);
	_klass_ = GEE_MAP_ENTRY_GET_CLASS (self);
	if (_klass_->get_value) {
		return _klass_->get_value (self);
	}
	return NULL;
}

void
gee_map_entry_set_value (GeeMapEntry* self,
                         gconstpointer value)
{
	GeeMapEntryClass* _klass_;
	g_return_if_fail (self != NULL);
	_klass_ = GEE_MAP_ENTRY_GET_CLASS (self);
	if (_klass_->set_value) {
		_klass_->set_value (self, value);
	}
}

gboolean
gee_map_entry_get_read_only (GeeMapEntry* self)
{
	GeeMapEntryClass* _klass_;
	g_return_val_if_fail (self != NULL, FALSE);
	_klass_ = GEE_MAP_ENTRY_GET_CLASS (self);
	if (_klass_->get_read_only) {
		return _klass_->get_read_only (self);
	}
	return FALSE;
}

static void
gee_map_entry_class_init (GeeMapEntryClass * klass,
                          gpointer klass_data)
{
	gee_map_entry_parent_class = g_type_class_peek_parent (klass);
	g_type_class_adjust_private_offset (klass, &GeeMapEntry_private_offset);
	G_OBJECT_CLASS (klass)->get_property = _vala_gee_map_entry_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_gee_map_entry_set_property;
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_K_TYPE, g_param_spec_gtype ("k-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_K_DUP_FUNC, g_param_spec_pointer ("k-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_K_DESTROY_FUNC, g_param_spec_pointer ("k-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_V_TYPE, g_param_spec_gtype ("v-type", "type", "type", G_TYPE_NONE, G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_V_DUP_FUNC, g_param_spec_pointer ("v-dup-func", "dup func", "dup func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_V_DESTROY_FUNC, g_param_spec_pointer ("v-destroy-func", "destroy func", "destroy func", G_PARAM_STATIC_STRINGS | G_PARAM_READWRITE | G_PARAM_CONSTRUCT_ONLY));
	/**
	 * The key of this entry.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_KEY_PROPERTY, gee_map_entry_properties[GEE_MAP_ENTRY_KEY_PROPERTY] = g_param_spec_pointer ("key", "key", "key", G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * The value of this entry.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_VALUE_PROPERTY, gee_map_entry_properties[GEE_MAP_ENTRY_VALUE_PROPERTY] = g_param_spec_pointer ("value", "value", "value", G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE));
	/**
	 * ``true`` if the setting value is permitted.
	 */
	g_object_class_install_property (G_OBJECT_CLASS (klass), GEE_MAP_ENTRY_READ_ONLY_PROPERTY, gee_map_entry_properties[GEE_MAP_ENTRY_READ_ONLY_PROPERTY] = g_param_spec_boolean ("read-only", "read-only", "read-only", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
}

static void
gee_map_entry_instance_init (GeeMapEntry * self,
                             gpointer klass)
{
	self->priv = gee_map_entry_get_instance_private (self);
}

/**
 * An entry of a map.
 */
static GType
gee_map_entry_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeMapEntryClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_map_entry_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (GeeMapEntry), 0, (GInstanceInitFunc) gee_map_entry_instance_init, NULL };
	GType gee_map_entry_type_id;
	gee_map_entry_type_id = g_type_register_static (G_TYPE_OBJECT, "GeeMapEntry", &g_define_type_info, G_TYPE_FLAG_ABSTRACT);
	GeeMapEntry_private_offset = g_type_add_instance_private (gee_map_entry_type_id, sizeof (GeeMapEntryPrivate));
	return gee_map_entry_type_id;
}

GType
gee_map_entry_get_type (void)
{
	static volatile gsize gee_map_entry_type_id__once = 0;
	if (g_once_init_enter (&gee_map_entry_type_id__once)) {
		GType gee_map_entry_type_id;
		gee_map_entry_type_id = gee_map_entry_get_type_once ();
		g_once_init_leave (&gee_map_entry_type_id__once, gee_map_entry_type_id);
	}
	return gee_map_entry_type_id__once;
}

static void
_vala_gee_map_entry_get_property (GObject * object,
                                  guint property_id,
                                  GValue * value,
                                  GParamSpec * pspec)
{
	GeeMapEntry * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_MAP_TYPE_ENTRY, GeeMapEntry);
	switch (property_id) {
		case GEE_MAP_ENTRY_K_TYPE:
		g_value_set_gtype (value, self->priv->k_type);
		break;
		case GEE_MAP_ENTRY_K_DUP_FUNC:
		g_value_set_pointer (value, self->priv->k_dup_func);
		break;
		case GEE_MAP_ENTRY_K_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->k_destroy_func);
		break;
		case GEE_MAP_ENTRY_V_TYPE:
		g_value_set_gtype (value, self->priv->v_type);
		break;
		case GEE_MAP_ENTRY_V_DUP_FUNC:
		g_value_set_pointer (value, self->priv->v_dup_func);
		break;
		case GEE_MAP_ENTRY_V_DESTROY_FUNC:
		g_value_set_pointer (value, self->priv->v_destroy_func);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
_vala_gee_map_entry_set_property (GObject * object,
                                  guint property_id,
                                  const GValue * value,
                                  GParamSpec * pspec)
{
	GeeMapEntry * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, GEE_MAP_TYPE_ENTRY, GeeMapEntry);
	switch (property_id) {
		case GEE_MAP_ENTRY_K_TYPE:
		self->priv->k_type = g_value_get_gtype (value);
		break;
		case GEE_MAP_ENTRY_K_DUP_FUNC:
		self->priv->k_dup_func = g_value_get_pointer (value);
		break;
		case GEE_MAP_ENTRY_K_DESTROY_FUNC:
		self->priv->k_destroy_func = g_value_get_pointer (value);
		break;
		case GEE_MAP_ENTRY_V_TYPE:
		self->priv->v_type = g_value_get_gtype (value);
		break;
		case GEE_MAP_ENTRY_V_DUP_FUNC:
		self->priv->v_dup_func = g_value_get_pointer (value);
		break;
		case GEE_MAP_ENTRY_V_DESTROY_FUNC:
		self->priv->v_destroy_func = g_value_get_pointer (value);
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}

static void
gee_map_default_init (GeeMapIface * iface,
                      gpointer iface_data)
{
	/**
	 * The number of items in this map.
	 */
	g_object_interface_install_property (iface, g_param_spec_int ("size", "size", "size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * Specifies whether this collection can change - i.e. whether {@link set},
	 * {@link remove} etc. are legal operations.
	 */
	g_object_interface_install_property (iface, g_param_spec_boolean ("read-only", "read-only", "read-only", FALSE, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * The read-only view of the keys of this map.
	 */
	g_object_interface_install_property (iface, g_param_spec_object ("keys", "keys", "keys", GEE_TYPE_SET, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * The read-only view of the values of this map.
	 */
	g_object_interface_install_property (iface, g_param_spec_object ("values", "values", "values", GEE_TYPE_COLLECTION, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * The read-only view of the entries of this map.
	 */
	g_object_interface_install_property (iface, g_param_spec_object ("entries", "entries", "entries", GEE_TYPE_SET, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	/**
	 * The read-only view this map.
	 */
	g_object_interface_install_property (iface, g_param_spec_object ("read-only-view", "read-only-view", "read-only-view", GEE_TYPE_MAP, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE));
	iface->set_all = gee_map_real_set_all;
	iface->unset_all = gee_map_real_unset_all;
	iface->has_all = gee_map_real_has_all;
	iface->get_is_empty = gee_map_real_get_is_empty;
}

/**
 * An object that maps keys to values.
 */
static GType
gee_map_get_type_once (void)
{
	static const GTypeInfo g_define_type_info = { sizeof (GeeMapIface), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) gee_map_default_init, (GClassFinalizeFunc) NULL, NULL, 0, 0, (GInstanceInitFunc) NULL, NULL };
	GType gee_map_type_id;
	gee_map_type_id = g_type_register_static (G_TYPE_INTERFACE, "GeeMap", &g_define_type_info, 0);
	g_type_interface_add_prerequisite (gee_map_type_id, G_TYPE_OBJECT);
	g_type_interface_add_prerequisite (gee_map_type_id, GEE_TYPE_ITERABLE);
	return gee_map_type_id;
}

GType
gee_map_get_type (void)
{
	static volatile gsize gee_map_type_id__once = 0;
	if (g_once_init_enter (&gee_map_type_id__once)) {
		GType gee_map_type_id;
		gee_map_type_id = gee_map_get_type_once ();
		g_once_init_leave (&gee_map_type_id__once, gee_map_type_id);
	}
	return gee_map_type_id__once;
}

