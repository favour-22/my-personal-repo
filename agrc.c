#include<stdio.h>
#include<stdlib.h>
/**
 * AGRC - used to show number pof things entered in the command line when compiling 
 * AGRV - used to show number of string value entered.
 */
int main(int agrc, char* agrv[])
{
	int i;
	printf("agrc = %d\n", agrc);
	printf("Let see what is in agrv[]\n");

	for (i = 0; i < agrc; i++)
		{
			printf("agrv[%d] = %s\n", i,agrv[i]);
		}

	return (0);

}
