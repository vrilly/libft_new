NAME = libft.a
SRC_DIR = libft
INC_DIR = include
OBJ_DIR = build

CFLAGS := -I$(INC_DIR) -c -Wall -Wextra -Werror
SRCS := atoi.c bzero.c calloc.c isalnum.c							\
		isalpha.c isascii.c isdigit.c isprint.c memccpy.c memchr.c	\
		memcmp.c memcpy.c memmove.c memset.c strchr.c strdup.c		\
		strlcat.c strlcpy.c strlen.c strncmp.c strnstr.c strrchr.c	\
		tolower.c toupper.c strjoin.c strtrim.c substr.c split.c	\
		itoa.c strmapi.c put_fd.c
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	cc $(CFLAGS) -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

$(OBJS): $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
