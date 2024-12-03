###############################################################################
#								STANDARS	 								  #
###############################################################################
NAME 		= 		minishell
RM 			= 		rm -rf
INCLUDE		=		inc/minishell.h
OBJS		= 		obj/
SRC_DIR		=		src/
LIBFT		=		Libreries/Libft
LIBFT_A   =		Libreries/Libft/libft.a


###############################################################################
#								COMPILER	  								  #
###############################################################################

CC 			= 		cc
CCFLAGS		= 		-g #-fsanitize=address-Wall -Wextra -Werror -fsanitize=address
READLINE	=		-lreadline

###############################################################################
#									SRC    									  #
###############################################################################

SRC_DIR_SNY		=	sney/main.c\
					sney/parssing.c\
					sney/start_shell.c\
					sney/set_env.c\
					sney/signal.c\
					sney/built_ins.c\
					sney/built_ins_aux.c

SRC_DIR_NAV		=	Navarro/lectur.c\
					Navarro/token.c\
					Navarro/string.c\
					Navarro/remove_quotes.c\
					Navarro/utils.c\
					Navarro/syntax_error.c\
					Navarro/expansor.c


###############################################################################
#									OBJ_DIR	   								  #
###############################################################################

SRCS			= $(SRC_DIR_NAV) $(SRC_DIR_SNY)

 OBJ_DIR =	$(addprefix $(OBJS), ${SRCS:.c=.o})

#OBJ_DIR =	$(patsubst $(SRC_DIR_NAV)%.c, $(OBJS)%.o, $(SRC))\
			$(patsubst $(SRC_DIR_SNY)%.c, $(OBJS)%.o, $(SRC))



###############################################################################
#								RULES	      								  #
###############################################################################

all:
	@make -C $(LIBFT) --no-print-directory
	@make $(NAME) --no-print-directory

$(NAME):: $(OBJ_DIR) $(LIBFT)
	@echo "Compiling file"
	@$(CC) $(CCFLAGS) $(OBJ_DIR) $(LIBFT_A) -o $(NAME) $(READLINE)
$(NAME)::
	@echo "Minishell is alived"

$(OBJS)%.o: $(SRCS) Makefile $(INCLUDE)
	@echo "Compiling..."
	@mkdir -p $(OBJS)
	@$(CC) $(CCFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@make -C $(LIBFT) fclean --no-print-directory
	@echo "Cleaning up..."
	@$(RM) $(OBJS)

fclean: clean
	@echo "Cleaning file..."
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
