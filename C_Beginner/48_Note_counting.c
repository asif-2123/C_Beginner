#include<stdio.h>
void main()
{
    int amt,n500,n100,n10;
    printf("Enter amount: ");
    scanf("%d",&amt);
    if(amt%10!=0)
        printf("Invalid amount");
    else
    {
        n500=amt/500;
        amt=amt%500;
        n100=amt/100;
        amt=amt%100;
        n10=amt/10;
        printf("500 notes: %d\n100 notes: %d\n10 notes: %d",n500,n100,n10);
    }
}
