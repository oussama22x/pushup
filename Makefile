CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
FILES = madatory/raycasting.c madatory/file_bonus.c madatory/cub3d.c madatory/leaks.c  madatory/parsing.c madatory/texters.c madatory/more_files.c madatory/libft/ft_bzero.c \
        madatory/libft/ft_strjoin.c madatory/libft/ft_atoi.c madatory/libft/ft_strlen.c madatory/libft/ft_calloc.c \
        madatory/libft/ft_split.c madatory/libft/ft_strdup.c madatory/libft/ft_strnstr.c madatory/libft/ft_strchr.c \
        madatory/file.c madatory/get_line/get_next_line.c madatory/libft/ft_itoa.c madatory/libft/ft_substr.c madatory/ohhhh.c \
        madatory/utils1.c madatory/utils2.c madatory/utils3.c madatory/utils4.c   \
        madatory/rendring_wall.c  madatory/extra_checks.c madatory/normenet_bonus.c madatory/ihate_norm_bonus.c madatory/more.c  madatory/abcd.c
FILES_BONUS = cub3d_bonus/raycasting_bonus.c cub3d_bonus/file_bonus.c cub3d_bonus/cub3d_bonus.c cub3d_bonus/leaks_bonus.c cub3d_bonus/parsing_bonus.c cub3d_bonus/texters_bonus.c cub3d_bonus/more_files_bonus.c cub3d_bonus/libft/ft_bzero.c \
        cub3d_bonus/libft/ft_strjoin.c cub3d_bonus/libft/ft_atoi.c cub3d_bonus/libft/ft_strlen.c cub3d_bonus/libft/ft_calloc.c \
        cub3d_bonus/libft/ft_split.c cub3d_bonus/libft/ft_strdup.c   cub3d_bonus/libft/ft_strnstr.c cub3d_bonus/libft/ft_strchr.c \
         cub3d_bonus/file2_bonus.c cub3d_bonus/get_line/get_next_line.c cub3d_bonus/libft/ft_itoa.c cub3d_bonus/libft/ft_substr.c cub3d_bonus/ohhhh_bonus.c\
            cub3d_bonus/utils1_bonus.c cub3d_bonus/utils2_bonus.c cub3d_bonus/utils3_bonus.c  cub3d_bonus/utils4_bonus.c cub3d_bonus/utils5_bonus.c cub3d_bonus/utils_bonus.c \
            cub3d_bonus/rendring_wall_bonus.c cub3d_bonus/animation_bonus.c cub3d_bonus/extra_checks_bonus.c cub3d_bonus/normenet_bonus.c cub3d_bonus/ihate_norm_bonus.c cub3d_bonus/more_bonus.c \
             cub3d_bonus/abcd_bonus.c cub3d_bonus/utilspars.c
OBJ = $(FILES:.c=.o)
OBJ_BONUS = $(FILES_BONUS:.c=.o)
NAME = cub3D

UNAME = $(shell uname)
ifeq ($(UNAME),Linux)
    MLX_FLAGS = -lmlx -lXext -lX11 -lm
endif
ifeq ($(UNAME),Darwin)
    MLX_FLAGS = -lmlx -framework OpenGL -framework AppKit
endif

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(MLX_FLAGS) -o $(NAME)

bonus: $(OBJ_BONUS)
	$(CC) $(CFLAGS) $(OBJ_BONUS) $(MLX_FLAGS) -o  CUB_BONUS

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	$(RM) $(NAME) CUB_BONUS cub3d

re: fclean all
