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

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;

	if (argc > 1)
	{
		if (ft_add_to_stack(argv, argc, &a, 0) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		ft_set_default_position(&a);
		ft_setposition(&a);
		printf("\n\n...........STACK INICIAL............\n\n");
		ft_lstprint(a);
		if (ft_repeated_nbr(a) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		ft_order_stack_3(&a);
		printf("\n\n...........STACK FINAL............\n\n");
		ft_lstprint(a);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
