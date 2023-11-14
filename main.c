#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char age = '3';
	char name[] = "jhon";
	int s;

	printf("what %j name?\n", age);
	s = _printf("Character:[%c]\n", 'H');
	printf("%d\n", s);
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
	printf("Name: %s, Age: %c\n", name, age);
	_printf("Name: %s, Age: %c\n", name, age);
	return (0);
}
