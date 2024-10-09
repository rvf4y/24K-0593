#include <stdio.h>
int main(){
    int width=5 , length=6 ;
    char c ;
    for(int i = 1 ; i<=length ; i++){
        for(int j =1 ; j<=width ; j++){
           if (i == 1 || i == length || j == 1 || j == width) {
                    c = '*';
                }else{
                    c=' ';
            }
            printf(" %c ", c);
        }
     
    }
    printf("\n");
}
