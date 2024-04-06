#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
/*
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;
	char	*s;

	s = malloc(5 * sizeof(char));
	strcpy(s, "ciao");
	node = ft_lstnew(s);
	printf("Content before del: %s\n", (char*)node->content);
	ft_lstdelone(node, del);
	printf("Content after del: %s\n", (char*)node->content);
	return(0);
}*/