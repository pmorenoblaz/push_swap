/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_vars.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 17:21:50 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/01 17:21:53 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_variables2(char **list, int argc)
{
	int		i;

	i = 0;
	while (i < argc)
	{
		free(list[i]);
		i++;
	}
	free(list);
}

void	free_variables(t_list **list)
{
	t_list	*sig;

	sig = (*list);
	while (sig)
	{
		sig = (*list)->next;
		free((*list));
		(*list) = sig;
	}
	free(*list);
}
