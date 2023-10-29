#include "Replacer.hpp"
#include <fstream>
#include <iterator>
#include <stdexcept>

Replacer::Replacer(std::string inputFilename, std::string from, std::string to) : _inputFilename(inputFilename), _from(from), _to(to)
{

}

void	Replacer::setFrom(std::string from)
{
	_from = from;
}
void	Replacer::setTo(std::string to)
{
	_to = to;
}

void	Replacer::setFilename(std::string inputFilename)
{
	_inputFilename = inputFilename;
}

std::string	Replacer::getFrom() const
{
	return _from;
}

std::string	Replacer::getTo() const
{
	return _to;
}

std::string	Replacer::getFilename() const
{
	return _inputFilename;
}

void		Replacer::replace() const
{
	std::ifstream	inputFile(_inputFilename);
	std::string	line;

	if (inputFile.bad())
	{
		std::cout << "Bad file!" << std::endl;
		return;
	}
	std::ofstream	outputFile(_inputFilename + ".replace");
	if (outputFile.bad())
	{
		std::cout << "Can't create file!" << std::endl;
		return;
	}
	while (std::getline(inputFile, line))
	{
		std::size_t	pos = 0;
		while ((pos = line.find(_from, pos)) != std::string::npos)
		{
			line.replace(pos, _from.length(), _to);
			pos += _to.length();
		}
		outputFile << line << std::endl;
	}
	inputFile.close();
	outputFile.close();
}
