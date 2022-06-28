#include<stdio.h>

void main (void) {
	int i = 0, ij;
	while (i <= 9)
	{
		ij = 0;
		while (ij++ <= 9) 
			printf("%d", i);
		printf("\n");
		i++ ;
	}
}
