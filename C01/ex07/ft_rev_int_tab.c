/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 12:54:17 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/16 13:50:57 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	rcount;
	int	temp;

	count = 0;
	rcount = size - 1;
	while (count < (size / 2))
	{
		temp = tab[count];
		tab[count] = tab[rcount];
		tab[rcount] = temp;
		count++;
		rcount--;
	}
}
