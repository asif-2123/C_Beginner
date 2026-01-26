#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n%5==0&&n%11==0)
        printf("The answer is: Divisible by 5 and 11");
    else
        printf("The answer is: Not Divisible by 5 and 11");
}
