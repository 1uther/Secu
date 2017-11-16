NAME	= Secu

ALEX	= alex_test/

ALEM	= alem_test/

SRC		= src/

BIN		= bin/

INC		= includes/

CC		= g++

RM		= rm -f

CPP		= $(ALEX)main.cpp	\
		  $(SRC)MPacket.cpp	\
		  $(SRC)MPcap.cpp

OBJ		= $(CPP:.cpp=.o)

CPPFLAGS	= -W -Wall -Wextra

CPPFLAGS	+= -I$(INC)

all:		$(BIN)$(NAME)


$(BIN)$(NAME):	$(OBJ)
		$(CC) -o $(BIN)$(NAME) $(OBJ) $(LIB)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(BIN)$(NAME)

re:		fclean all

.PHONY:		all clean fclean re
