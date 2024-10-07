/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:28:52 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/07 19:27:30 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (len_dst >= size)
		len_dst = size;
	if (len_dst == size)
		return (size + len_src);
	if (len_src < size - len_dst)
		ft_memcpy (dst + len_dst, src, len_src + 1);
	else
	{
		ft_memcpy (dst + len_dst, src, size - len_dst - 1);
		dst[size - 1] = '\0';
	}
	return (len_dst + len_src);
}
