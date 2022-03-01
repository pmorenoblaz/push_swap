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
	if ((*a)->list == 0)
	{
		ft_lstadd_front(a, ft_lstnew(act->num, 0));
		ft_putstr("rra\n");
	}
	else
	{
		ft_lstadd_front(a, ft_lstnew(act->num, 1));
		ft_putstr("rrb\n");
	}
	ant->next = 0;
	ft_lstdelone(act);
	ft_load_data(a);
}

void	ft_rrr(t_list **a, t_list **b)
{
	ft_rra(a);
	ft_rra(b);
	ft_load_data(a);
	ft_load_data(b);
	ft_putstr("rrr\n");
}
