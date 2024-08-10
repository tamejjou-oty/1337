#include <unistd.h>

void   ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb >= 0 && nb <= 9)
    {
        ft_putchar(nb + '0');
    }
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar((nb % 10)+ '0');
    }
}
void   ft_print_comb2(void)
{
    int x;
    int y;

    x = 0;
    while (x <= 98)
    {
        y = x + 1;
        while (y <= 99)
        {
            if (x < 10 || x == 0)
            {
                ft_putchar('0');
            }

            ft_putnbr(x);
            ft_putchar(' ');

            if (y < 10)
            {
                ft_putchar('0');
            }

            ft_putnbr(y);

            if (x == 98 && y == 99)
            {
                ft_putchar('\n');
                return ;
            }

            ft_putchar(',');
            ft_putchar(' ');
        y++;
        }
    x++;
    }
    
}
int main()
{
    ft_print_comb2();
}