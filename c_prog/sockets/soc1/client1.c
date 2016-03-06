#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
	int sockfd;
	int len;
	struct sockaddr_un address;
	int result;
	char  ch ='A';

	//create a socket for the client
	sockfd=socket(AF_UNIX,SOCK_STREAM,0);

	//name the socket
	address.sun_family=AF_UNIX;
	strcpy(address.sun_path,"server_socket");
	len=sizeof(address);

	//connect our socket to the server
	result=connect(sockfd,(struct sockaddr *)&address,len);
	if(result==-1){
		perror("ooops the serveer could not connect\n");
		exit(1);
	}

	write(sockfd, &ch,1);
	read(sockfd,&ch,1);
	printf("char from server is = %c\n",ch );
	close(sockfd);
	exit(0);

}