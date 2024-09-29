#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);
    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;
    }
    return (0);
}

// dudas de si c es caracter nulo, la función localizaría el último nulo y me lo devovería. Creo que en este caso no. Comprobar!!!

int main()
{
    char *str = "hola que tal?";
    char *prt = ft_strrchr(str, 'x');

    printf("%s", prt);
    return (0);
}