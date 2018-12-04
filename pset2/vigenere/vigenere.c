#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
  //One command line argument input
  if (argc != 2)
  {
     printf("Try Again\n");
     return 1;
   }
//Convert input string to int
int k = atoi(argv[1]);
//Non negative command line argument
  if (k < 0)
  {
     printf("Try Again\n");
     return 1;
  }
  else
  {
    string plainText = get_string("plaintext: ");
    printf("ciphertext: ");

  for (int i = 0, n = strlen(plainText); i < n; i++)
  {
   //encrypt lowercase
    if islower(plainText[i])
    {
       printf("%c", (((plainText[i] + k) - 97) % 26) + 97);
    }
    //encrypt uppercase
    else if isupper(plainText[i])
    {
       printf("%c", (((plainText[i] + k) - 65) % 26) + 65);
    }
    //print all else
    else
    {
        printf("%c", plainText[i]);
    }
  }
    printf("\n");
    return 0;
  }
}