/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:32:28 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/11 17:06:28 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rra_aux(t_list **a)
{
	t_list	*act;
	t_list	*ant;

	if (!a)
		return (0);
	ant = (*a);
	act = ant->next;
	while (act->next)
	{
		ant = act;
		act = act->next;
	}
    ft_lstadd_front(a, ft_lstnew_aux(act->num, act->pos));
	ant->next = 0;
	ft_lstdelone(act);
    return (1);
}

void	ft_rra(t_list **a)
{
    if (!a)
		return ;
    if(ft_rra_aux(a))
        write(1, "rra\n", 4);
}

int	ft_rrb_aux(t_list **b)
{
	t_list	*act;
	t_list	*ant;

	ant = (*b);
	act = ant->next;
	while (act->next)
	{
		ant = act;
		act = act->next;
	}
    ft_lstadd_front(b, ft_lstnew_aux(act->num, act->pos));
	ant->next = 0;
	ft_lstdelone(act);
    return (1);
}

void	ft_rrb(t_list **b)
{
    if (!b)
		return ;
    if(ft_rrb_aux(b))
        write(1, "rrb\n", 4);
}

void	ft_rrr(t_list **a, t_list **b)
{
	if (!a || !b)
		return ;
    ft_rra_aux(a);
    ft_rrb_aux(b);
	write(1, "rrr\n", 4);
}