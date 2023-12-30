#include <iostream>
#include <ctime>
#include <typeinfo>

class Base
{
private:
		
public:
		/* COPLIEN */
	Base(){}
	virtual ~Base(){}
};

class A : public Base
{
private:
		
public:
		/* COPLIEN */
	A(){}
	virtual ~A(){}
};

class B : public Base
{
private:
		
public:
		/* COPLIEN */
	B(){}
	virtual ~B(){}
};

class C : public Base
{
private:
		
public:
		/* COPLIEN */
	C(){}
	virtual ~C(){}
};

Base	*generate(void)
{

	int i = rand() % 3;
	if (i == 0)
	{
		std::cout << "Generating A" << std::endl;
		return new A;
	}
	else if (i == 1)
	{
		std::cout << "Generating B" << std::endl;
		return new B;
	}
	std::cout << "Generating C" << std::endl;
	return new C;
}

void	identify_from_pointer(Base *ptr)
{
	if (dynamic_cast<A*>(ptr))
		std::cout << "A identified from pointer\n";
	if (dynamic_cast<B*>(ptr))
		std::cout << "B identified from pointer\n";
	if (dynamic_cast<C*>(ptr))
		std::cout << "C identified from pointer\n";
}

void	identify_from_reference(Base &val)
{
	try
	{
		A	&v_a = dynamic_cast<A&>(val);
		std::cout << "A identified from reference\n";
		static_cast<void>(v_a);
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Failed to cast to A from reference\n";
	}
	try
	{
		B	&v_b = dynamic_cast<B&>(val);
		std::cout << "B identified from reference\n";
		static_cast<void>(v_b);
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Failed to cast to B from reference\n";
	}

	try
	{
		C	&v_c = dynamic_cast<C&>(val);
		std::cout << "C identified from reference\n";
		static_cast<void>(v_c);
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Failed to cast to C from reference\n";
	}

}

int	main()
{
	srand(time(0x000));
	{
		std::cout << "-----\n";
		Base	*ptr = generate();
		std::cout << "From pointer\n";
		identify_from_pointer(ptr);
		std::cout << "From reference\n";
		identify_from_reference(*ptr);
		std::cout << "-----\n";
	}
	std::cout << "\n";
	{
		std::cout << "-----\n";
		Base	*ptr = generate();
		std::cout << "From pointer\n";
		identify_from_pointer(ptr);
		std::cout << "From reference\n";
		identify_from_reference(*ptr);
		std::cout << "-----\n";
	}

}
