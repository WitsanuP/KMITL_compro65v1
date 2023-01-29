#include<stdio.h>

int factorial(int *a){
    int ans=1;
    while((*a) != 0){
        ans*=*a;
        (*a)--;
    }
    return ans;
}
int main(){
    int n;
    printf("input : ");
    scanf("%d",&n);
    printf("factorial is %d",factorial(&n));
}