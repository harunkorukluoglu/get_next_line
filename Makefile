NAME = minitalk
SERVER = server
CLIENT = client
PRINTF = src/printf_atoi.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS_SERVER = server.c
SRCS_CLIENT = client.c

all: $(NAME)

$(NAME): $(SERVER) $(CLIENT)

$(SERVER): $(PRINTF) $(SRCS_SERVER)
	$(CC) -no-pie $(CFLAGS) $(SRCS_SERVER) $(PRINTF) -o $(SERVER)

$(CLIENT): $(PRINTF) $(SRCS_CLIENT)
	$(CC) -no-pie $(CFLAGS) $(SRCS_CLIENT) $(PRINTF) -o $(CLIENT)

$(PRINTF):
	@make -C src/
	@make clean src/

clean:
	@rm -f $(SERVER) $(CLIENT)

fclean: clean
	@make -C src/ fclean
	@rm -f $(PRINTF)

re: fclean all

.PHONY: all clean fclean re
