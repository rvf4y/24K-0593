#include <stdio.h>
int main (){
    float a, b ; char op ;
    printf ("\tCALCULATOR \nEnter the problem in the format a+b or a/b \nUse add(+) , subtract(-) , product (*) , divide (/) operator\n"); 
    scanf(" %f %c %f ", &a , &op , &b);
    switch (op){
        case '+':
        printf("%f + %f = %f ", a ,b , a+b); break ;
        case '-':
        printf("%f + %f = %f ", a ,b , a-b);break ;
        case '*':
        printf("%f + %f = %f ", a ,b , a*b); break ;
        case '/':
        printf("%f + %f = %f ", a ,b , a/b);break ;
        default :
        printf("Invalid Input");
    }
}
