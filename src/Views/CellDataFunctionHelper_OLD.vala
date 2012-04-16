/*-
 * Copyright (c) 2011-2012       Scott Ringwelski <sgringwe@mtu.edu>
 *
 * Originally Written by Scott Ringwelski for BeatBox Music Player
 * BeatBox Music Player: http://www.launchpad.net/beat-box
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

using Gtk;
using Gdk;

public class BeatBox.CellDataFunctionHelper : GLib.Object {
	private Pixbuf _canvas;
	private Pixbuf not_starred;
	private Pixbuf starred;
	
	public CellDataFunctionHelper(LibraryManager lm) {
		this.starred = Icons.STARRED.render (IconSize.MENU, null);
		this.not_starred = Icons.NOT_STARRED.render (IconSize.MENU, null);
		
		_canvas = new Gdk.Pixbuf(Gdk.Colorspace.RGB, true, 8, starred.width * 5, starred.height);
	}
	
	// for Track, Year, #, Plays, Skips. Simply shows nothing if less than 1.
	public void intelligentTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_int() <= 0)
			((CellRendererText)cell).markup = "";
		else
			((CellRendererText)cell).markup = val.get_int().to_string().replace("&", "&amp;");
	}
	
	public void stringTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_string() == null)
			return;
		
		((CellRendererText)cell).markup = val.get_string().replace("&", "&amp;");
	}
	
	// for Bitrate. Append 'kbps'
	public void bitrateTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_int() <= 0)
			((CellRendererText)cell).markup = "";
		else
			((CellRendererText)cell).markup = val.get_int().to_string() + " kbps";
	}
	
	// turns int of seconds into pretty length mm:ss format
	public static void lengthTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_int() <= 0)
			((CellRendererText)cell).markup = "";
		else
			((CellRendererText)cell).markup = (val.get_int() / 60).to_string() + ":" + (((val.get_int() % 60) >= 10) ? (val.get_int() % 60).to_string() : ("0" + (val.get_int() % 60).to_string()));
	}
	
	// turns seconds since Jan 1, 1970 into date format
	public void dateTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_int() <= 0)
			((CellRendererText)cell).markup = "";
		else {
			var t = Time.local(val.get_int());
			string rv = t.format("%m/%e/%Y %l:%M %p");
			((CellRendererText)cell).markup = rv;
		}
	}
	
	public void ratingTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_int() == 0)
			((CellRendererPixbuf)cell).pixbuf = null;
		else {
			_canvas.fill((uint) 0xffffff00);
			
			/* generate the canvas image */
			for (int i = 0; i < 5; i++) {
				if (i < val.get_int()) {
					starred.copy_area(0, 0, starred.width, starred.height, _canvas, i * starred.width, 0);
				}
			}
			
			((CellRendererPixbuf)cell).pixbuf = _canvas;
		}
	}
}
