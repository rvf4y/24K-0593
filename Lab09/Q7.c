#include <stdio.h>
#include <string.h>
void sortarray(char arr[][20] , int n);
int main() {
    printf("Enter the number of words: ");
    int i , n ;
    scanf("%d" , &n);
    printf("Enter %d words \n" , n);
    char array[n][20];
    for(i = 0 ; i < n ; i++){
    printf("Word %d : ", i+1);
    scanf("%s", &array[i]);
	}	
	sortarray(array , n );
	printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) {
    printf("%s\n", array[i]);
    }

    return 0;
}

void sortarray(char arr[][20] ,int n ){
int i = 0 , j = 0;
char temp[20] ;
    for(j=i ; j < n ; j++){

		if((int)arr[j+1][0] < (int)arr[j][0]){
		strcpy(temp, arr[j]);
        strcpy(arr[j], arr[j + 1]);
        strcpy(arr[j + 1], temp);
    	}	
    	
	}

}
