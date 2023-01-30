#include<stdio.h>

union value{
    long int i_value;
    float f_value;

}data ;
int i;
float f;

int main(){
    data.f_value = 5.0;
    data.i_value = 3;
    printf("Here %f %ld \n",data.f_value, data.i_value);
    f = data.f_value;
    i = data.i_value;
    printf("Again %f %d\n",f,i);
    data.f_value = 5.5;
    printf("And %f %ld\n",data.f_value, data.i_value);
    i = data.i_value;
    printf("Lastly %f %d\n",f,i);
    return 0;
}
