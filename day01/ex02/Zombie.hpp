#ifndef	ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie
{
	public:
		enum Type
		{
			WALKER,
			RUNNER,
			CRAWLER
		};

		void		announce() const;

		Type		getType() const;
		std::string	typeToString(Type type) const;
		std::string	getName() const;

		void		setType(Type type);
		void		setName(std::string name);
		Zombie();
		Zombie(Type type, std::string name);
	private:
		Type		_type;
		std::string	_name;
};

#endif
