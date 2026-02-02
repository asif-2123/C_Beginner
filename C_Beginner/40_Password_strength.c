#include<stdio.h>
#include<string.h>
void main()
{
    char pass[50];
    int l;
    printf("Enter the password: ");
    scanf("%s",pass);
    l=strlen(pass);
    if(l<6)
        printf("Weak Password");
    else if(l<=10)
        printf("Moderate or Strong Password");
    else
        printf("Very Strong Password");
}

