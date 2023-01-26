#include<stdio.h>
#define MA 20599

int main(){
    int ma=20599.0;
    printf("Years : %d\n",ma/365);ma%=365;
    printf("Month : %d\n",ma/31);ma%=31;
    printf("Day   : %d\n",ma);
    return 0;
}