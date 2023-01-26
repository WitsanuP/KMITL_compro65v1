#include<stdio.h>

int main(){
    float num;
    float num1;
    printf("Please enter a numbner: ");
    scanf("%f",&num);
    
    printf("Divided by: ");
    scanf("%f",&num1);
    
    num/=num1;
    printf("Calculation result is: %.3f",num);
    return 0;

}

/*
int main (){
    float num;
    char line[100];
    float num1;
    char line1[100];
    printf("Please enter a numbner: ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f",&num);

    printf("Divided by: ");
    fgets(line1,sizeof(line1),stdin);
    sscanf(line1,"%f",&num1);

    num/=num1;
    printf("Calculation result is: %.3f",num);
    return 0;


}
*/