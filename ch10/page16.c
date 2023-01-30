#include<stdio.h>

struct complex_struct{
    double real;
    double imag;
};
typedef struct complex_struct complex;

complex voltage1 = {3.5,1.2};
 
int main(){
    printf("real votl %.2f\n",voltage1.real);
    printf("imag votl %.2f",voltage1.imag);
}