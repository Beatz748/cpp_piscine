#include "Bureaucrat.hpp"
#include <climits>
#include <exception>
#include <iostream>

int	main()
{
	/*Low test*/
	{
		try
		{
			Bureaucrat	bur("Iosif", 150);
			std::cout << bur;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}
	/*Low test with dec*/
	{
		try
		{
			Bureaucrat	bur("Iosif", 150);
			std::cout << bur;
			bur.decGrade();
			std::cout << bur;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}
	/*High test*/
	{
		try
		{
			Bureaucrat	bur("Iosif", 1);
			std::cout << bur;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}
	/*High test with inc*/
	{
		try
		{
			Bureaucrat	bur("Iosif", 1);
			std::cout << bur;
			bur.incGrade();
			std::cout << bur;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}
	/*Fail init*/
	{
		try
		{
			Bureaucrat	bur("Iosif", INT_MIN);
			std::cout << bur;
			bur.incGrade();
			std::cout << bur;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}
	/*Fail init*/
	{
		try
		{
			Bureaucrat	bur("Iosif", INT_MAX);
			std::cout << bur;
			bur.incGrade();
			std::cout << bur;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << "\n";
		}
	}


}
