#include<stdio.h>

int main(){
    int a[5];
    char p[] = "Please enter";
    printf("%s first number: ",p);
    scanf("%d",&a[0]);

    printf("%s second number: ",p);
    scanf("%d",&a[1]);

    printf("%s third number: ",p);
    scanf("%d",&a[2]);

    printf("%s fourth number: ",p);
    scanf("%d",&a[3]);

    printf("%s fifth number: ",p);
    scanf("%d",&a[4]);

    printf("All number are %d, %d, %d, %d, %d",a[0],a[1],a[2],a[3],a[4]);
    printf("\nTotal summation is %d",a[0]+a[1]+a[2]+a[3]+a[4]);
}