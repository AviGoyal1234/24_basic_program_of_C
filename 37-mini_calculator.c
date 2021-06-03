#include<stdio.h>
int main()
{
	int a,b;
	char c;
	printf("Enter\n+ for addition\n- for substraction\n* for multiplication\n/ for division");
	scanf("%c", &c);
	printf("\nEnter the value of a :");
	scanf("%d", &a);
	printf("Enter the value of b :");
	scanf("%d", &b);

	
	if(c=='+')
	printf("\nAnswer is %d", a+b);
	
	else if(c=='-')
	printf("\nAnswer is %d", a-b);
	
	else if(c=='*')
	printf("\nAnswer is %d", a*b);
	
	else if(c=='/')
	printf("\nAnswer is %d", a/b);
	
	else
	printf("\nInvalid Selection");
	
	return 0;
		
}
