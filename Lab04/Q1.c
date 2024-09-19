#include <stdio.h>
int main (){
    int num ;
    printf ("Enter a number to check if its multiple of 3\n");
    scanf ("%d " , &num);
    num%=3;
    if (num==0){
        printf("This number is multiple of 3");
    }
    else {       
        printf("This number is not a multiple of 3");
    }
}
