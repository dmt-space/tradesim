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

public class TradeSim.Widgets.DrawingsPanel : Gtk.Grid{

    public weak TradeSim.MainWindow main_window;

    public Gtk.Label label_title;
    public Gtk.ScrolledWindow scroll_drawings;
    public Gtk.Grid grid_data;

    public DrawingsPanel(TradeSim.MainWindow _window){

        main_window = _window;

        init();

    }

    public void init(){

        label_title = new Gtk.Label("Objects Manager");
        scroll_drawings = new Gtk.ScrolledWindow (null, null);
        scroll_drawings.set_policy (Gtk.PolicyType.AUTOMATIC, Gtk.PolicyType.AUTOMATIC);
        scroll_drawings.get_style_context ().add_class ("scrolled-window-drawings");

        grid_data = new Gtk.Grid();

        label_title.vexpand = false;
        label_title.hexpand = true;
        label_title.get_style_context().add_class("h4");

        scroll_drawings.hexpand = true;
        scroll_drawings.vexpand = true;

        attach(label_title, 0, 0);
        attach(scroll_drawings, 0, 1);

        scroll_drawings.add(grid_data);

    }

    public void insert_object(string _id, int type, int order){

        string css = "scrolled-window-drawings-row";

        if(order % 2 == 0){
            css ="scrolled-window-drawings-row-alternate";
        }

        var new_obj = new TradeSim.Widgets.DrawingsPanelItem(main_window, _id, type, css);

        grid_data.attach(new_obj, 0, order);

        grid_data.show_all();

    }

}