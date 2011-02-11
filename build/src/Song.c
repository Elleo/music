/* Song.c generated by valac 0.11.5, the Vala compiler
 * generated from Song.vala, do not modify */

/*using Gst;*/

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define BEAT_BOX_TYPE_SONG (beat_box_song_get_type ())
#define BEAT_BOX_SONG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSong))
#define BEAT_BOX_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))
#define BEAT_BOX_IS_SONG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_IS_SONG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), BEAT_BOX_TYPE_SONG))
#define BEAT_BOX_SONG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), BEAT_BOX_TYPE_SONG, BeatBoxSongClass))

typedef struct _BeatBoxSong BeatBoxSong;
typedef struct _BeatBoxSongClass BeatBoxSongClass;
typedef struct _BeatBoxSongPrivate BeatBoxSongPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _BeatBoxSong {
	GObject parent_instance;
	BeatBoxSongPrivate * priv;
};

struct _BeatBoxSongClass {
	GObjectClass parent_class;
};

struct _BeatBoxSongPrivate {
	gchar* _file;
	gchar* _file_name;
	gchar* _file_directory;
	gint _file_size;
	gint _rowid;
	gchar* _title;
	gchar* _artist;
	gchar* _album;
	gchar* _genre;
	gchar* _comment;
	gint _year;
	gint _track;
	gint _bitrate;
	gint _length;
	gint _samplerate;
	gint _bpm;
	gint _rating;
	gint _score;
	gint _play_count;
	gint _skip_count;
	gint _date_added;
	gint _last_played;
};


static gpointer beat_box_song_parent_class = NULL;

