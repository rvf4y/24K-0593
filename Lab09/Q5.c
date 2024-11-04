#include<stdio.h>
#include<string.h>
void reverse(char *ptr){
	strrev(ptr);
}
int main (){
	printf("Enter a word/string\n");
	char word[20];
	scanf("%s", &word);
	reverse(word);
	printf("The reversed word is %s", word);
}
