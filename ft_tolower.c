#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int main(void)
{
	printf("%c\n", ft_tolower('F'));
	printf("%c\n", ft_tolower('h'));
	printf("%c", ft_tolower('7'));
	return(0);
}*/
