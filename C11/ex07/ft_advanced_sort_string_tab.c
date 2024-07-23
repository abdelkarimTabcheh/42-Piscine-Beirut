/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:45:47 by atabcheh          #+#    #+#             */
/*   Updated: 2024/03/06 11:45:24 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		last;
	char	*tmp;

	last = 0;
	while (last == 0)
	{
		last = 1;
		i = 0;
		while (tab[i + 1])
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				last = 0;
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}
