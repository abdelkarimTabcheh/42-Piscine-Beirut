/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 07:15:27 by atabcheh          #+#    #+#             */
/*   Updated: 2024/03/01 07:45:44 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (is_separator(str[i + 1], charset) == 1
			&& is_separator(str[i], charset) == 0)
			w++;
		i++;
	}
	return (w);
}

void	write_word(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (is_separator(src[i], charset) == 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	put_split(char **split, char *str, char *charset)
{
	int	i;
	int	j;
	int	w;

	i = 0;
	w = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (is_separator(str[i + j], charset) == 0)
				j++;
			split[w] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(split[w], str + i, charset);
			i += j;
			w++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		w;

	w = count_words(str, charset);
	arr = (char **)malloc(sizeof(char *) * (w + 1));
	arr[w] = 0;
	put_split(arr, str, charset);
	return (arr);
}
