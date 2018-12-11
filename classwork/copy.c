#include <stdio.h>

void copy(int, int);
void changeArray(int[]);

{
    int main(void)
{
    int num1 = 5;
    int num2 = 10;
    printf("5 + 5 = %i\n", num1 + num2);
    int arr[5] = {6, 4, 18, 2, 59};
    printf("arr[2]: %i\n", arr[2]);
    changeArray(arr);
    printf("arr[2]")
}

void changeArray(int theArray[])
{
            theArray[2] = 30;
}

void copy(int x, int y)
{
    y = x;
}