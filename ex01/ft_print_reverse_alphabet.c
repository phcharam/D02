#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int main (){

	char ch;

	ch ='z';

	while( ch <= 'a')
	{

		ft_putchar(ch);
		ch++
