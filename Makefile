CC = gcc
NAME = push_swap.a
AR = ar crs
LIBFT = libft

SRC = srcs/push_swap.c \
		srcs/utils.c \
		#srcs/pile.c \
		#srcs/op.c \
		#srcs/sort.c \
		#srcs/sorting.c \

CFLAGS = -Wall -Wextra -Werror
RM = rm -f
OBJ = $(SRC:%.c=%.o)
all = $(NAME)

$(NAME): $(OBJ)
	make -C $(LIBFT)
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
