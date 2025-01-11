#include<stdio.h>
void main(){
        char ch1='A';
	char ch2='a';

        for(int i=1; i<10; i++){
                if(i%2==0){
                        printf("%c ", ch1);
                }else{
                        printf("%c ",ch2);
                }
                ch1++;
		ch2++;

        }
        printf("\n");



}
