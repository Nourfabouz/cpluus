#include <iostream>
#include "phonebook.hpp"
#include <iomanip>

Phonebook::Phonebook(void)
{
    Phonebook::_index = 0;
    Phonebook::_totalContact = 0;
    std::cout << "Phonebook constructor called" << std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Phonebook destructor called" << std::endl;
}

void Phonebook::contactCheck(std::string str) const {

    /* int i = 0;

       if(output.size() > 10)
       {
       while (i < 9)
       {
       if (output[i] == '\t')
       std::cout << " ";
       else
       std::cout<< output[i];
       i++;
       }
       std::cout<< ".";
       }
       else
       {
       while (i < (int)output.size())
       {
       if (output[i] == '\t')
       output[i] = ' ';
       i++;
       }
       std::cout << std::setw(10) << output;
       }*/
    if (str.length() > 10)
    {
        str.erase(str.begin() + 9, str.end());
        str.append(".");
    }
    std::cout << std::setw(10) << str;
}

void Phonebook::displayContact(int index) const{
    std::cout<<"|" << std::setw(10);
    std::cout<< index + 1 ;
    std::cout<<"|";
    Phonebook::contactCheck(_contact[index].getFirstName());
    std::cout<<"|";
    Phonebook::contactCheck(_contact[index].getLastName());
    std::cout<<"|";
    Phonebook::contactCheck(_contact[index].getNickName());
    std::cout<<"|" <<std::endl;
}

void    Phonebook::addContact(void)
{
    std::string temp;

    std::cout << "First Name : " ;
    std::getline(std::cin, temp);
    _contact[_index].setFirstName(temp);
    std::cout << "Last Name : ";
    std::getline(std::cin, temp);
    _contact[_index].setLastName(temp);
    std::cout << "Nick Name : ";
    std::getline(std::cin, temp);
    _contact[_index].setNickName(temp);
    std::cout<< "Phone Number : " ;
    std::getline(std::cin, temp);
    _contact[_index].setPhoneNumber(temp);
    std::cout<< "Dark Secret : " ;
    std::getline(std::cin, temp);
    _contact[_index].setDarkestSecret(temp);
    std::cout<< "*** Contact succesfully added ***" << std::endl;
    _index = ((_index + 1) % 8);
    if (_totalContact < 8)
        _totalContact++;

}
void    Phonebook::searchContact(void)
{
    int i = 0;
    int index;
    std::string temp;

    if (_totalContact == 0)
        std::cout << "EMPTY PHONEBOOK" << std::endl;
    else
    {
        std::cout<<"|" << std::setw(10)<< "Index" <<"|" << std::setw(10)<< "First Name" <<"|" << std::setw(10)<< "Last Name" <<"|" << std::setw(10)<< "nick Name"<< "|" << std::endl;
        while (i < Phonebook::_totalContact)
        {
            Phonebook::displayContact(i);
            i++;
        }
        std::cout << "Enter an index or type \"return\" to return to main ";
        std::getline(std::cin, temp);
        if (temp == "return" || std::cin.eof())
            return;
        index = std::atoi(temp.c_str());
        while (index > Phonebook::_totalContact || index == 0 || temp.length() != 1)
        {
            std::cout << "Invalid index type \"retun\" to return to main menu  " << std::endl;
            std::cout<<"Enter an index : ";
            std::getline(std::cin, temp);
            if (temp == "return" || std::cin.eof())
                return;
            index = std::atoi(temp.c_str());
        }
        if (index <= Phonebook::_totalContact)
        {
            //std::cout << std::endl;
            //std::cout<<"--------------CONTACT DEATAILS-----------------"<<std::endl;
            std::cout << std::setw(10) << "Index" << "| " << index << std::endl;
            std::cout << std::setw(10) << "First Name" << "| " << Phonebook::_contact[index - 1].getFirstName() << std::endl;
            std::cout << std::setw(10) << "Last Name" << "| " << Phonebook::_contact[index - 1].getLastName() << std::endl;
            std::cout << std::setw(10) << "Nick Name" << "| " << Phonebook::_contact[index - 1].getNickName() << std::endl;
            std::cout << std::setw(10) << "Phone Number" << "| " << Phonebook::_contact[index - 1].getPhoneNumber() << std::endl;
            std::cout << std::setw(10) << "Dark Secret" << "| " << Phonebook::_contact[index - 1].getDarkestSecret() << std::endl;
        }
    }
}

