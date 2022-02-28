/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 09:00:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/28 09:00:23 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_element_b(t_list **a, t_list **b, int n, int dir)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (dir == 0)
			ft_ra(b);
		else
			ft_rra(b);
		i++;
	}
	ft_pa(b, a);
}

t_list	*ft_get_next_maxpos(t_list *a)
{
	t_list	*nextmax;
	t_list	*sig;

	sig = a;
	if (!a)
		return (0);
	nextmax = sig;
	while (sig)
	{
		if (sig->pos > nextmax->pos)
			nextmax = sig;
		sig = sig->next;
	}
	return (nextmax);
}

void	ft_order_stack(t_list **a, t_list **b)
{
	t_list	*aux;
	int		pos;
	int		dir;

	ft_load_data(b);
	while ((*b) != 0)
	{
		dir = 0;
		aux = ft_get_next_maxpos(*b);
		pos = ft_cal_position(aux, ft_lstsize(*b));
		if (aux->relpos > (ft_lstsize(*b) - 1) / 2)
			dir = 1;
		ft_move_element_b(a, b, pos, dir);
		ft_load_data(b);
	}
}
