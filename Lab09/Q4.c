#include <stdio.h>
int calculator(int a , int  b , char c);
int main(){
	int x , y ;
	char op;
	printf("BASIC CALCULATOR\nEnter operands\n");
	scanf("%d %d", &x , &y);
	printf("Enter operator\n");
	scanf(" %c", &op);
	printf("OUTPUT :%d", calculator(x , y , op));
}

int calculator(int a , int  b , char c){
	int ans = 0;
	switch(c){
		case '+':
			ans = a+b;
			break;
		case '-':
			ans = a-b;
			break;
		case '*':
			ans = a*b;
			break;
		case '/':
			ans = a/b;
			break;
		default:
			printf("INVALID INPUT");
	}
	return ans ;
}
