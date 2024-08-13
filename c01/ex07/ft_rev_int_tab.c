#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int swap;
    int i = 0;

    while (i < size / 2)
    {
        swap = tab[i];
        tab[i] =tab[size - i - 1];
        tab[size - i - 1] = swap;
        i++;
    }
    
    /* 1 2 3 4 5 6 
    swap[0] = 6
    swap[1] = 5
    swap[2] = 4
    swap[3] = 3
    swap[4] = 2
    swap[5] = 1
    */ 
}
int main()
{
    int oty[] ={1,2,3,4,5,6};

    ft_rev_int_tab(oty,5);

    int i = 0;
    while (i <= 5)
    {
        printf("%d",oty[i]);
        i++;
    }
}