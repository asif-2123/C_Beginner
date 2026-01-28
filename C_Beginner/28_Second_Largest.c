#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b&&a<c)||(a<b&&a>c))
        printf("The answer is: %d",a);
    else if((b>a&&b<c)||(b<a&&b>c))
        printf("The answer is: %d",b);
    else
        printf("The answer is: %d",c);
}
