#include<stdio.h>
 
void main (void) {
	int i = 0, in, is = 0;
	printf("Input n :");
	scanf ("%d", &in);
	while (i++ <in) 
		is += i;
	printf("Total: %d", is);
}
