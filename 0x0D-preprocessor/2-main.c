#include <stdio.h>
/**
 *main - prints the name of the file  of the program that
 *        was compiled from, followed by a new line.
 *
 *Return: always 0
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
