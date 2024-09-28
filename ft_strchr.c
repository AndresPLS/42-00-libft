#include <unistd.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    unsigned int i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == '\0')
        return ((char *)&s[i]);
    return (NULL);
}

/*
int main()
{
    char *str = "hola que tal?";
    char *prt = ft_strchr(str, 'x');

    printf("%s", prt);
    return (0);
}
*/