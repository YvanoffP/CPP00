#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"
# include <string>

class PhoneBook {
public:
    PhoneBook( void );
    Contact contact[8];
    void    addContact();
    void    collectInfos();
    void    searchContact();
    void    displayContact(int index);
    int     count;
    ~PhoneBook( void );
};

#endif
