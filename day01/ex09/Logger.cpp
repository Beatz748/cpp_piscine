#include "Logger.hpp"
#include <chrono>
#include <sstream>
#include <fstream>
#include <iostream>
#include <ctime>

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

	std::time_t	current_time;
	time(&current_time);

	struct tm *timeinfo;
	timeinfo = localtime(&current_time);

	int	year = timeinfo->tm_year + 1900;
	int	month = timeinfo->tm_mon + 1;
	int	day = timeinfo->tm_mday;
	int	hour = timeinfo->tm_hour;
	int	minute = timeinfo->tm_min;
	int	second = timeinfo->tm_sec;

	formatted << "[ " << year << ":" << month << ":" << day << ":" << hour << ":" << minute << ":" << second << " ]" << "\n" << str << std::endl;

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


	for (size_t i = 0; i < 2; ++i)
	{
		if (dest == actionName[i])
		{
			(this->*actions[i])(str);
			return;
		}
	}
}
