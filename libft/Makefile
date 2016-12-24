.PHONY: all clean fclean re

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror

ODIR = obj/
IDIR = includes/
SRC =
OBJ = $(SRC:.c=.o)

SRC +=	ft_bzero.c			ft_memalloc.c		ft_memccpy.c		ft_memchr.c		\
		ft_memcmp.c			ft_memcpy.c			ft_memdel.c			ft_memmove.c	\
		ft_memset.c			ft_memjoin.c		ft_memjoin_free.c
SRC +=	ft_isalnum.c		ft_isalpha.c		ft_isascii.c		ft_isdigit.c	\
		ft_isprint.c
SRC +=	ft_putchar_fd.c		ft_putchar.c		ft_putendl_fd.c		ft_putendl.c	\
		ft_putnbr_fd.c		ft_putnbr.c			ft_putstr_fd.c		ft_putstr.c		\
		ft_putwchar.c		ft_putwstr.c
SRC +=	ft_padstr_e.c		ft_padstr_f.c		ft_strcat.c			ft_strchr.c		\
		ft_strclr.c			ft_strcmp.c			ft_strcpy.c			ft_strcut_end.c	\
		ft_strcut_sub.c		ft_strcut.c			ft_strdel.c			ft_strequ.c		\
		ft_striter.c		ft_striteri.c		ft_strjoin_free.c	ft_strjoin.c	\
		ft_strlcat.c		ft_strlen.c			ft_strmap.c			ft_strmapi.c	\
		ft_strncat.c		ft_strncmp.c		ft_strncpy.c		ft_strnequ.c	\
		ft_strnew.c			ft_strnstr.c		ft_strrchr.c		ft_strsplit.c	\
		ft_strstr.c			ft_strsub.c			ft_strtrim.c		ft_strdup.c		\
		ft_strinsert.c
SRC +=	ft_atoi.c			ft_imaxtostr.c		ft_itoa_base.c		ft_itoa.c		\
		ft_strlowwer.c		ft_strupper.c		ft_tolower.c		ft_toupper.c	\
		ft_uimaxtostr.c
SRC +=	ft_lstadd_last.c	ft_lstadd.c			ft_lstdel.c			ft_lstdelone.c	\
		ft_lstiter.c		ft_lstlast.c		ft_lstmap.c			ft_lstnew.c		\
		ft_lstrev.c			ft_lstsize.c
SRC +=	ft_rotn.c

O = $(addprefix $(ODIR), $(OBJ))
vpath %.c srcs/:srcs/extra/:srcs/isxx:srcs/lst:srcs/mem:srcs/putxx:srcs/str:srcs/xxtoxx/

all: $(NAME)

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
