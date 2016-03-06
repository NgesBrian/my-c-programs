#include <gtk/gtk.h>
/*this is a callback function.
*/

void hello(GtkWidget *widget ,gpointer data){
	g_print("Hello world\n");

}
gint delete_event(GtkWidget *widget, GdkEvent *event, gpointer data){
	//if you return false in the delete event handeler, GTK will destroy signals.
	g_print("delete event occured");
//returning true means windows wont be destroyed
return TRUE;
}
//Another callback
void destroy (GtkWidget *widget, gpointer data){

	gtk_main_quit();
}

int main(int argc, char *argv[]){
	//GtkWidget is the storage type for widgets

	GtkWidget *window;
	GtkWidget *button;

	//called in alll gtk apps bc args are passed trough the command line.

	gtk_init(&argc, &argv);
//create anew windows

	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);

	g_signal_connect(G_OBJECT(window),"delete_event",G_CALLBACK(delete_event),NULL);
	g_signal_connect(G_OBJECT(window),"destroy",G_CALLBACK(destroy),NULL);

//set the border width of window
	gtk_container_set_border_width(GTK_CONTAINER(window),10);
	button=gtk_button_new_with_label("Hello World Nges b ");
//when signal is receive by button wit will call the hello function.
g_signal_connect(G_OBJECT (button),"clicked",G_CALLBACK(hello),NULL);

g_signal_connect_swapped(G_OBJECT (button), "clicked", G_CALLBACK(gtk_widget_destroy),G_OBJECT(window));
gtk_container_add(GTK_CONTAINER(window),button);

//finall step is to destroy this newly created widget
gtk_widget_show(button);
gtk_widget_show(window);

	gtk_main();

	return 0;
}
