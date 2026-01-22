#include<stdio.h> 
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    char* equality = (a==b)?"Equal":"Not Equal";
    printf("%s",equality);
}
