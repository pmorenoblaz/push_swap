/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_positions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 10:40:28 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/19 18:11:06 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_set_default_position(t_list **a)
{
	t_list	*sig;

	sig = *a;
	if (!a)
		return ;
	while (sig)
	{
		sig->pos = -1;
		sig = sig->next;
	}
}

void	ft_next_min(t_list **a, int pos)
{
	t_list	*sig;
	t_list	*min;

	sig = *a;
	if (!a)
		return ;
	min = ft_get_next_max(*a);
	while (sig != 0)
	{
		if (sig->pos == -1 && sig->num < min->num)
			min = sig;
		sig = sig->next;
	}
	min->pos = pos;
}

void	ft_set_relative_position(t_list **a)
{
	t_list	*sig;
	int		i;

	sig = *a;
	i = 0;
	if (!a)
		return ;
	while (sig)
	{
		sig->relpos = i;
		i++;
		sig = sig->next;
	}
}

void	ft_setposition(t_list **a)
{
	int	i;
	int	l;

	i = 0;
	l = ft_lstsize(*a);
	if (!a)
		return ;
	while (i < l)
	{
		ft_next_min(a, i);
		i++;
	}
}
