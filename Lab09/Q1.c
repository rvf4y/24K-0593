#include <stdio.h>
#include <string.h>
int main() {
    char arr[20][5] , revarr[20][5];
    int i;
    printf("Enter 5 words(Max length 20) \n");
    for(i = 0 ; i < 5 ; i++){
        scanf("%s" ,&arr[i]);
		strcpy(revarr[i],arr[i]);
		strrev(revarr[i]);
		   }
    for(i = 0 ; i < 5 ; i++){
	if(strcmp(revarr[i] , arr[i]) == 0 ){
		printf("%s is a palindrome \n" , arr[i]);
	}else{
	printf("%s is NOT a palindrome \n" , arr[i]);	
	}
	}

    return 0;
}
