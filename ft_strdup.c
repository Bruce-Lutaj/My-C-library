#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) *(ft_strlen(s) + 1));
	if (ptr == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
	char s[] = "redfoil";
	printf("stringa duplicata: %s", ft_strdup(s));
	return (0);
}*/