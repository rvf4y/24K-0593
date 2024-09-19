#include <stdio.h>
int main (){
  int cost , savedamount, savedpercent , discountedcost ;
  printf("Enter the cost \n"); 
  scanf(" %d ", &cost);
  if(cost>=500){
    if (cost<2000){
      savedpercent=5;
                }
                
    if (cost>=2000 && cost<=4000){
        savedpercent=10;
                }
                
    if (cost>4000 && cost<=6000){
      savedpercent=20;
                }
                
    if (cost>6000){
      savedpercent=35;
                }

savedamount = cost * (savedpercent/100.0) ;
discountedcost = cost - savedamount;
printf ("For %d you saved %d % : %d , the discounted cost is %d ", cost , savedpercent , savedamount , discountedcost);
                
  }
  else{
      printf("discount on shopping worth minimum Rs.500");
  }
}
