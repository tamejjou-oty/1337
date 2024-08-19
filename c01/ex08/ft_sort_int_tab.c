#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		swap;
	int 	i;
	int		swap;

	swap = 1;
	while (swap != '\0')
	{
		swap = 0;
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				swap = 1;
			}
			i++;
		}
	}
}
int main()
{
    int oty[] = {1,5,7,9,46,24,7,23,4};
    int i = 0;
    
    while (i < 9)
    {
        printf("%d ",oty[i]);
        i++;
    }
   
    printf("\n");

    ft_sort_int_tab(oty,9);
    i = 0;
    while (i < 9)
    {
        printf("%d ",oty[i]);
        i++;
    }
}