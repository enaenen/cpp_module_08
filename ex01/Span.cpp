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
	for ( unsigned int i = 0; i < ref._size; i++ )
		list.push_back( ref.list[i] );
	return *this;
}
Span::~Span( void ) {}

int &Span::operator[]( const unsigned int idx ) {
	if ( _size <= idx )
		throw std::out_of_range( "Array out of range" );
	return list[idx];
}
const int &Span::operator[]( const unsigned int idx ) const {
	if ( _size <= idx )
		throw std::out_of_range( "Array out of range" );
	return list[idx];
}

unsigned int Span::size( void ) const { return _size; }

void Span::addNumber( const unsigned int n ) {
	if ( list.size() == _n )
		throw std::out_of_range( "Array out of range" );
	list.push_back( n );
	_size++;
}

void Span::randomGenerate( const unsigned int &inputSize,
						   const unsigned int &limit ) {
	if ( _n < list.size() + inputSize )
		throw std::out_of_range( "Array out of range" );
	struct timeval t;
}

unsigned int Span::shortestSpan( void ) {}
unsigned int Span::longestSpan( void ) {}
void printElements( void ) {}