#include<stdio.h>
void main()
{
    int n,last,second,rest,result;
    printf("Enter the number: ");
    scanf("%d",&n);
    last=n%10;
    second=(n/10)%10;
    rest=n/100;
    result=rest*100+last*10+second;
    printf("The answer is: %d",result);
}
