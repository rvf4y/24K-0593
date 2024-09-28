#include<stdio.h>
int main (){
int fat ; float calories ;
printf ("Enter the number of calories and fat grams in a food \n " );
scanf (" %f %d " , &calories , &fat );
if (fat>=0 && calories >= 0 ){
fat *= 9 ;
if (calories>=fat){
calories = 100.0*(fat/calories) ;
printf ("The total number of calories from fat is : %d " , calories);
}
else {
printf("Invalid input : number of calories from fat cannot be greater than the total number of calories. ");
     }
}
else {printf("Invalid input : calories or fat cannot be zero "); 
}
}
