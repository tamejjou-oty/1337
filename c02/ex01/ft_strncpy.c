#include <stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;

    while(i <= n)
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
    
    ft_strncpy(str2, str1,19); 
 
   printf("str1: %s\n", str1); 
   printf("str2: %s\n", str2); 
 
   return 0; 
}