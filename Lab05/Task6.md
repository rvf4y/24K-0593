in the code

 #include <stdio.h>;
 
int main()
{int x; x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30; } \ 

The output will be 30 because of the precende of operators in C. The compiler will first check if 5>8 , which is false , so it will move to the else condition where it will first check if 2<5 , that is true so it will output 1 , then it will check if 1!=1 ,  which is false , so it will move to the else condition and declare x= 30.
