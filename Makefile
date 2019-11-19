all:
		gcc -Wall -Wextra -Werror main.c get_next_line.c libft/libft.a -I get_next_line.h
		gcc -Wall -Wextra -Werror -o check_dif main1.c get_next_line.c libft/libft.a -I get_next_line.h
