#include<stdio.h>
#include<string.h>

char temp[1000], sentc[1000];
int word_num[1000];
int total, i, j, max_count = 0, max_index = 0;

int main(){
    printf("Please enter a sentence : ");
    fgets(temp, sizeof(temp),stdin);
    sentc[0]=' '; 
    strcat(sentc,temp);
    total = strlen(sentc);
    sentc[total-1]=' ';
    for(i=0;i<= total-2;i++){
        if(sentc[i] == ' '){
            for(j=i+1;j<=(total-1);j++){
                if(sentc[j]==' '){
                    word_num[i]=j-i-1;
                    break;
                }
            }
        }
    }
    for(i=0;i<=total-2;i++){
        if(max_count < word_num[i]){
            max_count= word_num[i];
            max_index=i;
        }
    }
    for(i=max_index+1;i<=max_index+max_count;i++)
        printf("%c",sentc[i]);
}