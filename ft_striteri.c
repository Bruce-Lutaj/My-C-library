#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
static void	to_lower2(unsigned int i, char *s)
{
	if (i % 2 != 0 && *s >= 'A' && *s <= 'Z')
		*s += 32;
}

int	main(void)
{
	char s[] = "DJFHGUFJGJ";
	printf("Stringa prima lo striteri: %s\n", s);
	ft_striteri(s, to_lower2);
	printf("Stringa dopo lo striteri: %s", s);
	return (0);
}*/