//22.39  22.55
#include<stdio.h>
#include<string.h>

int main(){
    char name[3][2][50];

    printf("Fitst Student Name: ");
    gets(name[0][0]);

    printf("Family Name: ");
    gets(name[0][1]);

    printf("Second Student Name: ");
    gets(name[1][0]);
    printf("Family Name: ");
    gets(name[1][1]);

    printf("Third Student Name: ");
    gets(name[2][0]);
    printf("Family Name: ");
    gets(name[2][1]);

    printf("Our classroom has three students\n");
    printf("1. %s %s\n",name[0][0],name[0][1]);
    printf("2. %s %s\n",name[1][0],name[1][1]);
    printf("3. %s %s",name[2][0],name[2][1]);

}