//program 1
#include<stdio.h> 

int main () {
	int a,b ;
	double result;
	char op;
	printf("Input number 1 operator 2 :");
	scanf("%d %c %d", &a,&op, &b);
	switch (op)
	{
		case '+':result = a + b;
			printf("Result: %f",result );
			break;
		case '-':result = a - b;
			printf("Result: %f",result );
			break;	 
		case '*':result = a * b;
			printf("Result: %f",result );
			break;
		case '/':result = a / b;
			printf("Result: %f",result );
			
			break;
		default : printf("Operator is not supported");		
	}
	
	return 0;
}
