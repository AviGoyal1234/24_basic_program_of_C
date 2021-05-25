#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    
    c = a + b;
    
    printf("Addition of two number = %d\n", c);
    
    d = a - b;
    
    printf("Substraction of two number = %d\n", d);
    
    e = a * b;
    
    printf("Multiplication of two number = %d\n", e);
    
    f = a / b;
    
    printf("Division of two number = %d\n", f);

    g = (a + b)/2;
    
    printf("Average of two number = %d\n", g);
    
	return 0;
}
