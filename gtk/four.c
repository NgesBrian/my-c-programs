#include <gtk/gtk.h>
	void callback( GtkWidget *widget,gpointer data )
	{
		gtk_label_set_text(GTK_LABEL(widget),"manage school");


	}
		
	void callback2( GtkWidget *widget,gpointer data )
	{
		gtk_label_set_text(GTK_LABEL(widget),"manage finances");

	}

	void callback3( GtkWidget *widget,gpointer data )
	{
		gtk_label_set_text(GTK_LABEL(widget),"manage sent email");

	}
		void callback4( GtkWidget *widget,gpointer data )
	{
		gtk_label_set_text(GTK_LABEL(widget),"check updates");


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
	GtkWidget *table;
	GtkWidget *label;

		gtk_init (&argc, &argv);
		table = gtk_table_new( 7, 12, TRUE);
		
		label= gtk_label_new("");

		window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
		gtk_window_set_title (GTK_WINDOW (window), "Hello Buttons!");
		g_signal_connect (G_OBJECT (window), "delete_event",G_CALLBACK (delete_event), NULL);
		gtk_container_set_border_width (GTK_CONTAINER (window), 200);
		
		
		button1 = gtk_button_new_with_label ("manage school");
		button2 = gtk_button_new_with_label (" manage finances\n");
		button3 = gtk_button_new_with_label ("send email");
		button4 = gtk_button_new_with_label ("check updates");

		gtk_table_attach_defaults( GTK_TABLE(table), button1, 0, 3, 0, 3);
		gtk_table_attach_defaults( GTK_TABLE(table), button2, 4, 7, 0, 3 );
		gtk_table_attach_defaults( GTK_TABLE(table), button3, 0, 3, 6, 9);
		gtk_table_attach_defaults( GTK_TABLE(table), button4, 4, 7, 6, 9);

		gtk_table_attach_defaults(GTK_TABLE(table),label , 7, 9,0,2);

			g_signal_connect_swapped (G_OBJECT (button1), "clicked",G_CALLBACK (callback),  label);
			g_signal_connect_swapped (G_OBJECT (button2), "clicked",G_CALLBACK (callback2),  label);
			g_signal_connect_swapped (G_OBJECT (button3), "clicked",G_CALLBACK (callback3),  label);
			g_signal_connect_swapped (G_OBJECT (button4), "clicked",G_CALLBACK (callback4),  label);

	
		
		gtk_container_add( GTK_CONTAINER(window), table);
		gtk_widget_show_all (window);

	
	gtk_main ();
return 0;
}

