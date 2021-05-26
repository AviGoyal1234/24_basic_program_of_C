#include<stdio.h>
int main()
{
	float distance,meter,feet,inches;
	
	printf("Enter distance between Aklera and Kota (in KM) :");
	scanf("%f", &distance);
	
	meter = distance * 1000;
	feet = distance * 3280.84;
    inches = distance * 39370.1;
    
    printf("Distance in KM = %.2f\n", distance);
    printf("Distance in Meter = %.2f\n", meter);
    printf("Distance in Feet = %.2f\n", feet);
    printf("Distance in Inches = %.2f\n", inches);  \
	
	return 0;  
}
