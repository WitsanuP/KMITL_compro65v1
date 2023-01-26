#include<stdio.h>
int main(){
    char c[100];
    int n=0;
    printf("Please enter a sentence:");
    gets(c);
    for(int i=0;i<=sizeof(c)-2;i++)
    {
        if(c[i]=='t'&&c[i+1]=='h'&&c[i+2]=='e')n++;
    }
    printf("\"the\" is %d times.",n);

}