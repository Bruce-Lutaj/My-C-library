#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		p = (*lst)->next;
		ft_lstdelone((*lst), del);
		(*lst) = p;
	}
}
/*
void	del(void *content)
{
	free(content);
}

void print(t_list *lst)
{
	while (lst)
	{
		printf("<%s>", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	char	*s1;
	char	*s2;
	s1 = malloc(6 * sizeof(char));
	s2 = malloc(4 * sizeof(char));
	strcpy(s1, "Levi");
	strcpy(s2, "Eren");
	node1 = ft_lstnew((char *)s1);
	node2 = ft_lstnew((char *)s2);
	head = node1;
	node1->next = node2;
	print(head);
	ft_lstclear(&head, del);
	print(head);
	return (0);
}*/