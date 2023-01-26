#include<stdio.h>

int main(){
    char c[100];
    int a,b,max=0,maxp,tmp;
    
    int p=0;
    
    printf("Please enter a sentence: ");
    gets(c);
    
    for(int i=0;i<sizeof(c);i++){
        if(c[i]==' '||c[i]=='\0'){
            tmp=i-p;
            p=i+1;
            if(tmp>max){
                max=tmp;
                maxp=i-max+1;
            }
        }
        if(c[i]=='\0')break;
    }
    for(int i=maxp-1;i<maxp+max;i++)
    printf("%c",c[i]);
}