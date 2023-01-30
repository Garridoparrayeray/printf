NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
UTILS = ft_isalpha.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c	\
	   	ft_strjoin.c \
		ft_substr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_memcmp.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c \
		ft_putchar_fd.c

INCLUDE = libft.h
OBJS = $(UTILS:.c=.o)
all : $(NAME)
$(NAME): $(OBJS) $(INCLUDE)
	ar rcs $(NAME) $(OBJS)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re bonus