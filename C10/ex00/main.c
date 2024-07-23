/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabcheh <atabcheh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:27:45 by atabcheh          #+#    #+#             */
/*   Updated: 2024/03/06 09:27:46 by atabcheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_pustr(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		write(1, &str[cur], 1);
		cur++;
	}
}

int	ft_display_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[2];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ret = read(fd, buf, 1);
	while (ret)
	{
		buf[ret] = 0;
		ft_pustr(buf);
		ret = read(fd, buf, 1);
	}
	if (close(fd) == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	else
		return (ft_display_file(argv[1]));
}
