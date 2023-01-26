#include<stdio.h>

int main(){
    int n;
    printf("Please enter a number: ");
    scanf("%d",&n);
    if(n>0)printf("%d is positive number.",n);
    else if (n==0)printf("0 is zero number.");
    else printf("%d is negative number.",n);

}