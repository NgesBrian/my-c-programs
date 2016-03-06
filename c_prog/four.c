#include <gtk/gtk.h>

	void callback( GtkWidget *widget,gpointer data )
	{
			printf("printing from printf\n");
			g_print ("Hello again - %s was pressed\n", (gchar *) data);

	}

	gint delete_event( GtkWidget *widget,GdkEvent *event,gpointer data )
	{
		gtk_main_quit ();
		return FALSE;
	}


int main( int argc,char *argv[] )
{
	GtkWidget *window;
	GtkWidget *button1;
	GtkWidget *button2;
	GtkWidget *button3;
	GtkWidget *button4;

		gtk_init (&argc, &argv);

		window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
		gtk_window_set_title (GTK_WINDOW (window), "Hello Buttons!");
		g_signal_connect (G_OBJECT (window), "delete_event",G_CALLBACK (delete_event), NULL);
		gtk_container_set_border_width (GTK_CONTAINER (window), 300);
		
		
		button1 = gtk_button_new_with_label ("Button 1");
		button2 = gtk_button_new_with_label ("Button 2");
		button3 = gtk_button_new_with_label ("Button 3");
		button4 = gtk_button_new_with_label ("Button 4");
		gtk_container_add (GTK_CONTAINER (window), button1, button2, button3, button4);

		g_signal_connect (G_OBJECT (button1), "clicked",G_CALLBACK (callback), (gpointer) "button 1");
	
	
		
		gtk_widget_show (button1);
		gtk_widget_show (button2);
		gtk_widget_show (button3);
		gtk_widget_show (button4);
		gtk_widget_show (window);

	
	gtk_main ();
return 0;
}

