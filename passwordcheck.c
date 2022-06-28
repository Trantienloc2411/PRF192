#include<stdio.h>
#define PASSWORD 12345

void main (void) 
{
	int in;
	do 
	{
		printf("Input password :");
		scanf("%d", &in);
	}
	while (in != PASSWORD);
}
