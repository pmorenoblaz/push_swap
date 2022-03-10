/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:00:00 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 19:24:33 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*act;

	act = (*a)->next;
	ft_lstadd_front(b, ft_lstnew_aux((*a)->num, (*a)->pos));
	ft_putstr("pb\n");
	free((*a));
	(*a) = act;
}

void	ft_pa(t_list **b, t_list **a)
{
	t_list	*act;

	act = (*b)->next;
	ft_lstadd_front(a, ft_lstnew_aux((*b)->num, (*a)->pos));
	ft_putstr("pa\n");
	free((*b));
	(*b) = act;
}
