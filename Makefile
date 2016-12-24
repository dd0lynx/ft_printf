.PHONY: all clean fclean re

NAME	=	libftprintf.a
CC		=	gcc
FLAGS	=	-Wall -Wextra -Werror
ODIR	=	obj/
IDIR	=	include/
OBJ		=	$(SRC:.c=.o)
SRC		=	ft_printf.c		read_format.c		conversion_handler.c				\
			read_length.c	convert_wildcard.c	convert_int.c		convert_uint.c	\
			convert_str.c	convert_char.c		convert_ptr.c		convert_n.c		\
			padding.c		tool_txt_mods.c		tool_txt_validate.c	tool_txt_format.c	\
			tool_txt_color.c					tool_txt_reset.c
SRC		+=	ft_strnew.c		ft_strdup.c			ft_padstr_e.c		ft_padstr_f.c	\
			ft_atoi.c		ft_tolower.c		ft_strchr.c			ft_memjoin_free.c \
			ft_memjoin.c	ft_strjoin.c		ft_strjoin_free.c	ft_memset.c		\
			ft_strlen.c		ft_memalloc.c		ft_imaxtostr.c		ft_memdel.c		\
			ft_strinsert.c	ft_strupper.c		ft_uimaxtostr.c		ft_strdel.c		\
			ft_itoa.c		ft_strequ.c			ft_strsub.c			ft_strncmp.c


O		=	$(addprefix $(ODIR), $(OBJ))
vpath %.c src/:libft/srcs/extra/:libft/srcs/isxx:libft/srcs/lst:libft/srcs/mem:libft/srcs/putxx:libft/srcs/str:libft/srcs/xxtoxx/

all: $(NAME)

test: all
	@$(CC) $(FLAGS) -I $(IDIR) -L. -lftprintf -L./libft -lft main.c

$(NAME): $(O)
	@ar rc $(NAME) $(O)
	@ranlib $(NAME)
	@echo "Done."

$(ODIR)%.o: %.c
	@$(CC) $(FLAGS) -I $(IDIR) -c $< -o $@

$(O): | ./obj

./obj:
	@mkdir $(ODIR)

clean:
	@rm -rf $(ODIR)
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed."	

re: fclean all
