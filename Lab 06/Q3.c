#include<stdio.h>
int main(){
    int inp=0 , primecheck=0 , i ;
    printf("Enter a number to check if it is prime or composite \n");
    scanf(" %d " , &inp);
    for(i=2; i<=inp ; i++){
        primecheck=inp%i;
        if(primecheck==0){
            printf("Composite\n");
            break;
                         }
        else if(i=inp-1 && primecheck !=0 ){printf("Prime\n");primecheck=1;break; }

}
if(primecheck==1){
    int a1=0 , a2=1 ,an=0 ;
    for(i=0;i<=inp;i++){
    an=a1+a2;    
    printf(" %d ,", an);
    a1=a2;
    a2=an;
        
    }
}
}
