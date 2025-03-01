#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nl;
	char	num;

	nl = n;
	if (nl < 0)
	{
		write(fd, "-", 1);
		nl = -nl;
	}
	num = nl % 10 + 48;
	if (nl >= 10)
		ft_putnbr_fd(nl / 10, fd);
	write(fd, &num, 1);
}
/*
int main (void)
{
	int fd = open ("putnbro.txt", O_WRONLY);
	if (fd == -1)
	{
		printf ("Open fail\n");
		return (1);
	}
	ft_putnbr_fd(2147483647, fd);
	if (close(fd) == -1)
		printf ("Fail close");
	return (0);
}*/