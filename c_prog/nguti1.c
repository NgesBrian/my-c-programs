#include <stdio.h>

 int main(int argc, char const *argv[])
{
	
	short int var1=0;
	unsigned short int var2=0;
	int i=0;
	//printf("%ld",size_of(short int));
	//	printf("%ld\n",size_of(unsigned short int));
	printf("   var1      var2\n");
	for(i=0;;i+=1000){
		printf("%3d\n",var1);
		var1+=1;
		if(var1>=32766)
			break;
		}	
	
	for(i=0;;i+=1000){
		printf("%3d\n",var2);
		var2+=1;
		//if(var1>=32766)
		//	return;
		}	
	
	return 0;
	
}
