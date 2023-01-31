#ifndef _ARRAY_HPP
#define _ARRAY_HPP

#include <iostream>
#include <exception>
#include <cstdlib>

template<typename T>
class Array
{
private:
	T*		_ptr;
	int		_size;
public:
	Array();
	explicit Array(unsigned int n);
	~Array();
	Array(const Array& rArry);
	Array& operator=(const Array& rArry);
	T& operator[](int idx);
	const T& operator[](int idx) const;
	int	size();
};


template<typename T>
Array<T>::Array()
: _ptr(0), _size(0)
{
	std::cout << "Array Defalut Consturtor Called\n";
}

template<typename T>
Array<T>::Array(unsigned int n)
: _ptr(0), _size(0)
{
	std::cout << "Array NonDefalut Constructor Called\n";
	if (n == 0)
		return ;
	try
	{
		_ptr = new T[n]();
	}
	catch (std::bad_alloc& e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
	_size += n;
}

template<typename T>
Array<T>::~Array() 
{
	std::cout << "Array Destructor Called\n";
	delete[] _ptr;
}


template<typename T>
Array<T>::Array(const Array<T>& rArry)
: _ptr(0), _size(0)
{
	if (rArry._size == 0)
		return ;
	try
	{
		_ptr = new T[rArry._size]();
	}
	catch (std::bad_alloc& e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
	for (int idx = 0; idx < rArry._size; idx++)
		_ptr[idx] = rArry._ptr[idx];
	_size = rArry._size;
}


template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& rArry)
{
	if (this == &rArry)
		return (*this);
	delete[] _ptr;
	if (rArry._size == 0)
	{
		_ptr = 0;
		_size = 0;
		return (*this);
	}
	try
	{
		_ptr = new T[rArry._size]();
	}
	catch (std::bad_alloc& e)
	{
		std::cout << e.what() << std::endl;
		exit(1);
	}
	for (int idx = 0; idx < rArry._size; idx++)
		_ptr[idx] = rArry._ptr[idx];
	_size = rArry._size;
	return (*this);
}

template<typename T>
T& Array<T>::operator[](int idx)
{
	if ((idx >= _size) || (idx < 0))
	{
		std::cout << "invalid Idx : " << idx << std::endl;
		throw std::exception();
	}
	return (_ptr[idx]);
}

template<typename T>
const T& Array<T>::operator[](int idx) const
{
	if ((idx >= _size) || (idx < 0))
	{
		std::cout << "invalid Idx : " << idx << std::endl;
		throw std::exception();
	}
	return (_ptr[idx]);
}
	
template<typename T>
int	Array<T>::size()
{
	return (_size);
}

#endif


