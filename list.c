/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:53:49 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/18 17:53:52 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (*lst)
	{
		aux = ft_lstlast(*lst);
		aux->next = new;
	}
	else
		*lst = new;
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*sig;

	sig = lst;
	if (!lst)
		return (0);
	while (sig->next != 0)
		sig = sig->next;
	return (sig);
}

t_list	*ft_lstnew(int cnum)
{
	t_list	*lista;

	lista = malloc(sizeof(t_list));
	if (lista == 0)
		return (0);
	lista->num = cnum;
	lista->next = NULL;
	return (lista);
}

int	ft_lst_is_ordered(t_list *lst)
{
	t_list	*sig;

	sig = lst;
	if (!lst)
		return (0);
	while (sig->next != 0)
	{
		if (sig->num > sig->next->num)
			return (0);
		sig = sig->next;
	}
	return (1);
}

int	ft_repeated_nbr(t_list *lst)
{
	t_list	*sig;
	t_list	*var;
	int		n;

	var = lst;
	if (!lst)
		return (0);
	while (var != 0)
	{
		n = var->num;
		sig = var->next;
		while (sig != 0)
		{
			if (n == sig->num)
				return (0);
			sig = sig->next;
		}
		var = var->next;
	}
	return (1);
}
