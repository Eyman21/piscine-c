#include <unistd.h>
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int get_dec(int nb)
{
    int count = 0; 
    int  diviseur = 1;
    while (nb >= 10)
    { 
        nb = nb / 10;
        count = count + 1; 
        diviseur = diviseur * 10;
    }
    return (diviseur);
} 

int my_putnbr(int nb)
{
    int diviseur; 
    int digit;
    char c; 

    if (nb < 0)
    {
        my_putchar('-');
        nb = nb * -1;
    }
	
    diviseur = get_dec(nb);
    while(diviseur >= 1)
    {
        digit = nb / diviseur;
        c = digit + 48;
        my_putchar(c);
        nb = nb % diviseur;
        diviseur = diviseur / 10;
    }
}

int main(void)
{  
    my_putnbr(-14205);
}
