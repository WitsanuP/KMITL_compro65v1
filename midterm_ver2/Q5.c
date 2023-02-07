#include <stdio.h>

int main()
{
    int a,b;
    int coun=0;
    while(1){
        printf("Min is ");
        scanf("%d",&a);
        printf("Max is ");
        scanf("%d",&b);
        if(a>b){
            printf("Enter again\n");
            continue;
        }
        for(int i=a;i<=b;i++){
            if(i%2==0)coun++;
        }
        if(coun<=1)printf("There are %d even numbers between %d and %d.",coun,a,b);
        else {
            printf("There are %d even number between %d and %d.",coun,a,b);
        }
        break;
    }
}