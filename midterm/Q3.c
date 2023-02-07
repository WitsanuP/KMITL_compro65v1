#include<stdio.h>

int check(char*);
void input();
int main(){
    char ch[50];
    float temp;
    printf("Please enter temperature in degree Celcius: ");
    gets(ch);
    
    if(check(ch)){
        sscanf(ch,"%f",&temp);
        printf("The temperature is %.2f degree Fahrenheit.",(9./5*temp)+32);
    }
        
    else if(!strcmp(ch,"Exit")){
        printf("Exit the program.");
    }
    else{
        printf("Incorrect! Please enter number.");
    }
    
}

int check(char* ch){
    char* index=ch;
    int a1=0,a2=0;
    while(*index!=0){
        a2++;
        if(a2==1){
            if(*index=='-'){
                index++;
                continue;
            }
        }
        if(*index>=48&&*index<=58){
            index++;
            continue;
        }
        else if(*index=='.'){
            a1++;
            index++;
            if(a1>1)return 0;
            continue;
        }
        
        else
            return 0;
            
        index++;
    }
    return 1;
}