NAME			= libft.a


SRC				= 	ft_isalpha.c \
						ft_isdigit.c \
						ft_isalnum.c \
						ft_isascii.c \
						ft_isprint.c \
						ft_strlen.c \
						ft_memset.c \
						ft_bzero.c \
						ft_memcpy.c \
						ft_memmove.c \
						ft_strlcpy.c \
						ft_strncmp.c \
						ft_strlcat.c \
						ft_toupper.c \
						ft_tolower.c \
						ft_strchr.c \
						ft_memcmp.c \
						ft_strnstr.c \
						ft_strrchr.c \
						ft_atoi.c \
						ft_memchr.c \
						ft_calloc.c \
						ft_strdup.c \
						ft_substr.c 

#BONUS_SCRS		= 


OBJS			= $(SRC:%.c=%.o)

BONUS_OBJS  	= $(BONUS_SCRS:%.c=%.o)

CFLAGS			= -Wall -Wextra -Werror


RM 				= @rm -f


all:		$(NAME)

bonus: 		$(NAME)
			@gcc $(FLAGS) -c $(BONUS_SCRS) -I ./
			ar rc $(NAME) $(BONUS_OBJS)

#.c.o:		$(SRC)
#			@gcc $(CFLAGS) -c $(SRC)
#			@echo "objetos creados"

$(NAME):	
			@gcc $(CFLAGS) -c $(SRC) -I ./
			@ar rcs $(NAME) $(OBJS)
			@echo "ejecutable creado"

clean:
			${RM} $(OBJS)
			@echo "limpieza archivos .o"

fclean: clean
			${RM} $(NAME)
			@echo "limpieza de ejecutable"

re:		fclean all

.PHONY: all clean fclean re

