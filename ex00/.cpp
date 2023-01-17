#include ".hpp"

::(void)
{
	std::cout << "Default constructor called" << std::endl;
}

::(const  & other)
{
	std::cout << "Default copy constructor called" << std::endl;
}

::~(void)
{
	std::cout << "Default destructor called" << std::endl;
}

 & ::operator=(const  & other)
{
	//copy operations here;
	std::cout << "Assignment operator called" << std::endl;
	return (*this);
}
