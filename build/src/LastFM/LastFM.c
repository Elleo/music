/* LastFM.c generated by valac 0.11.5, the Vala compiler
 * generated from LastFM.vala, do not modify */


#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gee.h>
#include <libxml/parser.h>
#include <libxml/tree.h>
#include <stdio.h>


#define LAST_FM_TYPE_CORE (last_fm_core_get_type ())
#define LAST_FM_CORE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), LAST_FM_TYPE_CORE, LastFMCore))
#define LAST_FM_CORE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), LAST_FM_TYPE_CORE, LastFMCoreClass))
#define LAST_FM_IS_CORE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), LAST_FM_TYPE_CORE))
#define LAST_FM_IS_CORE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), LAST_FM_TYPE_CORE))
#define LAST_FM_CORE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), LAST_FM_TYPE_CORE, LastFMCoreClass))

typedef struct _LastFMCore LastFMCore;
typedef struct _LastFMCoreClass LastFMCoreClass;
typedef struct _LastFMCorePrivate LastFMCorePrivate;

#define BEAT_BOX_TYPE_LIBRARY_MANAGER (beat_box_library_manager_get_type ())
#define BEAT_BOX_LIBRARY_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManager))
#define BEAT_BOX_LIBRARY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManagerClass))
#define BEAT_BOX_IS_LIBRARY_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER))
#define BEAT_BOX_IS_LIBRARY_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_LIBRARY_MANAGER))
#define BEAT_BOX_LIBRARY_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_LIBRARY_MANAGER, BeatBoxLibraryManagerClass))

typedef struct _BeatBoxLibraryManager BeatBoxLibraryManager;
typedef struct _BeatBoxLibraryManagerClass BeatBoxLibraryManagerClass;

#define BEAT_BOX_TYPE_SONG (beat_box_song_get_type ())
#define BEAT_BOX_SONG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSong))
#define BEAT_BOX_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))
#define BEAT_BOX_IS_SONG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_IS_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_SONG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))

typedef struct _BeatBoxSong BeatBoxSong;
typedef struct _BeatBoxSongClass BeatBoxSongClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_regex_unref0(var) ((var == NULL) ? NULL : (var = (g_regex_unref (var), NULL)))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))

struct _LastFMCore {
	GObject parent_instance;
	LastFMCorePrivate * priv;
	gchar* token;
	gchar* session_key;
};

struct _LastFMCoreClass {
	GObjectClass parent_class;
};

struct _LastFMCorePrivate {
	BeatBoxLibraryManager* _lm;
	GeeArrayList* similar;
	BeatBoxSong* similarToAdd;
};


static gpointer last_fm_core_parent_class = NULL;

