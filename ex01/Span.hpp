#pragma once

#include <iostream>
#include <exception>
#include <set>
#include <sys/time.h>
#include <algorithm>
#include <climits>

class Span {
   private:
	std::multiset<int> list;
	unsigned int _n;
	unsigned int _size;

   public:
	Span( void );
	Span( unsigned int n );
	Span( const Span &ref );
	Span &operator=( const Span &ref );
	int &operator[]( const unsigned int idx );
	const int &operator[]( const unsigned int idx ) const;
	~Span( void );

	// Any attempt to add a new element if there
	// are already N elements stored should throw an exception.
	unsigned int size( void ) const;
	void addNumber( const unsigned int n );
	unsigned int shortestSpan( void );
	unsigned int longestSpan( void );
	void randomGenerate( const unsigned int &inputSize,
						 const unsigned int &limit );

	void printElements( void );
};