#include<stdio.h>
/**
 * Working with loops in c 
 * if and eslse if and else loop
 * promting users to enter their age to see their status
 */
int main(void)
{
	int age;
	printf("Enter your age :\n");
	scanf("%d" ,&age);
	if (age < 60)
	{
		printf("YOU ARE YOUNG AND HEALTHY\n");
	}
	else if (age == 60)
	{
		printf("YOU ARE OLD AND WICK!!!\n");
	}
	else
	{
		printf(" YOU NEED HELP \n");
	}
	return (0);
}
	
