#
# @ Author: LORD
# @ Create Time: 2022-05-12 14:23:46
# @ Modified by: vlagard@btslivh.eu
# @ Modified time: 2022-05-12 14:24:58
# @ Description: Makefile
#

SRC	=	Classes/main.cpp	\
		Classes/capitalize_decapitalize.cpp	\
		Classes/chercher_occurences.cpp	\
		Classes/my_strlen.cpp	\
		Classes/show_bts.cpp	\
		Classes/my_strcmp.cpp	\
		Classes/extension.cpp	\
		Classes/oscilloscope.cpp	\
		Classes/temperature.cpp	\
		Classes/pseudo.cpp	\
		Classes/nom_prenom.cpp

NAME	=	build/Release/bin/TP3

CC	=	g++

CFLAGS	=	-I./build/includes/ $(SRC) -W -Wall -Wextra -pedantic -o 

all:	$(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(NAME)

run:
	./build/Release/bin/$(NAME)

clean:
	rm -rf *.o

fclean:	clean
		rm -rf $(NAME)

re:	fclean all