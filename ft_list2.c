/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 10:51:31 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/13 10:51:32 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew_aux(int cnum, int pos)
{
	t_list	*lista;

	lista = malloc(sizeof(t_list));
	if (lista == 0)
		return (0);
	lista->num = cnum;
	lista->pos = pos;
	lista->next = NULL;
	return (lista);
}
