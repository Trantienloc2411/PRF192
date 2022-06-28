#include<stdio.h>
void main (void) {
	int i;
	printf("Hay nhap 1,2,3");
	scanf("%d", &i);
	switch (i) {
		case 3: printf("*");
		case 2: printf("*");
		case 1: printf("*");
	}

}
