#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

int _putchar(char c);
/* _putchar.c prototpe*/

int _islower(int c);
/* _islower.c prototpe*/

int _isalpha(int c);
/* _isalpha.c prototpe*/

int _abs(int n);
/* _abs.c prototpe*/

int _isupper(int c);
/* _isupper.c prototpe*/

int _isdigit(int c);
/* _isdigit.c prototpe*/

int _strlen(char *s);
/* _strlen.c prototpe*/

void _puts(char *s);
/* _puts.c prototpe*/

char *_strcpy(char *dest, char *src);
/* _strcpy.c prototpe*/

int _atoi(char *s);
/* _atoi.c prototpe*/

char *_strcat(char *dest, char *src);
/* _strcat.c prototpe*/

char *_strncat(char *dest, char *src, int n);
/* _strncat.c prototpe*/

char *_strncpy(char *dest, char *src, int n);
/* _strncpy.c prototpe*/

int _strcmp(char *s1, char *s2);
/* _strcmp.c prototpe*/

char *_memset(char *s, char b, unsigned int n);
/* _memset.c prototpe*/

char *_memcpy(char *dest, char *src, unsigned int n);
/* _memcpy.c prototpe*/

char *_strchr(char *s, char c);
/* _strchr.c prototpe*/

unsigned int _strspn(char *s, char *accept);
/* _strspn.c prototpe*/

char *_strpbrk(char *s, char *accept);
/* _strpbrk.c prototpe*/

char *_strstr(char *haystack, char *needle);
/* _strstr.c prototpe*/

#endif /* MAIN_H */