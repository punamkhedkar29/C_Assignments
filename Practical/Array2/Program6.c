#include<stdio.h>
void main(){
        int size;
        printf("Enter the size of array: ");
        int temp=1;
        while(temp){
                scanf("%d", &size);
                if(size<=0){
                        printf("Re-enter size");
                }else{
                        temp=0;
                }
        }

        float arr[size];

        printf("Enter the height: ");
        for(int i=0; i<size; i++){
                scanf("%f", &arr[i]);
                if(arr[i]>6 || arr[i]<5.5){
                        printf("Height should not be greater than 6ft and less than 5.5ft.\nRe-enter the age \n");
                        i--;
                        continue;
                }
        }

        for(int i=0; i<size; i++){
                printf("%f ",arr[i]);
        }
        printf("\n");

}
