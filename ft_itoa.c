/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:55:07 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/07 15:58:57 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len = 1;
		if (n < 0)
			n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
// This count the sign

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_num_len(n);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (n > 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
