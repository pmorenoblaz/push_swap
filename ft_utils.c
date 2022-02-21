/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:51:04 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/18 17:52:45 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putchr(char c)
{
	return (write(1, &c, 1));
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i += ft_putchr(s[i]);
}

int	ft_continue(t_list **a)
{
	int		op;

	op = -1;
	ft_lstprint(*a);
	printf("¿Seguimos?: \n");
	scanf("%d", &op);
	if (op == 0)
		return (0);
	return (1);
}

void	ft_lstprint(t_list *list_a)
{
	t_list	*aux;

	aux = list_a;
	while (aux)
	{
		if (aux)
		{
			printf("%ld ---> %d ---> %d --->%d\n", aux->num, aux->relpos, aux->pos, aux->ismaxormin);
			aux = aux->next;
		}
	}
	printf("----------- -----------\na           b\n");
}
