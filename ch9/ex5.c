#include<stdio.h>

int sum(int *a){
    int sum=0;
    for(int i=0;i<9;i++){
        sum+=*(a+i);
    }
    return sum;
}
int main(){
    int n[3][3];
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("input %d,%d :",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    printf("sum of matrix is %d",sum(&n[0][0]));
}