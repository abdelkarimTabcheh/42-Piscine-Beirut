/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:29:00 by atabcheh          #+#    #+#             */
/*   Updated: 2024/03/06 09:29:01 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(int fd, char *str);
int		is_directory(char *filename);

void	put_nl(int cur, int argc, char *filename, int files_num)
{
	if (files_num > 1)
	{
		if (cur != argc - 1)
			ft_putstr(1, "\n");
		if (is_directory(filename) == 1)
			ft_putstr(1, "\n");
	}
}
