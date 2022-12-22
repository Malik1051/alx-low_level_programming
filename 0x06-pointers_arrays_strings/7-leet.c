#include <stdio.h>
char *leet(char *s)
{
    int i, j;
    char leet_chars[] = {'4', '3', '0', '7', '1'};
    char normal_chars[] = {'a', 'e', 'o', 't', 'l'};
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (s[i] == normal_chars[j] || s[i] == normal_chars[j] - 'a' + 'A')
                s[i] = leet_chars[j];
        }
    }
    return s;
}
