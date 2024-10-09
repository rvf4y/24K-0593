#include <stdio.h>
int main() {
int rows = 6, columns = 10;
char ch = 'A';
for (int i = 1; i <= rows; i++) {
for (int j = 1; j <= columns; j++) {
if (i == 1 || i == rows || j == i || j == columns - i + 1) {
printf("%c ", ch);
ch++;
} 
else {
printf("  ");
}
}
printf("\n");
}
    return 0;
}
