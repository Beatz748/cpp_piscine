#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <iostream>
#include <string>
#include <fstream>

class	Logger
{
	private:
		const std::string	_outputFilename;
		std::ofstream		_output;

		void			logToConsole(std::string const & str);
		void			logToFile(std::string const & str);
		const std::string	makeLogEntry(std::string const & str) const;
	public:
		Logger(const std::string &filename);
		~Logger();
		void			log(std::string const &dest, std::string const &str);
};

#endif
