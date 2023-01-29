#include<stdio.h>

int max(int *a){
    int max=0;
    for(int i=0;i<3;i++){
        max=*(a+i)>max?*(a+i):max;
    }
}
int main(){
    int array[3];
    for(int i=0;i<3;i++){
        printf("input %d : ",i+1);
        scanf("%d",&array[i]);
    }

    printf("max is %d",max(array));

}