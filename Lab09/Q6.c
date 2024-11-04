#include<stdio.h>
int max_min(int arr[] , int x, int *a , int *b){
    *a = arr[0];
    *b = arr[0];
    for (int i = 1; i < x ; i++) {
        if (arr[i] > *b){
            *b = arr[i];
        }
        if (arr[i] < *a){
            *a = arr[i];
        }
    }
}
int main (){
	printf("Enter the length of the array\n");
	int len;
	scanf("%d", &len);
	int array[len];
	printf("Enter the elements of the array\n");
	for(int i = 0 ; i < len ; i++){
		printf("Element %d : " , i+1);
		scanf("%d", &array[i]);  	
	}
	int min , max ;
	max_min(array , len , &min , &max);
	printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);
	return 0 ;
}
