//program 7
#include<stdio.h>
void main(void) 
{
	char c1,c2,temp,c;
	int d;
	printf("Please input 2 char :");
	scanf("%c %c", &c1, &c2);
	if (c1 > c2) 
	{
		temp = c1;
		c1 = c2;
		c2 = temp;
	}
	d = c2 - c1;
	printf("d = %d\n", d);
	for (c = c2; c>=c1;  c++)
	{
		printf("%c : %6d%6o%6X\n", c, c, c, c);
	}
}
