/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:28:39 by atabcheh          #+#    #+#             */
/*   Updated: 2024/03/06 09:28:44 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_strict(char *str)
{
	int	nb;
	int	cur;

	cur = -1;
	nb = 0;
	if (str[0] == '+' || str[0] == '-')
		cur++;
	while (cur++, str[cur] != 0)
	{
		if (str[cur] >= 48 && str[cur] <= 57)
			nb = nb * 10 + str[cur] - 48;
		else
			return (-1);
	}
	return (nb);
}
