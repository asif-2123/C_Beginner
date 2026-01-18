#include<stdio.h>
void main() {
    float celcius , fahrenheit;
    printf("Enter tempeature in Fahrenheit : ") ; 
    scanf("%f",&fahrenheit) ;
    celcius = ( fahrenheit - 32 ) * 5/9 ;
    printf("Temperatuire in Celcius : %.2f \n",celcius);
}