#include <stdio.h>
int main (){
    int num ;
    printf ("Enter a number \n(only if it is positive , multiple of 2 and divisible by 10)\n");
    scanf ("%d " , &num);
    if ((num>=0) && (num%10==0)){
        printf("Valid input");
    }
    else {       
        printf("Invalid Input");
    }
}
