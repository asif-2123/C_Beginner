#include<stdio.h> 
void main(){
    int n;
    scanf("%d",&n);
    char* check = (n>0)?"Positive":(n<0)?"Negative":"Zero";
    printf("%s",check);
}

