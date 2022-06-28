#include<stdio.h>
int main () 
{
	int s = 0, i = 0;
	goto run;
	for ( i = 1; i< 3; i++) {
		printf("Hello-%d", i);
		i++;
	}
	run :
		printf("%d\n", s);
	return 0;
}