GType last_fm_core_get_type (void) G_GNUC_CONST;
GType beat_box_library_manager_get_type (void) G_GNUC_CONST;
GType beat_box_song_get_type (void) G_GNUC_CONST;
#define LAST_FM_CORE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), LAST_FM_TYPE_CORE, LastFMCorePrivate))
enum  {
	LAST_FM_CORE_DUMMY_PROPERTY
};
#define LAST_FM_CORE_api "a40ea1720028bd40c66b17d7146b3f3b"
#define LAST_FM_CORE_secret "92ba5023f6868e680a3352c71e21243d"
LastFMCore* last_fm_core_new (BeatBoxLibraryManager* lm);
LastFMCore* last_fm_core_construct (GType object_type, BeatBoxLibraryManager* lm);
gchar* last_fm_core_fix_for_url (const gchar* fix);
gchar* last_fm_core_generate_md5 (LastFMCore* self, const gchar* text);
gchar* last_fm_core_generate_signature (LastFMCore* self, const gchar* token, const gchar* method);
gchar* last_fm_core_getToken (LastFMCore* self);
gchar* last_fm_core_getSessionKey (LastFMCore* self, const gchar* token);
gboolean last_fm_core_loveTrack (LastFMCore* self, const gchar* title, const gchar* artist);
gboolean last_fm_core_banTrack (LastFMCore* self, const gchar* title, const gchar* artist);
GeeArrayList* last_fm_core_getSimilarTracks (LastFMCore* self, const gchar* title, const gchar* artist);
void last_fm_core_parse_similar_nodes (LastFMCore* self, xmlNode* node, const gchar* parent);
BeatBoxSong* beat_box_song_new (const gchar* file);
BeatBoxSong* beat_box_song_construct (GType object_type, const gchar* file);
void beat_box_song_set_title (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_artist (BeatBoxSong* self, const gchar* value);
static void last_fm_core_finalize (GObject* obj);


static gpointer _g_object_ref0 (gpointer self) {
	return self ? g_object_ref (self) : NULL;
}


LastFMCore* last_fm_core_construct (GType object_type, BeatBoxLibraryManager* lm) {
	LastFMCore * self = NULL;
	BeatBoxLibraryManager* _tmp0_;
	BeatBoxLibraryManager* _tmp1_;
	g_return_val_if_fail (lm != NULL, NULL);
	self = (LastFMCore*) g_object_new (object_type, NULL);
	_tmp0_ = _g_object_ref0 (lm);
	_tmp1_ = _tmp0_;
	_g_object_unref0 (self->priv->_lm);
	self->priv->_lm = _tmp1_;
	return self;
}


LastFMCore* last_fm_core_new (BeatBoxLibraryManager* lm) {
	return last_fm_core_construct (LAST_FM_TYPE_CORE, lm);
}


/** vala sucks here **/
static gchar* string_replace (const gchar* self, const gchar* old, const gchar* replacement) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_;
	GRegex* _tmp2_ = NULL;
	GRegex* _tmp3_;
	GRegex* regex;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (old != NULL, NULL);
	g_return_val_if_fail (replacement != NULL, NULL);
	_tmp0_ = g_regex_escape_string (old, -1);
	_tmp1_ = _tmp0_;
	_tmp2_ = g_regex_new (_tmp1_, 0, 0, &_inner_error_);
	regex = (_tmp3_ = _tmp2_, _g_free0 (_tmp1_), _tmp3_);
	if (_inner_error_ != NULL) {
		if (_inner_error_->domain == G_REGEX_ERROR) {
			goto __catch40_g_regex_error;
		}
		g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	_tmp4_ = g_regex_replace_literal (regex, self, (gssize) (-1), 0, replacement, 0, &_inner_error_);
	_tmp5_ = _tmp4_;
	if (_inner_error_ != NULL) {
		_g_regex_unref0 (regex);
		if (_inner_error_->domain == G_REGEX_ERROR) {
			goto __catch40_g_regex_error;
		}
		_g_regex_unref0 (regex);
		g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
	result = _tmp5_;
	_g_regex_unref0 (regex);
	return result;
	_g_regex_unref0 (regex);
	goto __finally40;
	__catch40_g_regex_error:
	{
		GError * e;
		e = _inner_error_;
		_inner_error_ = NULL;
		g_assert_not_reached ();
		_g_error_free0 (e);
	}
	__finally40:
	if (_inner_error_ != NULL) {
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return NULL;
	}
}


gchar* last_fm_core_fix_for_url (const gchar* fix) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* fix1;
	gchar* _tmp1_ = NULL;
	gchar* fix2;
	gchar* _tmp2_ = NULL;
	gchar* fix3;
	gchar* _tmp3_ = NULL;
	gchar* fix4;
	gchar* _tmp4_ = NULL;
	gchar* fix5;
	gchar* _tmp5_ = NULL;
	gchar* fix6;
	gchar* _tmp6_ = NULL;
	gchar* fix7;
	gchar* _tmp7_ = NULL;
	gchar* fix8;
	gchar* _tmp8_ = NULL;
	gchar* fix9;
	gchar* _tmp9_ = NULL;
	gchar* fix0;
	g_return_val_if_fail (fix != NULL, NULL);
	_tmp0_ = string_replace (fix, " ", "%20");
	fix1 = _tmp0_;
	_tmp1_ = string_replace (fix1, "!", "%21");
	fix2 = _tmp1_;
	_tmp2_ = string_replace (fix2, "\"", "%22");
	fix3 = _tmp2_;
	_tmp3_ = string_replace (fix3, "#", "%23");
	fix4 = _tmp3_;
	_tmp4_ = string_replace (fix4, "$", "%24");
	fix5 = _tmp4_;
	_tmp5_ = string_replace (fix5, "&", "%26");
	fix6 = _tmp5_;
	_tmp6_ = string_replace (fix6, "'", "%27");
	fix7 = _tmp6_;
	_tmp7_ = string_replace (fix7, "(", "%28");
	fix8 = _tmp7_;
	_tmp8_ = string_replace (fix8, ")", "%29");
	fix9 = _tmp8_;
	_tmp9_ = string_replace (fix9, "*", "%2A");
	fix0 = _tmp9_;
	result = fix0;
	_g_free0 (fix9);
	_g_free0 (fix8);
	_g_free0 (fix7);
	_g_free0 (fix6);
	_g_free0 (fix5);
	_g_free0 (fix4);
	_g_free0 (fix3);
	_g_free0 (fix2);
	_g_free0 (fix1);
	return result;
}


gchar* last_fm_core_generate_md5 (LastFMCore* self, const gchar* text) {
	gchar* result = NULL;
	gint _tmp0_;
	gchar* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (text != NULL, NULL);
	_tmp0_ = strlen (text);
	_tmp1_ = g_compute_checksum_for_string (G_CHECKSUM_MD5, text, (gsize) _tmp0_);
	result = _tmp1_;
	return result;
}


gchar* last_fm_core_generate_signature (LastFMCore* self, const gchar* token, const gchar* method) {
	gchar* result = NULL;
	gchar* _tmp0_;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (token != NULL, NULL);
	g_return_val_if_fail (method != NULL, NULL);
	_tmp0_ = g_strconcat ("api_key" LAST_FM_CORE_api "method", method, NULL);
	_tmp1_ = g_strconcat (_tmp0_, "token", NULL);
	_tmp2_ = g_strconcat (_tmp1_, token, NULL);
	_tmp3_ = g_strconcat (_tmp2_, LAST_FM_CORE_secret, NULL);
	_tmp4_ = last_fm_core_generate_md5 (self, _tmp3_);
	result = (_tmp5_ = _tmp4_, _g_free0 (_tmp3_), _g_free0 (_tmp2_), _g_free0 (_tmp1_), _g_free0 (_tmp0_), _tmp5_);
	return result;
}


gchar* last_fm_core_getToken (LastFMCore* self) {
	gchar* result = NULL;
	gchar* _tmp0_;
	gchar* url;
	xmlDoc* _tmp1_ = NULL;
	xmlDoc* doc;
	xmlNode* _tmp2_ = NULL;
	xmlNode* root;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup ("http://ws.audioscrobbler.com/2.0/?method=auth.gettoken&api_key=" LAST_FM_CORE_api);
	url = _tmp0_;
	_tmp1_ = xmlParseFile (url);
	doc = _tmp1_;
	if (doc == NULL) {
		result = NULL;
		_g_free0 (url);
		return result;
	}
	_tmp2_ = xmlDocGetRootElement (doc);
	root = _tmp2_;
	if (root == NULL) {
		result = NULL;
		_g_free0 (url);
		return result;
	}
	{
		xmlNode* iter;
		iter = root->children;
		{
			gboolean _tmp3_;
			_tmp3_ = TRUE;
			while (TRUE) {
				if (!_tmp3_) {
					iter = iter->next;
				}
				_tmp3_ = FALSE;
				if (!(iter != NULL)) {
					break;
				}
				if (g_strcmp0 (iter->name, "token") == 0) {
					gchar* _tmp4_ = NULL;
					_tmp4_ = xmlNodeGetContent (iter);
					result = _tmp4_;
					_g_free0 (url);
					return result;
				}
			}
		}
	}
	result = NULL;
	_g_free0 (url);
	return result;
}


gchar* last_fm_core_getSessionKey (LastFMCore* self, const gchar* token) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* _tmp1_;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* url;
	xmlDoc* _tmp5_ = NULL;
	xmlDoc* doc;
	xmlNode* _tmp6_ = NULL;
	xmlNode* root;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (token != NULL, NULL);
	_tmp0_ = last_fm_core_generate_signature (self, token, "auth.getSession");
	_tmp1_ = _tmp0_;
	_tmp2_ = g_strconcat ("http://ws.audioscrobbler.com/2.0/?method=auth.getSession&api_key=" LAST_FM_CORE_api "&api_sig=", _tmp1_, NULL);
	_tmp3_ = g_strconcat (_tmp2_, "&token=", NULL);
	url = (_tmp4_ = g_strconcat (_tmp3_, token, NULL), _g_free0 (_tmp3_), _g_free0 (_tmp2_), _g_free0 (_tmp1_), _tmp4_);
	_tmp5_ = xmlParseFile (url);
	doc = _tmp5_;
	if (doc == NULL) {
		result = NULL;
		_g_free0 (url);
		return result;
	}
	_tmp6_ = xmlDocGetRootElement (doc);
	root = _tmp6_;
	if (root == NULL) {
		result = NULL;
		_g_free0 (url);
		return result;
	}
	{
		xmlNode* iter;
		iter = root->children;
		{
			gboolean _tmp7_;
			_tmp7_ = TRUE;
			while (TRUE) {
				if (!_tmp7_) {
					iter = iter->next;
				}
				_tmp7_ = FALSE;
				if (!(iter != NULL)) {
					break;
				}
				if (g_strcmp0 (iter->name, "session") == 0) {
					{
						xmlNode* n;
						n = iter->children;
						{
							gboolean _tmp8_;
							_tmp8_ = TRUE;
							while (TRUE) {
								if (!_tmp8_) {
									n = n->next;
								}
								_tmp8_ = FALSE;
								if (!(n != NULL)) {
									break;
								}
								if (g_strcmp0 (n->name, "key") == 0) {
									gchar* _tmp9_ = NULL;
									_tmp9_ = xmlNodeGetContent (n);
									result = _tmp9_;
									_g_free0 (url);
									return result;
								}
							}
						}
					}
				}
			}
		}
	}
	result = NULL;
	_g_free0 (url);
	return result;
}


