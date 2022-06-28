#include<stdio.h>
#include<conio.h>
int main () {
	int i,in, is;
	is = 0;
	for (i = 1; i <=3; i++) {
		printf("Nhap vao so thu %d: ", i);
		scanf("%d", &in);
		is = is+in;
	}
	printf("Tong :%d",is);
	return 0;
}
