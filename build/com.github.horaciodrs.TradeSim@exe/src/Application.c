/* Application.c generated by valac 0.40.23, the Vala compiler
 * generated from Application.vala, do not modify */

/*
 * Copyright (c) 2020-2020 horaciodrs (https://github.com/horaciodrs/TradeSim)
 *
 * This file is part of TradeSim.
 *
 * TradeSim is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * TradeSim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Akira. If not, see <https://www.gnu.org/licenses/>.
 *
 * Authored by: Horacio Daniel Ros <horaciodrs@gmail.com>
 */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>


#define TRADE_SIM_TYPE_APPLICATION (trade_sim_application_get_type ())
#define TRADE_SIM_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_TYPE_APPLICATION, TradeSimApplication))
#define TRADE_SIM_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_TYPE_APPLICATION, TradeSimApplicationClass))
#define TRADE_SIM_IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_TYPE_APPLICATION))
#define TRADE_SIM_IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_TYPE_APPLICATION))
#define TRADE_SIM_APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_TYPE_APPLICATION, TradeSimApplicationClass))

typedef struct _TradeSimApplication TradeSimApplication;
typedef struct _TradeSimApplicationClass TradeSimApplicationClass;
typedef struct _TradeSimApplicationPrivate TradeSimApplicationPrivate;
enum  {
	TRADE_SIM_APPLICATION_0_PROPERTY,
	TRADE_SIM_APPLICATION_NUM_PROPERTIES
};
static GParamSpec* trade_sim_application_properties[TRADE_SIM_APPLICATION_NUM_PROPERTIES];

#define TRADE_SIM_TYPE_MAIN_WINDOW (trade_sim_main_window_get_type ())
#define TRADE_SIM_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindow))
#define TRADE_SIM_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))
#define TRADE_SIM_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))

typedef struct _TradeSimMainWindow TradeSimMainWindow;
typedef struct _TradeSimMainWindowClass TradeSimMainWindowClass;
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _TradeSimApplication {
	GtkApplication parent_instance;
	TradeSimApplicationPrivate * priv;
};

struct _TradeSimApplicationClass {
	GtkApplicationClass parent_class;
};


static gpointer trade_sim_application_parent_class = NULL;

GType trade_sim_application_get_type (void) G_GNUC_CONST;
TradeSimApplication* trade_sim_application_new (void);
TradeSimApplication* trade_sim_application_construct (GType object_type);
static void trade_sim_application_real_activate (GApplication* base);
GType trade_sim_main_window_get_type (void) G_GNUC_CONST;
TradeSimMainWindow* trade_sim_main_window_new (TradeSimApplication* trade_sim_app);
TradeSimMainWindow* trade_sim_main_window_construct (GType object_type,
                                                     TradeSimApplication* trade_sim_app);


TradeSimApplication*
trade_sim_application_construct (GType object_type)
{
	TradeSimApplication * self = NULL;
#line 25 "/home/horacio/Vala/TradeSim/src/Application.vala"
	self = (TradeSimApplication*) g_object_new (object_type, "application-id", "com.github.horaciodrs.TradeSim", "flags", G_APPLICATION_FLAGS_NONE, NULL);
#line 24 "/home/horacio/Vala/TradeSim/src/Application.vala"
	return self;
#line 90 "Application.c"
}


TradeSimApplication*
trade_sim_application_new (void)
{
#line 24 "/home/horacio/Vala/TradeSim/src/Application.vala"
	return trade_sim_application_construct (TRADE_SIM_TYPE_APPLICATION);
#line 99 "Application.c"
}


