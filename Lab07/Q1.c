#include <stdio.h>
int main() {
   printf("Enter array elements\n");
   int i , arr[6];
    for( i = 0 ; i < 6 ; i++){
        printf("Element %d: " , i+1);
        scanf("%d" , &arr[i]);
    }  

    int temp = arr[5];
    for(i = 5 ; i >= 0 ; i--){
    if(i == 0){
        arr[i] = temp ;
    }else {
    arr[i]=arr[i-1];
    }
    }
    printf("The Shifted array is : ");
    for( i = 0 ; i < 6 ; i++){
        printf("%d" , arr[i]);
    } 
    return 0;
}
