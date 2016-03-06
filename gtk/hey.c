#include <gtk/gtk.h>

int main(int argc , char *argv[]){

	GtkWidget *window;
	
	gtk_init( &argc, &argv);
	
	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window),"Hello world");

	//gtk_window_set_icon_from_file(GTK_WINDOW(window),"try.jpg",GError **err);

// 	gtk_window_set_gravity(GTK_GRAVITY_NORTH_WEST);

	gtk_widget_show(window);
	
	gtk_main();
    //to quit the main function
    //gtk_main_quit();
	return 0;
}
