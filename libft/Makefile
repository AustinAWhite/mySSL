NAME	= libft.a
HEADER	= libft.h
CFLAGS	= -Wall -Werror -Wextra
DEBUG	= -g fsanitize=address

SRC		= ft_isdigit.c ft_strchr.c ft_strcpy.c ft_strlen.c ft_tolower.c \
		  ft_memset.c ft_strcmp.c ft_strdup.c ft_strncpy.c ft_toupper.c \
		  ft_bzero.c ft_isalpha.c ft_isprint.c ft_isascii.c ft_isalnum.c \
		  ft_strcat.c ft_strncat.c ft_strlcat.c ft_strncmp.c ft_strrchr.c \
		  ft_strstr.c ft_strnstr.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_putchar.c ft_putstr.c ft_putnbr.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		  ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		  ft_strequ.c ft_strnequ.c ft_striter.c ft_striteri.c ft_strmap.c \
		  ft_strmapi.c ft_putendl.c ft_strsub.c ft_atoi.c ft_strjoin.c \
		  ft_strtrim.c ft_strsplit.c ft_itoa.c ft_lstnew.c ft_lstdelone.c \
		  ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_locate_lfeed.c \
		  get_next_line.c ft_locate_lfeed.c ft_strtok_mod.c ft_strdelims.c\
		  ft_strarrlen.c ft_chrindex.c ft_lstappend.c ft_itoa_base.c

OBJ		= $(SRC:%.c=%.o)

all : $(NAME)

$(NAME):
	@echo "Compiling $(NAME)..."
	@gcc -c $(CFLAGS) $(SRC) \
	&& ar rc libft.a $(OBJ) && ranlib $(NAME)

debug:
	@echo "Compiling $(NAME)"
	@gcc -c $(CFLAGS) $(DEBUG) $(SRC) -I $(HEADER) \
	&& ar rc libft.a $(OBJ) && ranlib $(NAME)

clean:
	@echo "Removing Object Files..."
	@/bin/rm -f $(OBJ)

fclean:
	@echo "Removing $(NAME)..."
	@/bin/rm -f $(NAME) $(OBJ)

re: fclean all
