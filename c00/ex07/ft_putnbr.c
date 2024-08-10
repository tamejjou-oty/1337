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
int main()
{
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(-8);
    ft_putchar('\n');
    ft_putnbr(24);

}