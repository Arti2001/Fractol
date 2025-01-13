NAME      = fractol
LIBFT_DIR = libft
MLX42_DIR = MLX42
INCLUDES  = -I $(MLX42_DIR)/include
LIBFT_NAME= $(addprefix $(LIBFT_DIR)/, libft.a)
MLX42     = $(addprefix $(MLX42_DIR), /build/libmlx42.a)
SRC       = main.c init.c my_hooks.c render.c math.c zoom.c color.c
OBJ       = $(SRC:.c=.o)
CC        = cc
MFLAGS	  = -ldl -lglfw -pthread -lm 
FLAGS     = -Wextra -Werror -Wall  -g -Ofast
OBJS_DIR  = objs
RM        = rm -rf
SUB_MOD   = $(MLX42_DIR)/README.md


all: $(LIBFT_NAME) $(NAME)

$(NAME) : $(SUB_MOD) $(OBJ)  $(LIBFT_NAME) $(MLX42) 
	$(CC) $(FLAGS) $(OBJ) -o $@ $(MLX42) $(MFLAGS) $(LIBFT_NAME) $(INCLUDES)

$(SUB_MOD): 
	git submodule init
	git submodule update

%.o: %.c | fractol.h
	$(CC) $(FLAGS) $(INCLUDES) -c $<


$(LIBFT_NAME):
	$(MAKE) -C $(LIBFT_DIR)

$(MLX42):
	@cmake MLX42 -B $(MLX42_DIR)/build && make -C $(MLX42_DIR)/build -j4

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(MLX42_DIR)/build
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(LIBFT_NAME)
	$(RM) $(NAME) $(OBJ) ./a.out
	
re: fclean
	$(MAKE)

.PHONY: all re clean fclean make
