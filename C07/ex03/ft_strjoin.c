/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:10:53 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/26 19:50:43 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	len_with_sep(int size, char **strs, int sep)
{
	int	i;
	int	len;

	i = 0;
	len = sep * -1;
	while (++i < size)
		len += sep + ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		len;

	if (size == 0)
	{
		str = (char *)malloc(1);
		return (str);
	}
	len = len_with_sep(size, strs, ft_strlen(sep));
	i = -1;
	(str = malloc(sizeof(char) * (len + 1)));
	if (str == NULL)
		return (0);
	while (++i < size)
	{
		str = ft_strcpy(str, strs[i]);
		if (i + 1 < size)
			str = ft_strcpy(str, sep);
	}
	*str = '\0';
	return (str - len);
}
