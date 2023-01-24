#include "Array.hpp"
#include <iostream>

class A
{
private:
	int	_tmp;
public:
	A();
	int get() const
	{
		return (_tmp);
	}
};

std::ostream&  operator<<(std::ostream &os, const A& rA);

A::A()
: _tmp(10)
{
	std::cout << "A Deafult Constructor Called\n";	
}

std::ostream& operator<<(std::ostream& os, const A& rA)
{
	os << rA.get() << std::endl;
	return (os);
}

int	main(void)
{
	Array<int> arry(4);
	Array<int> arry2(4);
	for (int idx = 0; idx < arry2.size(); idx++)
		std::cout << arry2[idx] << std::endl;
	
	Array<A> arry1(4);
	for (int idx = 0; idx < arry1.size(); idx++)
		std::cout << arry1[0] << std::endl;
	
	Array<int> arry3;

	Array<std::string> arry4(3);
	arry4[0] = "aaa";
	arry4[1] = "bbb";
	arry4[2] = "ccc";

	Array<std::string>*pArry = new Array<std::string>(4);
	(*pArry)[0] = "kyolee";
	(*pArry)[1] = "kyolee2";

	for (int idx = 0; idx < (*pArry).size(); idx++)
		std::cout << (*pArry)[idx] << std::endl;
	delete pArry;


	for (int idx = 0; idx < arry4.size(); idx++)
		std::cout << arry4[idx] << std::endl;

	arry[0] = 1;
	arry[1] = 2;
	arry[2] = 3;

	arry = arry3;

	try
	{
		for (int idx = 0; idx < arry.size(); idx++)
			std::cout << arry[idx] << std::endl;	
	
		arry[-1] = 1;
	}
	catch (std::exception& e)
	{
		std::cout << "out of bound!\n" << std::endl;
	}
	return (0);
}
