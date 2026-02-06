#include<stdio.h>
void main()
{
    float liters;
    int km;
    float needed;
    printf("Enter canteen capacity in liters: ");
    scanf("%f",&liters);
    printf("Enter total distance in km: ");
    scanf("%d",&km);
    needed=km*0.25;
    if(liters>=needed)
        printf("Yes, enough water");
    else
        printf("Additional water needed: %.2f liters",needed-liters);
}
