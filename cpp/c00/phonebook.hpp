#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook
{
    public:

    Phonebook(void );
    ~Phonebook(void );
    void    addContact(void);
    void    searchContact(void);

    private:

    int _index;
    int _totalContact;
    Contact _contact[8];
    void    displayContact(int index) const;
    void    contactCheck(std::string contact) const;
};

#endif
