#include <stdio.h>
int main (){
    char ch ; int chcode;
    printf("Enter a charachter\n"); 
    scanf(" %c ", &ch );
    chcode = (int)ch;
    if((chcode>=97) && (ch<=122)){
        printf ("This is a small alphabet");
    }
    else if((chcode>=65) && (chcode<=90)){
        printf ("This is a capital alphabet");
    }
    else  if((chcode>=48) && (chcode<=57)){
        printf ("This is a digit");
    }
    else if ( chcode>=32 && chcode<=47 ||
              chcode>=58 && chcode<=64 || 
              chcode>=91 && chcode<=96 || 
             chcode>=123 && chcode<=126){
        printf ("This is a special charachter");
           }
}
