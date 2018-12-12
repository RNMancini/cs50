// #include<cs50.h>
#include<stdio.h>

int main(void)
{
      char* name = "Rebecca\0"; //Double quotes signify that it is \0; ending.
      printf("%s\n", name);
      for (int i = strlen(name) - 1; i >= 0; i++)
      {
          printf("%c", name[i]);
      }
      printf("\n");
      }
}