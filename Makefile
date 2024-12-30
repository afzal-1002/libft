NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCE = \
        ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
        ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
        ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
        ft_memchr.c ft_memcmp.c ft_strnstr.c ft_substr.c ft_strjoin.c ft_split.c \
        ft_strtrim.c ft_strdup.c ft_calloc.c ft_itoa.c ft_strmapi.c ft_putstr_fd.c \
        ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c

SOURCE_BONUS = \
        ft_lstnew.c \
        ft_lstadd_front.c \
        ft_lstlast.c \
        ft_lstsize.c \
        ft_lstadd_back.c \
        ft_lstdelone.c \
        ft_lstclear.c \
        ft_lstiter.c \
        ft_lstmap.c

OBJECT = $(SOURCE:.c=.o)
OBJECT_B = $(SOURCE_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	ar rcs $(NAME) $(OBJECT)

bonus: $(OBJECT_B)
	ar rcs $(NAME) $(OBJECT) $(OBJECT_B)

clean:
	rm -f $(OBJECT) $(OBJECT_B)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus