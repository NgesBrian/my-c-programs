#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <sys/un.h>
#include <unistd.h>

int main()
{

	int sockfd;
	int len;
	struct sockaddr_un address;
	int results;
	char ch ='A';

	//create a sokcet
	sockfd=socket(AF_UNIX,SOCK_STREAM,0);
	
	//name the socket
	address.sun_family=AF_UNIX;
	strcpy(address.sun_path,"server_socket");
	len=sizeof(address);

	//connect socket to server
	results=connect(sockfd,(struct sockaddr * )&address,len);

	if(results==-1){
		perror("oppps there was a problem while connecting\n");
		return 1;
		
	}

	//you can read and write to the socket
	write(sockfd,&ch,1);
	read(sockfd,&ch,1);
	printf("char from server is =%c\n",ch);
	close(sockfd);
	return 0; 

}
