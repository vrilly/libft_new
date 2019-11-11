# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tjans <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/05 19:49:41 by tjans         #+#    #+#                  #
#    Updated: 2019/11/11 15:42:17 by tjans         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS := -c -Wall -Wextra -Werror
SRCS := $(addprefix ft_, atoi.c bzero.c calloc.c isalnum.c			\
		isalpha.c isascii.c isdigit.c isprint.c memccpy.c memchr.c	\
		memcmp.c memcpy.c memmove.c memset.c strchr.c strdup.c		\
		strlcat.c strlcpy.c strlen.c strncmp.c strnstr.c strrchr.c	\
		tolower.c toupper.c strjoin.c strtrim.c substr.c split.c	\
		itoa.c strmapi.c put_fd.c)
BONUS_SRCS := $(addprefix bft_, $(addsuffix _bonus.c, lstadd_back	\
	lstadd_front lstclear lstdelone lstiter lstlast lstnew lstsize))

OBJS := $(SRCS:.c=.o)
BONUS_OBJS := $(BONUS_SRCS:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $@ $^

bonus: $(BONUS_OBJS) | $(NAME)
	$(AR) rs $(NAME) $^

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
