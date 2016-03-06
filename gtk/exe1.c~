#include <gtk/gtk.h>

static void destroy (GtkWidget*, gpointer);

int main (int argc, char *argv[])
{
	GtkWidget *window, *label;
	gtk_init (&argc, &argv);
	
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title (GTK_WINDOW (window), "Nges");
	gtk_container_set_border_width (GTK_CONTAINER (window), 50);
	gtk_widget_set_size_request (window, 400,200);
	//sgtk_widget_set_size_request (window, 50, 40);
	g_signal_connect (G_OBJECT (window), "destroy",G_CALLBACK (destroy), NULL);

/* Create a new button that has a mnemonic key of Alt+C. */
	label = gtk_label_new_with_mnemonic ("_Nges");
	//gtk_label_set_relief (GTK_LABEL (label), GTK_RELIEF_NONE);

/* Connect the button to the clicked signal. The callback function recieves the
* window followed by the button because the arguments are swapped. */
		g_signal_connect_swapped (G_OBJECT (label), "clicked",G_CALLBACK (gtk_widget_destroy),(gpointer) window);
	gtk_container_add (GTK_CONTAINER (window), label);

	gtk_widget_show_all (window);
	gtk_main ();
	return 0;
}

/* Stop the GTK+ main loop function. */
static void destroy (GtkWidget *window,gpointer data)
{
gtk_main_quit ();
}

