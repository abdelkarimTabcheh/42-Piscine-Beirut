/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:15:44 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/19 14:20:47 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	z;

	i = 0;
	j = 0;
	z = 0;
	while (dest[i])
		i++;
	while (src[z])
		z++;
	if (size <= i)
		z += size;
	else
		z += i;
	while (src[j] && (i + 1) < size)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (z);
}
