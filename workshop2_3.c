//program 3
#include<stdio.h>
void main (void) 
{	
	int n,i,sum ;
	printf("Please input n to sum :");
	do 
	{
		scanf("%d", &n);
		if (n!=0) 
			sum += n;
		
	}
	while(n!=0);
	printf("Total :%d", sum);
}

