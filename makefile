NAME = minishell

SNEY_PATH = src/sney 
NAV_PATH = src/Navarro

READLINE = -lreadline

LIBFT_MAKE = Libreries/Libft 
LIBFT = Libreries/Libft/libft.a 

INCLUDES = inc/minishell.h 

SRC = src/sney/main.c 

SRC += $(addprefix $(SNEY_PATH)/, parssing.c \
	   		start_shell.c\
			set_env.c\
			signal.c\
			built_ins.c\
			built_ins_aux.c) 
SRC += $(addprefix $(NAV_PATH)/, lectur.c\
	   		token.c\
			string.c\
			remove_quotes.c\
			utils.c\
			syntax_error.c\
			expansor.c) 

RM = rm -rf
CC = cc
CFLAGS = -Wall -Werror -Wextra 

OBJS = ${SRC:.c=.o}

%.o: %.c $(INCLUDES) Makefile
	@$(CC) $(CFLAGS) -c $< -o $@

all:
	@make -C $(LIBFT_MAKE) 
	@make $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(READLINE) -o $(NAME)
