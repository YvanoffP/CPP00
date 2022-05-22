#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook( void ) {
    this->count = 0;
    std::cout << "PhoneBook Construc" << std::endl;
    return;
}

PhoneBook::~PhoneBook( void ) {
    std::cout << "PhoneBook Destruc" << std::endl;
    return;
}

void PhoneBook::addContact() {
    if (this->count == 8)
        this->count = 0;
    this->collectInfos();
    this->count++;
}

void PhoneBook::collectInfos() {
    std::string infos;
    std::cout << "Enter first_name : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].first_name = infos;

    std::cout << "Enter last_name : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].last_name = infos;

    std::cout << "Enter nickname : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].nick_name = infos;

    std::cin.ignore();
    std::cout << "Enter his/her darkest secret : " << std::endl;
    std::getline(std::cin, infos);
    this->contact[this->count].darkest_secret = infos;
}

void PhoneBook::searchContact() {
    int index;

    std::cout << "Enter an index" << std::endl;
    std::cin >> index;

}
