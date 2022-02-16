#include "push_swap.h"

void	ft_sa(t_list **l)
{
	t_list	*act;
	t_list	*sig;

	act = l[0];
	sig = l[0];
	if (!l)
		return ;
	if (act->next)
	{
		sig = act->next;
		act->next = sig->next;
		ft_lstadd_front(l, sig);
	}
}

void	ft_ss(t_list **a, t_list **b)
{
	ft_sa(a);
	ft_sa(b);
}

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*act;
	t_list	*sig;

	act = b[0];
	if (!b)
		return ;
	printf("\nLISTA B ANTES:\n");
	ft_lstprint(*b);
	ft_lstadd_front(a, act);
	printf("\nLISTA B DESPUÉS:\n");
	ft_lstprint(*b);
}
