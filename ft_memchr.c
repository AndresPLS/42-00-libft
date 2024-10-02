/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 18:12:26 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/02 20:47:49 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *cast_s;
	unsigned char cast_c;
	size_t i;

	cast_s = (unsigned char *)s;
	cast_c = (unsigned char)c;
	i = 0;

	while (i < n)
	{
		if (cast_s[i] == cast_c)
			return ((void *)&cast_s[i]);
		i++;
	}
	return (NULL);
}
