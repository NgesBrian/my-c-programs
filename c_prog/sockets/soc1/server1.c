#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <stdio.h>
#include <unistd.h>

int main(){

	int server_sockfd,client_sockfd;
	int server_len,client_len;
	struct sockaddr_un server_address;
	struct sockaddr_un client_address;

	//remove any old socket and create a new unnames socket
	unlink("server_socket");
	server_sockfd=socket(AF_UNIX,SOCK_STREAM,0);

	//naming the socket
	server_address.sun_family=AF_UNIX;
	strcpy(server_address.sun_path,"server_socket");
	server_len=sizeof(server_address);
	bind(server_sockfd,(struct sockaddr *)&server_address,server_len);

	//create a connect queue and wait for clients
	listen(server_sockfd,5);
	while(1){
		char ch;
		printf("server waiting\n");
	

	//accept connection

	client_len=sizeof(client_address);
	client_sockfd=accept(server_sockfd,(struct sockaddr *)&client_address,&client_len);

	//read and write to client
	read (client_sockfd,&ch,1);
		ch++;
		write(client_sockfd,&ch,1);
		close(client_sockfd);
	}

}