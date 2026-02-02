#include<stdio.h>
void main()
{
    float income,emi;
    printf("Enter monthly income: ");
    scanf("%f",&income);
    printf("Enter EMI: ");
    scanf("%f",&emi);
    if(income>=3*emi)
        printf("Loan Approved");
    else
        printf("Loan Rejected");
}
