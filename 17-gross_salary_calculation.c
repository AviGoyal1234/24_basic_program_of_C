#include <stdio.h>
int main()
{
    float basic, gross, da, ta;

    printf("Enter basic salary of an employee : ");
    scanf("%f", &basic);
     
    da = basic * 0.10;
    ta = basic * 0.12;
    
    gross = basic + ta + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}
