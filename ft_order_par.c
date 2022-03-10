/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order_par.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:47:05 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 15:47:06 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_order_par(t_list **a, t_list **b)
{
	if ((*a) == ft_get_next_min(*a))
		ft_pa(a, b);
	else if ((*a) == ft_get_next_max(*a))
		ft_ra(a);
	else if ((*a)->num > ((*a)->next)->num)
		ft_sa(a);
	else
		ft_ra(a);
}
