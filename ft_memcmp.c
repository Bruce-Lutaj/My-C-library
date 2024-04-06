#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char str1[] = "redzoll";
	char str2[] = "redpull";
	printf("vero memcmp: %i\n", memcmp(str1, str2, 4));
	printf("mio memcmp: %i", ft_memcmp(str1, str2, 4));
	return(0);
}*/