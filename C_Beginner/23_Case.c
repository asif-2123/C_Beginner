#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("The answer is: Uppercase");
    else if(ch>='a'&&ch<='z')
        printf("The answer is: Lowercase");
}
