#include <gtk/gtk.h>

int main( int argc, char * argv[]){
	gtk_init(&argc,&argv);
	
	GtkWidget *vbox, *window, *check1, *check2, *check3, check4;

	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window),"a We are here with checks ");
	gtk_container_set_border_width(GTK_CONTAINER(window),100);

	check1=gtk_radio_button_new_with_label(NULL,"I want to be clicked");
	check2=gtk_radio_button_new_with_label(NULL, "I am to be clicked");
	check3=gtk_radio_button_new_with_label(NULL,"Please it should be me");

	check4 = gtk_radio_button_new_with_label_from_widget (GTK_RADIO_BUTTON (check4),"No! Click me instead!");


	vbox=gtk_vbox_new(FALSE,5);
	gtk_box_pack_start_defaults(GTK_BOX(vbox),check1);
	gtk_box_pack_start_defaults(GTK_BOX(vbox),check2);
	gtk_box_pack_start_defaults(GTK_BOX(vbox),check3);

	gtk_container_add (GTK_CONTAINER (window), vbox);
	gtk_widget_show_all (window);

	gtk_main ();	
	return;
}
