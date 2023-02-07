#include <stdio.h>

int main()
{
 
    int a[5];
    int *b=a;
    int ans=0;
    //*ans=0;
    printf("Please enter first number: ");
    scanf("%d",b);
    printf("Please enter second number: ");
    scanf("%d",b+1);
    printf("Please enter third number: ");
    scanf("%d",b+2);
    printf("Please enter fourth number: ");
    scanf("%d",b+3);
    printf("Please enter fifth number: ");
    scanf("%d",b+4);
    
    b=a;
    for(int i=0;i<5;i++){
        (ans)+=*(b++);
    }
    
    printf("Avgrage number is %.2f.",(float)ans/5);
}

