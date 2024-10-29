#include <stdio.h>
int main() {
    int start , end , i =0 , j=0 ;
    printf("Enter the aproximate range numbers of the prime number series\n");
    scanf("%d %d", &start , &end);
    printf("Prime number series\n");
    for(int i = start ; i <= end ; i++){
        for (int j = i-1 ; j >=2 ; j--){
            if(i%j == 0 ) {
                break;  
            }
            if(j==2 && i%j != 0 ){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}
