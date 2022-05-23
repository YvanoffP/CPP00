#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include "Contact.hpp"
# include <string>
# include <iomanip>

class PhoneBook {

private:
	Contact contact[8];
	int		count;

public:

	PhoneBook( void );
	~PhoneBook( void );
	void	printFormat( std::string );
	void	printHeader();
	void	printContact(int i);
	void	addContact();
	void	searchContact();
	void	collectInfos();

};

#endif
