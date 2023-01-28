#include "iter.hpp"


void	add(std::string& rString)
{
	rString[0] = 'b';
}

void	print(const std::string& rString)
{
	std::cout << rString << std::endl;
}


int	main(void)
{
	const std::string arry[3] = {"aaaaa", "bbbb", "cccc"};
	iter(arry, 3 ,	print);
	
	std::string arry1[3] = {"aaaa", "bbbb", "cccc"};
	iter(arry1, 3,	add);

	std::cout << arry1[0] << std::endl;
	std::cout << arry1[1] << std::endl;
	std::cout << arry1[2] << std::endl;
	
	char	arry2[3] = {'a', 'b', 'c'};
	iter(arry2, sizeof(arry) / sizeof(arry[0]), func);

	const int		arry3[3] = {1,2,3};
	iter(arry3, sizeof(arry3) / sizeof(arry3[0]), func);
	
	iter(arry, -1, func);
	
	return (0);
}
