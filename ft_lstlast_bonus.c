/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:51:52 by pmoreno-          #+#    #+#             */
/*   Updated: 2021/09/29 09:52:22 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	int		i;
	t_stack	*ant;
	t_stack	*sig;

	if (lst == 0)
		return (0);
	i = 0;
	ant = lst;
	if (ft_lstsize(lst) > 1)
	{
		sig = lst->next;
		while (sig != NULL)
		{
			ant = sig;
			sig = sig->next;
		}
	}
	return (ant);
}
