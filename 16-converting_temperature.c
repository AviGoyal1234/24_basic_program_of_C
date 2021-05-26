#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter temperature in fahrenheit : ");
	scanf("%f", &fahrenheit);
	
	celsius = (fahrenheit - 32)*5/9;
	printf("Celsius = %f",celsius);
	
	return 0;
}
