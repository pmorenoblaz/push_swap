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

	if (!b)
		return ;
	act = b[0];
	if (act->next)
	{
		sig = act->next;
		ft_lstadd_front(a, act);
		b[0] = sig;
	}
	// 	printf("\nLISTA B ANTES:\n");
	// ft_lstprint(*b);
	// printf("\nLISTA B DESPUÉS:\n");
	// ft_lstprint(*b);
}

void	ft_ra(t_list **a)
{
	t_list	*act;

	if (!a)
		return ;
	act = a[0];
	a[0] = a[0]->next;
	ft_lstadd_back(a, ft_lstnew(act->num));
}

void	ft_rr(t_list **a, t_list **b)
{
	
}