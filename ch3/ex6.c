#include <stdio.h>

int main (){
    int num=973;
    printf("100 bath : %d\n",num/100);
    num%=100;
    printf(" 50 bath : %d\n",num/50);
    num%=50;
    printf(" 20 bath : %d\n",num/20);
    num%=20;
    printf(" 10 bath : %d\n",num/10);
    num%=10;
    printf("  5 bath : %d\n",num/5);
    printf("  1 bath : %d",num);
    return 0;
}