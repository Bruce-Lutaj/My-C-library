#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	return (ft_memmove(dst, src, n));
}
/*
int main(void)
{
	char s[100] = "reohgiv ge";
	int n;
	n = 10;
	printf("%s\n", s);
	//memcpy(s, s + 2, n);
	ft_memcpy(s, s + 2, n);
	printf("%s", s);
	return(0);
}*/
