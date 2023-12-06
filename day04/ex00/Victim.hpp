#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>

class	Victim
{
	private:
		std::string	_name;
	public:
			/* CANONICAL */
		Victim(const std::string &name);
		Victim(const Victim &rhs);
		Victim &operator=(const Victim &rhs);
		~Victim();
			/* Getters */
		const std::string	&getName() const;
		const std::string	&getTitle() const;

		void			getPolymorphed()	const;
};

std::ostream	&operator<<(std::ostream &out, const Victim &vic);

#endif
