#include <stdio.h>
int main() {
float gpa ; 
printf("Enter the grade point average \n");
scanf(" %f " , &gpa );
(gpa>=0.0 && gpa <= 0.99)?printf("Failed semester--registration suspended") :
    (gpa>=1.0 && gpa <= 1.99)?printf("On probation for the next semester") :
        (gpa>=3.0 && gpa <= 3.99)?printf("Dean`s list of honours "):
             (gpa>=3.0 && gpa <= 3.99)?printf("Highest honours for semester "):printf("Invalid Input");
        
}
