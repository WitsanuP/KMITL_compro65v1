#include <stdio.h>
#include <time.h>
 
 int prime(int a){
    for(int i=2;i<a;i++)
    {
        if(a%i==0){
            
            return 0;
        }

    }
    
    return 5;

}

int prime2(int a){
    if(a==2||a==3){
        
        return 5;
    }
    if(a<1||a%2==0||a%3==0){
        
        return 0;
    }
    for(int i = 5;i*i<=a;i+=6){
        if (a % i == 0 || a % (i + 2) == 0){
            

            return 0;
        }
    }
    
    return 5;
}
int main() {
    for(int i=1;i<2147483647;i++){
        if(prime(i)!=prime2(i)){
            printf("is %d\n",i);
            return 0;
        }
        if(prime2(i)==5)printf("%d\n",i);
    }
}

//13219
//56921
//104179
//1002583
//100003679
//1000004249
//2000004143
//2147483629
//2147483647