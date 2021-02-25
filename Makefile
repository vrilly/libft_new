# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tjans <marvin@codam.nl>                      +#+                      #
#                                                    +#+                       #
#    Created: 2019/11/05 19:49:41 by tjans         #+#    #+#                  #
#    Updated: 2020/01/07 17:34:26 by tjans         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC_DIR	:= src src/str src/mem src/fd
INC_DIR	:= inc
OBJ_DIR	:= obj

TARGET = libft.a
VPATH := $(SRC_DIR)

CFLAGS		:= -c -Wall -Wextra -Werror -I $(INC_DIR)

SRCS		:= $(addprefix ft_, atoi.c bzero.c calloc.c  memccpy.c memchr.c	\
				memcmp.c memcpy.c memmove.c memset.c strchr.c strdup.c		\
				strlcat.c strlcpy.c strlen.c strncmp.c strnstr.c strrchr.c	\
				strjoin.c strtrim.c substr.c split.c realloc_safe.c			\
				itoa.c strmapi.c put_fd.c str_is.c str_case.c)				\
				listappend.c listcreate.c listfree.c listjoin.c listlen.c	\
				fd_control.c fd_reader.c
HDRS		:= $(addprefix $(INC_DIR)/, libft.h str/list.h)
OBJS		:= $(SRCS:.c=.o)

$(OBJ_DIR)/%.o : %.c $(HDRS) | dirs
	@echo CC $<
	@$(CC) $(CFLAGS) -o $@ $<

all: $(TARGET)

$(TARGET): $(addprefix $(OBJ_DIR)/,$(OBJS))
	@echo Linking $(TARGET)
	@$(AR) rcs $@ $^
	@echo ---DONE---

clean:
	@echo Removed intermediates
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@echo Removed output
	@$(RM) -r $(TARGET)

re: fclean all

dirs:
	@echo Compiling $(TARGET)...
	@echo Host: $$(uname -rms)
	@echo Compiler: $$($(CC) --version | head -n1)
	@echo CFLAGS: $(CFLAGS)
	@echo ---Start---
	@mkdir -p $(OBJ_DIR) $(OUT_DIR)
