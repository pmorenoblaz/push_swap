/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:54:28 by pmoreno-          #+#    #+#             */
/*   Updated: 2022/02/19 10:44:08 by pmoreno-         ###   ########.fr       */
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
/* gcc main.c list.c ft_split.c ft_strchr.c ft_atoi.c
ft_lstsize_bonus.c ft_strlcpy.c ft_strlen.c ft_lstadd_front_bonus.c 
ft_utils.c ft_lstdelone_bonus.c ft_operations2.c ft_positions.c */
typedef struct s_list
{
	int				pos;
	int				list;
	int long		num;
	struct s_list	*next;
}	t_list;

//main.c
int		ft_add_to_stack(char **argv, int argc, t_list **a);
int		ft_valid_args(char	*arg, t_list **a);
void	ft_lstprint(t_list *list_a);

//list.c
int		ft_repeated_nbr(t_list *lst);
int		ft_lst_is_ordered(t_list *lst);

// Libft
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);

int		ft_atoi(const char *str);

void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstnew(int num);
void	ft_lstdelone(t_list *lst);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);

//Movements
//ft_operations.c
void	ft_sa(t_list **l);
void	ft_ss(t_list **a, t_list **b);
void	ft_pa(t_list **a, t_list **b);
void	ft_ra(t_list **a);

//ft_operations2.c
void	ft_rra(t_list **a);
void	ft_rrr(t_list **a, t_list **b);

//ft_utils.c
int		ft_putchr(char c);
void	ft_putstr(char *s);
void	ft_print_list(t_list **l);
void	ft_lstprint(t_list *list_a);

//ft_positions.c
void	ft_set_default_position(t_list **a);
void	ft_next_min(t_list **a, int pos);
void	ft_setposition(t_list **a);
t_list	*ft_get_max(t_list *a);

#endif
