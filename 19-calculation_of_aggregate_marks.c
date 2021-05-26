#include<stdio.h>
int main()
{
	int sub1, sub2, sub3, sub4, sub5, aggregate_marks;

    printf("Enter the marks of sub1 : ");
    scanf("%d",&sub1);
    printf("Enter the marks of sub2 : ");
    scanf("%d",&sub2);
    printf("Enter the marks of sub3 : ");
    scanf("%d",&sub3);
    printf("Enter the marks of sub4 : ");
    scanf("%d",&sub4);
    printf("Enter the marks of sub5 : ");
    scanf("%d",&sub5);
    
    aggregate_marks = sub1+sub2+sub3+sub4+sub5;
    
    printf("Aggregate marks is: %d", aggregate_marks);
    
    return 0;
}
