#include<stdio.h>

int array[]={4, 5, 8, 9, 8, 1, 0, 1, 9, 3};
int indexx;
int main(){
    indexx = 0;
    while (array[indexx] != 0)
        ++indexx;

    printf("Number of elements before zero %d\n",indexx);
    return 0;
}