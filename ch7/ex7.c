#include <stdio.h>

int *max(int *n){//find max_var in array and return pointer of max
    int max=0;
    int *max_ptr;
    for(int i=0;i<5;i++)
    {
        if(*n>max){
            max=*n;
            max_ptr=n;
        }
        n++;
    }
    return max_ptr;
}
 
int main (){
    printf("Please enter five numbers: ");
    int n[5];
    int *n_ptr=n;
    
    for(int i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    
    //find lcm
    int lcm;
    lcm = *max(n);
    while (1){
        if((lcm%n[0]==0)&&(lcm%n[1]==0)&&(lcm%n[2]==0)&&(lcm%n[3]==0)&&(lcm%n[4]==0)){
            printf("L.C.M is %d\n",lcm);
            break;
        }
        printf("lcm: %d\n",lcm);
        lcm+=*max(n);
    }

    //find gcd
    int gcl;
    gcl = *max(n);
    while (1){
        if((n[0]%gcl==0)&&(n[1]%gcl==0)&&(n[2]%gcl==0)&&(n[3]%gcl==0)&&(n[4]%gcl==0)){
            printf("G.C.L is %d",gcl);
            break;
        }
        gcl--;
    }

}