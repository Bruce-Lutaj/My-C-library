#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
	int fd = open("putcharo.txt", O_WRONLY);
	if (fd == -1)
	{
		printf("Fail open\n");
		return (1);
	}
	ft_putchar_fd('A', fd);
	if (close(fd) == -1)
		printf("Fail close");
	return (0);
}*/