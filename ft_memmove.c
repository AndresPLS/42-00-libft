/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:13:06 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/03 18:20:32 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*str_dest;
	char	*str_src;
	size_t	i;

	str_dest = (char *) dest;
	str_src = (char *) src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (str_dest > str_src)
	{
		while (n-- > 0)
			str_dest[n] = str_src[n];
	}
	else
	{
		while (i++ < n)
			str_dest[i] = str_src[i];
	}
	return (str_dest);
}
