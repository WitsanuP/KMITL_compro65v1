#include <stdio.h>
#include <string.h>
int check(char*);
char word[50];
int main()
{
    float temp;
    printf("Please enter temperature in celcius: ");
    while(1){
    gets(word);
    if(check(word)){
        sscanf(word,"%f",&temp);
        temp=(9./5*temp)+32;
        printf("The temperature is %.2f degree Fahrenheit.",temp);
        return 0;
    }
    else{
        if(0==strcmp(word,"Exit")){
            printf("Exit the program.");
            return 0;
        }
        else {
            printf("Incorrect! Please enter number.\n");
        }
    }
    }

    return 0;
}

int check(char* c){
    int i1=0,i2=0;
    while(*c!=0){
        if((*c>='0')&&(*c<='9')){
            c++;
            continue;
        }
        else if((*c=='-')){
            if(i1==0){
                i1++;
                c++;
                continue;
            }
            else return 0;
        }
        else if(*c=='.'){
            if(i2==0){
                i2++;
                c++;
                continue;
            }
            else return 0;
        }
        else 
            return 0;
    }
    return 1;
}
