/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:30:33 by atabcheh          #+#    #+#             */
/*   Updated: 2024/03/06 09:30:59 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str, int out)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i), out);
		i++;
	}
}

void	ft_putstr_buf(char *str, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		ft_putchar(str[i], 1);
}

void	ft_putstr_headfile(char *filepath)
{
	ft_putstr("==> ", 1);
	ft_putstr(basename(filepath), 1);
	ft_putstr(" <==\n", 1);
}
