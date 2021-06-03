#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the value of a :");
	scanf("%f", &a);
	printf("Enter the value of b :");
	scanf("%f", &b);
	printf("Enter\n1 for addition\n2 for substraction\n3 for multiplication\n4 for division");
	scanf("%f", &c);
	
	if(c==1)
	printf("Answer is %.2f", a+b);
	
	else if(c==2)
	printf("Answer is %.2f", a-b);
	
	else if(c==3)
	printf("Answer is %.2f", a*b);
	
	else if(c==4)
	printf("Answer is %.2f", a/b);
	
	else
	printf("Invalid Selection");
	
	return 0;
		
}
