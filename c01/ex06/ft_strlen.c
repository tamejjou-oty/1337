#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c ,1);
}    

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
void ft_putnbr(int n)
{
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
    ft_putchar((n % 10 )+ '0');
}

int main()
{
    char *oty = "othman is your hhhh";

    int num = ft_strlen(oty);
    ft_putnbr(num);
}