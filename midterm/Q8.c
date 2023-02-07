#include <stdio.h>
#include <string.h>
void input();
void inputf();
struct {
    char name[50];
    char last[50];
    int  age;
}data[5];
int main()
{
    input();
    
    for(int i=0;i<5;i++)
    printf("%s %s %d\n",data[i].name,data[i].last,data[i].age);
    
    printf("Please enter keyword: ");
    char keyword[50];
    gets(keyword);
    int ans[5];
    
    for(int i=0;i<5;i++){
        if(strstr(data[i].name,keyword)!=NULL)
            ans[i]=1;
        if(strstr(data[i].last,keyword)!=0)
            ans[i]=1;
    }
    
    
    for(int i=0;i<5;i++){
        if(ans[i]==1)
            printf("%s %s %d\n",data[i].name,data[i].last,data[i].age);
    }
    
}
void input(){
    for(int i=0;i<5;i++){
        printf("Please name of#%d: ",i+1);
        gets(data[i].name);
        printf("Please enter family name of#%d: ",i+1);
        gets(data[i].last);
        printf("Please enter age of#%d: ",i+1);
        scanf("%d",&data[i].age);
    
    }
    
}

void inputf(){
    strcpy(data[0].name,"Kim");
    strcpy(data[0].last,"Jong-un");
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
    
    strcpy(data[4].name,"Shinzo");
    strcpy(data[4].last,"Abe");
    data[4].age=67;
    
}
