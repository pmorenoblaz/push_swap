/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   otras.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:54:17 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/18 17:54:20 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	ft_lstprint(t_list **lst)
// {
// 	int			i;
// 	t_list		*ant;

// 	if (lst == 0)
// 		return ;
// 	i = 0;
// 	ant = *lst;
// 	if (ft_lstsize(ant) > 1)
// 	{
// 		while (ant)
// 		{
// 			printf("%s\n", ant->cnum);
// 			ant = ant->next;
// 		}
// 	}
// }

// char	*ft_set_nbr(char *argv)
// {
// 	char	*arg;

// 	arg = malloc(sizeof(char));
// 	arg = argv;
// 	return (arg);
// }

// printf("%d -> orden\n", ft_lst_is_ordered(a));
		// printf("%d -> repetido\n", ft_repeated_nbr(a));
// printf("\n\n...........SWAP............\n\n");
		// ft_sa(&a);
		// ft_lstprint(a);
		// printf("\n\n...........PUSH...........\n\n");
		// ft_add_to_stack(argv, argc, &b);
		// ft_pa(&a, &b);
		// ft_lstprint(a);
		// printf("\n\n...........ROTATE...........\n\n");
		// // ft_add_to_stack(argv, argc, &b);
		// ft_ra(&a);
		// ft_lstprint(a);
		// printf("\n\n...........REVERSE ROTATE............\n\n");
		// ft_rra(&a);
		// ft_lstprint(a);


/*
void	ft_order_stack_3(t_list **a)
{
	long int	min;
	long int	max;

	min = ft_get_min(*a)->num;
	max = ft_get_max(*a)->num;
	if ((*a)->num == min && (*a)->next->num == max)
	{
		printf("\n\n...........PRIMER MOVIMIENTO............\n\n");
		ft_sa(a);
		ft_set_default_position(a);
		ft_setposition(a);
		ft_lstprint(*a);
		printf("\n\n...........SEGUNDO MOVIMIENTO............\n\n");
		ft_ra(a);
		ft_set_default_position(a);
		ft_setposition(a);
		ft_lstprint(*a);
	}
	else if ((*a)->next->num == min && ft_lstlast(*a)->num == max)
	{
		printf("\n\n...........PRIMER MOVIMIENTO............\n\n");
		ft_sa(a);
		ft_set_default_position(a);
		ft_setposition(a);
		ft_lstprint(*a);
	}
	else if ((*a)->next->num == max && ft_lstlast(*a)->num == min)
	{
		printf("\n\n...........PRIMER MOVIMIENTO............\n\n");
		ft_rra(a);
		ft_set_default_position(a);
		ft_setposition(a);
		ft_lstprint(*a);
	}
	else if ((*a)->num == max && (*a)->next->num == min)
	{
		printf("\n\n...........PRIMER MOVIMIENTO............\n\n");
		ft_ra(a);
		ft_set_default_position(a);
		ft_setposition(a);
		ft_lstprint(*a);
	}
	else if ((*a)->num == max && ft_lstlast(*a)->num == min)
	{
		printf("\n\n...........PRIMER MOVIMIENTO............\n\n");
		ft_sa(a);
		ft_set_default_position(a);
		ft_setposition(a);
		ft_lstprint(*a);
		printf("\n\n...........SEGUNDO MOVIMIENTO............\n\n");
		ft_rra(a);
		ft_set_default_position(a);
		ft_setposition(a);
		ft_lstprint(*a);
	}
} */