#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
    int i, j, k;
    for (i = 0; haystack[i] != '\0'; i++)
    {
        for (k = i, j = 0; needle[j] != '\0'; j++, k++)
        {
            if (needle[j] != haystack[k] || haystack[k] == '\0')
                break;
        }
        if (needle[j] == '\0')
            return (haystack + i);
    }
    return (0);
}