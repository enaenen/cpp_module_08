#include "Span.hpp"

int main( void ) {
	{
		std::cout << "========= Subject test =========" << std::endl;
		Span sp = Span( 5 );

		sp.addNumber( 6 );
		sp.addNumber( 3 );
		sp.addNumber( 17 );
		sp.addNumber( 9 );
		sp.addNumber( 11 );

		sp.printElements();
		std::cout << std::endl;

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "========= Random test =========" << std::endl;

		Span sp = Span( 20 );
		try {
			sp.randomGenerate( 20, 30 );
			sp.printElements();

			std::cout << std::endl;

			std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "longest span: " << sp.longestSpan() << std::endl;
			std::cout << std::endl;
		} catch ( std::exception &e ) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "========= Span(40) case(addRandomNumbers) ========="
				  << std::endl;
		Span sp = Span( 40 );

		sp.randomGenerate( 20, 1000 );
		sp.randomGenerate( 20, 100 );

		sp.printElements();
		std::cout << std::endl;

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		std::cout << "========= Span(10000) case =========" << std::endl;
		struct timeval t;
		Span sp = Span( 10000 );

		for ( int i = 0; i < 10000; i++ ) {
			gettimeofday( &t, NULL );
			srand( t.tv_usec );
			sp.addNumber( rand() );
		}

		// sp.printElements();
		std::cout << std::endl;

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
}