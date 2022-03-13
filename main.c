/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:54:02 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/13 10:52:15 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;

	b = 0;
	if (argc > 1)
	{
		ft_first_step(&a, argv, argc);
		ft_setposition(&a);
		if (ft_lst_is_ordered(a) == 1)
			return (0);
		if (ft_lstsize(a) <= 3)
			ft_order_stack_3(&a);
		else if (ft_lstsize(a) <= 5)
			ft_order_stack_5(&a, &b);
		else
			ft_algorithm(&a, &b);
		free_variables(&a);
		free_variables(&b);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
