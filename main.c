/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:54:02 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/18 17:54:05 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_variables2(char **list, int argc)
{
	int		i;

	i = 2;
	while (i < argc - 1)
	{
		free(list[i]);
		i++;
	}
	free(*list);
}

int	ft_valid_args(char	*arg, t_list **a, int l_value)
{
	char	**list;
	int		i;
	int		j;

	i = 0;
	list = ft_split(arg, ' ');
	while (list[i])
	{
		j = 0;
		if ((list[i][j] == '-' || list[i][j] == '+')
			&& (ft_strlen(list[i]) > 1))
				j++;
		while (list[i][j])
		{
			if (list[i][j] < '0' || list[i][j] > '9')
				return (0);
			j++;
		}
		ft_lstadd_back(a, ft_lstnew(ft_atoi(list[i]), l_value));
		i++;
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
			return (0);
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

void	leaks(void)
{
	system("leaks push_swap");
}

void	free_variables(t_list **comm_dir)
{
	t_list	*sig;

	sig = (*comm_dir);
	while (sig)
	{
		sig = (*comm_dir)->next;
		free((*comm_dir));
		(*comm_dir) = sig;
	}
	free(*comm_dir);
}

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;

	//atexit(leaks);
	b = 0;
	if (argc > 1)
	{
		if (ft_add_to_stack(argv, argc, &a, 0) == 0)
			ft_print_error();
		ft_load_data(&a);
		if (ft_repeated_nbr(a) == 0)
			ft_print_error();
		if (ft_lst_is_ordered(a) == 1)
			return (0);
		else if (argc <= 4)
			ft_order_stack_3(&a);
		else if (argc <= 5)
			ft_order_stack_5(&a, &b);
		else
			ft_algorithm(&a, &b);
		free_variables(&a);
		free_variables(&b);
	}
	else
		ft_print_error();
	return (0);
}
