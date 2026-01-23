#include<stdio.h> 
void main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("The last digit is : ");
    printf("%d",n-(n/10)*10);
}
