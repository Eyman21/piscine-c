#include <unistd.h>

void my_putchar(char c)
{
 write(1, &c, 1);
}

void my_print_digit()
{
  
  char i;

  i = '0';
  while (i <= '9')
  { 

  	my_putchar(i);
	i = i + 1; // cest une incrementation 
  }
    my_putchar('\n');
}

int main(int argc, char const **argv)
{
   my_print_digit();
   return(0);
}