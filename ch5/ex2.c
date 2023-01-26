#include<stdio.h>

int main(){
    int n;
    char st[]="even";
    printf("Please enter a number: ");
    scanf("%d",&n);

    if(n%2!=0)strcpy(st,"odd");

    if(n>0)printf("%d is positive %s number.",n,st);
    else if (n==0)printf("0 is zero %s number.",st);
    else printf("%d is negative %s number.",n,st);

}