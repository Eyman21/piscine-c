#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}	

int my_putnbr(int n) // n = 3
{
	// ici faut faire de la magie

	n =  '0' % n;
   	my_putchar(n); // tu veux n = 51
	my_putchar('\n');
}

int main(int argc, char const **argv)
{
	my_putnbr(868156746);
	return 0;
}