#include<stdio.h>
//#include<string.h>

int main(){
    int n=0;
    char c[]="The quick brown fox jumps over the lazy dog";
    for(int i=0;i<sizeof(c);i++)if(c[i]=='o')n++;
    printf("%d",n);
    return 0;
    
}