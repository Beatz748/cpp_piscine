#include "Contact.hpp"
#include <iomanip>
#include <ios>
#include <iostream>

Contact getContact()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	emailAddress;
	std::string	phoneNumber;
	std::string	birthdayDate;
	std::string	favouriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;

	std::cout << "Enter first name" << std::endl;
	std::cin >> firstName;
	std::cout << "Enter last name" << std::endl;
	std::cin >> lastName;
	std::cout << "Enter nickname" << std::endl;
	std::cin >> nickname;
	std::cout << "Enter login" << std::endl;
	std::cin >> login;
	std::cout << "Enter postalAddress" << std::endl;
	std::cin >> postalAddress;
	std::cout << "Enter emailAddress" << std::endl;
	std::cin >> emailAddress;
	std::cout << "Enter phoneNumber" << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Enter birthdayDate" << std::endl;
	std::cin >> birthdayDate;
	std::cout << "Enter favouriteMeal" << std::endl;
	std::cin >> favouriteMeal;
	std::cout << "Enter underwearColor" << std::endl;
	std::cin >> underwearColor;
	std::cout << "Enter darkestSecret" << std::endl;

	return Contact(firstName, lastName, nickname, login, postalAddress, emailAddress, phoneNumber, birthdayDate, favouriteMeal, underwearColor, darkestSecret);
}

void	print_search(Contact *contacts, size_t size)
{
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "id";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "fn";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "ln";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "nn";
	std::cout << "|";
	std::cout << std::endl;
	for (size_t i = 0; i < size; ++i)
	{
		std::string firstname = contacts[i].getfirstName();
		std::string lastname = contacts[i].getlastName();
		std::string nickname = contacts[i].getnickname();

		if (firstname.length() > 10)
			firstname = firstname.substr(0,9) + '.';
		if (lastname.length() > 10)
			lastname = lastname.substr(0,9) + '.';
		if (nickname.length() > 10)
			nickname = nickname.substr(0,9) + '.';

		std::cout << "|";
		std::cout << std::right << std::setw(10) << i;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << firstname;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << lastname;
		std::cout << "|";
		std::cout << std::right << std::setw(10) << nickname;
		std::cout << "|";
		std::cout << std::endl;
	}
}

int	main()
{
	std::string	cmd;
	Contact		*contacts = new Contact[8];
	uint16_t	i = 0;
/* test
    contacts[0] = Contact ("John", "Doe", "johnbestgamerpro", "johndbestgamer", "123 Main St", "johnd@example.com", "1234567890", "01/01/2000", "Pizza", "Red", "Can't tell you");
    contacts[1] = Contact ("Jane", "Doe", "Janey", "janed", "456 Oak Ave", "janed@example.com", "0987654321", "12/31/1998", "Pasta", "Blue", "Has a pet tiger");
    contacts[2] = Contact ("Bob", "Smith", "Bobby", "bobsmith", "789 Elm St", "bobsmith@example.com", "5432167890", "05/05/1995", "Burgers", "Green", "Is afraid of heights");
    contacts[3] = Contact ("Alice", "Johnson", "Ally", "alicej", "101 Maple Ave", "alicej@example.com", "9876543210", "09/15/1992", "Sushi", "Purple", "Loves to dance");
    contacts[4] = Contact ("David", "Williams", "Davy", "davidw", "111 Pine St", "davidw@example.com", "0123456789", "11/20/1988", "Steak", "Yellow", "Writes poetry");
    i = 5;
*/
	std::cin >> cmd;
	while (std::cin.good() && cmd != "EXIT")
	{
		if (cmd == "ADD" && i < 8)
		{
			contacts[i] = getContact();
			++i;
		}
		else if (cmd == "SEARCH")
		{
			print_search(contacts, i);
		}
		std::cin >> cmd;
	}
	delete[] contacts;
	return 0;
}

