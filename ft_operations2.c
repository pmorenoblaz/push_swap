#include "push_swap.h"

void	ft_rra(t_list **a)
{
	t_list	*act;
	t_list	*ant;

	if (!a)
		return ;
	ant = a[0];
	act = ant->next;
	while (act->next)
	{
		ant = act;
		act = act->next;
	}
	ft_lstadd_front(a, ft_lstnew(act->num));
	ant->next = 0;
	ft_lstdelone(act);
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_rra(a);
	ft_rra(b);
}
