/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:21:55 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/13 10:55:02 by pmoreno-         ###   ########.fr       */
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
	while (s)
	{
		i++;
		s = s->next;
	}
	return (i);
}
