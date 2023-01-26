#include<stdio.h>

float root (float a){
    float x=a;
    float y=0;
    while(y-x>0.000001){
        y=a/x;
        x=(x+y)/2;
    }
    return x;
}
int main(){
    int a,b,c;
    printf("a :");
    scanf("%d",&a);

    printf("b :%f",root(a));
    scanf("%d",&b);
    printf("c :");
    scanf("%d",&c);


}