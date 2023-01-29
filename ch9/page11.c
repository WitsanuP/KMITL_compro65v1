#include<stdio.h>

int main(){
    int something;
    int *first_ptr,
        *second_ptr;
    
    something = 1;

    first_ptr = &something;
    second_ptr = first_ptr;

    printf("something : %d\n",something);
    printf("*first_ptr : %d\n",*first_ptr);
    printf("*second_ptr : %d",*second_ptr);
}