/* CanvasContainer.c generated by valac 0.40.23, the Vala compiler
 * generated from CanvasContainer.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <float.h>
#include <math.h>


#define TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER (trade_sim_widgets_canvas_container_get_type ())
#define TRADE_SIM_WIDGETS_CANVAS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER, TradeSimWidgetsCanvasContainer))
#define TRADE_SIM_WIDGETS_CANVAS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER, TradeSimWidgetsCanvasContainerClass))
#define TRADE_SIM_WIDGETS_IS_CANVAS_CONTAINER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER))
#define TRADE_SIM_WIDGETS_IS_CANVAS_CONTAINER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER))
#define TRADE_SIM_WIDGETS_CANVAS_CONTAINER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER, TradeSimWidgetsCanvasContainerClass))

typedef struct _TradeSimWidgetsCanvasContainer TradeSimWidgetsCanvasContainer;
typedef struct _TradeSimWidgetsCanvasContainerClass TradeSimWidgetsCanvasContainerClass;
typedef struct _TradeSimWidgetsCanvasContainerPrivate TradeSimWidgetsCanvasContainerPrivate;

#define TRADE_SIM_WIDGETS_TYPE_CANVAS (trade_sim_widgets_canvas_get_type ())
#define TRADE_SIM_WIDGETS_CANVAS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_WIDGETS_TYPE_CANVAS, TradeSimWidgetsCanvas))
#define TRADE_SIM_WIDGETS_CANVAS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_WIDGETS_TYPE_CANVAS, TradeSimWidgetsCanvasClass))
#define TRADE_SIM_WIDGETS_IS_CANVAS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_WIDGETS_TYPE_CANVAS))
#define TRADE_SIM_WIDGETS_IS_CANVAS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_WIDGETS_TYPE_CANVAS))
#define TRADE_SIM_WIDGETS_CANVAS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_WIDGETS_TYPE_CANVAS, TradeSimWidgetsCanvasClass))

typedef struct _TradeSimWidgetsCanvas TradeSimWidgetsCanvas;
typedef struct _TradeSimWidgetsCanvasClass TradeSimWidgetsCanvasClass;

#define TRADE_SIM_TYPE_MAIN_WINDOW (trade_sim_main_window_get_type ())
#define TRADE_SIM_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindow))
#define TRADE_SIM_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))
#define TRADE_SIM_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))

typedef struct _TradeSimMainWindow TradeSimMainWindow;
typedef struct _TradeSimMainWindowClass TradeSimMainWindowClass;
enum  {
	TRADE_SIM_WIDGETS_CANVAS_CONTAINER_0_PROPERTY,
	TRADE_SIM_WIDGETS_CANVAS_CONTAINER_MAIN_WINDOW_PROPERTY,
	TRADE_SIM_WIDGETS_CANVAS_CONTAINER_NUM_PROPERTIES
};
static GParamSpec* trade_sim_widgets_canvas_container_properties[TRADE_SIM_WIDGETS_CANVAS_CONTAINER_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _TradeSimWidgetsCanvasContainer {
	GtkBox parent_instance;
	TradeSimWidgetsCanvasContainerPrivate * priv;
	TradeSimWidgetsCanvas* chart_canvas;
};

struct _TradeSimWidgetsCanvasContainerClass {
	GtkBoxClass parent_class;
};

struct _TradeSimWidgetsCanvasContainerPrivate {
	TradeSimMainWindow* _main_window;
};


static gpointer trade_sim_widgets_canvas_container_parent_class = NULL;

GType trade_sim_widgets_canvas_container_get_type (void) G_GNUC_CONST;
GType trade_sim_widgets_canvas_get_type (void) G_GNUC_CONST;
GType trade_sim_main_window_get_type (void) G_GNUC_CONST;
#define TRADE_SIM_WIDGETS_CANVAS_CONTAINER_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER, TradeSimWidgetsCanvasContainerPrivate))
TradeSimWidgetsCanvasContainer* trade_sim_widgets_canvas_container_new (TradeSimMainWindow* window);
TradeSimWidgetsCanvasContainer* trade_sim_widgets_canvas_container_construct (GType object_type,
                                                                              TradeSimMainWindow* window);
TradeSimMainWindow* trade_sim_widgets_canvas_container_get_main_window (TradeSimWidgetsCanvasContainer* self);
static void trade_sim_widgets_canvas_container_set_main_window (TradeSimWidgetsCanvasContainer* self,
                                                         TradeSimMainWindow* value);
static GObject * trade_sim_widgets_canvas_container_constructor (GType type,
                                                          guint n_construct_properties,
                                                          GObjectConstructParam * construct_properties);
TradeSimWidgetsCanvas* trade_sim_widgets_canvas_new (TradeSimMainWindow* window);
TradeSimWidgetsCanvas* trade_sim_widgets_canvas_construct (GType object_type,
                                                           TradeSimMainWindow* window);
static void trade_sim_widgets_canvas_container_finalize (GObject * obj);
static void _vala_trade_sim_widgets_canvas_container_get_property (GObject * object,
                                                            guint property_id,
                                                            GValue * value,
                                                            GParamSpec * pspec);
static void _vala_trade_sim_widgets_canvas_container_set_property (GObject * object,
                                                            guint property_id,
                                                            const GValue * value,
                                                            GParamSpec * pspec);


TradeSimWidgetsCanvasContainer*
trade_sim_widgets_canvas_container_construct (GType object_type,
                                              TradeSimMainWindow* window)
{
	TradeSimWidgetsCanvasContainer * self = NULL;
#line 9 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	g_return_val_if_fail (window != NULL, NULL);
#line 10 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	self = (TradeSimWidgetsCanvasContainer*) g_object_new (object_type, "main-window", window, "orientation", GTK_ORIENTATION_VERTICAL, "spacing", 0, NULL);
#line 9 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	return self;
#line 107 "CanvasContainer.c"
}


TradeSimWidgetsCanvasContainer*
trade_sim_widgets_canvas_container_new (TradeSimMainWindow* window)
{
#line 9 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	return trade_sim_widgets_canvas_container_construct (TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER, window);
#line 116 "CanvasContainer.c"
}


TradeSimMainWindow*
trade_sim_widgets_canvas_container_get_main_window (TradeSimWidgetsCanvasContainer* self)
{
	TradeSimMainWindow* result;
	TradeSimMainWindow* _tmp0_;
#line 3 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 3 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	_tmp0_ = self->priv->_main_window;
#line 3 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	result = _tmp0_;
#line 3 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	return result;
#line 133 "CanvasContainer.c"
}


static void
trade_sim_widgets_canvas_container_set_main_window (TradeSimWidgetsCanvasContainer* self,
                                                    TradeSimMainWindow* value)
{
#line 3 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	g_return_if_fail (self != NULL);
#line 3 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	if (trade_sim_widgets_canvas_container_get_main_window (self) != value) {
#line 3 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		self->priv->_main_window = value;
#line 3 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		g_object_notify_by_pspec ((GObject *) self, trade_sim_widgets_canvas_container_properties[TRADE_SIM_WIDGETS_CANVAS_CONTAINER_MAIN_WINDOW_PROPERTY]);
#line 149 "CanvasContainer.c"
	}
}


static GObject *
trade_sim_widgets_canvas_container_constructor (GType type,
                                                guint n_construct_properties,
                                                GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	TradeSimWidgetsCanvasContainer * self;
	GtkAdjustment* ajuste = NULL;
	GtkAdjustment* _tmp0_;
	TradeSimMainWindow* _tmp1_;
	TradeSimWidgetsCanvas* _tmp2_;
	TradeSimWidgetsCanvas* _tmp3_;
#line 17 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	parent_class = G_OBJECT_CLASS (trade_sim_widgets_canvas_container_parent_class);
#line 17 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 17 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER, TradeSimWidgetsCanvasContainer);
#line 19 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	_tmp0_ = gtk_adjustment_new ((gdouble) 0, (gdouble) 0, (gdouble) 100, (gdouble) 1, (gdouble) 1, (gdouble) 50);
#line 19 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	g_object_ref_sink (_tmp0_);
#line 19 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	ajuste = _tmp0_;
#line 21 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	_tmp1_ = self->priv->_main_window;
#line 21 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	_tmp2_ = trade_sim_widgets_canvas_new (_tmp1_);
#line 21 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	g_object_ref_sink (_tmp2_);
#line 21 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	_g_object_unref0 (self->chart_canvas);
#line 21 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	self->chart_canvas = _tmp2_;
#line 25 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	_tmp3_ = self->chart_canvas;
#line 25 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	gtk_box_pack_start ((GtkBox*) self, (GtkWidget*) _tmp3_, TRUE, TRUE, (guint) 0);
#line 17 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	_g_object_unref0 (ajuste);
#line 17 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	return obj;
#line 197 "CanvasContainer.c"
}


static void
trade_sim_widgets_canvas_container_class_init (TradeSimWidgetsCanvasContainerClass * klass)
{
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	trade_sim_widgets_canvas_container_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	g_type_class_add_private (klass, sizeof (TradeSimWidgetsCanvasContainerPrivate));
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_trade_sim_widgets_canvas_container_get_property;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_trade_sim_widgets_canvas_container_set_property;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	G_OBJECT_CLASS (klass)->constructor = trade_sim_widgets_canvas_container_constructor;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	G_OBJECT_CLASS (klass)->finalize = trade_sim_widgets_canvas_container_finalize;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TRADE_SIM_WIDGETS_CANVAS_CONTAINER_MAIN_WINDOW_PROPERTY, trade_sim_widgets_canvas_container_properties[TRADE_SIM_WIDGETS_CANVAS_CONTAINER_MAIN_WINDOW_PROPERTY] = g_param_spec_object ("main-window", "main-window", "main-window", TRADE_SIM_TYPE_MAIN_WINDOW, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 218 "CanvasContainer.c"
}


static void
trade_sim_widgets_canvas_container_instance_init (TradeSimWidgetsCanvasContainer * self)
{
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	self->priv = TRADE_SIM_WIDGETS_CANVAS_CONTAINER_GET_PRIVATE (self);
#line 227 "CanvasContainer.c"
}


static void
trade_sim_widgets_canvas_container_finalize (GObject * obj)
{
	TradeSimWidgetsCanvasContainer * self;
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER, TradeSimWidgetsCanvasContainer);
#line 7 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	_g_object_unref0 (self->chart_canvas);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	G_OBJECT_CLASS (trade_sim_widgets_canvas_container_parent_class)->finalize (obj);
#line 241 "CanvasContainer.c"
}


GType
trade_sim_widgets_canvas_container_get_type (void)
{
	static volatile gsize trade_sim_widgets_canvas_container_type_id__volatile = 0;
	if (g_once_init_enter (&trade_sim_widgets_canvas_container_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TradeSimWidgetsCanvasContainerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) trade_sim_widgets_canvas_container_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TradeSimWidgetsCanvasContainer), 0, (GInstanceInitFunc) trade_sim_widgets_canvas_container_instance_init, NULL };
		GType trade_sim_widgets_canvas_container_type_id;
		trade_sim_widgets_canvas_container_type_id = g_type_register_static (gtk_box_get_type (), "TradeSimWidgetsCanvasContainer", &g_define_type_info, 0);
		g_once_init_leave (&trade_sim_widgets_canvas_container_type_id__volatile, trade_sim_widgets_canvas_container_type_id);
	}
	return trade_sim_widgets_canvas_container_type_id__volatile;
}


static void
_vala_trade_sim_widgets_canvas_container_get_property (GObject * object,
                                                       guint property_id,
                                                       GValue * value,
                                                       GParamSpec * pspec)
{
	TradeSimWidgetsCanvasContainer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER, TradeSimWidgetsCanvasContainer);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	switch (property_id) {
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		case TRADE_SIM_WIDGETS_CANVAS_CONTAINER_MAIN_WINDOW_PROPERTY:
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		g_value_set_object (value, trade_sim_widgets_canvas_container_get_main_window (self));
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		break;
#line 275 "CanvasContainer.c"
		default:
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		break;
#line 281 "CanvasContainer.c"
	}
}


static void
_vala_trade_sim_widgets_canvas_container_set_property (GObject * object,
                                                       guint property_id,
                                                       const GValue * value,
                                                       GParamSpec * pspec)
{
	TradeSimWidgetsCanvasContainer * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TRADE_SIM_WIDGETS_TYPE_CANVAS_CONTAINER, TradeSimWidgetsCanvasContainer);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
	switch (property_id) {
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		case TRADE_SIM_WIDGETS_CANVAS_CONTAINER_MAIN_WINDOW_PROPERTY:
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		trade_sim_widgets_canvas_container_set_main_window (self, g_value_get_object (value));
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		break;
#line 302 "CanvasContainer.c"
		default:
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/horacio/Vala/TradeSim/src/Widgets/CanvasContainer.vala"
		break;
#line 308 "CanvasContainer.c"
	}
}



