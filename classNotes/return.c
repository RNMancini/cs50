#include <cs50.h>
#include <stdio.h>

int square(int n);

int main(void)
{
    int x = get_int("x: ");
    printnf("%i\n", square(x));
}
 int square(int n)
 {
        return n * n;
}