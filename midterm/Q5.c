#include <stdio.h>
void input(void);
int a,b;
int main()
{
    input();
    if(a>b){
        printf("Enter again \n");
        input();
    }
    int count=0;
    for(int i=a;i<=b;i++){
        if(i%2==0){
            count++;
        }
    }
    if(count==0||count==1)
        printf("There is %d even number between %d and %d.",count,a,b);
    else
        printf("There are %d even numbers between %d and %d.",count,a,b);
    
}
void input(){
    
    
    printf("Min is ");
    scanf("%d",&a);
    printf("Max is ");
    scanf("%d",&b);
    
    
}