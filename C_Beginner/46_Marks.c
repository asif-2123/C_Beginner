#include<stdio.h>
void main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if(marks>=40)
        printf("Pass");
    else if(marks>=35)
        printf("Pass by Grace");
    else
        printf("Fail");
}
