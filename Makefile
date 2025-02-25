NAME            = push_swap
CC              = cc
CFLAGS          = -Wall -Wextra -Werror

LIBFT_DIR       = libft
LIBFT_FLAGS     = -lft -L $(LIBFT_DIR)
FT_PRINTF_DIR    = ft_printf
FT_PRINTF_FLAGS  = -lftprintf -L $(FT_PRINTF_DIR)

INCLUDES_DIR    = includes
INCLUDES_FLAG   = -I$(INCLUDES_DIR) -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR)/includes

SRCS_DIR        = srcs
SRCS            = $(wildcard $(SRCS_DIR)/*.c) # Asegúrate de que solo haya un main.c
OBJS_DIR        = objs
OBJS            = $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))

MAKE            = make -sC
MKDIR           = mkdir -p
RM              = rm -rf

RESET           = "\033[0m"
GREEN           = "\033[32m"
YELLOW          = "\033[33m"
CYAN            = "\033[34m"
RED             = "\033[31m"

all: $(NAME)

$(NAME): $(OBJS)
	@echo $(CYAN) " - Making libft..." $(RESET)
	@$(MAKE) $(LIBFT_DIR)
	@echo $(YELLOW) " - Made libft!" $(RESET)
	@echo $(CYAN) " - Making printf..." $(RESET)
	@$(MAKE) $(FT_PRINTF_DIR)
	@echo $(YELLOW) " - Made printf!" $(RESET)
	@echo $(GREEN) " - Compiling $(NAME)..." $(RESET)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_FLAGS) $(FT_PRINTF_FLAGS) -o $(NAME)
	@echo $(YELLOW) " - Compiling FINISHED" $(RESET)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c | $(OBJS_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES_FLAG) -c $< -o $@

$(OBJS_DIR):
	@$(MKDIR) $(OBJS_DIR)

clean:
	@$(RM) $(OBJS_DIR)
	@echo $(RED) " - Cleaned!" $(RESET)

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) $(LIBFT_DIR) fclean
	@$(MAKE) $(FT_PRINTF_DIR) fclean
	@echo $(RED) " - Full Cleaned!" $(RESET)

re: fclean all

test2: $(NAME)
	$(eval ARG = $(shell shuf -i 0-100 -n 2))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test3: $(NAME)
	$(eval ARG = $(shell shuf -i 0-100 -n 3))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test5: $(NAME)
	$(eval ARG = $(shell shuf -i 0-100 -n 5))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test100: $(NAME)
	$(eval ARG = $(shell shuf -i 0-100 -n 100))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test500: $(NAME)
	$(eval ARG = $(shell shuf -i 0-1000 -n 500))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l
