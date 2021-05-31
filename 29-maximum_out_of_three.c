#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	printf("Enter the value of b : ");
	scanf("%d", &b);
	printf("Enter the value of c : ");
	scanf("%d", &c);
	
	if(a>b && a>c)
	printf("A is maximum = %d", a);
	
	else if(b>a && b>c)
	printf("B is maximum = %d", b);
	
	else if(c>a && c>b)
	printf("C is maximum = %d", c);
	
	else
	printf("All are equal");
	
	return 0;
}
