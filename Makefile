SRCS	= main.c list.c ft_split.c ft_strchr.c ft_atoi.c ft_lstsize_bonus.c \
		ft_strlcpy.c ft_strlen.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c ft_3_elements_stack.c  \
		ft_5_elements_stack.c ft_errors.c ft_getmax.c ft_getmin.c ft_push.c ft_swap.c \
		ft_rotate.c ft_rev_rotate.c ft_chars.c ft_add_to_list.c ft_free_vars.c

OBJS	= $(SRCS:.c=.o)

NAME	= push_swap

CFLAGS	= -Wall -Werror -Wextra 

GCC	= gcc

RM	= rm -f

all:		$(NAME)

.c.o:
	$(GCC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $?

clean:		
	$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re 
