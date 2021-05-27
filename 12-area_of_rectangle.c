#include<stdio.h>
int main()
{
   float length,breadth,area;
   
   printf("Enter length of rectangle : ");
   scanf("%f" , &length);
   printf("Enter breadth of rectangle : ");
   scanf("%f" , &breadth);
   
   area = length * breadth;
   printf("Area of rectangle : %f", area);
   
   return 0;
}
