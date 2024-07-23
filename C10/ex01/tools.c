
#include <unistd.h>

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
