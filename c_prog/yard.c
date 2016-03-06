#include <stdio.h>

int main(int argc, char const *argv[])
{
	float yards, meters,kms,miles;
	int t;
	printf("-------------------------------------\n");
	printf("Yards  Meters   |   Kms     Miles   |\n");
	printf("-------------------------------------\n");
	yards=0.0;
	miles=1.0;
	t=0;
	do{

		meters=yards*0.9144;
		kms=miles*1.609344;
		printf("%5.2f%8.2f   |%8.2f%10.2f\n",yards,meters,kms,miles);
		t+=10;
		yards+=10.0;
		miles+=10.0;
	}while(t<100);
	return 0;
}
