#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include "Victim.hpp"

class	Sorcerer
{
	private:
		std::string	_name;
		std::string	_title;
		Sorcerer();
	public:
			/* CANONICAL */
		Sorcerer(const std::string &name, const std::string &title);
		Sorcerer(const Sorcerer &rhs);
		~Sorcerer();
		Sorcerer &operator=(const Sorcerer &rhs);
			/* getters */
		const std::string &getName() const;
		const std::string &getTitle() const;

		void	polymorph(const Victim &vic) const;
};

std::ostream	&operator<<(std::ostream &out, const Sorcerer &sor);

#endif
