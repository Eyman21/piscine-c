#include <unistd.h>

void my_putchar(char c)
{
 write(1, &c, 1);
}	

int my_print_comb2(void)
{
	char i;
    char e;
    char a;
    char s;


 	i = '0';
 	e = '0';

  	while (i <= '9' && e <= '9')
    {
		my_putchar(i);
        my_putchar(e);

     	a = '0';
     	s = '1';
        while (a <= '9' && s <= '9') 
        {
        
			my_putchar(a);
        	my_putchar(s);
        	if (i == '9' && e == '8' && a == '9' && s == '9')
 			{
 				my_putchar(','); 
        		my_putchar(' ');
            }
        	else
        	{
        		my_putchar(','); 
        	}	
		
        	a = a + 1;
			s = s + 1; 
	    }
	    i = i + 1;
		e = e + 1;
    }
}

int main(int argc, char const **argv)
{
	my_print_comb2();
	return 0;
}

 


