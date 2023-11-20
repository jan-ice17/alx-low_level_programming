#include <stdio.h>
<<<<<<< HEAD
/**
 * main - Write a program that prints the number of arguments passed into it
 *
 * @args: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 *
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
=======
		
#include "main.h"
		

		
/**
		
 * main - prints all arguments it receives
		
 * @argc: number of arguments
		
 * @argv: array of arguments
		
 *
		
 * Return: Always 0 (Success)
		
 */
		
int main(int argc, char *argv[])
		
{
		
	int i;
		

		
	for (i = 0; i < argc; i++)
		
	{
		
		printf("%s\n", argv[i]);
		
	}
		

		
	return (0);
		
>>>>>>> bb2d301322a640b9e0ccff914124d6718b4af6fb
}
