#include<stdio.h>

/*******************************************************
 * Question:
 *      why soes this progrma always report the length
 *      of any string as 0?
 * 
 * A sample "main" has been provided. It will ask
 * for a string ans then printf the length.
 * *****************************************************/

int length(char string[])
{
    int index;
    for (index = 0;string[index] != '\0'; ++index)
    return index ;
}

int main(){
    char line [100];

    while(1){
        printf("Enter line:");
        fgets(line,sizeof(line),stdin);

        printf("Length (including newline) is : %d\n", length(line));
    }
}
/******************************************************************************
 ********************************* How to fix *********************************
 * change "for (index = 0;string[index] != '\0'; ++index)" in function length()
 * to "for (index = 0;string[index] != '\0'; ++index){}" ez
 * ****************************************************************************/