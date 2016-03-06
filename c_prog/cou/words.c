#include<stdio.h>
int main()
{
	int n1, n2;
	
	printf("Enter a two-digit number:");
	scanf("%1d%1d",&n1,&n2);
	printf("You entered the number;");
	
	switch (n1){
	 case 9: printf("Ninty-"); break;
	 case 8: printf("Eighty-"); break;
	 case 7: printf("Seventy-"); break;
	 case 6: printf("Sixty-"); break;
	 case 5: printf("Fifty-"); break;
	 case 4: printf("Forty-"); break;
	 case 3: printf("Thirty-"); break;
	 case 2: printf("Twenty-"); break;
	 case 1:
	 	if(n2==1)
	 		printf("Eleven\n");
	 	else if(n2==2)
	 		printf("Twelve\n");
	 	else if(n2==3)
	 		printf("Thirteen\n");
	 	else if(n2==4)
	 		printf("Fourteen\n");
	 	else if(n2==5)
	 		printf("Fifteen\n");
	 	else if(n2==6)
	 		printf("Sixteen\n");
	 	else if(n2==7)
	 		printf("Seventeen\n");
	 	else if(n2==8)
	 		printf("Eighteen\n");
	 	else
	 		printf("Nineteen\n");
	 }
	switch (n2){
	 case 1: printf("one\n"); break;
	 case 2: printf("two\n"); break;
	 case 3: printf("three\n"); break;
	 case 4: printf("four\n"); break;
	 case 5: printf("five\n"); break;
	 case 6: printf("six\n"); break;
	 case 7: printf("seven\n"); break;
	 case 8: printf("eight\n"); break;
	 case 9: printf("Nine\n"); break;
	 }
	 return 0;
}
