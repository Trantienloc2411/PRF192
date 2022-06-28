#include<stdio.h>
void main () {
	int a,b;
	printf("Please insert a & b: \n");
	scanf("%d %d", &a, &b);
	if (a > b) {
		printf("a is bigger than b");
		
	} if (a < b  ) {
		printf("a is smaller than b");
	} else {
		printf("a is equal b");
	}
}
