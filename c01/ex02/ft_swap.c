#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int x;
    
    x = *a;
    *a = *b;
    *b = x;
}

int main()
{
    int a = 1;
    int b = 2;
    printf("a = %d ,b = %d\n", a, b);
    ft_swap(&a,&b);
    printf("a = %d ,b = %d", a , b);
}