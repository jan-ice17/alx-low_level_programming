#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int bytes = 0;
    int i, j, match;
    for (i = 0; s[i] != '\0'; i++)
    {
        match = 0;
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                bytes++;
                match = 1;
                break;
            }
        }
        if (match == 0)
            break;
    }
    return (bytes);
}