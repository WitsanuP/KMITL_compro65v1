#include <stdio.h>

int main()
{
    int a[5];
    printf("Please enter first number: ");
    scanf("%d",&a[0]);
    printf("Please enter second number: ");
    scanf("%d",&a[1]);
    printf("Please enter third number: ");
    scanf("%d",&a[2]);
    printf("Please enter fourth number: ");
    scanf("%d",&a[3]);
    printf("Please enter fifth number: ");
    scanf("%d",&a[4]);
    printf("All number are %d, %d, %d, %d, %d.",a[0],a[1],a[2],a[3],a[4]);
    printf("\nTotal summation is %d.",a[0]+a[1]+a[2]+a[3]+a[4]);
}