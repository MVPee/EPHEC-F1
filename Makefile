NAME = f1
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = srcs
INCDIR = includes

SRC =	srcs/main.c \
		srcs/allCarComplete.c \
		srcs/cmp_time.c \
		srcs/create_f1.c \
		srcs/modifyTime_f1.c \
		srcs/random_int.c \
		srcs/show_f1.c \
		srcs/update_race_data.c

RM = rm -f

OBJS = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re