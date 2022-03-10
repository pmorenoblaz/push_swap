/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_position.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 17:19:41 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 17:27:42 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_next_min(t_list **list, int pos)
{
	t_list	*sig;
	t_list	*min;

	if (!list)
		return ;
	sig = *list;
	min = sig;
    while (sig)
	{
		if (sig->pos == -1)
        {
            min = sig;
            break ;
        }	
		sig = sig->next;
	}
	while (sig)
	{
		if (sig->pos == -1 && sig->num < min->num)
			min = sig;
		sig = sig->next;
	}
	min->pos = pos;
}

void	ft_setposition(t_list **list)
{
	int	i;
	int	l;

	i = 0;
	l = ft_lstsize(*list);
	if (!list)
		return ;
	while (i < l)
	{
		ft_next_min(list, i);
		i++;
	}
}