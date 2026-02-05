#include<stdio.h>
void main()
{
    int bal,amt;
    printf("Enter account balance: ");
    scanf("%d",&bal);
    printf("Enter withdrawal amount: ");
    scanf("%d",&amt);
    if(amt%100==0&&bal-amt>=500)
        printf("Transaction Successful");
    else
        printf("Transaction Failed");
}
