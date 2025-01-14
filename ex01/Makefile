Light_Red =  \033[38;5;196m
Light_Green = \033[38;5;82m
Light_Yellow = \033[38;5;226m
Light_Blue = \033[38;5;39m
Light_Magenta=  \033[38;5;201m
Light_Cyan = \033[38;5;51m
Orange = \033[38;5;208m
Pink = \033[38;5;198m
Turquoise = \033[38;5;44m
Light_Grey = \033[38;5;245m
Dark_Grey = \033[38;5;239m
Purple = \033[38;5;93m
Teal = \033[38;5;36m
Coral = \033[38;5;210m
Lavender = \033[38;5;171m
Chartreuse = \033[38;5;118m
Reset = \033[0m

NAME = span
CFLAGS = -g -Wall -Werror -Wextra
CC = c++

SRCS = main.cpp Span.cpp

OBJ = $(SRCS:.cpp=.o)

all: print_cpp $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

print_cpp:
	@echo "$(Light_Red)        CCCCCCCCCCCCCPPPPPPPPPPPPPPPPP   PPPPPPPPPPPPPPPPP        000000000          888888888"
	@echo "$(Light_Green)     CCC::::::::::::CP::::::::::::::::P  P::::::::::::::::P     00:::::::::00      88:::::::::88"
	@echo "$(Light_Yellow)   CC:::::::::::::::CP::::::PPPPPP:::::P P::::::PPPPPP:::::P  00:::::::::::::00  88:::::::::::::88"
	@echo "$(Light_Blue)  C:::::CCCCCCCC::::CPP:::::P     P:::::PPP:::::P     P:::::P0:::::::000:::::::08::::::88888::::::8"
	@echo "$(Light_Magenta) C:::::C       CCCCCC  P::::P     P:::::P  P::::P     P:::::P0::::::0   0::::::08:::::8     8:::::8"
	@echo "$(Light_Cyan)C:::::C                P::::P     P:::::P  P::::P     P:::::P0:::::0     0:::::08:::::8     8:::::8"
	@echo "$(Orange)C:::::C                P::::PPPPPP:::::P   P::::PPPPPP:::::P 0:::::0     0:::::0 8:::::88888:::::8"
	@echo "$(Pink)C:::::C                P:::::::::::::PP    P:::::::::::::PP  0:::::0 000 0:::::0  8:::::::::::::8"
	@echo "$(Turquoise)C:::::C                P::::PPPPPPPPP      P::::PPPPPPPPP    0:::::0 000 0:::::0 8:::::88888:::::8"
	@echo "$(Light_Grey)C:::::C                P::::P              P::::P            0:::::0     0:::::08:::::8     8:::::8"
	@echo "$(Dark_Grey)C:::::C                P::::P              P::::P            0:::::0     0:::::08:::::8     8:::::8"
	@echo "$(Purple) C:::::C       CCCCCC  P::::P              P::::P            0::::::0   0::::::08:::::8     8:::::8"
	@echo "$(Teal)  C:::::CCCCCCCC::::CPP::::::PP          PP::::::PP          0:::::::000:::::::08::::::88888::::::8"
	@echo "$(Coral)   CC:::::::::::::::CP::::::::P          P::::::::P           00:::::::::::::00  88:::::::::::::88"
	@echo "$(Lavender)     CCC::::::::::::CP::::::::P          P::::::::P             00:::::::::00      88:::::::::88"
	@echo "$(Chartreuse)        CCCCCCCCCCCCCPPPPPPPPPP          PPPPPPPPPP               000000000          888888888"
