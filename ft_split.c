/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-lo <apolo-lo@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 22:09:07 by apolo-lo          #+#    #+#             */
/*   Updated: 2024/10/07 15:58:33 by apolo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_word_counter(char const *str, char c)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			counter++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (counter);
}
//while str [i] is delimitator, i++
//This loop search delimiters, passes them and then loops words the end.

static int	ft_word_len(char const *s, char c)
{
	size_t		len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}
//calculate word len until search delimitator.

static char	*ft_copy_word(char const *s, size_t len)
{
	char	*word;
	size_t	i;

	i = 0;
	word = (char *)ft_calloc(len + 1, sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	return (word);
}

static void	*ft_free(char **str_split, size_t counter)
{
	size_t	i;

	i = 0;
	while (i < counter)
	{
		free(str_split[i]);
		i++;
	}
	free(str_split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**response;
	size_t	i;
	size_t	n_words;
	size_t	word_len;

	i = 0;
	n_words = ft_word_counter(s, c);
	response = (char **)ft_calloc(n_words + 1, sizeof(char *));
	if (!response)
		return (NULL);
	while (*s && i < n_words)
	{
		while (*s == c)
			s++;
		word_len = ft_word_len(s, c);
		response[i] = ft_copy_word(s, word_len);
		if (!response[i])
			return (ft_free(response, i), NULL);
		s += word_len;
		i++;
	}
	return (response);
}
