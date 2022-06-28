//program 4
#include<stdio.h>
void main (void) 
{
	int a,b;
	
	do  
	{
		printf("\nPlease input 2 integer : ");
		scanf("%d %d", &a, &b);
		int temp = a;
		a = b;
		b = temp;
		printf("Result of a and b is after switch: %d and %d", a, b);
	}
	while (a != 0 && b != 0);
	getchar();
	getchar();
}
