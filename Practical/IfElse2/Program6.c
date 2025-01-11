#include<stdio.h>
void main(){
        float marks;
        printf("Enter marks: ");
        scanf("%f",&units);
        if(marks>85.00 && marks<=100.00){
                printf("Medical\n");
        }else if(marks>75.00 && marks<=85.00){
                printf("Engineering\n");
        }else if(marks>=65.00 && marks<=75.0){
                printf("Pharmacy or bachelor in science\n");
        }else{
                printf("Invalid input\n");
        }
}
