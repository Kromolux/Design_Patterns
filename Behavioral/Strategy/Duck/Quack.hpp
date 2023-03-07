#pragma once
# include "IQuackBehavior.hpp"
# include "colors.h"

class Quack: virtual public IQuackBehavior
{
	public:
		Quack(void);
		Quack(Quack const & rhs);
		~Quack(void);

		Quack & operator=(Quack const & rhs);
	
		void	quack(void) const;

	protected:

	private:

};
