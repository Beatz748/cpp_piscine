#ifndef PONY_HPP
#define	PONY_HPP

#include <cstdint>
#include <string>
class Pony
{
	private:
		std::uint16_t	weight;
		std::uint16_t	height;
		std::string	name;
	public:
		Pony();
		Pony(std::uint16_t _weight, std::uint16_t _height, std::string _name);
		void		setWeight(std::uint16_t _weight);
		void		setHeight(std::uint16_t _height);
		void		setName(std::string _name);

		std::uint16_t	getWeight() const;
		std::uint16_t	getHeight() const;
		std::string	getName() const;
};

#endif
