//program 6 :
#include<stdio.h>
void main (void) 
{
	int code;
	for (code = 0; code <256; code++)
	{
		printf("%c : %3d, %3o, %3X\n", code, code, code, code);
		
		if (code != 0 && code % 20 == 0)
			getchar();
	}
}
