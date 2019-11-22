# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tjans <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/05 19:49:41 by tjans         #+#    #+#                  #
#    Updated: 2019/11/22 19:27:10 by tjans         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


SRC_DIR	:= src
INC_DIR	:= inc
OUT_DIR	:= out
OBJ_DIR	:= obj

TARGET = $(OUT_DIR)/libft.a
VPATH := $(SRC_DIR)

CFLAGS		:= -c -Wall -Wextra -Werror -I $(INC_DIR)
SRCS		:= $(addprefix ft_, atoi.c bzero.c calloc.c isalnum.c			\
				isalpha.c isascii.c isdigit.c isprint.c memccpy.c memchr.c	\
				memcmp.c memcpy.c memmove.c memset.c strchr.c strdup.c		\
				strlcat.c strlcpy.c strlen.c strncmp.c strnstr.c strrchr.c	\
				tolower.c toupper.c strjoin.c strtrim.c substr.c split.c	\
				itoa.c strmapi.c put_fd.c)
BONUS_SRCS	:= $(addprefix bft_, $(addsuffix _bonus.c, lstadd_back			\
				lstadd_front lstclear lstdelone lstiter lstlast lstnew		\
				lstsize))
HDRS		:= $(addprefix $(INC_DIR)/, libft.h)

OBJS		:= $(SRCS:.c=.o)
BONUS_OBJS	:= $(BONUS_SRCS:.c=.o)

$(OBJ_DIR)/%.o : %.c $(HDRS) | dirs
	$(CC) $(CFLAGS) -o $@ $<

all: $(TARGET)

$(TARGET): $(addprefix $(OBJ_DIR)/,$(OBJS))
	$(AR) rcs $@ $^
	@cp -r $(HDRS) out/

bonus: $(addprefix $(OBJ_DIR)/,$(BONUS_OBJS)) | $(TARGET)
	$(AR) rs $(TARGET) $^

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) -r $(OUT_DIR)

re: fclean all

dirs:
	@mkdir -p $(OBJ_DIR) $(OUT_DIR)
