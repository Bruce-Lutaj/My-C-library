#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
	char s[] = "o p o";
	printf("%zu\n", ft_strlen(s));
	printf("%zu", strlen(s));
	return(0);
}*/
