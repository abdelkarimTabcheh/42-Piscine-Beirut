/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:45:39 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/15 19:23:07 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int n, int *t, int position)
{
	int	i;

	if (position == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(t[i] + '0');
		i++;
	}
}

void	ft_print_comb_increment(int n, int *t)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (t[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	t[i] += 1;
	while (i < n)
	{
		t[i + 1] = t[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int	t[10];
	int	i;

	i = 0;
	while (i < n)
	{
		t[i] = i;
		i++;
	}
	ft_putout(n, t, 0);
	while (t[0] != 10 - n || t[n - 1] != 9)
	{
		if (t[n - 1] != 9)
		{
			t[n - 1] += 1;
		}
		else
		{
			ft_print_comb_increment(n, t);
		}
		ft_putout(n, t, 1);
	}
}
