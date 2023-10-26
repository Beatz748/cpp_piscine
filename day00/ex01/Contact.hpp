#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
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
	
	public:
		Contact();
		Contact(
			std::string firstName,
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
		);
		std::string	getfirstName() const;
		void		setFirstName(std::string _firstName);
		std::string	getlastName() const;
		void		setlastName(std::string _lastName);
		std::string	getnickname() const;
		void		setnickname(std::string _nickname);
		std::string	getlogin() const;
		void		setlogin(std::string _login);
		std::string	getpostalAddress() const;
		void		setpostalAddress(std::string _postalAddress);
		std::string	getemailAddress() const;
		void		setemailAdress(std::string _emailAddress);
		std::string	getphoneNumber() const;
		void		setphoneNumber(std::string _phoneNumber);
		std::string	getbirthdayDate() const;
		void		setbirthdayDate(std::string _birthdayDate);
		std::string	getfavouriteMeal() const;
		void		setfavouriteMeal(std::string _favouriteMeal);
		std::string	getunderwearColor() const;
		void		setundrewearColor(std::string _underwearColor);
		std::string	getdarkestSecret() const;
		void		setdarkestSecret(std::string _darkestSecret);

};

#endif
