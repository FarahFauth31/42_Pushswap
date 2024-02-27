# Makefile for push swap

# Compilers
CC = cc
CFLAGS = -g -Wall -Wextra -Werror
LIB_DIR = libft/
LIBS = $(LIB_DIR)libft.a
INCLUDES = -I $(LIB_DIR) -I.

# Files
SRCS = aid_stack100.c aid.c error_handling.c error_handling2.c input_handling.c lists.c lists2.c main.c push_swap.c \
	push.c reverse_rotate.c rotate.c stack2.c stack3.c stack4.c stack5.c stack100.c swap.c turn_to_list.c

OBJS = $(SRCS:.c=.o)

# Executable name
NAME = push_swap

# Rules
all: $(NAME)

$(NAME): $(OBJS) $(LIBS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ $(OBJS) $(LIBS)

$(LIBS):
	make -C $(LIB_DIR)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)
	make -C $(LIB_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIB_DIR) fclean

re: fclean all

.PHONY: all clean fclean re