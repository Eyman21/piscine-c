#include <unistd.h>

void my_putchar(char c)
{
 write(1, &c, 1);
}

int my_isneg(int n)
{
	
	if (n >= 0){
   		my_putchar('P');
	}
	else if (n < 0){
	 	my_putchar('N');
	 } 
   	    my_putchar('\n');    
}

int main(int argc, char const **argv)
{
	my_isneg(462);
	return 0;
}




