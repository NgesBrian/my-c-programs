#include<stdio.h>
int main(){
float fahr, cel;
int lower, upper,step;
lower=0;
upper=500;
step=20;
fahr=lower;
printf("fahr\tcel\n");
while(fahr<=upper){
cel=5*(fahr-32)/9;
printf("%4.1f\t%4.2f\n",fahr,cel);
fahr+=step;
}
return 0;
}
