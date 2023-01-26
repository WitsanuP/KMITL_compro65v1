#include<stdio.h>

int main(){
    int num[10];
    for(int i=1;i<=10;i++){
       printf("Please enter number %d: ",i); 
       scanf("%d",&num[i-1]);
    }

    printf("The number are");
    for(int i =0;i<9;i++){
        printf(" %d,",num[i]);
    }printf(" %d",num[9]);
    

}