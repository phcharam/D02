#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main (){

	char ch;

	ch = 'a';

	while( ch <= 'z')
	{

		ft_putchar(ch);
		ch++;

	}
return 0;
	}
