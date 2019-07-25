/* gtk+-unix-print-4.0.vapi generated by vapigen, do not modify. */

[CCode (cprefix = "Gtk", gir_namespace = "Gtk", gir_version = "4.0", lower_case_cprefix = "gtk_")]
namespace Gtk {
	[CCode (cheader_filename = "gtk/gtkunixprint.h")]
	public class PageSetupUnixDialog : Gtk.Dialog, Atk.Implementor, Gtk.Buildable {
		[CCode (has_construct_function = false, type = "GtkWidget*")]
		public PageSetupUnixDialog (string title, Gtk.Window parent);
		public unowned Gtk.PageSetup get_page_setup ();
		public unowned Gtk.PrintSettings get_print_settings ();
		public void set_page_setup (Gtk.PageSetup page_setup);
		public void set_print_settings (Gtk.PrintSettings print_settings);
	}
	[CCode (cheader_filename = "gtk/gtkunixprint.h")]
	public abstract class PrintBackend : GLib.Object {
	}
	[CCode (cheader_filename = "gtk/gtkunixprint.h")]
	public class PrintJob : GLib.Object {
		[CCode (has_construct_function = false)]
		public PrintJob (string title, Gtk.Printer printer, Gtk.PrintSettings settings, Gtk.PageSetup page_setup);
		public bool get_collate ();
		public uint get_n_up ();
		public Gtk.NumberUpLayout get_n_up_layout ();
		public int get_num_copies ();
		public Gtk.PageRange get_page_ranges (int n_ranges);
		public Gtk.PageSet get_page_set ();
		public Gtk.PrintPages get_pages ();
		public unowned Gtk.Printer get_printer ();
		public bool get_reverse ();
		public bool get_rotate ();
		public double get_scale ();
		public unowned Gtk.PrintSettings get_settings ();
		public Gtk.PrintStatus get_status ();
		public unowned Cairo.Surface get_surface () throws GLib.Error;
		public unowned string get_title ();
		public bool get_track_print_status ();
		public void send (owned Gtk.PrintJobCompleteFunc callback);
		public void set_collate (bool collate);
		public void set_n_up (uint n_up);
		public void set_n_up_layout (Gtk.NumberUpLayout layout);
		public void set_num_copies (int num_copies);
		public void set_page_ranges (Gtk.PageRange[] ranges);
		public void set_page_set (Gtk.PageSet page_set);
		public void set_pages (Gtk.PrintPages pages);
		public void set_reverse (bool reverse);
		public void set_rotate (bool rotate);
		public void set_scale (double scale);
		public bool set_source_fd (int fd) throws GLib.Error;
		public bool set_source_file (string filename) throws GLib.Error;
		public void set_track_print_status (bool track_status);
		[NoAccessorMethod]
		public Gtk.PageSetup page_setup { owned get; construct; }
		public Gtk.Printer printer { get; construct; }
		public Gtk.PrintSettings settings { get; construct; }
		public string title { get; construct; }
		public bool track_print_status { get; set; }
		public virtual signal void status_changed ();
	}
	[CCode (cheader_filename = "gtk/gtkunixprint.h")]
	public class PrintUnixDialog : Gtk.Dialog, Atk.Implementor, Gtk.Buildable {
		[CCode (has_construct_function = false, type = "GtkWidget*")]
		public PrintUnixDialog (string title, Gtk.Window parent);
		public void add_custom_tab (Gtk.Widget child, Gtk.Widget tab_label);
		public int get_current_page ();
		public bool get_embed_page_setup ();
		public bool get_has_selection ();
		public Gtk.PrintCapabilities get_manual_capabilities ();
		public unowned Gtk.PageSetup get_page_setup ();
		public bool get_page_setup_set ();
		public unowned Gtk.Printer get_selected_printer ();
		public Gtk.PrintSettings get_settings ();
		public bool get_support_selection ();
		public void set_current_page (int current_page);
		public void set_embed_page_setup (bool embed);
		public void set_has_selection (bool has_selection);
		public void set_manual_capabilities (Gtk.PrintCapabilities capabilities);
		public void set_page_setup (Gtk.PageSetup page_setup);
		public void set_settings (Gtk.PrintSettings settings);
		public void set_support_selection (bool support_selection);
		public int current_page { get; set; }
		public bool embed_page_setup { get; set; }
		public bool has_selection { get; set; }
		public Gtk.PrintCapabilities manual_capabilities { get; set; }
		public Gtk.PageSetup page_setup { get; set; }
		[NoAccessorMethod]
		public Gtk.PrintSettings print_settings { owned get; set; }
		public Gtk.Printer selected_printer { get; }
		public bool support_selection { get; set; }
	}
	[CCode (cheader_filename = "gtk/gtkunixprint.h")]
	public class Printer : GLib.Object {
		[CCode (has_construct_function = false)]
		public Printer (string name, Gtk.PrintBackend backend, bool virtual_);
		public int compare (Gtk.Printer b);
		[CCode (cname = "gtk_printer_accepts_pdf")]
		public bool get_accepts_pdf ();
		[CCode (cname = "gtk_printer_accepts_ps")]
		public bool get_accepts_ps ();
		public unowned Gtk.PrintBackend get_backend ();
		public Gtk.PrintCapabilities get_capabilities ();
		public Gtk.PageSetup get_default_page_size ();
		public unowned string get_description ();
		public bool get_hard_margins (double top, double bottom, double left, double right);
		public unowned string get_icon_name ();
		[CCode (cname = "gtk_printer_is_virtual")]
		public bool get_is_virtual ();
		public int get_job_count ();
		public unowned string get_location ();
		public unowned string get_name ();
		public unowned string get_state_message ();
		public bool has_details ();
		public bool is_accepting_jobs ();
		public bool is_active ();
		public bool is_default ();
		public bool is_paused ();
		public GLib.List<Gtk.PageSetup> list_papers ();
		public void request_details ();
		[NoAccessorMethod]
		public bool accepting_jobs { get; }
		[NoAccessorMethod]
		public bool accepts_pdf { get; construct; }
		[NoAccessorMethod]
		public bool accepts_ps { get; construct; }
		public Gtk.PrintBackend backend { get; construct; }
		public string icon_name { get; }
		[NoAccessorMethod]
		public bool is_virtual { get; construct; }
		public int job_count { get; }
		public string location { get; }
		public string name { get; construct; }
		[NoAccessorMethod]
		public bool paused { get; }
		public string state_message { get; }
		public virtual signal void details_acquired (bool success);
	}
	[CCode (cheader_filename = "gtk/gtkunixprint.h", cprefix = "GTK_PRINT_CAPABILITY_")]
	[Flags]
	public enum PrintCapabilities {
		PAGE_SET,
		COPIES,
		COLLATE,
		REVERSE,
		SCALE,
		GENERATE_PDF,
		GENERATE_PS,
		PREVIEW,
		NUMBER_UP,
		NUMBER_UP_LAYOUT
	}
	[CCode (cheader_filename = "gtk/gtkunixprint.h", instance_pos = 1.9)]
	public delegate void PrintJobCompleteFunc (Gtk.PrintJob print_job) throws GLib.Error;
	[CCode (cheader_filename = "gtk/gtkunixprint.h")]
	public delegate bool PrinterFunc (Gtk.Printer printer);
	[CCode (cheader_filename = "gtk/gtkunixprint.h")]
	public static void enumerate_printers (owned Gtk.PrinterFunc func, bool wait);
}
