# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tjans <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/05 19:49:41 by tjans         #+#    #+#                  #
#    Updated: 2019/11/05 19:49:44 by tjans         ########   odam.nl          #
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
OBJS := $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) rcs $@ $^

$(OBJS):

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
