#include<stdio.h>
void main()
{
    int a,b,c,d,min;
    printf("Enter four numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    min=a;
    if(b<min)min=b;
    if(c<min)min=c;
    if(d<min)min=d;
    printf("The answer is: %d",min);
}
