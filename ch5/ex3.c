#include<stdio.h>
#include<string.h>

int main(){
    int n,m;
    char op;
    char tmp[50];

    printf("Please enter a number: ");
    scanf("%d",&n);
    printf("Operation: ");
    scanf(" %c",&op);

    printf("Please enter another number: ");
    scanf("%d",&m);
    
    if(op=='+')printf("%d + %d = %d",n,m,n+m);
    else if(op=='-')printf("%d - %d = %d",n,m,n-m);
    else if(op=='x')printf("%d x %d = %d",n,m,n*m);
    else if(op=='/')printf("%d / %d = %d",n,m,n/m);
    
    return 0;
}