#include<stdio.h>
#define pur "PURCHASE"
#define unit "UNITPRICE"
#define it "ITEM"
int main()
{
	int n,m,d,y;
	float p;
	
	start:printf("Enter item number;\n");
	scanf("%d",&n);
	printf("Enter unit price;\n");
	scanf("%f",&p);
	printf("Enter purchase date(mm/dd/yyyy);\n");
	scanf("%d/%d/%d",&m,&d,&y);
	
	if(d<=9999.99){
		printf("%s\t%s\t%s\n",it,unit,pur);
		printf("%-d\t$%-.2f\t\t%d/%d/%d\n",n,p,m,d,y);
		}
	else
		goto start;
	return 0;
}
