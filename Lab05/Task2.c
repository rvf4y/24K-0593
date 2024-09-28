#include <stdio.h>
int sleepin(char weekday , char vacation){
    if (vacation == 'Y' || vacation == 'y') {
        printf("You can sleep in\n");    } 
else if (weekday == 'N' || weekday == 'n') {
        printf("You can sleep in\n");       } 
else {
        printf("You can not sleep in\n");
      }
    return 0;
}
int main() {
char weekday, vacation;
printf("Is today a weekday? (type Y for yes or N for no)\n");
scanf("%c", &weekday);
printf("Are you on vacation? (type Y for yes or N for no)\n");
scanf("%c", &vacation);
sleepin(weekday , vacation);
}
