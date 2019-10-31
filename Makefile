NAME = libft.a
SRC_DIR = libft
INC_DIR = include
OBJ_DIR = build

CFLAGS := -I$(INC_DIR) -c -Wall -Wextra -g -fprofile-arcs -ftest-coverage
OBJS := $(addprefix $(OBJ_DIR)/, atoi.o bzero.o calloc.o isalnum.o	\
		isalpha.o isascii.o isdigit.o isprint.o memccpy.o memchr.o	\
		memcmp.o memcpy.o memmove.o memset.o strchr.o strdup.o		\
		strlcat.o strlcpy.o strlen.o strncmp.o strnstr.o strrchr.o	\
		tolower.o toupper.o strjoin.o strtrim.o substr.o split.o	\
		itoa.o strmapi.o put_fd.o)

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
