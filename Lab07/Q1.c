/*Create a program that takes an array of size 6 and shifts all its elements to the right
by one position. The last element should move to the first position.
Input: {1,2,3,4,5,6}
Output: {6,1,2,3,4,5}
*/
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
