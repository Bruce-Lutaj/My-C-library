#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (src <= dest)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
	char s[] = "banana limone";
	char d[] = "";
	printf("%s\n", d);
	//memmove(d, s, 5);
	ft_memmove(d, s, 5);
	printf("%s", d);
	return(0);
}*/