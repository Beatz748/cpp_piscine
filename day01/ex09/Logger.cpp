#include "Logger.hpp"
#include <chrono>
#include <sstream>
#include <fstream>
#include <iostream>
#include <sys/_types/_time_t.h>

Logger::Logger(std::string const & filename) : _outputFilename(filename), _output(filename)
{
}

Logger::~Logger()
{
	if (_output.is_open())
		_output.close();
}

void			Logger::logToConsole(std::string const & str)
{
	std::cout << makeLogEntry(str) << std::endl;
}

void        Logger::logToFile(std::string const &msg)
{
	_output << msg << std::endl;
}

const std::string	Logger::makeLogEntry(std::string const & str) const
{
	std::stringstream	formatted;
	std::chrono::system_clock::time_point t = std::chrono::system_clock::now();
	std::time_t	current_time_t	=	std::chrono::system_clock::to_time_t(t);

	formatted << "[ " << std::ctime(&current_time_t) << " ]" << std::endl;
	formatted << str << std::endl;

	return (formatted.str());
}

void			Logger::log(std::string const &dest, std::string const &str)
{
	void (Logger::*actions[2])(std::string const &) =
	{
		&Logger::logToConsole,
		&Logger::logToFile
	};

	std::string const actionName[2] = 
	{
		"logToConsole",
		"logToFile"
	};

	std::string const formattedStr = makeLogEntry(str);

	for (size_t i = 0; i < 2; ++i)
	{
		if (dest == actionName[i])
		{
			(this->*actions[i])(formattedStr);
		}
	}
}
