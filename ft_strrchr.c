#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*str2;

	i = ft_strlen(str) + 1;
	str2 = (char *)str;
	while (i-- > 0)
	{
		if (str2[i] == (unsigned char)c)
			return (&str2[i]);
	}
	return (NULL);
}
/*
int main(void)
{
	const char s[] = "oipok";
	int c = 'i';
	printf("%s", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
	return(0);
}*/
