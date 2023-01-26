#include<stdio.h> 

int main (){
    
    char tmp[50];
    printf("Please enter a number: ");
    fgets(tmp,sizeof(tmp),stdin);
    
    switch (tmp[0]){
        case '-':
        printf("negative");
        break;

        case '0':
        printf("zero");
        break;

        default:
        printf("positive");
    }
    
}