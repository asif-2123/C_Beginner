#include<stdio.h>
void main()
{
    int cars,trucks;
    int total;
    printf("Enter number of cars: ");
    scanf("%d",&cars);
    printf("Enter number of trucks: ");
    scanf("%d",&trucks);
    total=cars*60+trucks*100;
    printf("Total collection is: %d\n",total);
    if(total>=10000)
        printf("Profit");
    else
        printf("Loss");
}

