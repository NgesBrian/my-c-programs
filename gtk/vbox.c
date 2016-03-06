#include <gtk/gtk.h>

#define NUM_NAMES 4
const gchar* names[]={"Andrew","Joe","Samantha","Jonathan"};

int main(int argc, char *argv[]){

	gint i;
	GtkWidget *window,*vbox,*button;
	gtk_init(&argc,&argv);
	
		button = gtk_button_new_with_label ("new");

	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window),"Vboxes");
	gtk_container_set_border_width(GTK_CONTAINER(window),10);
	gtk_widget_set_size_request(window,200,-1);

	vbox=gtk_vbox_new(TRUE,5);
	
	for(i=0;i<NUM_NAMES;i++){
		GtkWidget *button= gtk_button_new_with_label(names[i]);
		gtk_box_pack_start_defaults(GTK_BOX(vbox),button);

		g_signal_connect_swapped(G_OBJECT (button), "clicked",G_CALLBACK(gtk_widget_destroy),(gpointer) button);

	}
	gtk_container_add(GTK_CONTAINER(window),vbox);
	gtk_widget_show_all(window);
	
	gtk_main();

return 0;
}
