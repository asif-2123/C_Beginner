#include<stdio.h>
void main () {
    int a , b ;
    printf ( "Enter the two numbers a and b :" ) ;
    scanf ( "%d %d",&a,&b);
    int sum = a + b ;
    int subtraction = a - b ;
    int multiplication = a*b ;
    int division = a/b ;
    printf ( "The sum of the a and b is : %d\n" , sum);
    printf ( "The subtraction of the a and b is :  %d\n" , subtraction);
    printf ( "The multiplication of the a and b is :  %d\n " , multiplication);
    printf ( "The division of the a and b is :  %d" , division);

}