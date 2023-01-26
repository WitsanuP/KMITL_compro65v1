#include<stdio.h>

int main(){
    int n[3][3];
    int max=-2e9;
    int min=2e9;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Please input A%d,%d: ",i,j);
            scanf("%d",&n[i][j]);
            if(n[i][j]>max)max=n[i][j];
            if(n[i][j]<min)min=n[i][j];
        }
    }
    printf("Maximun number in A is %d.",max);
    printf("\nMinimum number in A is %d",min);

}