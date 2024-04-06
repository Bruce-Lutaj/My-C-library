#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", ft_isdigit(':'));
	printf("%d", ft_isdigit('a'));
	return(0);
}*/
