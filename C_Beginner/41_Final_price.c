#include<stdio.h>
void main()
{
    float price,discount,final;
    printf("Enter the price: ");
    scanf("%f",&price);
    if(price>5000)
        discount=price*0.20;
    else if(price>=2000)
        discount=price*0.10;
    else
        discount=price*0.05;
    final=price-discount;
    printf("The final price is: %.2f",final);
}
