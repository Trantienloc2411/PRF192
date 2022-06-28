#include<stdio.h>
int main () {
	int s = 0, i = 1;
	int n;

	printf("Please insert a number: \n");
	scanf("%d", &n);
//form 1:
	for (; i <= n;) {
		s +=i;
		i ++;
	}
//form 2: 
	/*
	for (int i = 1; i <=n ; i++) {
		sum +=i;
	*/
//form 3:
	/* 
	for (sum = 0; i = 1; i<=n ; i++) {
		sum +=i;
	*/
	printf("Sum from 1 to %d is : %d",n, s);
	return 0;
}

