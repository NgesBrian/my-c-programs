#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>
#include <gtk/gtk.h>

int Delete(GtkWidget *widget ,GtkWidget *event ,gpointer data);
void addi( );
void subt( );
void divi( );
void multi( );


	struct data
			{
				int values[2];
				int result;
				char operate;
				
			}input;	
struct sockaddr_un address;
int len,con;
int sockfd;

	GtkWidget *window,*table,*num1,*num2,*add,*sub, *divide,*mul, *result,*lab1,*lab2;

int main(int argc,char *argv[]){

	gtk_init (&argc, &argv);



	window=gtk_window_new(GTK_WINDOW_TOPLEVEL);
	gtk_window_set_title(GTK_WINDOW(window),"Client-Server Program");
	gtk_widget_set_size_request(window,500,400);
	gtk_container_set_border_width(GTK_CONTAINER(window),0);
	g_signal_connect(G_OBJECT(window),"delete_event",G_CALLBACK(Delete),NULL);

	num1=gtk_entry_new();
	num2=gtk_entry_new();
	result=gtk_entry_new();

	add=gtk_button_new_with_label("+");
	gtk_widget_set_size_request(add,75,75);
	sub=gtk_button_new_with_label("-");
	gtk_widget_set_size_request(sub,75,75);
	divide=gtk_button_new_with_label("/");
	gtk_widget_set_size_request(divide,75,75);
	mul=gtk_button_new_with_label("*");
	gtk_widget_set_size_request(mul,75,75);

	lab1=gtk_label_new("First Input");
	lab2=gtk_label_new("Second Input");

	table=gtk_table_new(20,20,FALSE);

	gtk_table_attach(GTK_TABLE(table),lab1,2,5,2,4,1,1,0,0);
	gtk_table_attach(GTK_TABLE(table),lab2,2,5,5,7,1,1,0,0);
	gtk_table_attach(GTK_TABLE(table),num1,6,10,2,4,1,1,0,0);
	gtk_table_attach(GTK_TABLE(table),num2,6,10,5,7,1,1,0,0);
	gtk_table_attach(GTK_TABLE(table),result,6,10,8,10,1,1,0,0);
	gtk_table_attach(GTK_TABLE(table),add,2,6,10,14,1,1,0,0);
	gtk_table_attach(GTK_TABLE(table),sub,6,10,10,14,1,1,0,0);
	gtk_table_attach(GTK_TABLE(table),divide,10,14,10,14,1,1,0,0);
	gtk_table_attach(GTK_TABLE(table),mul,14,18,10,14,1,1,0,0);

	char a,s,m,d;


	g_signal_connect(G_OBJECT(add),"clicked",G_CALLBACK(addi),NULL);
	g_signal_connect(G_OBJECT(sub),"clicked",G_CALLBACK(subt),NULL);
	g_signal_connect(G_OBJECT(divide),"clicked",G_CALLBACK(divi),NULL);
	g_signal_connect(G_OBJECT(mul),"clicked",G_CALLBACK(multi),NULL);


	gtk_container_add(GTK_CONTAINER(window),table);
	gtk_widget_show_all(window);

	gtk_main();
	return 0;
}

//the function delete.This function destroy the window when called.
int Delete(GtkWidget *widget ,GtkWidget *event ,gpointer data){
	gtk_main_quit();
	return FALSE;
}

void addi( ){

	
		int num;
		char pt[2];
		input.values[0]=atoi(gtk_entry_get_text(GTK_ENTRY(num1)));
		
		input.values[1]=atoi(gtk_entry_get_text(GTK_ENTRY(num2)));
		input.operate='+';
		//create a socket for the client
		sockfd=socket(AF_UNIX,SOCK_STREAM,0);

		//name the socket
		address.sun_family=AF_UNIX;
		strcpy(address.sun_path,"server_socket");
		len=sizeof(address);

		//connect our socket to the server
		con=connect(sockfd,(struct sockaddr *)&address,len);
		if(con==-1){
			perror("ooops the serveer could not connect\n");
			exit(1);
		}

		write(sockfd, &input,sizeof(input));
		read(sockfd,&input,sizeof(input));
		sprintf(pt,"%d",input.result);
		printf("\n\t\t the computation of %d%c%d= %d as done by the server. \n\n\n",input.values[0],input.operate,input.values[1],input.result );
		gtk_entry_set_text(GTK_ENTRY(result),pt);
		close(sockfd);

	}

	void subt( ){

	
		int num;
		char pt[2];
		input.values[0]=atoi(gtk_entry_get_text(GTK_ENTRY(num1)));
		
		input.values[1]=atoi(gtk_entry_get_text(GTK_ENTRY(num2)));
		input.operate='-';
		//create a socket for the client
		sockfd=socket(AF_UNIX,SOCK_STREAM,0);

		//name the socket
		address.sun_family=AF_UNIX;
		strcpy(address.sun_path,"server_socket");
		len=sizeof(address);

		//connect our socket to the server
		con=connect(sockfd,(struct sockaddr *)&address,len);
		if(con==-1){
			perror("ooops the serveer could not connect\n");
			exit(1);
		}

		write(sockfd, &input,sizeof(input));
		read(sockfd,&input,sizeof(input));
		sprintf(pt,"%d",input.result);
		printf("\n\t\t the computation of %d%c%d= %d as done by the server. \n\n\n",input.values[0],input.operate,input.values[1],input.result );
		gtk_entry_set_text(GTK_ENTRY(result),pt);
		close(sockfd);

	}
	
	void divi( ){

	
		int num;
		char pt[2];
		input.values[0]=atoi(gtk_entry_get_text(GTK_ENTRY(num1)));
		
		input.values[1]=atoi(gtk_entry_get_text(GTK_ENTRY(num2)));
		input.operate='/';
		//create a socket for the client
		sockfd=socket(AF_UNIX,SOCK_STREAM,0);

		//name the socket
		address.sun_family=AF_UNIX;
		strcpy(address.sun_path,"server_socket");
		len=sizeof(address);

		//connect our socket to the server
		con=connect(sockfd,(struct sockaddr *)&address,len);
		if(con==-1){
			perror("ooops the serveer could not connect\n");
			exit(1);
		}

		write(sockfd, &input,sizeof(input));
		read(sockfd,&input,sizeof(input));
		sprintf(pt,"%d",input.result);
		printf("\n\t\t the computation of %d%c%d= %d as done by the server. \n\n\n",input.values[0],input.operate,input.values[1],input.result );
		gtk_entry_set_text(GTK_ENTRY(result),pt);
		close(sockfd);

	}
	
	void multi( ){

	
		int num;
		char pt[2];
		input.values[0]=atoi(gtk_entry_get_text(GTK_ENTRY(num1)));
		
		input.values[1]=atoi(gtk_entry_get_text(GTK_ENTRY(num2)));
		input.operate='*';
		//create a socket for the client
		sockfd=socket(AF_UNIX,SOCK_STREAM,0);

		//name the socket
		address.sun_family=AF_UNIX;
		strcpy(address.sun_path,"server_socket");
		len=sizeof(address);

		//connect our socket to the server
		con=connect(sockfd,(struct sockaddr *)&address,len);
		if(con==-1){
			perror("ooops the serveer could not connect\n");
			exit(1);
		}

		write(sockfd, &input,sizeof(input));
		read(sockfd,&input,sizeof(input));
		sprintf(pt,"%d",input.result);
		printf("\n\t\t the computation of %d%c%d= %d as done by the server. \n\n\n",input.values[0],input.operate,input.values[1],input.result );
		gtk_entry_set_text(GTK_ENTRY(result),pt);
		close(sockfd);

	}
	
