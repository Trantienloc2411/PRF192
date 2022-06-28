#include<stdio.h>
int main () {
	int n;
	long int t = 0; 
	printf("Please insert value use electric power: \n");
	scanf("%d" ,&n);
	if (n <= 100) {
		t = n * 950;  
	} else if (n <= 150) {
		t = n * 1250; 
	} else if (n <= 200 ) {
		t = n *1350;
	} else {
		t  = n *1550;
	}
	printf("The money you must paid is :%d", t);
	return 0;
	
}
