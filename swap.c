#include<stdio.h>
/*
 * Swap_int-swaps the value of two number
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 3, b = 7;
	swap_int(&a , &b);
	printf("a : %d\n ,b :%d",a ,b);
}

	
