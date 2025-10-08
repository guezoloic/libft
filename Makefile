# .SILENT:
.PHONY: all clean
.DEFAULT_GOAL := all 

SRC 	= $(wildcard *.c)
LIB 	= libft.a # <--- NAME
STATIC 	= ar -rcs
CC 		= clang
OBJ 	= $(SRC:.c=.o)
CFLAGS	= -Wall -Wextra -Werror -pedantic

$(LIB): $(OBJ) # <--- OBJ will run $.o: %.c pattern
	$(STATIC) $(LIB) $(OBJ)

%.o: %.c # <--- compile any .c file into its corresponding .o automatically
	${CC} ${CFLAGS} -c $< -o $@

all: $(LIB)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)

re: fclean $(LIB)

norm: all
	@act push --container-architecture linux/amd64
