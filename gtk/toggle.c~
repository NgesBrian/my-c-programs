#include <stdio.h>
#include <gtk/gtk.h>

static void button_toggled(GtkToggleButton *, GtkWidget *);


int main(int argc, char *argv[]){
	gtk_init(&argc, &argv);

	GtkWidget *vbox, *togle1, *togle2 , *window ;

	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window),"Togle buttons!");
	gtk_container_set_border_width(GTK_CONTAINER(window), 50);
	
	vbox=gtk_vbox_new(TRUE,5);
	togle1=gtk_toggle_button_new_with_mnemonic("Deactivate the other Button.");
	togle2=gtk_toggle_button_new_with_mnemonic("Deactivate the other");

	g_signal_connect(G_OBJECT(togle1),"toggle", G_CALLBACK("Button2_toggled"), (gpointer) togle2);
	g_signal_connect(G_OBJECT(togle2),"toggle", G_CALLBACK("Button1_toggled"), (gpointer) togle1);
	
	gtk_box_pack_start_defaults(GTK_BOX(vbox),togle1);
	gtk_box_pack_start_defaults(GTK_BOX(vbox),togle2);
	gtk_container_add(GTK_CONTAINER(window),vbox);
	gtk_widget_show_all(window);	
	gtk_main();
	return;
	
}

static void button_toggled(GtkToggleButton *toggle , GtkWidget *other_toggle){

	if(gtk_toggle_button_get_active(toggle)) gtk_widget_set_sensitive(other_toggle, FALSE );
	else
		gtk_widget_set_sensitive(other_toggle, TRUE);

}
