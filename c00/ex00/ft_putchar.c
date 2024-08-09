#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_putchar('o');
	ft_putchar('t');
	ft_putchar('y');
	ft_putchar('\n');
}
