#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main()
{

char e;
char i;
char a;

 e = '0';
 while (e <= '7')
 {
    i = '0'; 
    while (i <= '8')
    {  
        a = '0';
        while (a <= '9' )
        {
            if (a != i && a != e && i != e)
            {
                my_putchar(e);
                my_putchar(i); 
                my_putchar(a);
                if (e == '7' && i == '8' && a == '9')
                {    
                    my_putchar('\n');
                }
                else
                {
                    my_putchar(','); 
                    my_putchar(' ');
                }
            }
            a = a + 1;
        } // premiere boucle 
        i = i + 1;              
    }  // deuxieme boucle
 e = e + 1; 
 } // troisieme boucle   
}


    


