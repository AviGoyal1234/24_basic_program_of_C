#include<stdio.h>
int main() 
{
   int a,b,c;
   printf("Enter selling price :");   
   scanf("%d",&a);
    printf("Enter cost  price :");   
   scanf("%d",&b);
     
   c=a-b;
   
   
   if(c>0)
    printf("Profit of %d",c);  
   else
    c=-1*c; 
    printf("Loss of %d",c); 
 
   return 0;
}
