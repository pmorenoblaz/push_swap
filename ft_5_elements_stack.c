/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3_elements_stack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:09:20 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/19 18:09:24 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_get_next_max(t_list *a, int max)
{
	t_list	*nextmax;
	t_list	*sig;

	sig = a;
	nextmax = sig;
	if (!a)
		return (0);
	while (sig)
	{
		if (nextmax->num < sig->num && max != nextmax->num)
			nextmax = sig;
		sig = sig->next;
	}
	return (nextmax);
}

void	ft_order_stack_5(t_list **a, t_list **b)
{
	t_list	*max;
	t_list	*nextmax;
	int 	pas;

	max = ft_get_max(*a);
	nextmax = ft_get_next_max(*a, max->num);
	pas = 0;
	while (ft_lstsize(*a) > 3)
	{
		if ((*a)->num == max->num)
		{
			printf("\n\n...........ERROR 1............\n\n");
			ft_pa(a, b);
			printf("\n\n...........ERROR 1............\n\n");
		}
		else if ((*a)->num == nextmax->num)
		{
			printf("\n\n...........ERROR 2............\n\n");
			ft_pa(a, b);
			pas = -1;
		}
		else if ((*a)->next->num == max->num)
		{
			printf("\n\n...........ERROR 3............\n\n");
			ft_sa(a);
			ft_pa(a, b);
		}
		else if (max->relpos <= (ft_lstsize(*a) - 1) / 2)
		{
			printf("\n\n...........ERROR 4............\n\n");
			ft_ra(a);
			ft_sa(a);
			ft_pa(a, b);
		}
		else
		{
			printf("\n\n...........ERROR 5............\n\n");
			ft_rra(a);
			ft_rra(a);
			ft_pa(a, b);
		}
		printf("\n\n...........FIN............\n\n");
		if (pas != 1)
			max = nextmax;
	}
	printf("\n\n...........A SIN COLOCAR:............\n\n");
	ft_lstprint(*a);
	ft_order_stack_3(a);

	printf("\n\n...........A COLOCADO:............\n\n");
	ft_lstprint(*a);
	printf("\n\n...........HOLA............\n\n");
	ft_lstprint(*b);
	ft_lstprint(*a);
	if ((*b)->next == 0)
	{	
		ft_pa(b, a);
	printf("\n\n...........PASAMOS B -----> A............\n\n");
	ft_lstprint(*b);
		ft_lstprint(*a);
	}
	else if ((*b)->num > (*b)->next->num)
	{
		printf("\n\n...........HOLA 1............\n\n");
		ft_pa(b, a);
		ft_pa(b, a);
	}
	else
	{
		printf("\n\n...........HOLA 2............\n\n");
		ft_sa(b);
		ft_pa(b, a);
		ft_pa(b, a);
	}
	printf("\n\n...........A ES:............\n\n");
	ft_lstprint(*a);
	printf("\n\n...........HOLA 3............\n\n");
	ft_ra(a);
	ft_ra(a);
}
