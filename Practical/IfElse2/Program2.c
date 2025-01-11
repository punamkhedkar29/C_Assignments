#include<stdio.h>
void main(){
        int num1;
        int num2;
        printf("Enter num1: ");
        scanf("%d",&num1);
        printf("Enter num2: ");
        scanf("%d",num2);
        if(num1>num2){
                printf("%d is maximum between %d and %d\n", num1, num1, num2);
        }else if(num2>num1){
                printf("%d is maximum between %d and %d\n", num2, num1, num2);
        }else{
                printf("Numbers are equal");
        }
}
