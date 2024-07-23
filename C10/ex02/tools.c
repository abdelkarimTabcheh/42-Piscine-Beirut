/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:29:06 by atabcheh          #+#    #+#             */
/*   Updated: 2024/03/07 15:57:44 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <libgen.h>
#include <asm-generic/fcntl.h>

void	ft_putstr(int fd, char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		write(fd, &str[cur], 1);
		cur++;
	}
}

void	read_and_write(int fd)
{
	int		ret;
	char	buf[2];

	ret = read(fd, buf, 1);
	while (ret)
	{
		buf[ret] = 0;
		ft_putstr(1, buf);
		ret = read(fd, buf, 1);
	}
}

int	ft_strlen(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
		cur++;
	return (cur);
}

int	is_directory(char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY | O_DIRECTORY);
	if (fd == -1)
		return (0);
	return (1);
}

void	print_file_name(char *filename)
{
	ft_putstr(1, "==> ");
	ft_putstr(1, basename(filename));
	if (is_directory(filename) == 1)
		ft_putstr(1, " <==");
	else
		ft_putstr(1, " <==\n");
}
