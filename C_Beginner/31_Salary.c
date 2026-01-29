#include<stdio.h>
void main()
{
    float basic,hra,da,gross;
    printf("Enter the basic salary: ");
    scanf("%f",&basic);
    hra=basic*0.20;
    da=basic*0.10;
    gross=basic+hra+da;
    printf("The gross salary is: %.2f",gross);
}
