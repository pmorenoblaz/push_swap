/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:00:00 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/11 17:10:00 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*act;

	act = (*a)->next;
	ft_lstadd_front(b, ft_lstnew_aux((*a)->num, (*a)->pos));
	write(1, "pb\n", 3);
	free((*a));
	(*a) = act;
}

void	ft_pa(t_list **b, t_list **a)
{
	t_list	*act;

	act = (*b)->next;
	ft_lstadd_front(a, ft_lstnew_aux((*b)->num, (*b)->pos));
	write(1, "pa\n", 3);
	free((*b));
	(*b) = act;
}
