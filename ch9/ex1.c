#include<stdio.h>
int plus(int *n,int *m){
    return *n+*m;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",plus(&a,&b)); 
}