GType beat_box_song_get_type (void) G_GNUC_CONST;
#define BEAT_BOX_SONG_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), BEAT_BOX_TYPE_SONG, BeatBoxSongPrivate))
enum  {
	BEAT_BOX_SONG_DUMMY_PROPERTY,
	BEAT_BOX_SONG_FILE,
	BEAT_BOX_SONG_FILE_DIRECTORY,
	BEAT_BOX_SONG_FILE_NAME,
	BEAT_BOX_SONG_FILE_SIZE,
	BEAT_BOX_SONG_ROWID,
	BEAT_BOX_SONG_TITLE,
	BEAT_BOX_SONG_ARTIST,
	BEAT_BOX_SONG_ALBUM,
	BEAT_BOX_SONG_GENRE,
	BEAT_BOX_SONG_COMMENT,
	BEAT_BOX_SONG_YEAR,
	BEAT_BOX_SONG_TRACK,
	BEAT_BOX_SONG_BITRATE,
	BEAT_BOX_SONG_LENGTH,
	BEAT_BOX_SONG_SAMPLERATE,
	BEAT_BOX_SONG_BPM,
	BEAT_BOX_SONG_RATING,
	BEAT_BOX_SONG_SCORE,
	BEAT_BOX_SONG_PLAY_COUNT,
	BEAT_BOX_SONG_SKIP_COUNT,
	BEAT_BOX_SONG_LAST_PLAYED,
	BEAT_BOX_SONG_DATE_ADDED
};
BeatBoxSong* beat_box_song_new (const gchar* file);
BeatBoxSong* beat_box_song_construct (GType object_type, const gchar* file);
void beat_box_song_set_file (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_file_name (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_file_directory (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_file_size (BeatBoxSong* self, gint value);
void beat_box_song_set_rowid (BeatBoxSong* self, gint value);
void beat_box_song_set_track (BeatBoxSong* self, gint value);
void beat_box_song_set_title (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_artist (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_album (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_genre (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_comment (BeatBoxSong* self, const gchar* value);
void beat_box_song_set_year (BeatBoxSong* self, gint value);
void beat_box_song_set_bitrate (BeatBoxSong* self, gint value);
void beat_box_song_set_length (BeatBoxSong* self, gint value);
void beat_box_song_set_samplerate (BeatBoxSong* self, gint value);
void beat_box_song_set_bpm (BeatBoxSong* self, gint value);
void beat_box_song_set_rating (BeatBoxSong* self, gint value);
void beat_box_song_set_score (BeatBoxSong* self, gint value);
void beat_box_song_set_play_count (BeatBoxSong* self, gint value);
void beat_box_song_set_skip_count (BeatBoxSong* self, gint value);
void beat_box_song_set_date_added (BeatBoxSong* self, gint value);
void beat_box_song_set_last_played (BeatBoxSong* self, gint value);
gchar* beat_box_song_pretty_length (BeatBoxSong* self);
gint beat_box_song_calculate_score (BeatBoxSong* self);
gchar* beat_box_song_pretty_last_played (BeatBoxSong* self);
gint beat_box_song_get_last_played (BeatBoxSong* self);
gchar* beat_box_song_pretty_date_added (BeatBoxSong* self);
gint beat_box_song_get_date_added (BeatBoxSong* self);
BeatBoxSong* beat_box_song_copy (BeatBoxSong* self);
const gchar* beat_box_song_get_file_name (BeatBoxSong* self);
const gchar* beat_box_song_get_file_directory (BeatBoxSong* self);
gint beat_box_song_get_file_size (BeatBoxSong* self);
gint beat_box_song_get_rowid (BeatBoxSong* self);
gint beat_box_song_get_track (BeatBoxSong* self);
const gchar* beat_box_song_get_title (BeatBoxSong* self);
const gchar* beat_box_song_get_artist (BeatBoxSong* self);
const gchar* beat_box_song_get_album (BeatBoxSong* self);
const gchar* beat_box_song_get_genre (BeatBoxSong* self);
const gchar* beat_box_song_get_comment (BeatBoxSong* self);
gint beat_box_song_get_year (BeatBoxSong* self);
gint beat_box_song_get_bitrate (BeatBoxSong* self);
gint beat_box_song_get_length (BeatBoxSong* self);
gint beat_box_song_get_samplerate (BeatBoxSong* self);
gint beat_box_song_get_bpm (BeatBoxSong* self);
gint beat_box_song_get_rating (BeatBoxSong* self);
gint beat_box_song_get_score (BeatBoxSong* self);
gint beat_box_song_get_play_count (BeatBoxSong* self);
gint beat_box_song_get_skip_count (BeatBoxSong* self);
const gchar* beat_box_song_get_file (BeatBoxSong* self);
static void beat_box_song_finalize (GObject* obj);
static void _vala_beat_box_song_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_beat_box_song_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


BeatBoxSong* beat_box_song_construct (GType object_type, const gchar* file) {
	BeatBoxSong * self = NULL;
	g_return_val_if_fail (file != NULL, NULL);
	self = (BeatBoxSong*) g_object_new (object_type, NULL);
	beat_box_song_set_file (self, file);
	beat_box_song_set_file_name (self, "");
	beat_box_song_set_file_directory (self, "");
	beat_box_song_set_file_size (self, 0);
	beat_box_song_set_rowid (self, 0);
	beat_box_song_set_track (self, 0);
	beat_box_song_set_title (self, "Unkown Title");
	beat_box_song_set_artist (self, "Unkown Artist");
	beat_box_song_set_album (self, "Unknown Album");
	beat_box_song_set_genre (self, "");
	beat_box_song_set_comment (self, "");
	beat_box_song_set_year (self, 0);
	beat_box_song_set_bitrate (self, 0);
	beat_box_song_set_length (self, 0);
	beat_box_song_set_samplerate (self, 0);
	beat_box_song_set_bpm (self, 0);
	beat_box_song_set_rating (self, 0);
	beat_box_song_set_score (self, 0);
	beat_box_song_set_play_count (self, 0);
	beat_box_song_set_skip_count (self, 0);
	beat_box_song_set_date_added (self, 0);
	beat_box_song_set_last_played (self, 0);
	return self;
}


BeatBoxSong* beat_box_song_new (const gchar* file) {
	return beat_box_song_construct (BEAT_BOX_TYPE_SONG, file);
}


gchar* beat_box_song_pretty_length (BeatBoxSong* self) {
	gchar* result = NULL;
	gint minute;
	gint seconds;
	gchar* _tmp0_ = NULL;
	gchar* _tmp6_ = NULL;
	gchar* _tmp7_;
	gchar* _tmp8_;
	gchar* _tmp9_;
	g_return_val_if_fail (self != NULL, NULL);
	minute = 0;
	seconds = self->priv->_length;
	while (TRUE) {
		if (!(seconds >= 60)) {
			break;
		}
		minute = minute + 1;
		seconds = seconds - 60;
	}
	if (seconds < 10) {
		gchar* _tmp1_ = NULL;
		gchar* _tmp2_;
		gchar* _tmp3_;
		_tmp1_ = g_strdup_printf ("%i", seconds);
		_tmp2_ = _tmp1_;
		_tmp3_ = g_strconcat ("0", _tmp2_, NULL);
		_g_free0 (_tmp0_);
		_tmp0_ = _tmp3_;
		_g_free0 (_tmp2_);
	} else {
		gchar* _tmp4_ = NULL;
		gchar* _tmp5_;
		_tmp4_ = g_strdup_printf ("%i", seconds);
		_tmp5_ = _tmp4_;
		_g_free0 (_tmp0_);
		_tmp0_ = _tmp5_;
	}
	_tmp6_ = g_strdup_printf ("%i", minute);
	_tmp7_ = _tmp6_;
	_tmp8_ = g_strconcat (_tmp7_, ":", NULL);
	result = (_tmp9_ = g_strconcat (_tmp8_, _tmp0_, NULL), _g_free0 (_tmp8_), _g_free0 (_tmp7_), _tmp9_);
	_g_free0 (_tmp0_);
	return result;
}


gint beat_box_song_calculate_score (BeatBoxSong* self) {
	gint result = 0;
	g_return_val_if_fail (self != NULL, 0);
	result = 1;
	return result;
}


static void g_time_local (time_t time, struct tm* result) {
	struct tm _result_ = {0};
	struct tm _tmp0_ = {0};
	localtime_r (&time, &_tmp0_);
	_result_ = _tmp0_;
	*result = _result_;
	return;
}


static gchar* g_time_format (struct tm *self, const gchar* format) {
	gchar* result = NULL;
	gchar* _tmp0_ = NULL;
	gchar* buffer;
	gint buffer_length1;
	gint _buffer_size_;
	gchar* _tmp1_;
	g_return_val_if_fail (format != NULL, NULL);
	_tmp0_ = g_new0 (gchar, 64);
	buffer = _tmp0_;
	buffer_length1 = 64;
	_buffer_size_ = 64;
	strftime (buffer, buffer_length1, format, &(*self));
	_tmp1_ = g_strdup ((const gchar*) buffer);
	result = _tmp1_;
	buffer = (g_free (buffer), NULL);
	return result;
}


gchar* beat_box_song_pretty_last_played (BeatBoxSong* self) {
	gchar* result = NULL;
	gint _tmp0_;
	struct tm _tmp1_ = {0};
	struct tm _tmp2_ = {0};
	struct tm t;
	gchar* _tmp3_ = NULL;
	gchar* rv;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = beat_box_song_get_last_played (self);
	_tmp2_ = (g_time_local ((time_t) _tmp0_, &_tmp1_), _tmp1_);
	t = _tmp2_;
	_tmp3_ = g_time_format (&t, "%m/%e/%Y %l:%M %p");
	rv = _tmp3_;
	result = rv;
	return result;
}


gchar* beat_box_song_pretty_date_added (BeatBoxSong* self) {
	gchar* result = NULL;
	gint _tmp0_;
	struct tm _tmp1_ = {0};
	struct tm _tmp2_ = {0};
	struct tm t;
	gchar* _tmp3_ = NULL;
	gchar* rv;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = beat_box_song_get_date_added (self);
	_tmp2_ = (g_time_local ((time_t) _tmp0_, &_tmp1_), _tmp1_);
	t = _tmp2_;
	_tmp3_ = g_time_format (&t, "%m/%e/%Y %l:%M %p");
	rv = _tmp3_;
	result = rv;
	return result;
}


BeatBoxSong* beat_box_song_copy (BeatBoxSong* self) {
	BeatBoxSong* result = NULL;
	BeatBoxSong* _tmp0_ = NULL;
	BeatBoxSong* rv;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	gint _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	const gchar* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	const gchar* _tmp8_ = NULL;
	const gchar* _tmp9_ = NULL;
	const gchar* _tmp10_ = NULL;
	gint _tmp11_;
	gint _tmp12_;
	gint _tmp13_;
	gint _tmp14_;
	gint _tmp15_;
	gint _tmp16_;
	gint _tmp17_;
	gint _tmp18_;
	gint _tmp19_;
	gint _tmp20_;
	gint _tmp21_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = beat_box_song_new (self->priv->_file);
	rv = _tmp0_;
	_tmp1_ = beat_box_song_get_file_name (self);
	beat_box_song_set_file_name (rv, _tmp1_);
	_tmp2_ = beat_box_song_get_file_directory (self);
	beat_box_song_set_file_directory (rv, _tmp2_);
	_tmp3_ = beat_box_song_get_file_size (self);
	beat_box_song_set_file_size (rv, _tmp3_);
	_tmp4_ = beat_box_song_get_rowid (self);
	beat_box_song_set_rowid (rv, _tmp4_);
	_tmp5_ = beat_box_song_get_track (self);
	beat_box_song_set_track (rv, _tmp5_);
	_tmp6_ = beat_box_song_get_title (self);
	beat_box_song_set_title (rv, _tmp6_);
	_tmp7_ = beat_box_song_get_artist (self);
	beat_box_song_set_artist (rv, _tmp7_);
	_tmp8_ = beat_box_song_get_album (self);
	beat_box_song_set_album (rv, _tmp8_);
	_tmp9_ = beat_box_song_get_genre (self);
	beat_box_song_set_genre (rv, _tmp9_);
	_tmp10_ = beat_box_song_get_comment (self);
	beat_box_song_set_comment (rv, _tmp10_);
	_tmp11_ = beat_box_song_get_year (self);
	beat_box_song_set_year (rv, _tmp11_);
	_tmp12_ = beat_box_song_get_bitrate (self);
	beat_box_song_set_bitrate (rv, _tmp12_);
	_tmp13_ = beat_box_song_get_length (self);
	beat_box_song_set_length (rv, _tmp13_);
	_tmp14_ = beat_box_song_get_samplerate (self);
	beat_box_song_set_samplerate (rv, _tmp14_);
	_tmp15_ = beat_box_song_get_bpm (self);
	beat_box_song_set_bpm (rv, _tmp15_);
	_tmp16_ = beat_box_song_get_rating (self);
	beat_box_song_set_rating (rv, _tmp16_);
	_tmp17_ = beat_box_song_get_score (self);
	beat_box_song_set_score (rv, _tmp17_);
	_tmp18_ = beat_box_song_get_play_count (self);
	beat_box_song_set_play_count (rv, _tmp18_);
	_tmp19_ = beat_box_song_get_skip_count (self);
	beat_box_song_set_skip_count (rv, _tmp19_);
	_tmp20_ = beat_box_song_get_date_added (self);
	beat_box_song_set_date_added (rv, _tmp20_);
	_tmp21_ = beat_box_song_get_last_played (self);
	beat_box_song_set_last_played (rv, _tmp21_);
	result = rv;
	return result;
}


const gchar* beat_box_song_get_file (BeatBoxSong* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_file;
	return result;
}


void beat_box_song_set_file (BeatBoxSong* self, const gchar* value) {
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_tmp1_ = _tmp0_;
	_g_free0 (self->priv->_file);
	self->priv->_file = _tmp1_;
	g_object_notify ((GObject *) self, "file");
}


const gchar* beat_box_song_get_file_directory (BeatBoxSong* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_file_directory;
	return result;
}


void beat_box_song_set_file_directory (BeatBoxSong* self, const gchar* value) {
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_tmp1_ = _tmp0_;
	_g_free0 (self->priv->_file_directory);
	self->priv->_file_directory = _tmp1_;
	g_object_notify ((GObject *) self, "file-directory");
}


const gchar* beat_box_song_get_file_name (BeatBoxSong* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_file_name;
	return result;
}


void beat_box_song_set_file_name (BeatBoxSong* self, const gchar* value) {
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_tmp1_ = _tmp0_;
	_g_free0 (self->priv->_file_name);
	self->priv->_file_name = _tmp1_;
	g_object_notify ((GObject *) self, "file-name");
}


gint beat_box_song_get_file_size (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_file_size;
	return result;
}


void beat_box_song_set_file_size (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_file_size = value;
	g_object_notify ((GObject *) self, "file-size");
}


gint beat_box_song_get_rowid (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_rowid;
	return result;
}


void beat_box_song_set_rowid (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_rowid = value;
	g_object_notify ((GObject *) self, "rowid");
}


const gchar* beat_box_song_get_title (BeatBoxSong* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_title;
	return result;
}


void beat_box_song_set_title (BeatBoxSong* self, const gchar* value) {
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_tmp1_ = _tmp0_;
	_g_free0 (self->priv->_title);
	self->priv->_title = _tmp1_;
	g_object_notify ((GObject *) self, "title");
}


const gchar* beat_box_song_get_artist (BeatBoxSong* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_artist;
	return result;
}


void beat_box_song_set_artist (BeatBoxSong* self, const gchar* value) {
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_tmp1_ = _tmp0_;
	_g_free0 (self->priv->_artist);
	self->priv->_artist = _tmp1_;
	g_object_notify ((GObject *) self, "artist");
}


const gchar* beat_box_song_get_album (BeatBoxSong* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_album;
	return result;
}


void beat_box_song_set_album (BeatBoxSong* self, const gchar* value) {
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_tmp1_ = _tmp0_;
	_g_free0 (self->priv->_album);
	self->priv->_album = _tmp1_;
	g_object_notify ((GObject *) self, "album");
}


const gchar* beat_box_song_get_genre (BeatBoxSong* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_genre;
	return result;
}


void beat_box_song_set_genre (BeatBoxSong* self, const gchar* value) {
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_tmp1_ = _tmp0_;
	_g_free0 (self->priv->_genre);
	self->priv->_genre = _tmp1_;
	g_object_notify ((GObject *) self, "genre");
}


const gchar* beat_box_song_get_comment (BeatBoxSong* self) {
	const gchar* result;
	g_return_val_if_fail (self != NULL, NULL);
	result = self->priv->_comment;
	return result;
}


void beat_box_song_set_comment (BeatBoxSong* self, const gchar* value) {
	gchar* _tmp0_;
	gchar* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = g_strdup (value);
	_tmp1_ = _tmp0_;
	_g_free0 (self->priv->_comment);
	self->priv->_comment = _tmp1_;
	g_object_notify ((GObject *) self, "comment");
}


gint beat_box_song_get_year (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_year;
	return result;
}


void beat_box_song_set_year (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_year = value;
	g_object_notify ((GObject *) self, "year");
}


gint beat_box_song_get_track (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_track;
	return result;
}


void beat_box_song_set_track (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_track = value;
	g_object_notify ((GObject *) self, "track");
}


gint beat_box_song_get_bitrate (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_bitrate;
	return result;
}


void beat_box_song_set_bitrate (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_bitrate = value;
	g_object_notify ((GObject *) self, "bitrate");
}


gint beat_box_song_get_length (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_length;
	return result;
}


void beat_box_song_set_length (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_length = value;
	g_object_notify ((GObject *) self, "length");
}


gint beat_box_song_get_samplerate (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_samplerate;
	return result;
}


void beat_box_song_set_samplerate (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_samplerate = value;
	g_object_notify ((GObject *) self, "samplerate");
}


gint beat_box_song_get_bpm (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_bpm;
	return result;
}


void beat_box_song_set_bpm (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_bpm = value;
	g_object_notify ((GObject *) self, "bpm");
}


gint beat_box_song_get_rating (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_rating;
	return result;
}


void beat_box_song_set_rating (BeatBoxSong* self, gint value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	if (value >= 0) {
		_tmp0_ = value <= 5;
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		self->priv->_rating = value;
	}
	g_object_notify ((GObject *) self, "rating");
}


gint beat_box_song_get_score (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_score;
	return result;
}


void beat_box_song_set_score (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_score = value;
	g_object_notify ((GObject *) self, "score");
}


gint beat_box_song_get_play_count (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_play_count;
	return result;
}


void beat_box_song_set_play_count (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_play_count = value;
	g_object_notify ((GObject *) self, "play-count");
}


gint beat_box_song_get_skip_count (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_skip_count;
	return result;
}


void beat_box_song_set_skip_count (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_skip_count = value;
	g_object_notify ((GObject *) self, "skip-count");
}


gint beat_box_song_get_last_played (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_last_played;
	return result;
}


void beat_box_song_set_last_played (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_last_played = value;
	g_object_notify ((GObject *) self, "last-played");
}


gint beat_box_song_get_date_added (BeatBoxSong* self) {
	gint result;
	g_return_val_if_fail (self != NULL, 0);
	result = self->priv->_date_added;
	return result;
}


void beat_box_song_set_date_added (BeatBoxSong* self, gint value) {
	g_return_if_fail (self != NULL);
	self->priv->_date_added = value;
	g_object_notify ((GObject *) self, "date-added");
}


static void beat_box_song_class_init (BeatBoxSongClass * klass) {
	beat_box_song_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (BeatBoxSongPrivate));
	G_OBJECT_CLASS (klass)->get_property = _vala_beat_box_song_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_beat_box_song_set_property;
	G_OBJECT_CLASS (klass)->finalize = beat_box_song_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_FILE, g_param_spec_string ("file", "file", "file", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_FILE_DIRECTORY, g_param_spec_string ("file-directory", "file-directory", "file-directory", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_FILE_NAME, g_param_spec_string ("file-name", "file-name", "file-name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_FILE_SIZE, g_param_spec_int ("file-size", "file-size", "file-size", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_ROWID, g_param_spec_int ("rowid", "rowid", "rowid", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_TITLE, g_param_spec_string ("title", "title", "title", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_ARTIST, g_param_spec_string ("artist", "artist", "artist", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_ALBUM, g_param_spec_string ("album", "album", "album", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_GENRE, g_param_spec_string ("genre", "genre", "genre", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_COMMENT, g_param_spec_string ("comment", "comment", "comment", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_YEAR, g_param_spec_int ("year", "year", "year", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_TRACK, g_param_spec_int ("track", "track", "track", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_BITRATE, g_param_spec_int ("bitrate", "bitrate", "bitrate", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_LENGTH, g_param_spec_int ("length", "length", "length", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_SAMPLERATE, g_param_spec_int ("samplerate", "samplerate", "samplerate", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_BPM, g_param_spec_int ("bpm", "bpm", "bpm", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_RATING, g_param_spec_int ("rating", "rating", "rating", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_SCORE, g_param_spec_int ("score", "score", "score", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_PLAY_COUNT, g_param_spec_int ("play-count", "play-count", "play-count", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_SKIP_COUNT, g_param_spec_int ("skip-count", "skip-count", "skip-count", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_LAST_PLAYED, g_param_spec_int ("last-played", "last-played", "last-played", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
	g_object_class_install_property (G_OBJECT_CLASS (klass), BEAT_BOX_SONG_DATE_ADDED, g_param_spec_int ("date-added", "date-added", "date-added", G_MININT, G_MAXINT, 0, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void beat_box_song_instance_init (BeatBoxSong * self) {
	self->priv = BEAT_BOX_SONG_GET_PRIVATE (self);
}


static void beat_box_song_finalize (GObject* obj) {
	BeatBoxSong * self;
	self = BEAT_BOX_SONG (obj);
	_g_free0 (self->priv->_file);
	_g_free0 (self->priv->_file_name);
	_g_free0 (self->priv->_file_directory);
	_g_free0 (self->priv->_title);
	_g_free0 (self->priv->_artist);
	_g_free0 (self->priv->_album);
	_g_free0 (self->priv->_genre);
	_g_free0 (self->priv->_comment);
	G_OBJECT_CLASS (beat_box_song_parent_class)->finalize (obj);
}


GType beat_box_song_get_type (void) {
	static volatile gsize beat_box_song_type_id__volatile = 0;
	if (g_once_init_enter (&beat_box_song_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (BeatBoxSongClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) beat_box_song_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (BeatBoxSong), 0, (GInstanceInitFunc) beat_box_song_instance_init, NULL };
		GType beat_box_song_type_id;
		beat_box_song_type_id = g_type_register_static (G_TYPE_OBJECT, "BeatBoxSong", &g_define_type_info, 0);
		g_once_init_leave (&beat_box_song_type_id__volatile, beat_box_song_type_id);
	}
	return beat_box_song_type_id__volatile;
}


static void _vala_beat_box_song_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	BeatBoxSong * self;
	self = BEAT_BOX_SONG (object);
	switch (property_id) {
		case BEAT_BOX_SONG_FILE:
		g_value_set_string (value, beat_box_song_get_file (self));
		break;
		case BEAT_BOX_SONG_FILE_DIRECTORY:
		g_value_set_string (value, beat_box_song_get_file_directory (self));
		break;
		case BEAT_BOX_SONG_FILE_NAME:
		g_value_set_string (value, beat_box_song_get_file_name (self));
		break;
		case BEAT_BOX_SONG_FILE_SIZE:
		g_value_set_int (value, beat_box_song_get_file_size (self));
		break;
		case BEAT_BOX_SONG_ROWID:
		g_value_set_int (value, beat_box_song_get_rowid (self));
		break;
		case BEAT_BOX_SONG_TITLE:
		g_value_set_string (value, beat_box_song_get_title (self));
		break;
		case BEAT_BOX_SONG_ARTIST:
		g_value_set_string (value, beat_box_song_get_artist (self));
		break;
		case BEAT_BOX_SONG_ALBUM:
		g_value_set_string (value, beat_box_song_get_album (self));
		break;
		case BEAT_BOX_SONG_GENRE:
		g_value_set_string (value, beat_box_song_get_genre (self));
		break;
		case BEAT_BOX_SONG_COMMENT:
		g_value_set_string (value, beat_box_song_get_comment (self));
		break;
		case BEAT_BOX_SONG_YEAR:
		g_value_set_int (value, beat_box_song_get_year (self));
		break;
		case BEAT_BOX_SONG_TRACK:
		g_value_set_int (value, beat_box_song_get_track (self));
		break;
		case BEAT_BOX_SONG_BITRATE:
		g_value_set_int (value, beat_box_song_get_bitrate (self));
		break;
		case BEAT_BOX_SONG_LENGTH:
		g_value_set_int (value, beat_box_song_get_length (self));
		break;
		case BEAT_BOX_SONG_SAMPLERATE:
		g_value_set_int (value, beat_box_song_get_samplerate (self));
		break;
		case BEAT_BOX_SONG_BPM:
		g_value_set_int (value, beat_box_song_get_bpm (self));
		break;
		case BEAT_BOX_SONG_RATING:
		g_value_set_int (value, beat_box_song_get_rating (self));
		break;
		case BEAT_BOX_SONG_SCORE:
		g_value_set_int (value, beat_box_song_get_score (self));
		break;
		case BEAT_BOX_SONG_PLAY_COUNT:
		g_value_set_int (value, beat_box_song_get_play_count (self));
		break;
		case BEAT_BOX_SONG_SKIP_COUNT:
		g_value_set_int (value, beat_box_song_get_skip_count (self));
		break;
		case BEAT_BOX_SONG_LAST_PLAYED:
		g_value_set_int (value, beat_box_song_get_last_played (self));
		break;
		case BEAT_BOX_SONG_DATE_ADDED:
		g_value_set_int (value, beat_box_song_get_date_added (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_beat_box_song_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	BeatBoxSong * self;
	self = BEAT_BOX_SONG (object);
	switch (property_id) {
		case BEAT_BOX_SONG_FILE:
		beat_box_song_set_file (self, g_value_get_string (value));
		break;
		case BEAT_BOX_SONG_FILE_DIRECTORY:
		beat_box_song_set_file_directory (self, g_value_get_string (value));
		break;
		case BEAT_BOX_SONG_FILE_NAME:
		beat_box_song_set_file_name (self, g_value_get_string (value));
		break;
		case BEAT_BOX_SONG_FILE_SIZE:
		beat_box_song_set_file_size (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_ROWID:
		beat_box_song_set_rowid (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_TITLE:
		beat_box_song_set_title (self, g_value_get_string (value));
		break;
		case BEAT_BOX_SONG_ARTIST:
		beat_box_song_set_artist (self, g_value_get_string (value));
		break;
		case BEAT_BOX_SONG_ALBUM:
		beat_box_song_set_album (self, g_value_get_string (value));
		break;
		case BEAT_BOX_SONG_GENRE:
		beat_box_song_set_genre (self, g_value_get_string (value));
		break;
		case BEAT_BOX_SONG_COMMENT:
		beat_box_song_set_comment (self, g_value_get_string (value));
		break;
		case BEAT_BOX_SONG_YEAR:
		beat_box_song_set_year (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_TRACK:
		beat_box_song_set_track (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_BITRATE:
		beat_box_song_set_bitrate (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_LENGTH:
		beat_box_song_set_length (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_SAMPLERATE:
		beat_box_song_set_samplerate (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_BPM:
		beat_box_song_set_bpm (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_RATING:
		beat_box_song_set_rating (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_SCORE:
		beat_box_song_set_score (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_PLAY_COUNT:
		beat_box_song_set_play_count (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_SKIP_COUNT:
		beat_box_song_set_skip_count (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_LAST_PLAYED:
		beat_box_song_set_last_played (self, g_value_get_int (value));
		break;
		case BEAT_BOX_SONG_DATE_ADDED:
		beat_box_song_set_date_added (self, g_value_get_int (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



