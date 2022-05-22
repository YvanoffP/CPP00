#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"
# include <string>

class PhoneBook {
public:
    PhoneBook( void );
    Contact contact[8];
    void addContact();
    ~PhoneBook( void );
};

#endif
