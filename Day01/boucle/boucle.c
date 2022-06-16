#include <unistd.h>



void my_putchar(char c)
{
	write(1, &c, 1);
}
 
// int main()
// {
//   int i;

//   i = 0;
//   while (i < 10)
//   {
//   	my_putchar('E');
//     if (i == 9)
//     {
//     	my_putchar('\n');
// 	}
// 	i = i + 1;
//   }
// }

int main()
{
  int i;

  i = 48; // '0'
  while (i <= 57 )// '9'
  {
  	my_putchar(i);
	i = i + 1;
  }
    my_putchar('\n');
}