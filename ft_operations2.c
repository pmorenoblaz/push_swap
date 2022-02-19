/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:50:46 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/18 17:50:49 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ft_lstadd_front(a, ft_lstnew(act->num, act->list));
	ant->next = 0;
	ft_lstdelone(act);
	if (ant->list == 0)
		ft_putstr("rra\n");
	else
		ft_putstr("rrb\n");
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_rra(a);
	ft_rra(b);
	ft_putstr("rrr\n");
}