static void
trade_sim_application_real_activate (GApplication* base)
{
	TradeSimApplication * self;
	TradeSimMainWindow* WindowTradeSim = NULL;
	TradeSimMainWindow* _tmp0_;
	GtkSettings* _tmp1_;
	GValue _tmp2_ = {0};
	GtkSettings* _tmp3_;
	GValue _tmp4_ = {0};
	GtkIconTheme* default_theme = NULL;
	GtkIconTheme* _tmp5_;
#line 31 "/home/horacio/Vala/TradeSim/src/Application.vala"
	self = (TradeSimApplication*) base;
#line 33 "/home/horacio/Vala/TradeSim/src/Application.vala"
	_tmp0_ = trade_sim_main_window_new (self);
#line 33 "/home/horacio/Vala/TradeSim/src/Application.vala"
	g_object_ref_sink (_tmp0_);
#line 33 "/home/horacio/Vala/TradeSim/src/Application.vala"
	WindowTradeSim = _tmp0_;
#line 35 "/home/horacio/Vala/TradeSim/src/Application.vala"
	_tmp1_ = gtk_settings_get_default ();
#line 35 "/home/horacio/Vala/TradeSim/src/Application.vala"
	g_value_init (&_tmp2_, G_TYPE_STRING);
#line 35 "/home/horacio/Vala/TradeSim/src/Application.vala"
	g_value_set_string (&_tmp2_, "elementary");
#line 35 "/home/horacio/Vala/TradeSim/src/Application.vala"
	g_object_set_property ((GObject*) _tmp1_, "gtk-icon-theme-name", &_tmp2_);
#line 35 "/home/horacio/Vala/TradeSim/src/Application.vala"
	G_IS_VALUE (&_tmp2_) ? (g_value_unset (&_tmp2_), NULL) : NULL;
#line 36 "/home/horacio/Vala/TradeSim/src/Application.vala"
	_tmp3_ = gtk_settings_get_default ();
#line 36 "/home/horacio/Vala/TradeSim/src/Application.vala"
	g_value_init (&_tmp4_, G_TYPE_STRING);
#line 36 "/home/horacio/Vala/TradeSim/src/Application.vala"
	g_value_set_string (&_tmp4_, "elementary");
#line 36 "/home/horacio/Vala/TradeSim/src/Application.vala"
	g_object_set_property ((GObject*) _tmp3_, "gtk-theme-name", &_tmp4_);
#line 36 "/home/horacio/Vala/TradeSim/src/Application.vala"
	G_IS_VALUE (&_tmp4_) ? (g_value_unset (&_tmp4_), NULL) : NULL;
#line 38 "/home/horacio/Vala/TradeSim/src/Application.vala"
	_tmp5_ = gtk_icon_theme_get_default ();
#line 38 "/home/horacio/Vala/TradeSim/src/Application.vala"
	default_theme = _tmp5_;
#line 39 "/home/horacio/Vala/TradeSim/src/Application.vala"
	gtk_icon_theme_add_resource_path (default_theme, "/com/github/horaciodrs/TradeSim");
#line 41 "/home/horacio/Vala/TradeSim/src/Application.vala"
	gtk_application_add_window ((GtkApplication*) self, (GtkWindow*) WindowTradeSim);
#line 31 "/home/horacio/Vala/TradeSim/src/Application.vala"
	_g_object_unref0 (WindowTradeSim);
#line 153 "Application.c"
}


static void
trade_sim_application_class_init (TradeSimApplicationClass * klass)
{
#line 22 "/home/horacio/Vala/TradeSim/src/Application.vala"
	trade_sim_application_parent_class = g_type_class_peek_parent (klass);
#line 22 "/home/horacio/Vala/TradeSim/src/Application.vala"
	((GApplicationClass *) klass)->activate = (void (*) (GApplication*)) trade_sim_application_real_activate;
#line 164 "Application.c"
}


static void
trade_sim_application_instance_init (TradeSimApplication * self)
{
}


GType
trade_sim_application_get_type (void)
{
	static volatile gsize trade_sim_application_type_id__volatile = 0;
	if (g_once_init_enter (&trade_sim_application_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TradeSimApplicationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) trade_sim_application_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TradeSimApplication), 0, (GInstanceInitFunc) trade_sim_application_instance_init, NULL };
		GType trade_sim_application_type_id;
		trade_sim_application_type_id = g_type_register_static (gtk_application_get_type (), "TradeSimApplication", &g_define_type_info, 0);
		g_once_init_leave (&trade_sim_application_type_id__volatile, trade_sim_application_type_id);
	}
	return trade_sim_application_type_id__volatile;
}



