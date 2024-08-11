#include <stdio.h>
void    ft_ultimate_div_mod(int *a, int *b)
{
    int x;
    x = *a;

   *a = *a / *b;
   *b = x % *b; 
    /* 
        int y;
        x = *a;
        y = *b;

       *a = *a / y;
       *b = x % *b;
    */
}

int main()
{
    int a = 3;
    int b = 6;
    printf("a = %d || b = %d\n",a,b);
    ft_ultimate_div_mod(&a,&b);
    printf("\na / b = a --> %d || a %% b = b --> %d", a, b);
}