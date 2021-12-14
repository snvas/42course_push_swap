NAME = push_swap
CC = gcc -Wall -Wextra -Werror -g
RM = rm -rf

LBPATH =	./libft/
LIBNAME =	$(LBPATH)libft.a
LBINC =		-I$(LBPATH)
LBM =		libm

SRCSPATH =		./srcs/
OBJSPATH_PS =	./objs_push_swap/
INC =			./includes/

SRCS = 	push_swap.c \
		ft_isnum.c \
		ft_args.c \
		ft_free.c \
		ft_is_sort.c \
		ft_push_init.c \
		ft_stack_sort.c \
		ft_indexing.c \
		ft_abs_max_min.c \
		ft_action_p.c \
		ft_action_rr.c \
		ft_action_r.c \
		ft_action_s.c \
		ft_action_rotator.c \
		ft_distance_to_top.c \
		ft_solve.c \
		ft_loop.c \
		ft_near_group.c \
		ft_push_back.c \
		ft_get_last.c \

SRCS_PS = $(addprefix $(SRCSPATH), $(SRCS))
OBJSNAME_PS = $(SRCNAME_PS:.c=.o)
OBJS_PS = $(OBJSPATH_PS)*.o

all: $(NAME)

$(NAME):
	make -C $(LBPATH)
	@mkdir $(OBJSPATH_PS) 2> /dev/null || true
	$(CC) -I$(INC) $(LBINC) -c $(SRCS_PS)
	@mv *.o $(OBJSPATH_PS)
	$(CC) $(OBJS_PS) $(LIBNAME) -L$(LBPATH) $(LBINC) -I$(INC) -o $(NAME)
	@echo "$(NAME)\tcompiled!\n"

lib:	$(LIBFTM)
	@echo "Libft compiled.\n"

clean:
	$(RM) $(OBJS_PS)
	$(MAKE) -C $(LBPATH) clean
	@rmdir $(OBJSPATH_PS) 2> /dev/null || true
	@echo "Cleaned!\n"

fclean: clean
	$(RM) $(NAME) *.o
	$(MAKE) -C $(LBPATH) fclean
	@echo "Fcleaned!\n"

re: fclean all
	@echo "Re-compiled!\n"

.PHONY: clean, fclean, re, lib