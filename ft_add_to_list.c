/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_to_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:58:28 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/13 13:37:13 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_valid_args(char	*arg, t_list **a)
{
	char	**list;
	int		i;
	int		j;

	i = -1;
	list = ft_split(arg, ' ');
	while (list[++i])
	{
		j = 0;
		if ((list[i][j] == '-' || list[i][j] == '+')
			&& (ft_strlen(list[i]) > 1))
				j++;
		while (list[i][j])
		{
			if (list[i][j] < '0' || list[i][j] > '9')
			{
				free_variables_list(list);
				return (0);
			}
			j++;
		}
		ft_lstadd_back(a, ft_lstnew(ft_atoi(list[i])));
	}
	free_variables_list(list);
	return (1);
}

int	ft_add_to_stack(char **argv, int argc, t_list **a)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (ft_valid_args(argv[i], a) == 0)
		{
			free_variables(a);
			return (0);
		}
		i++;
	}
	return (1);
}
