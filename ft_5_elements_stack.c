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

t_list	*ft_get_next_max(t_list *a)
{
	t_list	*nextmax;
	t_list	*sig;

	sig = a;
	if (!a)
		return (0);
	nextmax = ft_get_min(a);
	while (sig)
	{
		if (sig->num > nextmax->num)
			nextmax = sig;
		sig = sig->next;
	}
	return (nextmax);
}

t_list	*ft_get_next_min(t_list *a)
{
	t_list	*nextmin;
	t_list	*sig;

	sig = a;
	if (!a)
		return (0);
	nextmin = ft_get_max(a);
	while (sig)
	{
		if (sig->num < nextmin->num)
			nextmin = sig;
		sig = sig->next;
	}
	return (nextmin);
}

int	ft_make_movement(t_list **a, t_list **b)
{
	t_list	*min;

	while (ft_lstsize(*a) > 3)
	{
		min = ft_get_next_min(*a);
		if ((*a)->pos == min->pos)
			ft_pa(a, b);
		else if (min->relpos <= (ft_lstsize(*a) - 1) / 2)
			ft_ra(a);
		else if (min->relpos > (ft_lstsize(*a) - 1) / 2)
			ft_rra(a);
		if (ft_continue(a) == 0)
			return (0);
	}
	return (1);
}

void	ft_order_stack_5(t_list **a, t_list **b)
{
	ft_make_movement(a, b);
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
}
