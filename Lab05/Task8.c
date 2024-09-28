#include <stdio.h>
int main() {
char roll_number[7] ;
int batch , sem ; char sect ;
printf("Enter roll number \n");
scanf(" %c" , &roll_number );
     (4 - roll_number[2]) == 0 ? batch=2024 , sem = 1 :
     (4 - roll_number[2]) == 1 ? batch=2023 , sem = 3 :
     (4 - roll_number[2]) == 2 ? batch=2022 , sem = 5 :
     batch=2021 , sem = 7 ;
     (3 - roll_number[4]) == 0 ? batch=2024 , sect = 'C' :
     (3 - roll_number[4]) == 1 ? batch=2023 , sect = 'B' :
     sect = 'A' ;

printf(" %d " , batch );   
printf(" %d " , sem );   
printf(" %c " , sect );   

}
