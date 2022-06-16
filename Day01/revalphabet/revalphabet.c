#include <unistd.h>


void my_putchar(char c)
{
	write(1, &c, 1);
}
 

int main()
{
  char i;

  i = 'Z';
  while (i >= 'A')
  {
  	my_putchar(i);
	i = i - 1;
  }
    my_putchar('\n');
}