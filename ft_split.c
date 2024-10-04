/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:09:07 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/05 01:41:51 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void *ft_free(char **str_split, int counter)
{
	int i;

	i = 0;
	while (i < counter)
	{
		free(str_split[i]);
		i++;
	}
	free(str_split);
	return (NULL);
}

static int word_counter(char const *str, char c)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++; // while is delimitador i++
		if (str[i] != c)
		{
			counter++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (counter);
	//	This loop search delimiters, passes them and then loops words \
	the end or delimiter.
}

char **ft_split(char const *s, char c)
{
	char **response;
	int i;
	int j;
	int n_words;
}