SRCS = ft_5_elements_stack.c ft_add_to_list.c ft_algorithm.c \
	   ft_atoi.c ft_chars.c ft_errors.c ft_free_vars.c ft_getmax.c ft_getmin.c \
	   ft_list2.c ft_lstadd_front.c ft_lstdelone.c ft_lstsize.c ft_order_par.c \
	   ft_position.c ft_push.c ft_rev_rotate.c ft_rotate.c ft_split.c ft_strchr.c \
	   ft_strlcpy.c ft_strlen.c ft_swap.c list.c main.c ft_3_elements_stack.c
		

OBJS = $(SRCS:.c=.o)

NAME = push_swap

CC = gcc

CFLAGS = -g -Wall -Werror -Wextra

RM = rm -f

all: $(NAME)

%.o:%.c
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(OBJS)
	@echo $(NAME)": ready to be executed"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
