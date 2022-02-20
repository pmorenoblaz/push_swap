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

t_list	*ft_get_next_max(t_list *a, t_list *max)
{
	t_list	*nextmax;
	t_list	*sig;

	sig = a;
	if (!a)
		return (0);
	nextmax = ft_get_min(a);
	while (sig)
	{
		if (max != sig && sig->num > nextmax->num)
			nextmax = sig;
		sig = sig->next;
	}
	return (nextmax);
}

int	ft_make_movement(t_list **a, t_list **b, t_list *max, t_list *nextmax)
{
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->pos == max->pos)
		{
			ft_pa(a, b);
			max->relpos = -1;
		}
		else if ((*a)->pos == nextmax->pos)
			ft_pa(a, b);
		else if (max->relpos <= (ft_lstsize(*a) - 1) / 2)
			ft_ra(a);
		else if (max->relpos > (ft_lstsize(*a) - 1) / 2)
			ft_rra(a);
		if (ft_continue(a) == 0)
			return (0);
	}
	return (1);
}

void	ft_order_stack_5(t_list **a, t_list **b)
{
	t_list	*max;
	t_list	*nextmax;

	max = ft_get_max(*a);
	nextmax = ft_get_next_max(*a, max);
	ft_make_movement(a, b, max, nextmax);
	ft_order_stack_3(a);
	if ((*b)->next == 0)
		ft_pa(b, a);
	else if ((*b)->num > (*b)->next->num)
	{
		ft_pa(b, a);
		ft_pa(b, a);
	}
	else
	{
		ft_sa(b);
		ft_pa(b, a);
		ft_pa(b, a);
	}
	if (ft_continue(a) == 0)
		return ;
	ft_ra(a);
	ft_ra(a);
}
