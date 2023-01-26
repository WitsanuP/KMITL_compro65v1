#define D 12742.0
#define PI 3.1416
#include <stdio.h>
int main(){
    float r=D/2;
    printf("circumference : %.3f\n",D*PI);
    printf("area : %.3f\n",PI*r*r);
    printf("volume : %.3f\n",4.0/3*PI*r*r*r);
    printf("surface : %.3f\n",4*PI*r*r);
    return 0;
}