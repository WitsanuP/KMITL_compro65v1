#include<stdio.h>

int main(){
    int n[3][3];
    
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Please input A%d,%d: ",i,j);
            scanf("%d",&n[i][j]);
            
        }
    }
   if(n[0][0]+n[0][1]+n[0][2]==1){
        if(n[1][0]+n[1][1]+n[1][2]==1){
             if(n[2][0]+n[2][1]+n[2][2]==1){
                 if(n[0][0]+n[1][0]+n[2][0]==1){
                    if(n[0][1]+n[1][1]+n[2][1]==1){
                        if(n[0][2]+n[1][2]+n[2][2]==1)printf("Matrix A is identity matrix.");
                        else printf("Matrix A is not identity matrix.");
                    }else printf("Matrix A is not identity matrix.");
                 }else printf("Matrix A is not identity matrix.");
             }else printf("Matrix A is not identity matrix.");
        }else printf("Matrix A is not identity matrix.");
   }else printf("Matrix A is not identity matrix.");

}