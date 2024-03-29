/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <pmoreno-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:54:28 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/03/13 14:20:48 by pmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/errno.h>
# include <errno.h>

typedef struct s_list
{
	int				pos;
	int long		num;
	struct s_list	*next;
}	t_list;

// ft_list.c
int		ft_repeated_nbr(t_list *lst);
int		ft_lst_is_ordered(t_list *lst);

// ft_list2.c
t_list	*ft_lstnew_aux(int cnum, int pos);

// ft_add_to_list.c
int		ft_add_to_stack(char **argv, int argc, t_list **a);
int		ft_valid_args(char	*arg, t_list **a);

// ft_push.c
void	ft_pb(t_list **a, t_list **b);
void	ft_pa(t_list **b, t_list **a);

// ft_swap.c
void	ft_sa(t_list **a);
void	ft_sb(t_list **b);
void	ft_ss(t_list **a, t_list **b);

// ft_rotate.c
void	ft_ra(t_list **a);
void	ft_rb(t_list **b);
void	ft_rr(t_list **a, t_list **b);

// ft_rev_rotate.c
int		ft_rra_aux(t_list **a);
void	ft_rra(t_list **a);
int		ft_rrb_aux(t_list **b);
void	ft_rrb(t_list **b);
void	ft_rrr(t_list **a, t_list **b);

// ft_utils.c
int		ft_putchr(char c);
void	ft_putstr(char *s);
void	ft_lstprint(t_list *list_a);
void	ps_print_column(t_list *column_a, t_list *column_b);

// ft_3_elements_stack.c
void	ft_order_stack_3(t_list **a);

// ft_5_elements_stack.c
void	ft_order_stack_5(t_list **a, t_list **b);
int		ft_make_movement(t_list **a, t_list **b);

// ft_errors.c
void	ft_print_error(void);

// ft_getmax.c
t_list	*ft_get_next_max(t_list *list);

// ft_getmin.c
t_list	*ft_get_next_min(t_list *list);
void	ft_setposition(t_list **a);

// ft_algorithm.c
int		ft_pow(int num);
void	ft_algorithm(t_list **a, t_list **b);

// ft_free_vars.c
void	free_variables(t_list **list);
void	free_variables_list(char **list);

// ft_chars.c
void	ft_first_step(t_list **a, char **argv, int argc);

// Libft
t_list	*ft_lstnew_aux(int cnum, int pos);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int cnum);
void	ft_lstdelone(t_list *lst);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);

#endif
