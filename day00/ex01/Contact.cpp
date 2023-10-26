#include "Contact.hpp"

Contact::Contact()
{
	setFirstName("");
	setlastName("");
	setnickname("");
	setlogin("");
	setpostalAddress("");
	setemailAdress("");
	setphoneNumber("");
	setbirthdayDate("");
	setfavouriteMeal("");
	setundrewearColor("");
	setdarkestSecret("");
}

Contact::Contact(std::string firstName,
		std::string lastName,
		std::string nickname,
		std::string login,
		std::string postalAddress,
		std::string emailAddress,
		std::string phoneNumber,
		std::string birthdayDate,
		std::string favouriteMeal,
		std::string underwearColor,
		std::string darkestSecret
) : firstName(firstName) , lastName(lastName), login(login), nickname(nickname), postalAddress(postalAddress), emailAddress(emailAddress), phoneNumber(phoneNumber), birthdayDate(birthdayDate), favouriteMeal(favouriteMeal), underwearColor(underwearColor), darkestSecret(darkestSecret)
{	
}

std::string	Contact::getfirstName() const
{
	return firstName;
}

void		Contact::setFirstName(std::string _firstName)
{
	firstName = _firstName;
}

std::string	Contact::getlastName() const
{
	return lastName;
}

void		Contact::setlastName(std::string _lastName)
{
	lastName = _lastName;
}

std::string	Contact::getnickname() const
{
	return nickname;
}

void		Contact::setnickname(std::string _nickname)
{
	nickname = _nickname;
}

std::string	Contact::getlogin() const
{
	return login;
}

void		Contact::setlogin(std::string _login)
{
	login = _login;
}

std::string	Contact::getpostalAddress() const
{
	return postalAddress;
}

void		Contact::setpostalAddress(std::string _postalAddress)
{
	postalAddress = _postalAddress;
}

std::string	Contact::getemailAddress() const
{
	return emailAddress;
}

void		Contact::setemailAdress(std::string _emailAddress)
{
	emailAddress = _emailAddress;
}

std::string	Contact::getphoneNumber() const
{
	return phoneNumber;
}

void		Contact::setphoneNumber(std::string _phoneNumber)
{
	phoneNumber = _phoneNumber;
}

std::string	Contact::getbirthdayDate() const
{
	return birthdayDate;
}

void		Contact::setbirthdayDate(std::string _birthdayDate)
{
	birthdayDate = _birthdayDate;
}

std::string	Contact::getfavouriteMeal() const
{
	return favouriteMeal;
}

void		Contact::setfavouriteMeal(std::string _favouriteMeal)
{
	favouriteMeal = _favouriteMeal;
}

std::string	Contact::getunderwearColor()  const
{
	return underwearColor;
}

void		Contact::setundrewearColor(std::string _underwearColor)
{
	underwearColor = _underwearColor;
}

std::string	Contact::getdarkestSecret() const
{
	return darkestSecret;
}

void		Contact::setdarkestSecret(std::string _darkestSecret)
{
	darkestSecret = _darkestSecret;
}
