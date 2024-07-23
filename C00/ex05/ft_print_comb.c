/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 07:58:12 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/16 12:51:23 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_multiple(char i, char j, char k)
{
	ft_putchar(i + 48);
	ft_putchar(j + 48);
	ft_putchar(k + 48);
	if (i != 7 || j != 8 || k != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar_multiple(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
