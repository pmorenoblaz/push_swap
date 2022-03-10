/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chars.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:16:33 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/10 16:28:36 by pmoreno-         ###   ########.fr       */
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
