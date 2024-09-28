#include <stdio.h>
int main() {
int num ; 
printf("Enter a number \n");
scanf(" %d" , &num );
( (num %=10) == 0 )?printf("Last digit is zero") : printf("Last digit is non-zero") ;
}