/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 13:00:00 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 15:18:00 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **a, t_list **b)
{
	t_list	*act;

	act = (*a)->next;
	ft_lstadd_front(b, ft_lstnew((*a)->num));
	ft_putstr("pb\n");
	free((*a));
	(*a) = act;
}

void	ft_pa(t_list **b, t_list **a)
{
	t_list	*act;

	act = (*b)->next;
	ft_lstadd_front(a, ft_lstnew((*b)->num));
	ft_putstr("pa\n");
	free((*b));
	(*b) = act;
}
