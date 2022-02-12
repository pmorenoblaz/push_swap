#include "push_swap.h"

void	ft_add_to_stack(char **argv, int argc, t_stack **a)
{
	int		i;
	t_stack	*nbr;

	i = 1;
	while (i < argc)
	{
		nbr = malloc(sizeof(t_stack));
		nbr->cnum = argv[i];
		nbr->num = ft_atoi(argv[i]);
		nbr->next = 0;
		ft_lstadd_back(a, nbr);
		i++;
	}
}

void	ft_initialize_stacks(t_stack **a, t_stack **b)
{
	a = malloc(sizeof(t_stack *));
	b = malloc(sizeof(t_stack *));
}

int	main(int argc, char **argv)
{
	t_stack		**a;
	t_stack		**b;

	if (argc > 1)
	{
		ft_initialize_stacks(a, b);
		ft_add_to_stack(argv, argc, a);
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
