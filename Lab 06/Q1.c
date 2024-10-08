/*A do-while loop will be better for this kind of problem */
#include<stdio.h>
int main (){
    int inp=0 , sum=0 ;
   do{
        printf("Enter a number to add to sum \nEnter 0 to exit \n");
    scanf(" %d \n", &inp);
        printf(" %d + %d = " , sum , inp );
        sum+=inp;
        printf( "%d \n" , sum);
    }
    while(inp!=0);
}
