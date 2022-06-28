#include<stdio.h>
int main () {
	int i, ij, idai,irong;
	printf("Nhap chieu dai");
	scanf("%d", &idai);
	printf("Nhap chieu rong");
	scanf("%d", &irong);
	for (i = 1; i <= irong; i++) {
		for (ij = 1; ij <=idai; ij++) {
			printf("*");
		}
	printf("\n");
	}
	return 0;
}
