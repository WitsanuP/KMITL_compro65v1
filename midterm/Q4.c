#include<stdio.h>
#include<string.h>

char* getip(void);
float calprocess(char*);
void displ(float );

char chinput[50];

int main(){
    getip();
    displ(calprocess(chinput));
}


char* getip(void){
    printf("Please enter temperature in degree Celcius: ");
    gets(chinput);
    
}
float calprocess(char* ch){
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
    float temp;
    sscanf(ch,"%f",&temp);
    
    return ((9./5*temp)+32);
}

void displ(float n){
    if(n!=0){
        
        printf("The temperature is %.2f degree Fahrenheit.",n);
    }
        
    else if(!strcmp(chinput,"Exit")){
        printf("Exit the program.");
    }
    else{
        printf("Incorrect! Please enter number.");
    }
}