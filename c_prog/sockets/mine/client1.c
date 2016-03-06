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
	for(;;){
		printf("\t\tplease input the first value \n\t\t");
		scanf("%d",&input.values[0]);
		printf("\t\tplease input the second value \n\t\t");
		scanf("%d",&input.values[1]);
		printf("\t\tInput the operator of computation\n\t\t");
		scanf("%c",&input.operate);
		scanf("%c",&input.operate);
		while(input.operate!='+'&&input.operate!='-'&&input.operate!='/'&&input.operate!='*'){
			printf("please wrong operator. re-enter either +,-,/,*\n");
			scanf("%c",&input.operate);
			if(input.operate=='+'|| input.operate=='-' || input.operate=='*' || input.operate=='/')
				break;
		}
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
		printf("\n\t\t the computation of %d%c%d= %d as done by the server. \n\n\n",input.values[0],input.operate,input.values[1],input.result );
		close(sockfd);

		char check;
		printf("press 'Q' to quite or any value to continue\n");
		scanf("%c",&check);
		scanf("%c",&check);
		if(check=='Q'|| check=='q')
			exit(0);
	}
	exit(0);

}
