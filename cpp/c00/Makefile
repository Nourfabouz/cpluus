NAME = Phonebook

CFLAGS = -Wall -Werror -Wextra
CC = clang++

SRC_NAME =	main.cpp contact.cpp phonebook.cpp
HEADERS = Contact.hpp phonebook.hpp
OBJ_NAME = $(SRC_NAME:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ_NAME)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ_NAME)
fclean: clean 
	rm -rf $(NAME)
re: fclean all
