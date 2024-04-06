#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('A'));
	printf("%c", ft_toupper('9'));
	return(0);
}*/
