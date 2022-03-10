/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:52:59 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 17:20:51 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_next_min(t_list *list)
{
	t_list	*nextmin;
	t_list	*sig;

	sig = list;
	if (!list)
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
