#include <stdio.h>
char ch[50];
void input();
int main()
{
    input();
    
    char *tx=ch;
    int count=1;
    while(*tx!=0){
        if(*tx==' '){
            count++;
        }
        tx++;
    }
    if(count==1)
        printf("There is %d word in the sentence.",count);
    else
        printf("There %d word in the sentence.",count);
    
    
}

void input(){
    printf("Please enter a sentence: ");
    gets(ch);
    if(ch[1]=='\0'){
        printf("This not a sentence.\n");
        input();
    }
    if((ch[strlen(ch)-1]=='.')||(ch[strlen(ch)-1]=='?')||(ch[strlen(ch)-1]=='!'))
        return;
    printf("This not a sentence.\n");
        input();
   
}
