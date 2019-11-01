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
	cc $(CFLAGS) -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS):

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) $(NAME)

re: fclean all
