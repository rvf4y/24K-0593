#include <stdio.h>
int main() {
    char input[100], temp;
    printf("Enter a string: ");
    scanf("%s", input);
    char *ptr = input;
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Length of the string: %d\n", length);
    ptr = input;
    for (int i = 0; i < length / 2; i++) {
        temp = ptr[i];
        ptr[i] = ptr[length - i - 1];
        ptr[length - i - 1] = temp;
    }
    printf("Reversed string: %s\n", input);
    return 0;
}
