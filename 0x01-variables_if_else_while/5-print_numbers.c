#include <stdio.h>
/**
* main - program entry point
*
* Return: always 0 (success)
**/
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(number);
		number++;
	}
	return (0);
}
