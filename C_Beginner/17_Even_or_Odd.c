#include<stdio.h> 
void main(){
    int n;
    scanf("%d",&n);
    char* even_odd = (n&1)?"Odd":"Even" ;
    printf("%s", even_odd);
}
