/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:33:41 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/17 10:10:18 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	division = *a;
	modulo = *b;
	*a = division / modulo;
	*b = division % modulo;
}
