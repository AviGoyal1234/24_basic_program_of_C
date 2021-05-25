#include<stdio.h>
int main()
{
   float length,breadth,area;
   
   printf("Enter length of circle : ");
   scanf("%f" , &length);
   printf("Enter breadth of circle : ");
   scanf("%f" , &breadth);
   
   area = length * breadth;
   printf("Area of rectangle : %f", area);
   
   return 0;
}
