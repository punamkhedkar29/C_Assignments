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

        char arr[size];
        printf("Enter array elements: ");
	getchar();
        for(int i=0; i<size; i++){
                scanf("%c", &arr[i]);
		getchar();
        }

        printf("ASCII values of character:\n");
        for(int i=0; i<size; i++){
                printf("%d ", arr[i]);
        }
        printf("\n");
}
