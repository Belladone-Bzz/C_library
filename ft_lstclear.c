#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temporary;

	while (*lst != NULL)
	{
		del((*lst)->content);
		temporary = (*lst)->next;
		free(*lst);
		*lst = temporary;
	}
}
