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
	struct data
			{
				int values[2];
				int result;
				char operate;
			}input;	
	
	input.values[0]=2;
	input.values[1]=2;
	input.operate='+';

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

	write(sockfd, &input,sizeof(input));
	read(sockfd,&input,sizeof(input));
	printf("the computation of %d%c%d= %d\n",input.values[0],input.operate,input.values[1],input.result );
	close(sockfd);
	exit(0);

}
