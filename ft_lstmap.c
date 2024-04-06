#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nn;
	t_list	*nl;
	void	*c;

	if (!lst || !f || !del)
		return (NULL);
	nl = NULL;
	while (lst)
	{
		c = f(lst->content);
		nn = ft_lstnew(c);
		if (!nn)
		{
			del(c);
			ft_lstclear(&nl, del);
			return (nl);
		}
		ft_lstadd_back(&nl, nn);
		lst = lst->next;
	}
	return (nl);
}
/*
void	*f(void *i)
{
	int	*j = malloc(sizeof(int));
	*j = *(int *)i + 1;
	return (j);
}

void	del(void *content)
{
	free(content);
}

void	print(t_list *lst)
{
	while (lst)
	{
		printf(" <%d> ", *((int *)lst->content));
		lst = lst->next;
	}
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*mapped;
	int		i = 1;
	int		j = 2;
	int		k = 3;
	node1 = ft_lstnew(&i);
	node2 = ft_lstnew(&j);
	node3 = ft_lstnew(&k);
	node1->next = node2;
	node2->next = node3;
	print(node1);
	printf("\n");
	mapped = ft_lstmap(node1, f, del);
	print(mapped);
	return (0);
}*/