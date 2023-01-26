#include<stdio.h>

void grad(int *a){
    if(*a>80)*a=4;
    else if (*a>70)*a=3;
    else if (*a>60)*a=2;
    else if (*a>50)*a=1;
    else *a=0;
    
}
int main(){
    int math,eng,sci,art;
    float total;
    printf("Please enter Mathematic score: ");scanf("%d",&math);grad(&math);
    printf("Please enter English score: ");scanf("%d",&eng);grad(&eng);
    printf("Please enter Science score: ");scanf("%d",&sci);grad(&sci);
    printf("Please enter Art score: ");scanf("%d",&art);grad(&art);
    
    total=(math*3+eng*3+sci*3+art*2)/11.0;
    
    printf("test : %.2f",total);

}