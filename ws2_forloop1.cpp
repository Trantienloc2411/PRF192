#include<stdio.h>
int main () {
	int i, in, is = 0;
	printf("Nhap vao so n :");
	scanf("%d", &in);
	is = 0;
	for (i = 0; i <in; i++) {
		if (i % 2 != 0 ) 
		 is+=1;
	}
	printf ("Tong: %d", is);
}
