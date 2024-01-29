#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
    int i, j, n, m;
    n = 0;
    m = 1;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '-')
        {
            m *= -1;
        }
        if (s[i] > 47 && s[i] < 58)
        {
            for (j = i; s[j] > 47 && s[j] < 58; j++)
            {
                n = n * 10 + m * (s[j] - '0');
            }
            break;
        }
    }
    return (n);
}