#include<stdio.h>
float triangle(float width, float hight)
{
    float area;

    area = width * hight /2.0;
    return area;
}

int main(){
    printf("Triangle #1 %f\n", triangle(1.3, 8.3));
    printf("Triangle #2 %f\n", triangle(4.8, 9.8));
    printf("Triangle #3 %f\n", triangle(1.2, 2.0));
    return 0;
}