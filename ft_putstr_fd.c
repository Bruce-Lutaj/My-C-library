#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int main (void)
{
	char *s = "dfjghg";
	int fd = open("putstro.txt", O_WRONLY);
	if (fd == -1)
	{
		printf("Fail open\n");
		return (1);
	}
	ft_putstr_fd(s, fd);
	close(fd)
	return (0);
}*/