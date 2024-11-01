/*Write a program that calculates the length of a string using a pointer. Do not use the
built-in strlen() or sizeof() function. After length calculation reverse the string using
the same pointers
*/
#include <stdio.h>
#include <string.h>
int main() {
    char input[20] , revinput[20];
    printf("Enter a string: ");
    scanf("%s", input);
    int length = strlen(input);
    for(int i = 0 ; i < length ; i++){
        revinput[i] = input[length-i-1];
    }
    if(strcmp(input , revinput) == 0 ){
        printf("Palindrome");
    }else{
        printf("Not a Palindrom");
    }
}
