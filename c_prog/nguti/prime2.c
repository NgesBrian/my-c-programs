#include<stdio.h>

//definining a variable N that stands for 10000
#define N 10000

int main(void){
	int i, j, num[N-2] = {0};
	//geting the prime numbers
	for(i=2; i <=10; i++){
		for(j=i+1; j< (N-2) ; j++){
			if(((j+2)%i) == 0)
				num[j] = 1;
		}
	}

	printf("Prime number from 0-10000: ");
//looping to print the prime  numbers from zero to 1000.

	for(i=0; i<(N-2); i++)
//making sure the number is printed is prime.
		if(!num[i] && (i+2!=4))
			printf("%d, \n", i+2);
	printf("\n");

	return 0;
}
