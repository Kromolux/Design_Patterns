#include "../../inc/ADuck/ADuck.hpp"
#include <cstddef>

ADuck::ADuck(void)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ADuck] default constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->flyBehavior = NULL;
	this->quackBehavior = NULL;
}

ADuck::ADuck(ADuck const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ADuck] copy constructor called.\n" << COLOR_DEFAULT;
	#endif
	this->flyBehavior = rhs.flyBehavior;
	this->quackBehavior = rhs.quackBehavior;
}

ADuck::~ADuck(void)
{
	#if DEBUG
		std::cout << COLOR_RED << this << " [ADuck] destructor called.\n" << COLOR_DEFAULT;
	#endif
}

ADuck & ADuck::operator=(ADuck const & rhs)
{
	#if DEBUG
		std::cout << COLOR_GREEN << this << " [ADuck] copy assignment operator called.\n" << COLOR_DEFAULT;
	#endif
	if (this != &rhs)
	{
		//this->~ADuck();
		//new (this) ADuck(rhs);
	}
	return (*this);
}

void	ADuck::performFly(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ADuck] performFly called.\n" << COLOR_DEFAULT;
	#endif
	this->flyBehavior->fly();
}

void	ADuck::performQuack(void)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ADuck] performQuack called.\n" << COLOR_DEFAULT;
	#endif
	this->quackBehavior->quack();
}

void	ADuck::setFlyBehavior(IFlyBehavior * flyBehavior)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ADuck] setFlyBehavior called.\n" << COLOR_DEFAULT;
	#endif
	delete this->flyBehavior;
	this->flyBehavior = flyBehavior;
}

void	ADuck::setQuackBehavior(IQuackBehavior * quackBehavior)
{
	#if DEBUG
		std::cout << COLOR_YELLOW << this << " [ADuck] setQuackBehavior called.\n" << COLOR_DEFAULT;
	#endif
	delete this->quackBehavior;
	this->quackBehavior = quackBehavior;
}
