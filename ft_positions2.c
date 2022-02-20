/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_positions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 10:43:16 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/20 10:43:53 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
