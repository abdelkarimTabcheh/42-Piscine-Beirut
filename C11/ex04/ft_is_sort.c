/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:04:41 by atabcheh          #+#    #+#             */
/*   Updated: 2024/03/04 20:54:40 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	max;
	int	min;

	i = 0;
	max = 0;
	min = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
			max++;
		if (f(tab[i], tab[i + 1]) <= 0)
			min++;
		i++;
	}
	if (max == i || min == i)
		return (1);
	return (0);
}
