#include <stdio.h> 
void main () {
    int r ; 
    printf ( " Enter a radius :");
    scanf ( "%d",&r) ;
    float area = 3.14 * r * r ;
    printf ( " The area of the circle is : %.2f" , area) ;
}