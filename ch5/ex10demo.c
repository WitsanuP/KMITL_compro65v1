#include<stdio.h>

int main() {
    char line[50];
    float a, b, c;
    float num;
    
    printf("a : ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f",&a);

    printf("b : ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f",&b);

    printf("c : ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f",&c);

    num = b * b - 4 * a * c;
    
    float x = num;
    float y = 0;
    switch (num>=0)
    {
    case 0:
        printf("WTF, I can't solve this question.");
        break;

    case 1:
        while(x-y>0.00001){
            y=num/x;
            x=(x+y)/2;
        }
        float ans,ans2;
        ans = ((-b) + x)/(2*a);
        ans2 = ((-b) - x)/(2*a);
        ans==ans2?printf("ans is %f",ans):printf("ans is %f %f",ans,ans2);
        break;
    }
}
