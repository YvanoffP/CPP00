#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
    this->amount = 0;
    std::cout << "PhoneBook Construc" << std::endl;
    return;
}

PhoneBook::~PhoneBook( void ) {
    std::cout << "PhoneBook Destruc" << std::endl;
    return;
}

void PhoneBook::addContact() {
    std::string infos;

    std::cout << "Enter first_name : " << std::endl;
    std::cin >> infos;
    person.first_name = infos;

    std::cout << "Enter last_name : " << std::endl;
    std::cin >> infos;
    person.last_name = infos;

    std::cout << "Enter nickname : " << std::endl;
    std::cin >> infos;
    person.nickname = infos;

    std::cout << "Enter his/her darkest secret : " << std::endl;
    std::getline(std::cin, infos);
    person.secret = infos;

    book.contact[i] = person;
};
