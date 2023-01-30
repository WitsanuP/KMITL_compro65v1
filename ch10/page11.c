#include<stdio.h>

struct bin{
    char neme[30];
    int quantity;
    int cost;
}
printer_cable_bin = 
{
    "printer Cables",
    0,
    1295
};

int main(){
    printf("name : %s\n",printer_cable_bin.neme);
    printf("quantity : %d \n",printer_cable_bin.quantity);
    printf("cost : %d",printer_cable_bin.cost);
}