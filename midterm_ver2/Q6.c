#include <stdio.h>
#include<string.h>

int how(char* c){
    if((*c=='.')||(*c=='!')||(*c=='?'))return 0;
    
    int coun=1;
    while(*c != 0){
        if(*c==' ')coun++;
        c++;
    }
    return coun;
}

int main()
{
    char txt[50];
    
    while(1){
        printf("Please enter a sentence: ");
        gets(txt);
        if((txt[strlen(txt)-1]=='!')||(txt[strlen(txt)-1]=='.')||(txt[strlen(txt)-1]=='?'))
            {
                break;
            }
        else printf("This is not a sentence.\n");
            
    }
    if(how(txt)<2)
    printf("There is %d word in the sentence.",how(txt));
    else
    printf("There are %d words in the sentence.",how(txt));
    return 0;
}