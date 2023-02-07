#include <stdio.h>
#include <string.h>
struct listname
{
    char name[50];
    char last[50];
    int age;
}data[5];


void inputt();//getinput
void inputdata();//debug
void printname();//print all name
int ansfind[5];
int sta;
void find(char *ch){
    for(int i=0;i<5;i++){
        if(strstr(data[i].name,ch)!=0)//find name
        {
           ansfind[i]=1;
        }
        if(strstr(data[i].last,ch)!=0)//find last
        {
           ansfind[i]=1;
        }
    }
    
}


int main()
{
    inputt();
    printname();
    char key[20];
    printf("Please enter keyword: ");
    gets(key);
    find(key);
    
    for(int i=0;i<5;i++){
        if(ansfind[i]==1)
            printf("%s %s %d years old.\n",data[i].name,data[i].last,data[i].age);
    }
    
    return 0;
}


void inputdata(void){
    strcpy(data[0].name,"Kim");
    strcpy(data[0].last,"Jongun");
    data[0].age=38;
    
    strcpy(data[1].name,"Joe");
    strcpy(data[1].last,"Biden");
    data[1].age=79;
    
    strcpy(data[2].name,"Vladimir");
    strcpy(data[2].last,"Putin");
    data[2].age=69;
    
    strcpy(data[3].name,"Xi");
    strcpy(data[3].last,"Jinping");
    data[3].age=68;
    
    strcpy(data[4].name,"shinzo");
    strcpy(data[4].last,"Abe");
    data[4].age=67;
}

void inputt(void){
    for(int i=0;i<5;i++){
        printf("Please enter name of #%d: ",i+1);
        gets(data[i].name);
        printf("Please enter faminly name of #%d: ",i+1);
        gets(data[i].last);
        printf("Please ener age of #%d: ",i+1);
        scanf("%d",&data[i].age);
        getchar();
    }
}

void printname(void){
    for(int i=0;i<5;i++){
        printf("%s %s %d\n",data[i].name,data[i].last,data[i].age);
    }
}