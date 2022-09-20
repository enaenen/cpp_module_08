#include "easyfind.hpp"

int main( void ) {
	{
		std::cout << "======== vector ==========" << std::endl;
		std::vector<int> test;

		for ( int i = 0; i < 10; i++ ) test.push_back( i );
		try {
			std::cout << "easyfind - finding 0 == " << *easyfind( test, 0 )
					  << std::endl;
			std::cout << "easyfind - finding 5 == " << *easyfind( test, 5 )
					  << std::endl;
			std::cout << "easyfind - finding  9 == " << *easyfind( test, 9 )
					  << std::endl;
			std::cout << "easyfind - finding  10 : " << *easyfind( test, 10 )
					  << std::endl;
		} catch ( std::exception &e ) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "======== list ==========" << std::endl;
		std::list<int> test;

		for ( int i = 0; i < 10; i++ ) test.push_back( i );
		try {
			std::cout << "easyfind - finding 0 == " << *easyfind( test, 0 )
					  << std::endl;
			std::cout << "easyfind - finding 5 == " << *easyfind( test, 5 )
					  << std::endl;
			std::cout << "easyfind - finding  9 == " << *easyfind( test, 9 )
					  << std::endl;
			std::cout << "easyfind - finding  10 : " << *easyfind( test, 10 )
					  << std::endl;
		} catch ( std::exception &e ) {
			std::cerr << e.what() << std::endl;
		}
	}
}