#include<stdio.h>

#define N 10000

//declaring a function isprimw
int is_prime(int num);

int main(void){
	int i;

	printf("Prime numbers between 0-10000 are: ");

	for(i=0;i<N;i++){		
	//a call an check of the isprime to print the prime numbers 
		if(is_prime(i))
			printf("%d, \n",i);
	}
	printf("\n");
	return 0;
}

//the isprime function to get the prime numbers 
int is_prime(int num){
	int i, cnt=0;

//looping and making sure that the modulus of the  prime number for all should numbers should not be equal  zero apart from itself and 1
 	for(i=1;i<=num ;i++){
		if((num%i) == 0)
			cnt++;
	}

	if(cnt==2)
		return 1;
	else
		return 0;
}
