#include<stdio.h>
int main()
{
   int num,firstdigit,lastdigit,sum;
   
   printf("Enter 4bit number : ");
   scanf("%d", &num);
   
   firstdigit = num/1000;
   printf("\nFirst digit:%d", firstdigit);
   
   lastdigit = num % 10;
   printf("\nLast digit:%d", lastdigit);
   
   sum = firstdigit + lastdigit;
   printf("\nSum : %d", sum);
   
   return 0;
}
