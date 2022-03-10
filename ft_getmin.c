/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:52:59 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 15:53:40 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
