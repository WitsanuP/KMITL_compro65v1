#include<stdio.h>
int main(){
    float n[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("A%d,%d is ",i+1,j+1);
            scanf("%f",&n[i][j]);
        }
    }
    printf("The matrix A is\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            printf("%.3f ",n[i][j]);
        printf("\n");
    }
    float dets;
    dets=(n[0][0]*(n[1][1]*n[2][2]-n[2][1]*n[1][2]))-
    (n[0][1]*(n[1][0]*n[2][2]-n[2][0]*n[1][2]))+
    (n[0][2]*(n[1][0]*n[2][1]-n[2][0]*n[1][1]));
    printf("The determinant of matrix is %.3f",dets);
    
}