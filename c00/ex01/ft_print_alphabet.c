#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char x = 'a';
    while(x <= 'z')
    {
        ft_putchar(x);
        ft_putchar(',');
        x++;
    }   
}
int main()
{
    ft_print_alphabet();
}