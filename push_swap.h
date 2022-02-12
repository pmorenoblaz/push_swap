#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <errno.h>

typedef struct s_stack
{
	char			*cnum;
	long int		num;
	struct s_stack	*next;
}	t_stack;

int		ft_atoi(const char *str);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
int		ft_lstsize(t_stack *lst);

#endif