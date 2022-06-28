#include<stdio.h>
#include<ctype.h>
void program1 (int a, int b, char op)
{
	switch (op)
	{
		case '+':
			printf("Result: %d",a+b );
			break;
		case '-':
			printf("Result: %d",a-b );
			break;	 
		case '*':
			printf("Result: %d",(a*1.0)*b );
			break;
		case '/':
			printf("Result: %f",(a*1.0) / b );	
			break;
		default : printf("Operator is not supported");		
	}
}
void program2 (int n, float income)
{
    float pa = 9000000;
    float pd =3600000;
	float tf = 12*(pa + n*pd);
	printf(" Tax-free income:%f\n",tf);
	float ti = income - tf;
	if (ti > 0 && ti <=5000000)
	{
		printf("Taxable income = %f\n",ti);
		printf("Income tax = %f", ti *5/100);
	}
	else if (ti >= 5000001 && ti < 10000000)
	{
		printf("Taxable income = %f\n",ti);
		printf("Income tax = %f", ti * 10/100);
	}
	else if (ti >= 10000001 && ti <= 18000000) 
	{
		printf("Taxable income = %f\n", ti );
		printf("Income tax = %f\n", ti*15/100);
	}
	else if (ti <= 0) 
	{
		printf("Taxable income = 0\n");
		printf("Income tax = 0\n");
	}
	else 
	{
		printf("Taxable income = %f\n", ti);
		printf("Income tax = %f", ti*20/100);
	}
}
void program3 ()
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
void program4 ()
{	int a,b,temp;
	do  
	{
		printf("\nPlease input 2 integer : ");
		scanf("%d %d", &a, &b);
		int temp = a;
		a = b;
		b = temp;
		printf("Result of a and b is after switch: %d and %d", a, b);
	}
	while (a != 0 && b != 0);
	getchar();
	getchar();
} 
void program5 ()
{
	char ch;
	int vowels = 0;
	int consonats = 0;
	int others = 0;
	printf("Input character :");
	do 
	{
		ch = getchar();
		ch = toupper(ch);
		if ((ch>'A')&&(ch<'Z'))
		{
			switch (ch) 
			{
				case 'A':
				case 'E':
				case 'U':
				case 'O':
				case 'I': vowels ++;
					break;
				default : consonats ++;
			}
		}
		else others = others ++;
	} while (ch != '\n');
	printf("Number of wowels :%d\n", vowels);
	printf("Number of consonat :%d\n", consonats);
	printf("Others :%d\n", others);
	getchar (); 
}
void program6 ()
{
	int code;
	for (code = 0; code <256; code++)
	{
		printf("%c : %3d, %3o, %3X\n", code, code, code, code);
		
		if (code != 0 && code % 20 == 0)
			getchar();
	}
}
void program7 () 
{
	char c1; 
	char c2;
	char temp; 
	char c; 
	int d;
	printf("Please input first char :");
	scanf("%c ", &c1);
	printf("\nPlease input second char :");
	scanf("%c ", &c2);
	if (c1 > c2) 
	{
		temp = c1;
		c1 = c2;
		c2 = temp;
	}
	d = c2 - c1;
	printf("d = %d\n", d);
	for (c = c2; c>=c1;  c++)
	{
		printf("%c : %6d%6o%6X\n", c, c, c, c);
	}
}

int main () 
{
	int l;
	do
	{
	printf("*********************************************************************************");
	printf("\n\n	Welcome to my workshop ^-^												\n");
	printf("	This is the following programs in this workshop								\n");
	printf("		Program 1[1]: Calculate through operators 								\n");
	printf("		Program 2[2]: Calculate the tax 										\n");
	printf("		Program 3[3]: Calculate from 1 to n until you press '0'					\n");
	printf("		Program 4[4]: Switch the position number 								\n");
	printf("		Program 5[5]: Count the vowel, consonant and others 					\n");
	printf("		Program 6[6]: Print ASCII												\n");
	printf("		Program 7[7]: Find the different of 2 characters						\n");
	printf("		Press 	0[0]: Exit program												\n");

	
	printf("\nPlease input the number that you want to use: 								" );
	scanf("%d", &l);
		switch (l)
		{
			case 1:
			{	
				int a,b;
				char temp, op;
				printf("Please input a and b :");
				scanf("%d %d", &a, &b );
				scanf("%c",&temp);
				printf("Please input operator ");
				scanf("%c",&op);
				program1(a,b,op);
				break;
			}
			case 2:
			{	
				int n;
				float income;
				printf("Please input your income of this year: ");
				scanf("%f", &income);
				printf("Please input the number of dependent :");
				scanf("%d", &n);
				program2(n,income);
				break;
			}
			case 3:
				{
				program3();
				break;
				}
			case 4:
			{
				program4();
				break;
			}
			case 5:
			{
				program5();
				break;
			}
			case 6:
			{
			
				program6();
				break;
			
			}
			case 7:
			{
			
				program7();
				break;
			}
			case 0:
				{
				printf("Thanks for using! See you again!");
				break;
				}
			default:
			{
			printf("That is not invaild! Please input again~~\n\n");
				return 0;
			}
		
	}
}
	while (l != 0);
}


