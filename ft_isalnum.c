#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_isalnum('f'));
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", ft_isalnum('T'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d", ft_isalnum(':'));
	return(0);
}*/
