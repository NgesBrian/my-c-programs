#include<gtk/gtk.h>
#include<stdio.h>

void greet(GtkWidget *window){
	g_print("Hello world");
}
int main(int argc, char * argv[]){

GtkWidget *window;
gtk_init (&argc, &argv);
window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
greet(window);
gtk_widget_show (window);
gtk_main ();



return 0;
}
