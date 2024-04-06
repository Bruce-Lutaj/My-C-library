#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = (char *)malloc(sizeof (char) * (len + 1));
	if (!sub)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	char s[] = "SBROLGFORS";
	char *substr = ft_substr(s, 4, 4);
	printf("sottostringa: %s", substr);
	free(substr);
	return (0);
}*/