gboolean last_fm_core_loveTrack (LastFMCore* self, const gchar* title, const gchar* artist) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (title != NULL, FALSE);
	g_return_val_if_fail (artist != NULL, FALSE);
	result = FALSE;
	return result;
}


gboolean last_fm_core_banTrack (LastFMCore* self, const gchar* title, const gchar* artist) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (title != NULL, FALSE);
	g_return_val_if_fail (artist != NULL, FALSE);
	result = FALSE;
	return result;
}


/** Gets similar songs
 * @param artist The artist of song to get similar to
 * @param title The title of song to get similar to
 * @return The songs that are similar
 */
GeeArrayList* last_fm_core_getSimilarTracks (LastFMCore* self, const gchar* title, const gchar* artist) {
	GeeArrayList* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* artist_fixed;
	gchar* _tmp1_ = NULL;
	gchar* title_fixed;
	gchar* _tmp2_;
	gchar* _tmp3_;
	gchar* _tmp4_;
	gchar* _tmp5_;
	gchar* _tmp6_;
	gchar* url;
	xmlDoc* _tmp7_ = NULL;
	xmlDoc* doc;
	GeeArrayList* _tmp14_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (title != NULL, NULL);
	g_return_val_if_fail (artist != NULL, NULL);
	_tmp0_ = last_fm_core_fix_for_url (artist);
	artist_fixed = _tmp0_;
	_tmp1_ = last_fm_core_fix_for_url (title);
	title_fixed = _tmp1_;
	_tmp2_ = g_strconcat ("http://ws.audioscrobbler.com/2.0/?method=track.getsimilar&artist=", artist_fixed, NULL);
	_tmp3_ = g_strconcat (_tmp2_, "&track=", NULL);
	_tmp4_ = g_strconcat (_tmp3_, title_fixed, NULL);
	_tmp5_ = g_strconcat (_tmp4_, "&api_key=", NULL);
	url = (_tmp6_ = g_strconcat (_tmp5_, LAST_FM_CORE_api, NULL), _g_free0 (_tmp5_), _g_free0 (_tmp4_), _g_free0 (_tmp3_), _g_free0 (_tmp2_), _tmp6_);
	_tmp7_ = xmlParseFile (url);
	doc = _tmp7_;
	if (doc == NULL) {
		fprintf (stdout, "Could not load similar artist information for %s by %s", title, artist);
	} else {
		xmlNode* _tmp8_ = NULL;
		_tmp8_ = xmlDocGetRootElement (doc);
		if (_tmp8_ == NULL) {
			fprintf (stdout, "Oddly, similar artist information was invalid");
		} else {
			GeeArrayList* _tmp9_ = NULL;
			GeeArrayList* _tmp10_;
			BeatBoxSong* _tmp11_;
			xmlNode* _tmp12_ = NULL;
			GeeArrayList* _tmp13_;
			_tmp9_ = gee_array_list_new (BEAT_BOX_TYPE_SONG, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
			_tmp10_ = _tmp9_;
			_g_object_unref0 (self->priv->similar);
			self->priv->similar = _tmp10_;
			_tmp11_ = NULL;
			_g_object_unref0 (self->priv->similarToAdd);
			self->priv->similarToAdd = _tmp11_;
			_tmp12_ = xmlDocGetRootElement (doc);
			last_fm_core_parse_similar_nodes (self, _tmp12_, "");
			_tmp13_ = _g_object_ref0 (self->priv->similar);
			result = _tmp13_;
			_g_free0 (url);
			_g_free0 (title_fixed);
			_g_free0 (artist_fixed);
			return result;
		}
	}
	_tmp14_ = gee_array_list_new (BEAT_BOX_TYPE_SONG, (GBoxedCopyFunc) g_object_ref, g_object_unref, NULL);
	result = _tmp14_;
	_g_free0 (url);
	_g_free0 (title_fixed);
	_g_free0 (artist_fixed);
	return result;
}


void last_fm_core_parse_similar_nodes (LastFMCore* self, xmlNode* node, const gchar* parent) {
	g_return_if_fail (self != NULL);
	g_return_if_fail (parent != NULL);
	{
		xmlNode* iter;
		iter = node->children;
		{
			gboolean _tmp0_;
			_tmp0_ = TRUE;
			while (TRUE) {
				gchar* _tmp1_;
				gchar* node_name;
				gchar* _tmp2_ = NULL;
				gchar* node_content;
				gchar* _tmp5_;
				if (!_tmp0_) {
					iter = iter->next;
				}
				_tmp0_ = FALSE;
				if (!(iter != NULL)) {
					break;
				}
				if (iter->type != XML_ELEMENT_NODE) {
					continue;
				}
				_tmp1_ = g_strdup (iter->name);
				node_name = _tmp1_;
				_tmp2_ = xmlNodeGetContent (iter);
				node_content = _tmp2_;
				if (g_strcmp0 (parent, "similartrackstrack") == 0) {
					if (g_strcmp0 (node_name, "name") == 0) {
						BeatBoxSong* _tmp3_ = NULL;
						BeatBoxSong* _tmp4_;
						if (self->priv->similarToAdd != NULL) {
							gee_abstract_collection_add ((GeeAbstractCollection*) self->priv->similar, self->priv->similarToAdd);
						}
						_tmp3_ = beat_box_song_new ("");
						_tmp4_ = _tmp3_;
						_g_object_unref0 (self->priv->similarToAdd);
						self->priv->similarToAdd = _tmp4_;
						beat_box_song_set_title (self->priv->similarToAdd, node_content);
					}
				} else {
					if (g_strcmp0 (parent, "similartrackstrackartist") == 0) {
						if (g_strcmp0 (node_name, "name") == 0) {
							beat_box_song_set_artist (self->priv->similarToAdd, node_content);
						}
					}
				}
				_tmp5_ = g_strconcat (parent, node_name, NULL);
				last_fm_core_parse_similar_nodes (self, iter, _tmp5_);
				_g_free0 (_tmp5_);
				_g_free0 (node_content);
				_g_free0 (node_name);
			}
		}
	}
}


static void last_fm_core_class_init (LastFMCoreClass * klass) {
	last_fm_core_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (LastFMCorePrivate));
	G_OBJECT_CLASS (klass)->finalize = last_fm_core_finalize;
}


