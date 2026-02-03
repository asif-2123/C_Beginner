#include<stdio.h>
void main()
{
    float avg,income;
    printf("Enter average marks: ");
    scanf("%f",&avg);
    printf("Enter family income: ");
    scanf("%f",&income);
    if(avg>=75&&income<=200000)
        printf("Scholarship Approved");
    else
        printf("Scholarship Not Approved");
}
