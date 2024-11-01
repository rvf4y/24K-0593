//Write a program to read 10 integers into an array. Then, use loops to find the
//frequency of each element in the array (how many times each number occurs).
#include <stdio.h>
int main() {
   int i , j , skip ,arr[10];
   printf("Enter 10 integers\n");
   for(i = 0 ; i < 10 ; i++){
       printf("int %d : " , i+1);
       scanf("%d" , &arr[i]);
   }
   for(i=0 ; i < 10; i++){
   for(j=0 ; j<10 ; j++){
   if(arr[i]==arr[j] && i!=j && j > i){
   printf("%d occurs more than once\n" ,arr[i]);
   break;
           }
       }
   }
}
