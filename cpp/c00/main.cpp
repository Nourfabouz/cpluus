#include <iostream>
#include <iomanip>
#include "Phonebook.hpp"

void displayMenu()
{
    std::cout << "+----------------PHONEBOOK----------------+" << std::endl;
    std::cout << "|       type \"ADD\" to add a contact     |" << std::endl;
    std::cout << "|         type \"SEARCH\" to search       |" << std::endl;
    std::cout << "|           type \"EXIT\" to exit         |" << std::endl;
    std::cout << "+-----------------------------------------+" << std::endl;
}

int main()
{
    Phonebook phoneBook;
    std::string command;

    displayMenu();
    while(std::getline(std::cin, command))
    {
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.searchContact();
        else if (command == "EXIT")
            return (0);
        else
            std::cout<< "There's only three commands : ADD,SEARCH and EXIT" <<std::endl;
        displayMenu();
    }
    return (0);
}
