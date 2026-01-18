#include<stdio.h>
void main () {
    printf ( " Enter marks obtained in 5 subjects: \n " ) ;
    float sub1, sub2, sub3, sub4, sub5 ;
    scanf ( "%f %f %f %f %f", &sub1, &sub2, &sub3, &sub4, &sub5 ) ;
    float total = sub1 + sub2 + sub3 + sub4 + sub5 ;
    printf ( " Total marks obtained: %.2f \n ", total ) ;
    float percentage = ( total / 500 ) * 100 ;
    printf ( " Percentage: %.2f %% \n ", percentage ) ;
}