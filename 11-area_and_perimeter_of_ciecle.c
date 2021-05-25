#include<stdio.h>
int main()
{
   int radius;
   float pi=3.14, area, perimeter;
   printf("Enter radius of circle : ");
   scanf("%d" , &radius);
   
   area = pi * radius * radius;
   printf("\n Area of circle : %f", area);
   
   perimeter = 2 * pi * radius;
   printf("\n Perimeter : %f", perimeter);
   return 0;
}
