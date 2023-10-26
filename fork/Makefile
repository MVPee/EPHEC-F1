NAME = f1
CC = cc
CFLAGS = 

SRCDIR = srcs
INCDIR = includes

SRC =	srcs/main.c \
		srcs/initF1.c \
		srcs/lapF1.c \
		srcs/display_scores.c \
		srcs/bubble_sort.c

RM = rm -f

OBJS = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -lncurses

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re