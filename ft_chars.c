/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:16:33 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/13 11:02:18 by pmoreno-         ###   ########.fr       */
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

void	ft_first_step(t_list **a, char **argv, int argc)
{
	if (ft_add_to_stack(argv, argc, a) == 0)
		ft_print_error();
	if (ft_repeated_nbr(*a) == 0)
		ft_print_error();
}

void	ft_lstprint(t_list *list_a)
{
	t_list	*aux;

	aux = list_a;
	while (aux)
	{
		if (aux)
		{
			printf("%ld ---> %d \n", aux->num, aux->pos);
			aux = aux->next;
		}
	}
	printf("----------- -----------\na           b\n");
}

void	ps_print_column(t_list *column_a, t_list *column_b)
{
	t_list	*aux;
	t_list	*aux2;

	aux = column_a;
	aux2 = column_b;
	while (aux || aux2)
	{
		if (aux && aux2)
		{
			printf("%ld-->%d     %ld\n", aux->num, aux->pos, aux2->num);
			aux = aux->next;
			aux2 = aux2->next;
		}
		else if (aux && !aux2)
		{
			printf("%ld-->%d         .\n", aux->num, aux->pos);
			aux = aux->next;
		}
		else if (!aux && aux2)
		{
			printf(".            %ld\n", aux2->num);
			aux2 = aux2->next;
		}
	}
	printf("----------- -----------\na           b\n");
}
