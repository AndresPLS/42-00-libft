/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:55:07 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/07 19:27:30 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_len(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_mem_set(int len)
{
	char	*temp;

	temp = (char *)ft_calloc(len + 1, sizeof(char));
	if (!temp)
		return (NULL);
	return (temp);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	char	*result;
	long	number;

	number = n;
	len = ft_num_len(number);
	result = ft_mem_set(len);
	if (!result)
		return (NULL);
	i = len - 1;
	if (number == 0)
		result[0] = '0';
	if (number < 0)
		number = -number;
	while (number != 0)
	{
		result[i] = (number % 10) + '0';
		number /= 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