static void last_fm_core_instance_init (LastFMCore * self) {
	self->priv = LAST_FM_CORE_GET_PRIVATE (self);
}


static void last_fm_core_finalize (GObject* obj) {
	LastFMCore * self;
	self = LAST_FM_CORE (obj);
	_g_object_unref0 (self->priv->_lm);
	_g_free0 (self->token);
	_g_free0 (self->session_key);
	_g_object_unref0 (self->priv->similar);
	_g_object_unref0 (self->priv->similarToAdd);
	G_OBJECT_CLASS (last_fm_core_parent_class)->finalize (obj);
}


/** Queries last.fm for information and similar tracks. yay. third try.
 * @author Scott Ringwelski
*/
GType last_fm_core_get_type (void) {
	static volatile gsize last_fm_core_type_id__volatile = 0;
	if (g_once_init_enter (&last_fm_core_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (LastFMCoreClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) last_fm_core_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (LastFMCore), 0, (GInstanceInitFunc) last_fm_core_instance_init, NULL };
		GType last_fm_core_type_id;
		last_fm_core_type_id = g_type_register_static (G_TYPE_OBJECT, "LastFMCore", &g_define_type_info, 0);
		g_once_init_leave (&last_fm_core_type_id__volatile, last_fm_core_type_id);
	}
	return last_fm_core_type_id__volatile;
}



