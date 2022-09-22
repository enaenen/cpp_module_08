#include "MutantStack.hpp"

int main( void ) {
	std::cout << "========== Mandatory MutantStack Test =========="
			  << std::endl;
	MutantStack<int> stack;

	stack.push( 10 );
	stack.push( 150 );
	std::cout << "stack.top(): " << stack.top() << std::endl;
	stack.pop();
	std::cout << "stack.size(): " << stack.size() << std::endl;
	stack.push( 1 );
	stack.push( 2 );
	stack.push( 3 );
	MutantStack<int>::iterator it = stack.begin();
	MutantStack<int>::iterator ite = stack.end();
	++it;
	--it;
	for ( ; it != ite; ++it ) std::cout << *it << std::endl;
}