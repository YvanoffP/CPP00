# include "PhoneBook.hpp"

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
    std::string infos;

	if (this->count == 8 || this->count == -1)
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

    std::cout << "Enter nick_name : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].nick_name = infos;

    std::cin.ignore();
    std::cout << "Enter his/her darkest secret : " << std::endl;
    std::getline(std::cin, infos);
    this->contact[this->count].darkest_secret = infos;
}

void PhoneBook::searchContact() {
    int	index = -1;

	if (this->count == -1)
		std::cout << "Add a contact before searching" << std::endl;
	else
	{
		printHeader();
		std::cout << "Please, enter an index. 0 to quit: ";
		while (!(std::cin >> index) || (index < 0 || index > this->count))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid Index\n>";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			printContact(index);
	}
}

void PhoneBook::printFormat ( std::string str) {
	if (str.size() > 10)
	{
		str = str.insert(9, ".");
		str = str.substr(0, 10);
	}
	else
		std::cout << std::setw(10);
	std::cout << str;
}

void	PhoneBook::printContact ( int i ) {
	std::cout << "|         " << i << "|";
	printFormat(this->contact[i - 1].first_name);
	std::cout << "|";
	printFormat(this->contact[i - 1].last_name);
	std::cout << "|";
	printFormat(this->contact[i - 1].nick_name);
	std::cout << "|" << std::endl;
}

void	PhoneBook::printHeader ( void ) {
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First name| Nast name|  nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->count; i++) {
		std::cout << "|         " << i + 1 << "|";
		printFormat(this->contact[i].first_name);
		std::cout << "|";
		printFormat(this->contact[i].last_name);
		std::cout << "|";
		printFormat(this->contact[i].nick_name);
		std::cout << "|" << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}
