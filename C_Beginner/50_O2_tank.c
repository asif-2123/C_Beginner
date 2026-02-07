#include<stdio.h>
void main()
{
    int p,t;
    printf("Enter pressure: ");
    scanf("%d",&p);
    printf("Enter temperature: ");
    scanf("%d",&t);
    if(t>200&&p>80)
        printf("Danger");
    else if(p>100)
        printf("Safe");
    else if(p>=50)
        printf("Warning");
    else
        printf("Critical");
}
