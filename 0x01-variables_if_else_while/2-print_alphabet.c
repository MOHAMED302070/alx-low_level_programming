#include<stdio.h>
/**
 *main - entry point
 *
 * Description : print all alphabet letter
 *
 *Return: Always 0 (Success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'Z')

	{
	putchar(ch);
	ch++;
	}

	putchar('\n');
	return (0);

}
