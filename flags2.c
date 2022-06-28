#include<stdio.h>
int main () 
{
	int s = 0, s2=100, i =0;
	goto run_2;
	run_1:
		for ( i = 1; i< 3; i++) {
		printf("Hello-%d", i);
		i++;
	}
	run_2:
		printf("%d\n", s2);
		goto run_1;
	return 0;
}
