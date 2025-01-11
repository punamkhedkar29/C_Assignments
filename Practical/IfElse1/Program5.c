#include<stdio.h>
void main(){
        char ch;
	printf("Enter Character: ");
        scanf("%c",&ch);
        if(ch>=65 && ch<=90){
                printf("Character is in upper case\n");
        }else if(ch>95 && ch<=120){
                printf("Character is in lower case\n");
        }else{
		printf("Invalid input\n");
	}
}
