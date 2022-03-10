/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:23:10 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 15:23:01 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **list)
{
	t_list	*act;

	act = (*list);
	if (!list)
		return ;
	if ((*list)->next)
	{
		act = (*list)->next;
		(*list)->next = act->next;
		ft_lstadd_front(list, act);
	}
	ft_putstr("sa\n");
}

void	ft_sb(t_list **list)
{
	t_list	*act;

	act = (*list);
	if (!list)
		return ;
	if ((*list)->next)
	{
		act = (*list)->next;
		(*list)->next = act->next;
		ft_lstadd_front(list, act);
	}
	ft_putstr("sb\n");
}

void	ft_ss(t_list **a, t_list **b)
{
	t_list	*act;

	if (!a || !b)
		return ;
	act = (*a);
	if ((*a)->next)
	{
		act = (*a)->next;
		(*a)->next = act->next;
		ft_lstadd_front(a, act);
	}
	act = (*b);
	if ((*b)->next)
	{
		act = (*b)->next;
		(*b)->next = act->next;
		ft_lstadd_front(b, act);
	}
	ft_putstr("ss\n");
}
