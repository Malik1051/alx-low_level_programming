#include <stdio.h>
#include <string.h>

char *_strcat(char *dest, char *src) 
{
  int dest_len = strlen(dest);
  int i;

  for (i = 0; src[i] != '\0'; i++)
    dest[dest_len + i] = src[i];
  dest[dest_len + i] = '\0';

  return dest;
}

int main() {
  char dest[50] = "Hello, ";
  char *src = "world!";

  printf("%s\n", _strcat(dest, src));  // prints "Hello, world!"

  return 0;
}