# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nhara <nhara@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 14:36:45 by nhara             #+#    #+#              #
#    Updated: 2025/05/07 18:07:22 by nhara            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fractol

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -O3

MLX_DIR		= minilibx-linux
LIBFT_DIR	= libft
SRC_DIR		= src
OBJ_DIR		= obj
INC_DIR		= include

SRC			= $(SRC_DIR)/main.c $(SRC_DIR)/init.c $(SRC_DIR)/math_utils.c \
			  $(SRC_DIR)/render.c $(SRC_DIR)/events_key.c $(SRC_DIR)/events_mouse.c

OBJ			= $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

INCLUDE		= -I$(INC_DIR) -I$(LIBFT_DIR) -I$(MLX_DIR)
MLX_FLAGS	= -L$(MLX_DIR) -lmlx -lXext -lX11 -lm -lz
LIBFT_FLAGS	= -L$(LIBFT_DIR) -lft

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR)
	@$(MAKE) -C $(MLX_DIR)
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDE) $(LIBFT_FLAGS) $(MLX_FLAGS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

bonus: all

clean:
	@$(MAKE) -C $(LIBFT_DIR) clean
	@$(MAKE) -C $(MLX_DIR) clean
	rm -rf $(OBJ_DIR)

fclean: clean
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@$(MAKE) -C $(MLX_DIR) clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
