#include<stdio.h> 
void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int greater = (a>b&&a>c)?a:(b>c)?b:c;
    printf("%d",greater);
}
