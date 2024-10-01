/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:22:49 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/01 14:31:38 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*cast_dest;
	unsigned char	*cast_src;
	size_t	i;

	i = 0;
	cast_dest = (unsigned char *)dest;
	cast_src = (unsigned char *)src;
	if (cast_dest == '\0' && cast_src == '\0')
		return (cast_dest);
	while (i < n)
	{
		cast_dest[i] = cast_src[i];
		i++;
	}
	return (cast_dest);
}
