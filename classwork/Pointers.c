#include <stdio.h>

void copy(int, int);

int main(void)
{
    printf("Hello, world!\n");
    int num1 = 5;
    int num2 = 10;
    printf("num1 + num2 = %i\n", num1 + num2);
    copy(num1, num2);
    printf("5 + 5 = %i\n", num1, num2, num1 + num2);
}

void copy(int x, int y)
{
    printf("DEBUG: copy\n");
    y = x;
    printf("DEBUG: %i + %i = %i\n", x, y, x + y);
}