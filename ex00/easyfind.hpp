#pragma once

#include <iostream>
#include <exception>
#include <vector>
#include <list>
#include <set>

template <typename T>
typename T::iterator easyfind( T& sources, const int target ) {
	typename T::iterator ret =
		std::find( sources.begin(), sources.end(), target );
	if ( ret == sources.end() )
		throw std::runtime_error( "target not found in element" );
	return ret;
};

template <typename T>
const typename T::iterator easyfind( const T& sources, const int target ) {
	typename T::iterator ret =
		std::find( sources.begin(), sources.end(), target );
	if ( ret == sources.end() )
		throw std::runtime_error( "target not found in element" );
	return ret;
};
