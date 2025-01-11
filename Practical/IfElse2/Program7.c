#include<stdio.h>
void main(){
        float sellPrice;
	float costPrice;
        printf("Enter Selling price: ");
        scanf("%f",&sellPrice);
	printf("Enter Cost price: ");
	scanf("%f", &costPrice);
        if(sellPrice>costPrice){
                float total=sellPrice-costPrice;
                printf("Profit of %f\n",total);
        }else if(costPrice>sellPrice){
                float total=costPrice-sellPrice;
                printf("Loss of %f\n",total);
        }else if(sellPrice==costPrice){
                printf("No profit no loss\n");
        }else{
                printf("Invalid input\n");
        }
}
