//has multiple bugs and i dont know why
#include <stdio.h>
int main() {
char coffeetype , cupsize ;
int water , sugar , milk , coffee , mixwell ;
printf("Do you want the coffee Black or White \n(Enter B for black and W for white \n");
scanf(" %c " , &coffeetype );
printf("Is the cup size double \n(Enter Y for yes and N for no) \n" );
scanf(" %c " , &cupsize);

int doublesizetime(char cupsize){
    if (cupsize =='Y' || cupsize == 'y' ){
        
        water=water+ 0.5*water;
        sugar=sugar+ 0.5 * sugar;
        milk = milk + 0.5 * milk ;
        mixwell = mixwell + 0.5 * mixwell;
    }
    else if (cupsize == 'N' || cupsize == 'n' ){
    }
    else {
        printf( "Invalid Input ");
    }
    return 0; 
}

switch (coffeetype) {
    case 'B':
    case 'b' :
    water = 20 ; sugar = 20 ; coffee = 15 ; mixwell = 25 ;
    doublesizetime(cupsize);
    break;
    case 'W' : 
    case 'w' : 
    water = 15 ; sugar = 15 ;milk =4;  coffee = 2 ; mixwell = 20 ;
    doublesizetime(cupsize);
    break;
    default :
    printf( "Invalid Input ");
    break;
}
}
