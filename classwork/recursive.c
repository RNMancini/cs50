#include<cs50.h>
#include<stdio.h>

long long fact(int);

int fib(int);

int main(void)
{
  //5!
  long long results = fact(5);
  printf("5! = %lld\n", result);
  long long result2 = fib(40);
  printf("30th position of fibonnacci is: %lld\n", result2);
}

long long fib(int num)
{
  //if 1 or 0 return 1 or 0
  if (num <= 1)
  {
    return 1;
  }
  return fib(num - 1) + fib(num -2);
}

long long fact(int num)
{
  if (num <= 1)
  {
    return num;
  }
  return num * fact(num - 1);
}