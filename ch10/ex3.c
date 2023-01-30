#include<stdio.h>
#include<string.h>

struct data
{
    int id;
    char name[50];
    char position[30];
    char department[20];
    int salary;
}
company[10] ={
    {10000, "Ohbama","Product Manager" , "Marketing", 70000},
    {10001, "Tramp", "IT Support", "IT", 30000},
    {10002, "Bidel", "Engineer", "Industry", 50000},
    {10003, "Kill Jong", "Admin", "Industry", 30000}
};

int main(){
    
    company[4].id = 10004;
    strcpy(company[4].name , "Soujee");

    strcpy(company[2].name , "Dyden");
    strcpy(company[3].name , "Kim");

    strcpy(company[0].position, "US");
    strcpy(company[1].position, "US");
    strcpy(company[2].position, "US");
    strcpy(company[3].position, "Korea");
    strcpy(company[4].position, "SEA");
    
    company[4].salary = 120000;

    printf(" ID       Name       Address         \n");
    printf("------------------------------\n");
    for(int i = 0;i<5;i++){
        printf(" %-8d %-10s %-16s  \n",company[i].id,
                                                company[i].name,
                                                company[i].position);

    }
}
