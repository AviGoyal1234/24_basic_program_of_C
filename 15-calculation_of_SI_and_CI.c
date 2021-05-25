#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float P,T,R,SI,CI;
	printf("Enter principle amount (P): ");
	scanf("%f", &P);
	printf("Enter time in year (T): ");
	scanf("%f", &T);
	printf("Enter rate in percent (R): ");
	scanf("%f", &R);
	
	SI = (P*T*R)/100;
	CI = P* (pow(1+R/100, T) - 1);
	
	printf("Simple Interest = %f\n", SI);
	printf("Compound Interest = %f", CI);
	
	return 0;	
}
