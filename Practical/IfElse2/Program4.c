#include<stdio.h>
void main(){
	char ch;
	printf("Enter character:");
	scanf("%c", &ch);
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
		printf("vowel\n");
	}else{
		printf("consonant\n");
	}
}
