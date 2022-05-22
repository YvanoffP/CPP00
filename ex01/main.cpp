#include "PhoneBook.hpp"

int main(void)
{
    bool loop;
    PhoneBook book;
    std::string command;

    loop = true;
    while (loop)
    {
        std::getline(std::cin, command);
        if (command == "ADD")
            book.addContact();
        else if (command == "SEARCH")
            book.searchContact();
        else if (command == "EXIT")
        {
            std::cout << "Exit called." << std::endl;
            loop = false;
        }
        std::cout << command << std::endl;
    }
    return 0;
}
