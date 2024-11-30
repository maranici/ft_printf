# COMPIL
COMPIL = cc
CFLAGS = -Wall -Werror -Wextra

# VARIABLES
EXE_NAME = printf
NAME = libftprintf.a

UTILS_DIR = utils/
UTILS_SRC =	is_a_formatter.c ft_dispatcher.c ft_print_until_format.c
UTILS_OBJS = $(addprefix ${UTILS_DIR}, ${UTILS_SRC:.c=.o})

HANDL_DIR = handlers/
HANDL_SRC = ft_handler_c.c ft_handler_s.c ft_handler_p.c ft_handler_d_i.c ft_handler_u.c ft_handler_x.c
HANDL_OBJS = $(addprefix ${HANDL_DIR}, ${HANDL_SRC:.c=.o})

LIB_SRCS = ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c ft_calloc.c ft_itoa.c ft_uitoa.c ft_ulitoa_base.c ft_uitoa_base.c
LIB_OBJS = $(addprefix libft/, ${LIB_SRCS:.c=.o})

MAIN_SRC = ft_printf.c
MAIN_OBJ = ${MAIN_SRC:.c=.o}

OBJS = ${UTILS_OBJS} ${HANDL_OBJS} ${MAIN_OBJ}

# PHONY
.PHONY = all clean fclean re exe

# RULES
%.o: %.c
	@ ${COMPIL} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	@ cd libft/ && $(MAKE)
	@ ar rc ${NAME} ${OBJS} ${LIB_OBJS}

all: ${NAME}

exe: re
	@ ${COMPIL} ${CFLAGS} -w -c main.c
	@ ${COMPIL} ${CFLAGS} -w -o ${EXE_NAME} main.o ${OBJS} ${LIB_OBJS}

clean:
	@ cd libft/ && $(MAKE) clean
	@ rm -f ${EXE_NAME}
	@ rm -f ${OBJS} main.o

fclean: clean
	@ cd libft/ && $(MAKE) fclean
	@ rm -f ${NAME}

re: fclean all
