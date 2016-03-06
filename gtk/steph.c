#include <stdio.h>
#include <gtk/gtk.h>

int delete(GtkWidget *widget ,GtkWidget *event ,gpointer data);

int main(int argc, char  *argv[])
{
	gtk_init(&argc, &argv);

//declearing variables
	GtkWidget *tab;
	GtkWidget *window;
	GtkWidget *label;
	GtkWidget *image;
	GtkWidget *button;
	GtkWidget *butlabel;
	GtkWidget *hbox;
	label=gtk_label_new("man this is stephan showing some stuffs");
	butlabel=gtk_label_new("testing");
	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title((GTK_WINDOW(window)),"I am taking Gtk now Seroius");
	gtk_window_set_default_size((GTK_WINDOW(window)),100,100);
	
	g_signal_connect(G_OBJECT(window), "delete_event", G_CALLBACK(delete), NULL);

	//taking  a picture from stock
	image=gtk_image_new_from_stock(GTK_STOCK_DELETE,1);
	button=gtk_button_new();

	hbox =gtk_hbox_new(TRUE,0);
	gtk_box_pack_start(GTK_BOX(hbox),image,FALSE,FALSE,0);
	gtk_box_pack_start(GTK_BOX(hbox),butlabel,FALSE,FALSE,0);
	gtk_container_add(GTK_CONTAINER(button),hbox);

	gtk_widget_set_size_request(button,2,2);
	gtk_widget_set_size_request(hbox,1,1);


	gtk_container_add(GTK_CONTAINER(window),button);
	
	gtk_widget_show_all(window);
	gtk_main();




	return 0;
}

int delete(GtkWidget *widget , GtkWidget *event , gpointer data){

	gtk_main_quit();
	return FALSE;


}