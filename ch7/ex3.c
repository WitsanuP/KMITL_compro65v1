#include<stdio.h>

int powv(int a,int b){
    int ans=a;
    if(b==0)return 0;
    for(int i=1;i<b;i++){
        ans*=a;
    }
    return ans;
}

int main(){
    int n,ans=0;
    printf("Please enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans+=powv(i,n);
    }
    printf(" %d",ans);



}