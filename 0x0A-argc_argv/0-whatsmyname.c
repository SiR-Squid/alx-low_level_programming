#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		argv[0] = argv[1];
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
