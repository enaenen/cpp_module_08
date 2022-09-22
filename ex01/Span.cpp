#include "Span.hpp"

Span::Span( void ) : _n( 0 ), _size( 0 ) {}

Span::Span( unsigned int n ) : _n( n ), _size( 0 ) {}

Span::Span( const Span &ref ) : _size( ref._size ) { *this = ref; }

Span &Span::operator=( const Span &ref ) {
	if ( this == &ref )
		return *this;
	list.clear();
	_n = ref._n;
	_size = ref._size;
	std::multiset<int>::iterator it = ref.list.begin();
	std::multiset<int>::iterator ite = ref.list.end();
	for ( ; it != ite; ++it ) list.insert( *it );
	return *this;
}
Span::~Span( void ) {}

void Span::addNumber( const unsigned int n ) {
	if ( list.size() == _n )
		throw std::out_of_range( "Array out of range" );
	list.insert( n );
	_size++;
}

void Span::randomGenerate( const unsigned int &inputSize,
						   const unsigned int &limit ) {
	if ( _n < list.size() + inputSize )
		throw std::out_of_range( "Array out of range" );

	struct timeval t;
	gettimeofday( &t, NULL );
	srand( t.tv_usec );
	try {
		for ( unsigned int i = 0; i < inputSize; i++ )
			addNumber( rand() % limit );
	} catch ( std::exception e ) {
		std::cout << e.what() << std::endl;
	}
}

unsigned int Span::shortestSpan( void ) {
	long int min = UINT_MAX;
	std::multiset<int>::iterator it = ++list.begin();
	std::multiset<int>::iterator ite = list.end();
	for ( ; it != ite; ++it ) {
		long int a = static_cast<long int>( *it );
		long int b = static_cast<long int>( *prev( it ) );
		if ( a - b < min )
			min = a - b;
	}
	return min;
}

unsigned int Span::longestSpan( void ) {
	int start = *list.begin();
	int end = *list.rbegin();
	return ( end - start );
}

void Span::printElements( void ) {
	std::multiset<int>::iterator it = list.begin();
	std::multiset<int>::iterator ite = list.end();
	for ( ; it != ite; ++it ) std::cout << *it << " ";
	std::cout << std::endl;
}