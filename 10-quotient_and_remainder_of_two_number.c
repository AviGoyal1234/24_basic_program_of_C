#include<stdio.h>
int main()
{
	int a,b,quotient = 0,remainder = 0;
	printf("Enter first number a : ");
	scanf("%d", &a);
	printf("Enter first number b : ");
	scanf("%d", &b);
	
	quotient = a / b;
	remainder = a % b;
	
	printf("Quotient of a / b is : %d\n", quotient);
	printf("Remainder of a / b is : %d\n", remainder);
	
	return 0;
	}
