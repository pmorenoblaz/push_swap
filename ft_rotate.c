/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:25:00 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 15:29:06 by pmoreno-         ###   ########.fr       */
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
    ft_lstadd_back(a, ft_lstnew(act->num));
	ft_putstr("ra\n");
}

void	ft_rb(t_list **b)
{
	t_list	*act;

	if (!b)
		return ;
	act = (*b);
	(*b) = (*b)->next;
    ft_lstadd_back(b, ft_lstnew(act->num));
	ft_putstr("rb\n");
}

void	ft_rr(t_list **a, t_list **b)
{
    t_list	*act;
    
    if (!a || !b)
		return ;
    act = (*a);
	(*a) = (*a)->next;
    ft_lstadd_back(a, ft_lstnew(act->num));
    act = (*b);
	(*b) = (*b)->next;
    ft_lstadd_back(b, ft_lstnew(act->num));
	ft_putstr("rr\n");
}
