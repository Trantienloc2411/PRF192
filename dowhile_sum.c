#include<stdio.h>
int main () {
	int n,i = 1;
	int sum = 0;
	printf("Please input a number : \n");
	scanf("%d", &n);
	do {	
			sum += i;
			i++;
	}
	while (n != 0, i <=n); 
	printf("Sum from 1 to %d is: %d", n, sum);
	return 0 ;
}
