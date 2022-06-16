#include <unistd.h>



void my_putchar (char c)
{
	write (1, &c, 1);
}


int main(int argc, int **argv)
{

    my_putchar('E');
    my_putchar('Y');
    my_putchar('M');
    my_putchar('A');
    my_putchar('N');
    my_putchar('\n');
	return (0);
}




