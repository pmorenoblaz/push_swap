/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3_elements_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:09:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/19 18:09:24 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_next_max(t_list **a, int max)
{
	t_list	*nextmax;
	t_list	*sig;

	sig = a;
	nextmax = sig;
	if (!a)
		return ;
	while (sig)
	{
		if (nextmax->num < sig->num && max != nextmax)
			nextmax = sig;
		sig = sig->next;
	}
	return (nextmax);
}

void	ft_order_stack_5(t_list **a, t_list **b)
{
	long int	max;
	long int	nextmax;

	max = ft_get_max(*a)->num;
	nextmax = ft_get_next_max(*a, max)->num;
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->num == max)
			ft_pa(a, b);
	}
	ft_order_stack_3(a);
}
