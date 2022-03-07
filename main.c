/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:54:02 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/07 12:23:57 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_valid_args(char	*arg, t_list **a, int l_value)
{
	char	**list;
	int		i;
	int		j;

	i = -1;
	list = ft_split(arg, ' ');
	while (list[++i])
	{
		// printf("%c\n", list[i][0]);		
		j = 0;
		if ((list[i][j] == '-' || list[i][j] == '+')
			&& (ft_strlen(list[i]) > 1))
				j++;
		while (list[i][j])
		{
			if (list[i][j] < '0' || list[i][j] > '9')
			{
				free_variables2(list, i);
				return (0);
			}
			j++;
		}
		ft_lstadd_back(a, ft_lstnew(ft_atoi(list[i]), l_value));
	}
	free_variables2(list, i);
	return (1);
}

int	ft_add_to_stack(char **argv, int argc, t_list **a, int l_value)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (ft_valid_args(argv[i], a, l_value) == 0)
		{
			free_variables(a);
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_load_data(t_list **a)
{
	ft_set_default_position(a);
	ft_set_relative_position(a);
	ft_setposition(a);
}

void	ft_order_par(t_list **a, t_list **b)
{
	if ((*a) == ft_get_next_min(*a))
		ft_pa(a, b);
	else if ((*a) == ft_get_next_max(*a))
		ft_ra(a);
	else if ((*a)->num > ((*a)->next)->num)
		ft_sa(a);
	else
		ft_ra(a);
}

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;

	b = 0;
	a = 0;
	if (argc > 1)
	{
		ft_first_step(&a, argv, argc);
		// ps_print_column(a, b);
		if (ft_lst_is_ordered(a) == 1)
			return (0);
		if (ft_lstsize(a) <= 3)
			ft_order_stack_3(&a);
		else if (ft_lstsize(a) <= 5)
			ft_order_stack_5(&a, &b);
		else
		{
			ft_algorithm(&a, &b);
			while (ft_lst_is_ordered(a) != 1)
				ft_order_par(&a, &b);
			while (b)
				ft_order_final_stack(&a, &b);
		}
		// ps_print_column(a, b);
		free_variables(&a);
		free_variables(&b);
	}
	return (0);
}
