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

public class TradeSim.Widgets.DrawingsPanel : Gtk.Grid {

    public weak TradeSim.MainWindow main_window;

    public Gtk.Label label_title;
    public Gtk.ScrolledWindow scroll_drawings;
    public Gtk.Grid grid_data;

    private int rows;

    public DrawingsPanel (TradeSim.MainWindow _window) {

        main_window = _window;

        rows = -1;

        init ();

    }

    public void init () {

        label_title = new Gtk.Label (_ ("Objects Manager"));
        scroll_drawings = new Gtk.ScrolledWindow (null, null);
        scroll_drawings.set_policy (Gtk.PolicyType.AUTOMATIC, Gtk.PolicyType.AUTOMATIC);
        scroll_drawings.get_style_context ().add_class ("scrolled-window-drawings");

        grid_data = new Gtk.Grid ();

        label_title.vexpand = false;
        label_title.hexpand = true;
        label_title.get_style_context ().add_class ("h4");

        scroll_drawings.hexpand = true;
        scroll_drawings.vexpand = true;

        attach (label_title, 0, 0);
        attach (scroll_drawings, 0, 1);

        scroll_drawings.add (grid_data);

    }

    public void insert_object (string _id, int type, int ? itype = null) {

        rows++;

        string css = "scrolled-window-drawings-row";

        if (rows % 2 == 0) {
            css = "scrolled-window-drawings-row-alternate";
        }

        var new_obj = new TradeSim.Widgets.DrawingsPanelItem (main_window, _id, type, css, null, itype);

        grid_data.attach (new_obj, 0, rows);

        grid_data.show_all ();

    }

    public void delete_object (string _id, int type) {

        var dm = main_window.main_layout.current_canvas.draw_manager;
        bool salir = false;
        int i = 0;
        int test = 0;
        while (!salir) {
            Gtk.Widget ? generic_widget = grid_data.get_child_at (0, test);
            if (i > rows) {
                salir = true;
            } else {
                if (generic_widget != null) {
                    if (generic_widget.get_type () == typeof (TradeSim.Widgets.DrawingsPanelItem)) {
                        TradeSim.Widgets.DrawingsPanelItem row = (TradeSim.Widgets.DrawingsPanelItem)generic_widget;
                        if (row.desc == _id) {
                            dm.delete_draw (_id, type);
                            grid_data.remove_row (i);
                            rows--;
                            break;
                        }
                        i++;
                    }
                }
            }
            test++;
        }
    }

    public void reload_objects () {

        var ml = main_window.main_layout;

        if (ml.current_canvas != null) {

            if (ml.current_canvas.get_type () == typeof (TradeSim.Widgets.Canvas)) {

                var dm = main_window.main_layout.current_canvas.draw_manager;

                for (int i = 0 ; i < dm.lines.length ; i++) {
                    int type = TradeSim.Services.Drawings.Type.LINE;
                    insert_object (dm.lines.index (i).id, type);
                }

                for (int i = 0 ; i < dm.hlines.length ; i++) {
                    int type = TradeSim.Services.Drawings.Type.HLINE;
                    insert_object (dm.hlines.index (i).id, type);
                }

                for (int i = 0 ; i < dm.fibonacci.length ; i++) {
                    int type = TradeSim.Services.Drawings.Type.FIBONACCI;
                    insert_object (dm.fibonacci.index (i).id, type);
                }

                for (int i = 0 ; i < dm.rectangles.length ; i++) {
                    int type = TradeSim.Services.Drawings.Type.RECTANGLE;
                    insert_object (dm.rectangles.index (i).id, type);
                }

                for (int i = 0 ; i < dm.indicators.length ; i++) {
                    int type = TradeSim.Services.Drawings.Type.INDICATOR;
                    insert_object (dm.indicators.index (i).id, type);
                }

            }

        }

    }

    public void delete_all () {

        bool salir = false;

        while (!salir) {
            if (rows == -1) {
                salir = true;
            } else {
                grid_data.remove_row (0);
                rows--;
            }
        }

        rows = -1;
    }

}
