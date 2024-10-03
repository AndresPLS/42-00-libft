/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:07:32 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/03 10:43:25 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strdup(const char *s1)
{
	size_t i;
	char *dest_s1;

	if (!s1)
		return (NULL);
	i = 0;
	dest_s1 = (char *)malloc(ft_strlen(s1) + 1);
	if (!dest_s1)
		return (NULL);
	while (s1[i])
	{
		dest_s1[i] = s1[i];
		i++;
	}
	dest_s1[i] = '\0';
	return (dest_s1);
}