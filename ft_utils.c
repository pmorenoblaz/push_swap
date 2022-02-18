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

void	ft_print_list(t_list **l)
{
	if (l[0]->list == 0)
		ft_putstr("a\n");
	else if (l[0]->list == 1)
		ft_putstr("b\n");
}

void	ft_lstprint(t_list *list_a)
{
	t_list	*aux;

	aux = list_a;
	while (aux)
	{
		if (aux)
		{
			printf("%ld \n", aux->num);
			aux = aux->next;
		}
	}
	printf("----------- -----------\na           b\n");
}
