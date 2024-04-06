#include "libft.h"

void	ft_bzero(char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
}
/*
int main(void)
{
	char s[] = "wrtdgdffu";
	size_t n;
	n = 3;
	printf("%s\n", s);
	//bzero(s + 3, n);
	ft_bzero(s + 3, n);
	printf("%s", s);
	return(0);
}*/
