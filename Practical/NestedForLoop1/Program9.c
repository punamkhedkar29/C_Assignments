#include<stdio.h>
void main(){
        int rows;
        printf("Enter rows: ");
        scanf("%d", &rows);

        for(int i=1; i<=rows; i++){
                char ch='a';
                for(int j=1; j<=rows; j++){
                        printf("%c1 ", ch);
                        ch++;
                }
                printf("\n");
        }
}
