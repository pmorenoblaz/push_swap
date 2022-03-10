/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:53:34 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 15:53:35 by pmoreno-         ###   ########.fr       */
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
