#include<stdio.h>
void main()
{
    int m;
    printf("Enter the marks: ");
    scanf("%d",&m);
    if(m>=90)
        printf("Grade A");
    else if(m>=75)
        printf("Grade B");
    else if(m>=60)
        printf("Grade C");
    else if(m>=40)
        printf("Grade D");
    else
        printf("Fail");
}
