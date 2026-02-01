#include<stdio.h>
void main()
{
    int cups,free,total;
    printf("Enter number of cups bought: ");
    scanf("%d",&cups);
    free=cups/6;
    total=cups+free;
    printf("The total number of cups is: %d",total);
}
