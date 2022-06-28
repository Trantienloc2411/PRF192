//program 5
#include<stdio.h>
#include<ctype.h>
void main (void) 
{
	char ch;
	int vowels, consonats, others = 0;
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
