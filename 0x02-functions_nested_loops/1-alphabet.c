#include "main.h"
/**
 * print alphabet
 * print all aalphabets in lowerccase
 * new line
*/

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
 _putchar(letter);
}
 _putchar('\n'); 
}