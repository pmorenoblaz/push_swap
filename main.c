#include "push_swap.h"

int	ft_valid_args(char	*arg, t_list **a)
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
		ft_lstadd_back(a, ft_lstnew(ft_atoi(list[i])));
		i++;
	}
	return (1);
}

int	ft_add_to_stack(char **argv, int argc, t_list **a)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (ft_valid_args(argv[i], a) == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_lstprint(t_list *list_a)
{
	t_list	*aux;

	aux = list_a;
	while (aux)
	{
		if (aux)
		{
			printf("%ld \n", aux->num);
			aux = aux->next;
		}
	}
	printf("----------- -----------\na           b\n");
}

void	ft_lstprint2(t_list *list_a, t_list *list_b)
{
	t_list	*aux;
	t_list	*aux2;

	aux = list_a;
	aux = list_b;
	while (aux)
	{
			printf("%ld                %ld\n", aux->num, aux2->num);
			aux = aux->next;
	}
	printf("----------- -----------\na           b\n");
}

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;

	if (argc > 1)
	{
		if (ft_add_to_stack(argv, argc, &a) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (ft_repeated_nbr(a) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
		printf("%d -> orden\n", ft_lst_is_ordered(a));
		printf("%d -> repetido\n", ft_repeated_nbr(a));
		ft_lstprint(a);
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
		printf("\n\n...........SWAP............\n\n");
		ft_rra(&a);
		ft_lstprint(a);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
