#include<stdio.h>
void main(){
        float price;
        printf("Enter price: ");
        scanf("%f",&price);
        if(price>7000 && price<=10000){
                printf("50 percent discount\n");
        }else if(price>5000 && price<=7000){
                printf("30 percent discount\n");
        }else if(price>3000 && price<=5000){
                printf("10 percent discount\n");
        }else{
                printf("No discount\n");
        }
}
