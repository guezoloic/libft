# .SILENT:
.PHONY: all clean
.DEFAULT_GOAL := all 

SRC 	= $(wildcard *.c)
LIB 	= libft.a
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
	rm -f $(OBJ) $(LIB) 
