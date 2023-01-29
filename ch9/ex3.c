#include<stdio.h>

int len(char *a){
    int count=0;
    while (*(a+count)!='\0'){
        count++;
    }
    return count;
}

int main(){
    char str[100];
    printf("input some text :");
    gets(str);
    printf("length : %d",len(str));
}