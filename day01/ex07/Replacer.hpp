#ifndef REPLACER_HPP
#define REPLACER_HPP

#include <fstream>
#include <string>
#include <iostream>

class	Replacer
{
	private:
		std::string	_inputFilename;
		std::string	_from;
		std::string	_to;
	public:
		Replacer(std::string inputFilename, std::string from, std::string to);
		void	setFrom(std::string from);
		void	setTo(std::string to);
		void	setFilename(std::string inputFilename);
		std::string	getFrom() const;
		std::string	getTo() const;
		std::string	getFilename() const;
		void		replace() const;
};

#endif
