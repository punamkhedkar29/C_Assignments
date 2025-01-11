#include <stdio.h>
void main(){
        int row;
        printf("Enter no. of rows: ");
        scanf("%d", &row);

        for(int i=1; i<=row; i++){
                for(int j=1; j<=i; j++){
                        if(i%2==0){
                                printf("0 ");
                        }else{
                                if(i%5==0){
                                        printf("%d ", i);
                                }else{
                                        printf("1 ");
                                }
                        }
                }
                printf("\n");
        }
}
