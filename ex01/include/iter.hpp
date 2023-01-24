#ifndef _ITER_HPP
#define _ITER_HPP

#include <iostream>

//for const object
template <typename T>
void	func(const T& rf)
{
	std::cout << rf << std::endl;
}

template <typename T>
void	func(T& rf)
{
	std::cout << rf << std::endl;
}

//for const object
template <typename T>
void	iter(const T* const startAddr, int length, void (*f)(const T& rT))
{
	if (startAddr == 0)
		return ;
	for (int idx = 0; idx < length; idx++)
	{
		f(startAddr[idx]);
	}
}

template <typename T>
void	iter(T* const startAddr, int length, void (*f)(T& rT))
{
	if (startAddr == 0)
		return ;
	for (int idx = 0; idx < length; idx++)
	{
		f(startAddr[idx]);
	}
}
#endif

