#include <stdio.h>

 int  ft_str_is_numeric(char *str)
 {
  int i = 0;
  if(str[i] == '\0')
    {
        return (1);
    }

   while (str[i])
   {
      if (str[i] < '0' || str[i] > '9')
      {
        return(0);
      }
      i++;
   }
  return(1);
 }

 int main()
 {
  char a[] = "518035123841";
	char b[] = "abcdefghijklmnopqrstuvwxyz";
	char c[] = "contientPasSeuLementDesLettres[";
	char d[] = "0contientpasSeuLementDeLettres";
	char e[] = "";

	printf("%d\n", ft_str_is_numeric(a));
	printf("%d\n", ft_str_is_numeric(b));
	printf("%d\n", ft_str_is_numeric(c));
	printf("%d\n", ft_str_is_numeric(d));
	printf("%d\n", ft_str_is_numeric(e));
	return (0);
 }