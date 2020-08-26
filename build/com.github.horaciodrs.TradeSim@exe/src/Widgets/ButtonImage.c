/* ButtonImage.c generated by valac 0.40.23, the Vala compiler
 * generated from ButtonImage.vala, do not modify */

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
#include <stdlib.h>
#include <string.h>


#define TRADE_SIM_WIDGETS_TYPE_BUTTON_IMAGE (trade_sim_widgets_button_image_get_type ())
#define TRADE_SIM_WIDGETS_BUTTON_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_WIDGETS_TYPE_BUTTON_IMAGE, TradeSimWidgetsButtonImage))
#define TRADE_SIM_WIDGETS_BUTTON_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_WIDGETS_TYPE_BUTTON_IMAGE, TradeSimWidgetsButtonImageClass))
#define TRADE_SIM_WIDGETS_IS_BUTTON_IMAGE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_WIDGETS_TYPE_BUTTON_IMAGE))
#define TRADE_SIM_WIDGETS_IS_BUTTON_IMAGE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_WIDGETS_TYPE_BUTTON_IMAGE))
#define TRADE_SIM_WIDGETS_BUTTON_IMAGE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_WIDGETS_TYPE_BUTTON_IMAGE, TradeSimWidgetsButtonImageClass))

typedef struct _TradeSimWidgetsButtonImage TradeSimWidgetsButtonImage;
typedef struct _TradeSimWidgetsButtonImageClass TradeSimWidgetsButtonImageClass;
typedef struct _TradeSimWidgetsButtonImagePrivate TradeSimWidgetsButtonImagePrivate;
enum  {
	TRADE_SIM_WIDGETS_BUTTON_IMAGE_0_PROPERTY,
	TRADE_SIM_WIDGETS_BUTTON_IMAGE_NUM_PROPERTIES
};
static GParamSpec* trade_sim_widgets_button_image_properties[TRADE_SIM_WIDGETS_BUTTON_IMAGE_NUM_PROPERTIES];
#define _g_free0(var) (var = (g_free (var), NULL))

struct _TradeSimWidgetsButtonImage {
	GtkImage parent_instance;
	TradeSimWidgetsButtonImagePrivate * priv;
};

struct _TradeSimWidgetsButtonImageClass {
	GtkImageClass parent_class;
};

struct _TradeSimWidgetsButtonImagePrivate {
	gchar* icon;
	GtkIconSize size;
};


static gpointer trade_sim_widgets_button_image_parent_class = NULL;

GType trade_sim_widgets_button_image_get_type (void) G_GNUC_CONST;
#define TRADE_SIM_WIDGETS_BUTTON_IMAGE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TRADE_SIM_WIDGETS_TYPE_BUTTON_IMAGE, TradeSimWidgetsButtonImagePrivate))
TradeSimWidgetsButtonImage* trade_sim_widgets_button_image_new (const gchar* icon_name,
                                                                GtkIconSize icon_size);
TradeSimWidgetsButtonImage* trade_sim_widgets_button_image_construct (GType object_type,
                                                                      const gchar* icon_name,
                                                                      GtkIconSize icon_size);
static void trade_sim_widgets_button_image_finalize (GObject * obj);


TradeSimWidgetsButtonImage*
trade_sim_widgets_button_image_construct (GType object_type,
                                          const gchar* icon_name,
                                          GtkIconSize icon_size)
{
	TradeSimWidgetsButtonImage * self = NULL;
	gchar* _tmp0_;
	const gchar* _tmp1_;
	GtkIconSize _tmp2_;
#line 27 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	g_return_val_if_fail (icon_name != NULL, NULL);
#line 27 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	self = (TradeSimWidgetsButtonImage*) g_object_new (object_type, NULL);
#line 28 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	_tmp0_ = g_strdup (icon_name);
#line 28 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	_g_free0 (self->priv->icon);
#line 28 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	self->priv->icon = _tmp0_;
#line 29 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	self->priv->size = icon_size;
#line 30 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	g_object_set ((GtkWidget*) self, "margin", 0, NULL);
#line 32 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	_tmp1_ = self->priv->icon;
#line 32 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	_tmp2_ = self->priv->size;
#line 32 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	gtk_image_set_from_icon_name ((GtkImage*) self, _tmp1_, (GtkIconSize) _tmp2_);
#line 27 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	return self;
#line 109 "ButtonImage.c"
}


TradeSimWidgetsButtonImage*
trade_sim_widgets_button_image_new (const gchar* icon_name,
                                    GtkIconSize icon_size)
{
#line 27 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	return trade_sim_widgets_button_image_construct (TRADE_SIM_WIDGETS_TYPE_BUTTON_IMAGE, icon_name, icon_size);
#line 119 "ButtonImage.c"
}


static void
trade_sim_widgets_button_image_class_init (TradeSimWidgetsButtonImageClass * klass)
{
#line 22 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	trade_sim_widgets_button_image_parent_class = g_type_class_peek_parent (klass);
#line 22 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	g_type_class_add_private (klass, sizeof (TradeSimWidgetsButtonImagePrivate));
#line 22 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	G_OBJECT_CLASS (klass)->finalize = trade_sim_widgets_button_image_finalize;
#line 132 "ButtonImage.c"
}


static void
trade_sim_widgets_button_image_instance_init (TradeSimWidgetsButtonImage * self)
{
#line 22 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	self->priv = TRADE_SIM_WIDGETS_BUTTON_IMAGE_GET_PRIVATE (self);
#line 141 "ButtonImage.c"
}


static void
trade_sim_widgets_button_image_finalize (GObject * obj)
{
	TradeSimWidgetsButtonImage * self;
#line 22 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_WIDGETS_TYPE_BUTTON_IMAGE, TradeSimWidgetsButtonImage);
#line 24 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	_g_free0 (self->priv->icon);
#line 22 "/home/horacio/Vala/TradeSim/src/Widgets/ButtonImage.vala"
	G_OBJECT_CLASS (trade_sim_widgets_button_image_parent_class)->finalize (obj);
#line 155 "ButtonImage.c"
}


GType
trade_sim_widgets_button_image_get_type (void)
{
	static volatile gsize trade_sim_widgets_button_image_type_id__volatile = 0;
	if (g_once_init_enter (&trade_sim_widgets_button_image_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TradeSimWidgetsButtonImageClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) trade_sim_widgets_button_image_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TradeSimWidgetsButtonImage), 0, (GInstanceInitFunc) trade_sim_widgets_button_image_instance_init, NULL };
		GType trade_sim_widgets_button_image_type_id;
		trade_sim_widgets_button_image_type_id = g_type_register_static (gtk_image_get_type (), "TradeSimWidgetsButtonImage", &g_define_type_info, 0);
		g_once_init_leave (&trade_sim_widgets_button_image_type_id__volatile, trade_sim_widgets_button_image_type_id);
	}
	return trade_sim_widgets_button_image_type_id__volatile;
}



