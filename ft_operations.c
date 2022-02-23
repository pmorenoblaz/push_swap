/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:50:35 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/18 17:50:38 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ft_load_data(l);
	if ((*l)->list == 0)
		ft_putstr("sa\n");
	else
		ft_putstr("sb\n");
}

void	ft_ss(t_list **a, t_list **b)
{
	ft_sa(a);
	ft_sa(b);
	ft_load_data(a);
	ft_load_data(b);
	ft_putstr("ss\n");
}

void	ft_pa(t_list **a, t_list **b)
{
	t_list	*act;
	t_list	*sig;

	if (!b)
		return ;
	act = (*a);
	sig = act;
	if ((*a)->list == 0)
	{
		ft_lstadd_front(b, ft_lstnew(act->num, 0));
		ft_putstr("pa\n");
	}
	else
	{
		ft_lstadd_front(b, ft_lstnew(act->num, 1));
		ft_putstr("pb\n");
	}
	(*a) = sig->next;
}

void	ft_ra(t_list **a)
{
	t_list	*act;

	if (!a)
		return ;
	act = a[0];
	a[0] = a[0]->next;
	if ((*a)->list == 0)
	{
		ft_lstadd_back(a, ft_lstnew(act->num, 0));
		ft_putstr("ra\n");
	}
	else
	{
		ft_lstadd_back(a, ft_lstnew(act->num, 1));
		ft_putstr("rb\n");
	}
	ft_load_data(a);
}

void	ft_rr(t_list **a, t_list **b)
{
	ft_ra(a);
	ft_ra(b);
	ft_load_data(a);
	ft_load_data(b);
	ft_putstr("rr\n");
}
