#include <gtk/gtk.h>

	
gint delete_event( GtkWidget *widget,GdkEvent *event,gpointer data )
	{
		gtk_main_quit ();
		return FALSE;
	}

int main(int argc, char  *argv[]){
	gtk_init(&argc,&argv);
	
	GtkWidget * window, *hbox, *url, *bin;
	
	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window),"this is the top bar of a browser");
	gtk_container_set_border_width(GTK_CONTAINER(window),50);
	
	g_signal_connect (G_OBJECT (window), "delete_event",G_CALLBACK (delete_event), NULL);

	hbox=gtk_hbox_new(TRUE, 5);
	
	url=gtk_button_new_with_label("this is the url of the page");
	bin=gtk_button_new_with_label("this is the bin of search");
	
	gtk_box_pack_start_defaults(GTK_BOX(hbox),url);
	gtk_box_pack_start_defaults(GTK_BOX(hbox),bin);
	gtk_container_add(GTK_CONTAINER(window),hbox);
	gtk_widget_show_all(window);	

gtk_main();
	return;
	

}
