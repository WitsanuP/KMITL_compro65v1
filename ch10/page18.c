#include<stdio.h>

enum day {Sunday, Monday=0100, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(){
    printf("Sunday index = %d\n",Sunday);
    printf("Monday index = %d\n",Monday);
    printf("Tuesday index = %d \n",Tuesday);
}
