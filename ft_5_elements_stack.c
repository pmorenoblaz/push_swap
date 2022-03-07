/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_5_elements_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:09:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/07 12:22:58 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	}
	return (1);
}

void	ft_order_stack_5(t_list **a, t_list **b)
{
	ft_make_movement(a, b);
	ft_order_stack_3(a);
	if ((*b)->next == 0)
	{	
		ft_pa(b, a);
	}
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
	ft_load_data(a);
	
	// ft_lstprint(*a);
}
