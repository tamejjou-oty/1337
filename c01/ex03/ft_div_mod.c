#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main()
{
    int a = 2;
    int b = 7;
    
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    printf("a / b = %d -||- a %% b = %d" ,div , mod);

}