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


/*

   ejemplo mostrar un dialogo....
   ==============================

   private void action_preferences () {
       var settings_dialog = new Akira.Dialogs.SettingsDialog (window);
       settings_dialog.show_all ();
       settings_dialog.present ();
       settings_dialog.close.connect (() => {
           window.event_bus.set_focus_on_canvas ();
       });
   }

 */

public class TradeSim.MainWindow : Gtk.ApplicationWindow {

    public TradeSim.Layouts.HeaderBar headerbar;
    public TradeSim.Layouts.Main main_layout;

    public GLib.Settings settings;

    public MainWindow (TradeSim.Application trade_sim_app) {
        Object (
            application: trade_sim_app
            );
    }

    construct {
        // inicializacion de la ventana...

        headerbar = new TradeSim.Layouts.HeaderBar (this);
        main_layout = new TradeSim.Layouts.Main (this);

        set_titlebar (headerbar);

        var css_provider = new Gtk.CssProvider ();
        css_provider.load_from_path ("/usr/share/com.github.horaciodrs.TradeSim/stylesheet.css");

        Gtk.StyleContext.add_provider_for_screen (
            Gdk.Screen.get_default (), css_provider, Gtk.STYLE_PROVIDER_PRIORITY_APPLICATION
            );

        add (main_layout);

        settings = new GLib.Settings ("com.github.horaciodrs.tradesim");

        move (settings.get_int ("window-left"), settings.get_int ("window-top"));
        resize (settings.get_int ("window-width"), settings.get_int ("window-height"));

        main_layout.pane_left.set_position (settings.get_int ("window-left-pane-width"));
        main_layout.pane_top.set_position (settings.get_int ("window-top-pane-height"));
        change_theme (true);


        /* ****************************** */
        /* CLICK: Boton de Preferencias   */
        /* ****************************** */
        headerbar.preferencias.button.clicked.connect (e => {
            var settings_dialog = new TradeSim.Dialogs.SettingsDialog (this);
            settings_dialog.show_all ();
            settings_dialog.present ();
            settings_dialog.close.connect (() => {
                // event_bus.set_focus_on_canvas ();
            });
        });

        delete_event.connect (e => {
            return before_destroy ();
        });

        show_all ();
    }

    public void change_theme (bool load_from_settings = false, bool value = false) {

        if (load_from_settings) {
            Gtk.Settings.get_default ().gtk_application_prefer_dark_theme = settings.get_boolean ("window-dark-theme");
        } else {
            Gtk.Settings.get_default ().gtk_application_prefer_dark_theme = value;
            settings.set_boolean ("window-dark-theme", value);
        }

    }

    public bool before_destroy () {

        int window_left;
        int window_top;
        int window_width;
        int window_height;
        int left_pane_width;
        int top_pane_height;

        get_size (out window_width, out window_height);
        get_position (out window_left, out window_top);

        left_pane_width = main_layout.pane_left.get_position ();
        top_pane_height = main_layout.pane_top.get_position ();

        settings.set_int ("window-left", window_left);
        settings.set_int ("window-top", window_top);
        settings.set_int ("window-width", window_width);
        settings.set_int ("window-height", window_height);

        settings.set_int ("window-left-pane-width", left_pane_width);
        settings.set_int ("window-top-pane-height", top_pane_height);

        return false;

    }

}
