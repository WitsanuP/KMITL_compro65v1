#include<stdio.h>

int prime(int);
int prime2(int);

int main(){
    int n;
    
    printf("Please enter a number: ");
    scanf("%d",&n);

    prime(n);
}

int prime(int a){
    for(int i=2;i<a;i++)
    {
        if(a%i==0){
            printf("%d is not prime number",a);
            return 0;
        }
    }
    printf("%d is prime number",a);
    return 0;
}

int prime2(int a){
    if(a==2||a==3){
        printf("%d is prime number",a);
        return 0;
    }
    if(a<1||a%2==0||a%3==0){
        printf("%d is not prime number",a);
        return 0;
    }
    for(int i = 5;i*i<=a;i+=6){
        if (a % i == 0 || a % (i + 2) == 0){
            printf("%d is not prime number",a);
            return 0;
        }
    }
    printf("%d is prime number",a);
    return 0;
}
