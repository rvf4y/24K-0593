#include <stdio.h>
int main() {
    int mat[3][3] , i , j;
    printf("Enter elements for matrix\n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        printf("[%d][%d]: ", i , j);
        scanf("%d%d" , &mat[i] , &mat[j] );
        }
    }
    for( i = 0 ; i <3 ; i++){
        
    }
    return 0;
}
