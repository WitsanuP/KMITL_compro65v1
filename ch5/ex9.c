#include<stdio.h> 

int main(){
    int a,b;
    char tmp[50];

    scanf("%d %d",&a,&b);
    
    switch (a > b) {
        case 1:
            printf("%d", a); break;
        case 0:
            printf("%d", b); break; 

    }
  
}