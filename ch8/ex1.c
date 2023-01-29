#include<stdio.h>

int power(int a,int b){
    int ans=a;
    for(int i=1;i<b;i++)
        ans*=a;
    return ans;
}

int main(){
    int num,expo;
    printf("Please enter a number: ");
    scanf("%d",&num);
    printf("Power by: ");
    scanf("%d",&expo);

    printf("%d to the power of %d is %d",num,expo,power(num,expo));
}