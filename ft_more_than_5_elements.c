/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_more_than_5_elements.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:44:32 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/21 18:08:52 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_cal_position(t_list *a, int len)
{
	if (a->relpos == len)
		return (1);
	else if ((a->relpos <= (len - 1) / 2))
		return (a->relpos);
	else
		return (len - a->relpos);
}

t_list	*ft_less_movements(t_list *a)
{
	t_list	*lessom;
	t_list	*sig;
	int		pos;

	sig = a;
	pos = ft_lstsize(a);
	if (!a)
		return (0);
	lessom = sig;
	while (sig)
	{
		if (sig->ismaxormin == 1)
		{
			if (ft_cal_position(sig, ft_lstsize(a)) < pos)
			{
				lessom = sig;
				pos = ft_cal_position(lessom, ft_lstsize(a));
			}
		}
		sig = sig->next;
	}
	return (lessom);
}

void	ft_move_element(t_list **a, t_list **b, int n, int dir)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (dir == 0)
			ft_ra(a);
		else
			ft_rra(a);
		i++;
	}
	ft_pa(a, b);
}

void	ft_push_elements(t_list **a, t_list **b, int numpbloc)
{
	int		i;
	t_list	*elem;
	int		dir;
	int		pos;

	i = 0;
	dir = 0;
	pos = 0;
	while (i <= numpbloc)
	{
		elem = ft_less_movements(*a);
		if (elem->relpos > (ft_lstsize(*a) - 1) / 2)
			dir = 1;
		pos = ft_cal_position(elem, ft_lstsize(*a));
		ft_move_element(a, b, pos, dir);
		ft_load_data(a);
		i++;
	}
	if ((*b))
		ft_pa(b, a);
}

void	ft_algorithm(t_list **a, t_list **b)
{
	int	bloques;
	int	totalmin;
	int	numpbloc;
	int	i;

	totalmin = ft_lstsize(*a) - 5;
	bloques = ((ft_lstsize(*a) / 50) + 3);
	numpbloc = totalmin / bloques;
	i = 0;
	while (i < bloques)
	{
		ft_set_nmins(a, numpbloc);
		ft_push_elements(a, b, numpbloc);
		i++;
	}
}
