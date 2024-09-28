#include <stdio.h>
int main() {
int ph ; 
printf("Enter the pH of the substance \n");
scanf(" %d " , &ph );
if (ph<=7){
    if(ph==7){
    printf("Neutral"); }
    if (ph>2) { printf ("Acidic"); 
        } else {printf ("Very Acidic"); }
            
}else{ 
if (ph<12){ printf ("Alkaline");
}else{ printf("Very ALkaline"); }  }
}
