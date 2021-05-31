#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a : ");
	scanf("%d", &a);
	printf("Enter the value of b : ");
	scanf("%d", &b);
	
	if(a>b)
	printf("A is maximum = %d", a);
	
	else if(a<b) 
	printf("B is maximum = %d", b);
	
	else 
	printf("Both A and B are equal");
	
  return 0;
}
