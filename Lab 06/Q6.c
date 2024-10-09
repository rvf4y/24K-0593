#include <stdio.h>
int main() {
    int length , width ;
    printf("Enter the length and width \n");
    scanf(" %d %d ", &length , &width);
    int i = 1, j = 1;
    do {
        do {
            if (i == 1 || i == length || j == 1 || j == width) {
                printf("*");
            } else {
                printf(" ");
            }
            j++;
        } while (j <= width);
        printf("\n");
        j = 1;
        i++;
    } while (i <= length);

    return 0;
}
