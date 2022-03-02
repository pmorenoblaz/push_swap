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

void	ft_first_step(t_list **a, char **argv, int argc)
{
	if (ft_add_to_stack(argv, argc, a, 0) == 0)
		ft_print_error();
	ft_load_data(a);
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
			printf("%ld ---> %d ---> %d\n", aux->num, aux->relpos, aux->pos);
			aux = aux->next;
		}
	}
	printf("----------- -----------\na           b\n");
}

// int	ft_continue(void)
// {
// 	int		op;

// 	op = -1;
// 	printf("¿Seguimos?: \n");
// 	scanf("%d", &op);
// 	if (op == 0)
// 		return (0);
// 	return (1);
// }

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
			printf("%ld-->%d     %ld\n", aux->num, aux->ismaxormin, aux2->num);
			aux = aux->next;
			aux2 = aux2->next;
		}
		else if (aux && !aux2)
		{
			printf("%ld-->%d         .\n", aux->num, aux->ismaxormin);
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
