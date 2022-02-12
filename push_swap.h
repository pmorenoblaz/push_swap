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

int	ft_atoi(const char *str)
#endif