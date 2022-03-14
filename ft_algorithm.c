/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 10:28:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/13 18:58:57 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pow(int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num = num / 2;
		i++;
	}
	return (i);
}

void	ft_algorithm(t_list **a, t_list **b)
{
	int		i;
	int		bpos;
	int		l;

	bpos = 0;
	l = ft_lstsize(*a);
	while (bpos < ft_pow(l))
	{
		i = 0;
		while (i < l)
		{
			if ((((*a)->pos) >> bpos) % 2 != 0)
				ft_ra(a);
			else
				ft_pb(a, b);
			i++;
		}
		while (*b)
			ft_pa(b, a);
		bpos++;
	}
	bpos = 0;
}
