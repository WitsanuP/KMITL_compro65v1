#include <stdio.h>
#include <string.h>
void getip();
void calprocess();
void displ();
int check(char*);
char word[50];
float temp=0;
///control
int p1=0;
int sta=0;
int main()
{
    getip();
    calprocess();
    displ();
}

void getip(void){
    if(sta==0)
        printf("Please enter temperature in celcius: ");
    else {
        gets(word);
        if(check(word)){
            sscanf(word,"%f",&temp);
            p1=1;
            calprocess();
        }
        else if(0==strcmp(word,"Exit")){
            p1=2;
        }
        else {
            p1=3;
        }
        displ();
        return;
    }
    gets(word);
    if(check(word)){
        sscanf(word,"%f",&temp);
        p1=1;
    }
    else if(0==strcmp(word,"Exit")){
        p1=2;
    }
    else {
        p1=3;
    }
    sta++;
}
void calprocess(void){
    if(p1==1)
        temp=(9./5*temp)+32;
}
void displ(){
    if((p1)==1){
        printf("The temperature is %.2f degree Fahrenheit.",temp);
        return;
    }
    else if (p1==2){
        printf("Exit the program.");
        return;
    }
    else {
        printf("Incorrect! Please enter number.\n");
        getip();
    }
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

