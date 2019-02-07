NAME	=	ft_ssl
#CFLAGS	=	-Wall -Werror -Wextra
FILES	=	ssl parse_input error
SRC		=	$(FILES:%=src/%.c)
OBJ		=	$(SRC:%.c=%.o)

all: $(NAME) clean fclean
.PHONY : all

$(NAME) : $(OBJ)
	#@make -C libft/
	@echo "Compiling $(NAME)..."
	@gcc $(OBJ) -o $(NAME) -L libft/ -lft

debug:
	@echo "Compiling $(NAME) for lldb use..."
	@gcc $(SRC) libft/*.c -o $(NAME) -g

cleandebug:
	@echo "Removing debug files..."
	@/bin/rm -rf $(NAME).dSYM

clean:
	@echo "Removing Object Files..."
	#@make -C libft/ clean
	@/bin/rm -f $(OBJ)

fclean: cleandebug clean
	@echo "Removing $(NAME)..."
	#@make -C libft/ fclean
	@/bin/rm -f $(NAME)

re: fclean all