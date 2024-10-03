/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:50:19 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/03 18:39:54 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	size_t	i;
	size_t	j;
	size_t	lens1;
	size_t	lens2;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	concat = (char *)ft_calloc (lens1 + lens2 + 1, sizeof(char));
	if (!concat)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		concat[j++] = s1[i++];
	i = 0;
	while (s2[i])
		concat[j++] = s2[i++];
	return (concat);
}
