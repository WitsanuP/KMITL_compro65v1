#include <stdio.h>

int main()
{
    int a[5];
    int *b;
    b=a;
    int ans=0;
    printf("Pleaes enter first number: ");
    scanf("%d",b);
    
    printf("Pleaes enter second number: ");
    scanf("%d",b+1);
    
    printf("Pleaes enter third number: ");
    scanf("%d",b+2);
    
    printf("Pleaes enter fourth number: ");
    scanf("%d",b+3);
    
    printf("Pleaes enter fifth number: ");
    scanf("%d",b+4);
    
    for(int i=0;i<5;i++){
        ans+=*(b++);
    }
    printf("Average number is %.2f.",(float)ans/5);

    return 0;
}