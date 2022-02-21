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

void	ft_order_stack_3(t_list **a)
{
	long int	min;
	long int	max;

	min = ft_get_next_min(*a)->num;
	max = ft_get_next_max(*a)->num;
	if ((*a)->num == min && (*a)->next->num == max)
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if ((*a)->next->num == min && ft_lstlast(*a)->num == max)
		ft_sa(a);
	else if ((*a)->next->num == max && ft_lstlast(*a)->num == min)
		ft_rra(a);
	else if ((*a)->num == max && (*a)->next->num == min)
		ft_ra(a);
	else if ((*a)->num == max && ft_lstlast(*a)->num == min)
	{
		ft_sa(a);
		ft_rra(a);
	}
}
