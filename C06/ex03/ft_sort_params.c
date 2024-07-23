/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 11:34:55 by atabcheh          #+#    #+#             */
/*   Updated: 2024/02/23 09:59:35 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i] && src[i] && dest[i] == src[i])
		i++;
	return (dest[i] - src[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = argc;
	while (++i <= argc)
	{
		j = 1;
		while (++j <= argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j - 1]) < 0)
			{
				tmp = argv[j];
				argv[j] = argv[j - 1];
				argv[j - 1] = tmp;
			}
		}
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
	}
}
