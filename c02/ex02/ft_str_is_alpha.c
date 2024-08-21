#include <stdio.h>

 int    ft_str_is_alpha(char *str)
{
    int i = 0;

    if(str[i] == '\0')
    {
        return (1);
    }

    while (str[i])
    {
        if(str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
        {
            return (1);
        }
        i++;
    }
    return(0);
}
int main()
{
    char oty[]= "avd.";

    printf("%d\n", ft_str_is_alpha(oty));
}