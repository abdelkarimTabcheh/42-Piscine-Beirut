/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 06:11:12 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/18 08:53:43 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hexa(int c, int error)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && error == 0)
	{
		c += 256;
	}
	if (c >= 16)
	{
		hexa(c / 16, 1);
		hexa(c % 16, 1);
	}
	else
	{
		if (error == 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			hexa(j, 0);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
