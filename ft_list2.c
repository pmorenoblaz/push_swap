#include "push_swap.h"

t_list	*ft_lstnew_aux(int cnum, int pos)
{
	t_list	*lista;

	lista = malloc(sizeof(t_list));
	if (lista == 0)
		return (0);
	lista->num = cnum;
	lista->pos = pos;
	lista->next = NULL;
	return (lista);
}