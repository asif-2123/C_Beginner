#include<stdio.h>
void main()
{
    int rain;
    printf("Enter rainfall in mm: ");
    scanf("%d",&rain);
    if(rain==0)
        printf("No Rain");
    else if(rain<=10)
        printf("Light Rain");
    else
        printf("Heavy Rain");
}
