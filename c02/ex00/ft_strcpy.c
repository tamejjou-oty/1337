#include <stdio.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return (dest);
}

int main()
{
    char str1[20] = "Hello, World!"; 
    char str2[20];   
    
    ft_strcpy(str2, str1); 
 
   printf("str1: %s\n", str1); 
   printf("str2: %s\n", str2); 
 
   return 0; 
}