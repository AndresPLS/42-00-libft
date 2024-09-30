/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:04:37 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/09/30 19:09:07 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char    *ft_strchr(const char *s, int c)
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