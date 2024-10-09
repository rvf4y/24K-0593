#include <stdio.h>
int main(){
    int inp , seperator , count , tempinp , armcheck ;
    printf(" Enter a number to check if it is an armstrong number \n");
    scanf(" %d ", &inp);
    tempinp=inp;
    while(tempinp!=0){
        seperator=inp%10;
        tempinp=(tempinp-seperator)/10;
        count++;
    }
    int digits[count];
    for(int i=0 ; i<count ; i++){
        seperator=inp%10;
        digits[i]=seperator;
        inp=(inp-seperator)/10;
    }
    for(int i=0 ; i<count ; i++){
        printf(" %d \n",digits[i] );
    armcheck+=(digits[i]*digits[i]*digits[i]) ;
       }
       if(armcheck==inp){
           printf("Armstrong number");
       }else{
           printf("Not an armstrong number ");
       }
}
