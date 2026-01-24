#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        printf("The answer is: Alphabet");
    else if(ch>='0'&&ch<='9')
        printf("The answer is: Digit");
    else
        printf("The answer is: Special Character");
}
