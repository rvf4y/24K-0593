#include <stdio.h>
int primecheck(int a);
int main(){
	int x ,y ;
	printf("Enter a number\n");
	scanf("%d", &x);
	y = primecheck(x);
	if(y == 0){
		printf("The number is composite");
	}else{
		printf("The number is prime");
	}
}

int primecheck(int a){
	int prime = 0;
	for(int i = a-1 ; i > 1 ; i--){
		prime = a%i;
		if(prime == 0){
			break ; 
		}
	}
	return prime ;
}
