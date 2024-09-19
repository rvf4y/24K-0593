#include <stdio.h>
int main() {
    int input ; 
    printf("Enter a number between 1 to 9 \n ");
    scanf(" %d ", &input);
    if(input<=0){
        printf("Invalid Input");
    }
    else{
    switch (input){
        case 1:
        printf("One"); break;
        case 2:
        printf("Two"); break;
        case 3:
        printf("Three"); break;
        case 4:
        printf("Four"); break;
        case 5:
        printf("Five"); break;
        case 6:
        printf("Six"); break;
        case 7:
        printf("Seven"); break;
        case 8:
        printf("Eight"); break;
        case 9:
        printf("Nine"); break;
        default :
        printf("Greater than 9 ");
    }
    }
}


