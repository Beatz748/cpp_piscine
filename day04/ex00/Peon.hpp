#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"
#include <string>

class	Peon : public Victim
{
	public:
		/* Canonical */
		Peon();
		Peon(const std::string &name);
		Peon(const Peon &rhs);
		Peon &operator=(const Peon &rhs);
		virtual ~Peon();

		virtual void	getPolymorphed() const;
};

#endif
