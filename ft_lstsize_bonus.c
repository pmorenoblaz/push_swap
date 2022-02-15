/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:58:15 by pmoreno-          #+#    #+#             */
/*   Updated: 2021/09/29 09:58:20 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*s;

	if (lst == NULL)
		return (0);
	i = 0;
	s = lst;
	while (s != NULL)
	{
		i++;
		s = s->next;
	}
	return (i);
}
