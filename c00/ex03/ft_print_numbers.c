#include <unistd.h> 

void kteb(char c)
{
    write(1, &c, 1);
}
void ft_print_numbers(void)
{
    write(1, "0123456789", 10);
    kteb('\n');
    char x = 0;
    while (x <= 9)
    {
        kteb(x + '0');
        kteb(' ');
        x++;
    }
    
}

int main()
{
    ft_print_numbers();
}
