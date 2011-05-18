using Gtk;
using Gdk;

public class BeatBox.CellDataFunctionHelper : GLib.Object {
	MusicTreeView mtv;
	private Pixbuf[] ratings;
	private Pixbuf _canvas;
	private Pixbuf not_starred;
	private Pixbuf starred;
	
	public CellDataFunctionHelper(MusicTreeView mt) {
		mtv = mt;
		starred = mtv.render_icon("starred", IconSize.SMALL_TOOLBAR, null);
		not_starred = mtv.render_icon("not-starred", IconSize.SMALL_TOOLBAR, null);
		
		_canvas = new Gdk.Pixbuf(Gdk.Colorspace.RGB, true, 8, starred.width * 5, starred.height);
		
		//ratings = new Pixbuf[5];
		
		/*for(int i = 0; i < 5; ++i) {
			ratings[i] = new Gdk.Pixbuf(Gdk.Colorspace.RGB, true, 8, starred.width * 5, starred.height);
			
			mtv.window.draw_pixbuf(
					mtv.style.bg_gc[0], ratings[i],
					0, 0, 0, 0, (starred.width) * i, starred.height,
					Gdk.RgbDither.NONE, 0, 0);
		}*/
	}
	
	// for Track, Year, #, Plays, Skips. Simply shows nothing if less than 1.
	public void intelligentTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_int() <= 0)
			((CellRendererText)cell).text = "";
		else
			((CellRendererText)cell).text = val.get_int().to_string();
	}
	
	public void stringTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		((CellRendererText)cell).text = val.get_string();
	}
	
	// for Bitrate. Append 'kbps'
	public void bitrateTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_int() <= 0)
			((CellRendererText)cell).text = "";
		else
			((CellRendererText)cell).text = val.get_int().to_string() + " kbps";
	}
	
	// turns int of seconds into pretty length mm:ss format
	public static void lengthTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_int() <= 0)
			((CellRendererText)cell).text = "";
		else
			((CellRendererText)cell).text = (val.get_int() / 60).to_string() + ":" + (((val.get_int() % 60) >= 10) ? (val.get_int() % 60).to_string() : ("0" + (val.get_int() % 60).to_string()));
	}
	
	// turns seconds since Jan 1, 1970 into date format
	public void dateTreeViewFiller(TreeViewColumn tvc, CellRenderer cell, TreeModel tree_model, TreeIter iter) {
		Value val;
		tree_model.get_value(iter, tvc.sort_column_id, out val);
		
		if(val.get_int() <= 0)
			((CellRendererText)cell).text = "";
		else {
			var t = Time.local(val.get_int());
			string rv = t.format("%m/%e/%Y %l:%M %p");
			((CellRendererText)cell).text = rv;
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
				/*else if(((CellRendererPixbuf)cell).follow_state) {
					not_starred.copy_area(0, 0, not_starred.width, not_starred.height, _canvas, i * not_starred.width, 0);
				}*/
			}
			
			((CellRendererPixbuf)cell).pixbuf = _canvas;
		}
	}
}