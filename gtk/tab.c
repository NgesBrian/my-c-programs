#include <stdio.h>
#include <gtk/gtk.h>

int delete(GtkWidget *widget ,GtkWidget *event ,gpointer data);
static void add_tab(GtkWidget *button , GtkWidget *notebook );
void remove_tab(GtkWidget* button , GtkWidget *notebook);

int main(int argc, char  *argv[])
{
	gtk_init(&argc, &argv);

//declearing variables	GtkWidget *tab;
	GtkWidget *window;
	GtkWidget *label;
	GtkWidget *image;
	GtkWidget *button;
	GtkWidget *butlabel;
	GtkWidget *hbox;
	GtkWidget *table;
	GtkWidget *close;
	GtkWidget *image2, *image3;
	GtkWidget *plus;
	GtkWidget *notebook;
	label=gtk_label_new("man this is stephan showing some stuffs");
	butlabel=gtk_label_new("testing");

	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title((GTK_WINDOW(window)),"I am taking Gtk now Seroius");
	gtk_window_set_default_size((GTK_WINDOW(window)),100,100);
	
	g_signal_connect(G_OBJECT(window), "delete_event", G_CALLBACK(delete), NULL);

	//taking  a picture from stock
	image=gtk_image_new_from_stock(GTK_STOCK_DELETE,1);
	image2=gtk_image_new_from_stock(GTK_STOCK_ADD,1);
	image3=gtk_image_new_from_stock(GTK_STOCK_CANCEL,1);


	button=gtk_button_new();
	

	close=gtk_button_new();
	plus=gtk_button_new();
	gtk_container_add(GTK_CONTAINER(close),image3);
	gtk_container_add(GTK_CONTAINER(plus),image2);

/*
	hbox =gtk_hbox_new(TRUE,0);
	gtk_box_pack_start(GTK_BOX(hbox),image,FALSE,FALSE,0);
//	gtk_box_pack_start(GTK_BOX(hbox),butlabel,FALSE,FALSE,0);
	//gtk_container_add(GTK_CONTAINER(button),hbox);

	gtk_widget_set_size_request(button,2,2);
	gtk_widget_set_size_request(hbox,1,1);
*/
	notebook=gtk_notebook_new();

	table=gtk_table_new(1,12,FALSE);
	gtk_table_attach(GTK_TABLE(table),plus,0,1,0,1,GTK_SHRINK,GTK_SHRINK,0,0);
	gtk_table_attach(GTK_TABLE(table),butlabel,1,3,0,1,GTK_EXPAND,GTK_EXPAND,0,0);
	gtk_table_attach(GTK_TABLE(table),close,3,4,0,1,GTK_SHRINK,GTK_SHRINK,0,0);
	gtk_notebook_append_page(GTK_NOTEBOOK(notebook),label,table);
	gtk_widget_show_all(table);
	

	g_signal_connect(G_OBJECT(plus), "clicked", G_CALLBACK(add_tab), G_OBJECT (notebook));
	g_signal_connect(G_OBJECT(close), "clicked", G_CALLBACK(remove_tab), G_OBJECT (notebook));

	


	gtk_container_add(GTK_CONTAINER(window),notebook);
	
	gtk_widget_show_all(window);
	gtk_main();




	return 0;
}

int delete(GtkWidget *widget , GtkWidget *event , gpointer data){

	gtk_main_quit();
	return FALSE;
}
static void add_tab(GtkWidget *button , GtkWidget *notebook ){
	notebook=gtk_notebook_new();

	GtkWidget *window;
	GtkWidget *label;
	GtkWidget *image;

	GtkWidget *butlabel;
	GtkWidget *hbox;
	GtkWidget *table;
	GtkWidget *close;
	GtkWidget *image2, *image3;
	GtkWidget *plus;

	//taking  a picture from stock
	image=gtk_image_new_from_stock(GTK_STOCK_DELETE,1);
	image2=gtk_image_new_from_stock(GTK_STOCK_ADD,1);
	image3=gtk_image_new_from_stock(GTK_STOCK_CANCEL,1);
gtk_widget_show(image);
gtk_widget_show(image3);
gtk_widget_show(image2);


	close=gtk_button_new();
	plus=gtk_button_new();
	gtk_container_add(GTK_CONTAINER(close),image3);
	gtk_container_add(GTK_CONTAINER(plus),image2);


	table=gtk_table_new(1,12,FALSE);
	g_signal_connect(G_OBJECT(plus), "clicked", G_CALLBACK(add_tab), (gpointer) notebook);
	
	gtk_table_attach(GTK_TABLE(table),plus,0,1,0,1,GTK_SHRINK,GTK_SHRINK,0,0);
	gtk_table_attach(GTK_TABLE(table),butlabel,1,3,0,1,GTK_EXPAND,GTK_EXPAND,0,0);
	gtk_table_attach(GTK_TABLE(table),close,3,4,0,1,GTK_SHRINK,GTK_SHRINK,0,0);

	gtk_widget_set_size_request(table,120,0);
	gtk_notebook_insert_page(GTK_NOTEBOOK(notebook),label,table,1);
	gtk_widget_show_all(table);
	gtk_widget_show_all(notebook);

	

}

void remove_tab(GtkWidget* button , GtkWidget *notebook){

	gint page;
	page =gtk_notebook_get_current_page(GTK_NOTEBOOK(notebook));
	if(page !=0){
		gtk_notebook_remove_page(GTK_NOTEBOOK(notebook),page);
	

	}

	gtk_widget_queue_draw(notebook);
}