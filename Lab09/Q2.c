#include <stdio.h>
void swapintegers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x, y;
    printf("Enter integer 1 and integer 2: \n");
    scanf("%d %d", &x, &y);
    swapintegers(&x, &y);
    printf("Integer 1 is now: %d\nInteger 2 is now: %d\n", x, y);
    return 0;
}
