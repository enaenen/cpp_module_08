#include "MutantStack.hpp"

int main( void ) {
	{
		std::cout << "========== Mandatory MutantStack Test =========="
				  << std::endl;
		MutantStack<int> mstack;
		mstack.push( 5 );
		mstack.push( 17 );
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push( 3 );
		mstack.push( 5 );
		mstack.push( 737 );
		//[...]
		mstack.push( 0 );
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while ( it != ite ) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s( mstack );
	}
	{
		{
			std::cout << "========= String test ==========" << std::endl;
			MutantStack<std::string> mstack;
			mstack.push( "abcd" );
			mstack.push( "efgh" );
			std::cout << "mstack.top(): " << mstack.top() << std::endl;
			mstack.pop();
			std::cout << "mstack.size(): " << mstack.size() << std::endl;
			mstack.push( "xxx" );
			mstack.push( "yyyy" );
			mstack.push( "zzzz" );
			mstack.push( "this is mutant stack" );
			MutantStack<std::string>::iterator it = mstack.begin();
			MutantStack<std::string>::iterator ite = mstack.end();
			++it;
			--it;
			while ( it != ite ) {
				std::cout << *it << std::endl;
				++it;
			}
			std::stack<std::string> s( mstack );
			std::cout << std::endl;
		}
	}
	return 0;
}