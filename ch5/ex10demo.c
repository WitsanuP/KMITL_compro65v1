#include<stdio.h>//what the fuck is shit

float root (float a){
    float x=a;
    float y=0;
    while(x-y>0.000001){
        y=a/x;
        x=(x+y)/2;
    }
    return x;
}
int main(){
    int a,b,c;
    printf("a :");
    scanf("%d",&a);
    printf("b :");
    scanf("%d",&b);
    printf("c :");
    scanf("%d",&c);
    

    printf("ans is %f")


}