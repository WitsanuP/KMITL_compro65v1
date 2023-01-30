#include<stdio.h>

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
    printf("ID :");
    scanf("%d",&company[4].id);
    getchar(); 
    printf("Name : ");
    gets(company[4].name);
    printf("Position : ");
    gets(company[4].position);
    printf("Department : ");
    gets(company[4].department);
    printf("salary : ");
    scanf("%d",&company[4].salary);

    printf(" ID       Name       Position         Department   Salary\n");
    printf("-----------------------------------------------------------\n");
    for(int i = 0;i<5;i++){
        printf(" %-8d %-10s %-16s %-12s %-10d \n",company[i].id,
                                                company[i].name,
                                                company[i].position,
                                                company[i].department,
                                                company[i].salary);

    }
}
