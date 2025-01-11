#include<stdio.h>
void main(){
        int size;
        printf("Enter size of array: ");
        scanf("%d", &size);

        char arr[size];

        printf("Enter array elements: ");
	getchar();

        for(int i=0; i<size; i++){
                scanf("%c", &arr[i]);
		getchar();
        }

	printf("Printing the vowels with index:\n");
        for(int i=0; i<size; i++){
                if(arr[i]=='A' || arr[i]=='a' || arr[i]=='E' || arr[i]=='e' || arr[i]=='I' || arr[i]=='i' || arr[i]=='O' || arr[i]=='o' || arr[i]=='U' || arr[i]=='u' ){
                        printf("%c%d\n",arr[i],i);

                }
        }
}
