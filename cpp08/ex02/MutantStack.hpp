#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
#include <iterator>
#include <list>
#include <algorithm>

template<typename T>
class MutantStack : public std::stack<T> {

	public:

		MutantStack(void): std::stack<T>() {};
		~MutantStack( void ) {};
		MutantStack(MutantStack const & toCopy) : std::stack<T>() { *this = toCopy; }
		MutantStack& operator=(MutantStack const & m)
		{
			if (this != &m)
				this->c = m.c;
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator	begin()
		{
			return (this->c.begin());
		}

		iterator	end()
		{
			return (this->c.end());
		}

		void	put()
		{
			iterator	iterEnd = end();

			while (iterEnd != begin())
			{
				iterEnd--;
				std:: cout << *iterEnd << std::endl;
			}
		}
		void	pop()
		{
			if (this->c.empty() == 0)
				this->c.pop_back();
		}
		void sort()
		{
			std::sort(this->begin(), this->end());
		}
};

#endif
