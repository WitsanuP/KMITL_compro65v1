#include<stdio.h>

char tmp[100],oper[3];
int num1,num2;
int main(){
    printf("Please enter a number: "); fgets(tmp,sizeof(tmp),stdin); sscanf(tmp,"%d",&num1);
    printf("Operation: "); fgets(oper,sizeof(oper),stdin);
    printf("Please enter another number : "); fgets(tmp, sizeof(tmp),stdin); sscanf(tmp,"%d",&num2);
    if(oper[0]=='+') printf("%d %c %d is %d",num1,oper[0],num2,num1+num2);
    if(oper[0]=='-') printf("%d %c %d is %d",num1,oper[0],num2,num1-num2);
    if(oper[0]=='*') printf("%d %c %d is %d",num1,oper[0],num2,num1*num2);
    if(oper[0]=='/') printf("%d %c %d is %d",num1,oper[0],num2,num1/num2);
    return 0;
}