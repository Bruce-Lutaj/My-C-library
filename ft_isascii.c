#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii('5'));
	printf("%d\n", ft_isascii(0));
	printf("%d\n", ft_isascii(1300));
	printf("%d", ft_isascii(127));
	return(0);
}*/
