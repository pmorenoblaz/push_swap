/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max_and_min.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 08:56:08 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/21 08:56:10 by pmoreno-         ###   ########.fr       */
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
	nextmax = sig;
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
	nextmin = sig;
	while (sig)
	{
		if (sig->num < nextmin->num)
			nextmin = sig;
		sig = sig->next;
	}
	return (nextmin);
}
