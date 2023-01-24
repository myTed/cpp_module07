#include "iter.hpp"

int	main(void)
{
	std::string arry[3] = {"aaaaa", "bbbb", "cccc"};
	iter(arry, 3 , func);
	
	std::cout << arry[0] << std::endl;
	std::cout << arry[1] << std::endl;
	std::cout << arry[2] << std::endl;
	
	char	arry2[3] = {'a', 'b', 'c'};
	iter(arry2, sizeof(arry) / sizeof(arry[0]), func);

	int		arry3[3] = {1,2,3};
	iter(arry3, sizeof(arry3) / sizeof(arry3[0]), func);

	iter(arry, -1, func);
	
	return (0);
}
