/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:25:00 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/11 17:09:47 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **a)
{
	t_list	*act;

	if (!a)
		return ;
	act = (*a);
	(*a) = (*a)->next;
    ft_lstadd_back(a, ft_lstnew_aux(act->num, act->pos));
	free(act);
	write(1, "ra\n", 3);
}

void	ft_rb(t_list **b)
{
	t_list	*act;

	if (!b)
		return ;
	act = (*b);
	(*b) = (*b)->next;
    ft_lstadd_back(b, ft_lstnew_aux(act->num, act->pos));
	free(act);
	write(1, "rb\n", 3);
}

void	ft_rr(t_list **a, t_list **b)
{
    t_list	*act;
    
    if (!a || !b)
		return ;
    act = (*a);
	(*a) = (*a)->next;
    ft_lstadd_back(a, ft_lstnew_aux(act->num, act->pos));
	free(act);
    act = (*b);
	(*b) = (*b)->next;
    ft_lstadd_back(b, ft_lstnew_aux(act->num, act->pos));
	free(act);
	write(1, "rr\n", 3);
}
