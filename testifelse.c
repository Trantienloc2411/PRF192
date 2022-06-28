#include<stdio.h>
int main () {
	int n,t;
	printf("Please insert quantanty of T-Shirts : \n");
	scanf("%d", &n);
	if (n <= 3) {
		t = n * 120000;
	}
	else if (n <= 6) {
		t  = 3 *120000 + (n-3) * 90000;
	} else if (n <=10) {
		t = 3*120000 + 3 * 90000 + (n - 6) *85000 ;
			}
		else 
		t = 3*120000 + 3*90000+4*85000+ (n-10)*70000 ;
	printf("The cost is :%d$", t); 
	return 0; 		
}
