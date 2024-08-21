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
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "abcdefghijklmnopqrstuvwxyz";
	char c[] = "contientPasSeuLementDesLettres[";
	char d[] = "0contientpasSeuLementDeLettres";
	char e[] = "";

	printf("%d\n", ft_str_is_alpha(a));
	printf("%d\n", ft_str_is_alpha(b));
	printf("%d\n", ft_str_is_alpha(c));
	printf("%d\n", ft_str_is_alpha(d));
	printf("%d\n", ft_str_is_alpha(e));
	return (0);
}