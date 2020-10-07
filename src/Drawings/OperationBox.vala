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

public class TradeSim.Drawings.OperationBox{

    public int left;
    public int top;
    public int width;
    public int height;
    public string text;

    public int ? mouse_dist_y;

    public OperationBox(){
        text = "";
        mouse_dist_y = null;
    }

    public void mouse_dist_y_calc(int mouse_y){
        if(mouse_dist_y == null){
            mouse_dist_y = mouse_y - top;
        }
    }

    public void drag_end(){
        mouse_dist_y = null;
    }

    public void drag_start(int mouse_x, int mouse_y){

        if((mouse_x >= left) && (mouse_x <= left + width)){
            if((mouse_y >= top) && (mouse_y <= top + height)){
                mouse_dist_y_calc(mouse_y);
                top = mouse_y - mouse_dist_y;
                //En algún momento se tiene que recalcular el precio de SL o TP
                //de la operación en base a la posición top.
                return;
            }
        }

        drag_end();

    }

    public void set_text(string _text){
        text = _text;
    }

    public void draw (TradeSim.Widgets.Canvas ref_canvas, Cairo.Context ctext, int posy, TradeSim.Utils.Color color) {

        if(text == ""){
            return;
        }

        Gtk.DrawingArea aux_canvas;
        Pango.Layout layout;
        int txt_width;
        int txt_height;
        int padding = 6;

        aux_canvas = new Gtk.DrawingArea ();
        layout = aux_canvas.create_pango_layout (text);
        layout.get_pixel_size (out txt_width, out txt_height);

        left = 0;
        top = posy - txt_height - padding;
        width = txt_width + 20;
        height = txt_height + padding;

        color.apply_to(ctext);
        ctext.rectangle (left, top, width, height);
        ctext.fill ();

        int txt_y = posy - txt_height - padding / 2;

        ref_canvas.write_text_white (ctext, padding, txt_y, text);

    }

}