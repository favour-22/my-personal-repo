#include<stdio.h>
/**
 * Description- using if statment to test the logical and operation.
 * Condition -An expression containing the && operator is true ,
 * if both operands are true .
 */
int main()
{
	int age = 24, salary = 950, result ;
	result = (age >=18 && salary>600);
	printf("%d\n",result);

	result = (age>= 18 && salary >1000);
	printf("%d\n" ,result);

	return(0);
	}
