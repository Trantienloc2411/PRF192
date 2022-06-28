//program 2
#include<stdio.h>
void main (void) 
{
	float pa = 9000000, pd =3600000,tf,ti,income;
	int n;
	printf("Please input your income of this year: ");
	scanf("%f", &income);
	printf("Please input the number of dependent :");
	scanf("%d", &n);
	tf = 12*(pa + n*pd);
	printf(" Tax-free income:%f\n",tf);
	ti = income - tf;
	if (ti > 0 && ti <=5000000)
	{
		printf("Taxable income = %f\n",ti);
		printf("Income tax = %f", ti *5/100);
	}
	else if (ti >= 5000001 && ti < 10000000)
	{
		printf("Taxable income = %f\n",ti);
		printf("Income tax = %f", ti * 10/100);
	}
	else if (ti >= 10000001 && ti <= 18000000) 
	{
		printf("Taxable income = %f\n", ti );
		printf("Income tax = %f\n", ti*15/100);
	}
	else if (ti <= 0) 
	{
		printf("Taxable income = 0\n");
		printf("Income tax = 0\n");
	}
	else 
	{
		printf("Taxable income = %f\n", ti);
		printf("Income tax = %f", ti*20/100);
	}
}
