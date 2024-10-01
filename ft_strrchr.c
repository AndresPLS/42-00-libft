/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:10:07 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/01 13:42:47 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;s

    i = ft_strlen(s);
	if (c == NULL)
		return(NULL);

    while (i >= 0)
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i--;

    }

    return (0);
}

int main()
{
    char *str = "hola que tal?";
    char *prt = ft_strrchr(str, 'x');

    printf("%s", prt);
    return (0);
}


